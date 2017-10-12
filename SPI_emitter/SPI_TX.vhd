library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity SPI_TX is
    Port ( data_in : in  STD_LOGIC_VECTOR (7 downto 0);
           spi_start : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           SPI_CS : out  STD_LOGIC;
           SPI_SCK : out  STD_LOGIC;
           SPI_MOSI : out  STD_LOGIC);
end SPI_TX;

architecture Behavioral of SPI_TX is

	type T_etat is (idle,bitsdata);
	signal next_etat, reg_etat : T_etat;
	signal next_bitcpt, reg_bitcpt : unsigned (2 downto 0); --compte le bit qu'on veut passer en serie
	signal txdatas_next, txdatas_reg : STD_LOGIC_VECTOR (7 downto 0);-- pour enlever bit par bit et les passer en serie
	signal cpt : unsigned ; -- signal pour faire le SPI_CLK
begin

	etat_suivant: process(data_in,spi_start,reg_etat,reg_bitcpt,txdatas_reg)
		begin
			next_etat <= reg_etat;
			SPI_MOSI <= '0';
			SPI_CS <= '1';
			next_bitcpt <= reg_bitcpt;
			txdatas_next <= txdatas_reg;

			case reg_etat is
			--SPI_MOSI <= '0'; valeur par defaut
			--SPI_CS <= '1';
				when idle =>
					next_bitcpt <= (others =>'0');

					if spi_start ='1' then
						txdatas_next <= data_in;
						next_etat <= bitsdata;
					end if;
							
				when bitsdata =>
					SPI_CS <= '1';
					SPI_MOSI <= txdatas_reg(0) ;
					txdatas_next <= '0' &txdatas_reg(7 downto 1);
					if SPI_SCK = '1' then
						if reg_bitcpt = "111" then  -- if the 8 data bits have been sent
							next_etat <= idle ;
						else
							next_bitcpt <= reg_bitcpt + 1 ;
						end if;
					end if;
			end case;
	end process etat_suivant;

	
	-- Creating SPI_clk
	compteur: process(clk)
		begin
		if rst = '1' then
			cpt <= (others => '0');
		else
			if rising_edge(clk) then
				if cpt='1' then
					cpt <='0';
				else 
					cpt <=  '1';
				end if; 

			end if; 
		end if;
	end process compteur;
	


	registre_etat: process(clk)
	 begin
		if rising_edge(clk) then
			if rst = '1' then
				reg_etat <= idle;
				reg_bitcpt <= (others =>'0');
				txdatas_reg <=(others =>'0') ;
			else
				reg_etat <= next_etat;
				reg_bitcpt <= next_bitcpt;
				txdatas_reg <=txdatas_next;
			end if;
		end if;
	end process registre_etat;

end Behavioral;

