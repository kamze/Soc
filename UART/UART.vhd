library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity UART is
    Port ( clk_div : in  STD_LOGIC;
           data_tx : in  STD_LOGIC_VECTOR (7 downto 0);
           start : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           RX_DONE : out  STD_LOGIC;
           DATAS_RX : out  STD_LOGIC_VECTOR (7 downto 0));
end UART;

architecture Behavioral of UART is
-- components declarartion
---TX----
component rs232 is
    Port ( empty : out  STD_LOGIC; -- 0 during transimmision 1 otherwise
           TX 		 : out STD_LOGIC;
			  clk_div : in  STD_LOGIC; -- on recois une signal 16* fois plus rapide que le baud rate
           data    : in  STD_LOGIC_VECTOR (7 downto 0);
           start   : in  STD_LOGIC;
           rst 	 : in  STD_LOGIC;
           clk 	 : in  STD_LOGIC);
end component;
---RX----
component RX_232 is
    Port ( CLK_DIV : in  STD_LOGIC; -- baud generator
           CLK : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           RX : in  STD_LOGIC;
           RX_DONE : out  STD_LOGIC; -- 1 when data is receivd in full
           DATAS : out  STD_LOGIC_VECTOR (7 downto 0)); 
	end component;


	signal empty_out_tx, TX_out_tx: STD_LOGIC ;
	--signal reg_baudCounter, next_baudCounter: STD_LOGIC_VECTOR (7 downto 0) ;

begin

 TX : rs232 port map (empty_out_tx, TX_out_tx, clk_div,data_tx,start,rst,clk);
 RX : RX_232 port map (CLK_DIV, CLK,rst,RX=>TX_out_tx, RX_DONE=>RX_DONE, DATAS=>DATAS_RX);

end Behavioral;

