
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;


entity RX_232 is

    Port ( CLK_DIV : in  STD_LOGIC; -- baud generator
           CLK : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           RX : in  STD_LOGIC;
           RX_DONE : out  STD_LOGIC; -- 1 when data is receivd in full
           DATAS : out  STD_LOGIC_VECTOR (7 downto 0)); 
	end RX_232;

architecture Behavioral of RX_232 is
	type state_type is (idle, bitstart, bitdata, bitstop); 
	signal next_etat, reg_etat : T_etat;
	signal reg_baudCounter, next_baudCounter: unsigned (3 downto 0) ; -- permet d'avoir une sortie conforme au baud rate
	signal next_bitcpt, reg_bitcpt: unsigned (2 downto 0); --compte le bit qu'on veut passer en serie
	signal rxdatas_next, rxdatas_reg : STD_LOGIC_VECTOR (7 downto 0);

begin

	etat_suivant: process(data,clk_div,reg_etat,reg_baudCounter,reg_bitcpt,rxdatas_reg)
		begin
			next_etat <= reg_etat;
			RX <= '1';
			RX_DONE <= '1';
			next_baudCounter <= reg_baudCounter;
			next_bitcpt <= reg_bitcpt;
			rxdatas_next <= rxdatas_reg;

			case reg_etat is

				when idle =>
					if RX ='0' then
						rxdatas_next <=(others =>'0');
						next_etat <= bitstart;
					end if;
					
				when bitstart =>
					RX_DONE <= '0';
					if (clk_div ='1') then
						if (reg_baudCounter=8) then --on est au milieux de start bit
							next_etat <= bitsdata;
							next_baudCounter <=(others =>'0');
							next_bitcpt <= (others =>'0'); -- initialise the counter to 0
						else
							next_baudCounter <=reg_baudCounter+1;
						end if;
					end if;
					
				when bitsdata =>
					RX_DONE <= '0';
					if clk_div ='1' then
						if ( reg_baudCounter =16) then
							RXdatas_next <= RX & rxdatas_reg(7 downto 1);
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
					RX_DONE <= '0';
					if (clk_div = '1') then
						if reg_baudCounter= (15) then
							next_etat <= idle;
						else
							next_baudCounter <= reg_baudCounter+ 1;
						end if;
					end if;
			end case;
	end process etat_suivant;

	registre_etat: process(clk)
	 begin
		if rising_edge(clk) then
			if rst = '1' then
				reg_etat <= idle;
				reg_bitcpt <= (others =>'0');
				reg_baudCounter <= (others =>'0');
				rxdatas_reg <=(others =>'0') ;
			else
				reg_etat <= next_etat;
				reg_bitcpt <= next_bitcpt;
				rxdatas_reg <=rxdatas_next;
				reg_baudCounter<=next_baudCounter;
			end if;
		end if;
	end process registre_etat;
	
	
end Behavioral;

