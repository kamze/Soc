LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
 
ENTITY UART_TB IS
END UART_TB;
 
ARCHITECTURE behavior OF UART_TB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT UART
    PORT(
         clk_div : IN  std_logic;
         data_tx : IN  std_logic_vector(7 downto 0);
         start : IN  std_logic;
         rst : IN  std_logic;
         clk : IN  std_logic;
         RX_DONE : OUT  std_logic;
         DATAS_RX : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk_div : std_logic := '0';
   signal data_tx : std_logic_vector(7 downto 0) := (others => '0');
   signal start : std_logic := '0';
   signal rst : std_logic := '0';
   signal clk : std_logic := '0';

 	--Outputs
   signal RX_DONE : std_logic;
   signal DATAS_RX : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_div_period : time := 10 ns;
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: UART PORT MAP (
          clk_div => clk_div,
          data_tx => data_tx,
          start => start,
          rst => rst,
          clk => clk,
          RX_DONE => RX_DONE,
          DATAS_RX => DATAS_RX
        );

   -- Clock process definitions
   clk_div_process :process
   begin
		clk_div <= '0';
		wait for clk_div_period/2;
		clk_div <= '1';
		wait for clk_div_period/2;
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

      wait for clk_div_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
