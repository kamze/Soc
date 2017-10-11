
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
Use ieee.numeric_std.all;
Use ieee.std_logic_unsigned.all;

entity rs232 is
    Port ( empty : out  STD_LOGIC; -- 0 during transimmision 1 otherwise
           TX 		 : out STD_LOGIC;
	   clk_div : in  STD_LOGIC; -- on recois une signal 16* fois plus rapide que le baud rate
           data    : in  STD_LOGIC_VECTOR (7 downto 0);
           start   : in  STD_LOGIC;
           rst 	 : in  STD_LOGIC;
           clk 	 : in  STD_LOGIC);
end rs232;

architecture Behavioral of rs232 is
	type T_etat is (idle,bitstart,bitsdata,bitstop);
	signal next_etat, reg_etat : T_etat;
	signal reg_baudCounter , next_baudCounter : unsigned (3 downto 0) ; -- permet d'avoir une sortie conforme au baud rate
	signal next_bitcpt, reg_bitcpt : unsigned (2 downto 0); --compte le bit qu'on veut passer en serie
	signal txdatas_next, txdatas_reg : STD_LOGIC_VECTOR (7 downto 0);-- pour enlever bit par bit et les passer en serie

begin

	etat_suivant: process(data,start,clk_div,reg_etat,reg_baudCounter,reg_bitcpt,txdatas_reg)
		begin
			next_etat <= reg_etat;
			TX <= '1';
			empty <= '1';
			next_baudCounter <= reg_baudCounter;
			next_bitcpt <= reg_bitcpt;
			txdatas_next <= txdatas_reg;

			case reg_etat is

				when idle =>
					--TX <= '1';  same as default value
					--empty <= '1';
					if start ='1' then
						txdatas_next <= data;
						next_etat <= bitstart;
					end if;
					
				when bitstart =>
					TX <= '0';
					empty <= '0';
					if (clk_div ='1') then
						if (reg_baudCounter=15) then --16 samples
							next_etat <= bitsdata;
							next_baudCounter <=(others =>'0');
							next_bitcpt <= (others =>'0'); -- initialise the counter to 0
						else
							next_baudCounter <=reg_baudCounter+1;
						end if;
					end if;
					
				when bitsdata =>
					empty <= '0';
					TX <= txdatas_reg(0) ;
					if clk_div ='1' then
						if ( reg_baudCounter =15) then
							txdatas_next <= '0' &txdatas_reg(7 downto 1);
							if reg_bitcpt = "111" then  -- if the 8 data bits have been sent
								next_etat <= bitstop ;
							else
								next_bitcpt <= reg_bitcpt + 1 ;
							end if;
						else
							next_baudCounter <=reg_baudCounter+1;
						end if ;
					end if ;
					
				when bitstop =>
					TX <= '1';
					empty <= '0';

					if (clk_div = '1') then
						if reg_baudCounter= (15) then
							next_etat <= idle;
						else
							next_baudCounter <= reg_baudCounter+ 1;
						end if ;
					end if ; 
			end case;
	end process etat_suivant;
	
	registre_etat: process(clk)
	 begin
		if rising_edge(clk) then
			if rst = '1' then
				reg_etat <= idle;
				reg_bitcpt <= (others =>'0');
				reg_baudCounter <= (others =>'0');
				txdatas_reg <=(others =>'0') ;
			else
				reg_etat <= next_etat;
				reg_bitcpt <= next_bitcpt;
				txdatas_reg <=txdatas_next;
				reg_baudCounter<=next_baudCounter;
			end if;
		end if;
	end process registre_etat;
		

end Behavioral;

