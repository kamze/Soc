LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
 
ENTITY RX_tb IS
END RX_tb;
 
ARCHITECTURE behavior OF RX_tb IS 
 
   COMPONENT RX_232
   
   Port ( 
		CLK_DIV : in STD_LOGIC; -- baud generator
		CLK : in STD_LOGIC;
		rst : in STD_LOGIC;
		RX : in STD_LOGIC;
		RX_DONE : out STD_LOGIC; -- 1 when data is receivd in full
		DATAS : out STD_LOGIC_VECTOR (7 downto 0)); 
	END COMPONENT;  
   --Inputs
   signal RX  : std_logic := '1';
   signal rst : std_logic := '0';
   signal clk : std_logic := '0';
   signal CLK_DIV : std_logic := '0';
 
 	--Outputs
   signal datas : std_logic_vector(7 downto 0) := (others => '0');
   signal RX_DONE : std_logic := '0';
   -- Clock period definitions
   constant clk_div_period : time := 80*16 ns; -- 20*9600
	constant clk_div_period_2 : time :=60 ns;
   constant clk_period : time := 20 ns; -- horloge de freq = 50Mhz 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: RX_232 PORT MAP (
         
          RX => RX,
          RX_DONE => RX_DONE,
          DATAS => datas,
          rst => rst,
          clk => clk,
			 CLK_DIV => CLK_DIV
        );

   -- Clock process definitions
   clk_div_process :process
   begin
		CLK_DIV <= '0';
		wait for clk_div_period_2;
		CLK_DIV <= '1';
		wait for clk_period;
   end process;
 
    clk_process :process
    begin
	 clk <= '0';
	 wait for clk_period/2;
	 clk <= '1';
	 wait for clk_period/2;
    end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
	rst<='1';
      wait for clk_period*10;
	  rst<='0';

      -- insert stimulus here 
	RX<='0';
	wait for clk_div_period;
	RX<='1';
	wait for clk_div_period;
	RX<='0';
	wait for clk_div_period;
	RX<='1';
	wait for clk_div_period;
	RX<='0';
	wait for clk_div_period;
	RX<='1';
	wait for clk_div_period;
	RX<='1';
	wait for clk_div_period;
	RX<='0';
	wait for clk_div_period;
	RX<='0';
	wait for clk_div_period;
	RX<='1';
	
	wait for clk_div_period*10;
	
	RX<='0';
	wait for clk_div_period;
	RX<='1';
	wait for clk_div_period;
	RX<='0';
	wait for clk_div_period;
	RX<='0';
	wait for clk_div_period;
	RX<='0';
	wait for clk_div_period;
	RX<='1';
	wait for clk_div_period;
	RX<='1';
	wait for clk_div_period;
	RX<='1';
	wait for clk_div_period;
	RX<='0';
	wait for clk_div_period;
	RX<='1';
	
	
      wait;
   end process;

END;