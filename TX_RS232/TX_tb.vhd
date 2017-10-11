LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
 
ENTITY TX_tb IS
END TX_tb;
 
ARCHITECTURE behavior OF TX_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
     COMPONENT rs232
    PORT(
         empty : OUT  std_logic;
         TX : OUT  std_logic;
         clk_div : IN  std_logic;
         data : IN  std_logic_vector(7 downto 0);
         start : IN  std_logic;
         rst : IN  std_logic;
         clk : IN  std_logic
        );
    END COMPONENT;
    
   --Inputs
   signal clk_div : std_logic := '0';
   signal data : std_logic_vector(7 downto 0) := (others => '0');
   signal start : std_logic := '0';
   signal rst : std_logic := '0';
   signal clk : std_logic := '0';

 	--Outputs
   signal empty : std_logic;
   signal TX : std_logic;

   -- Clock period definitions
   constant clk_div_period : time :=  80 ns;
   constant clk_period : time := 20 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: rs232 PORT MAP (
          empty => empty,
          TX => TX,
          clk_div => clk_div,
          data => data,
          start => start,
          rst => rst,
          clk => clk
        );

   -- Clock process definitions
   clk_div_process :process
   begin
		clk_div <= '0';
		wait for clk_div_period;
		clk_div <= '1';
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

      wait for clk_div_period*10;
		data <= "10101010";
		rst <= '1';
		wait for 100 ns;
		rst <= '0';
		start <= '1';
		wait for 3.5 us;
		start <= '0';
		wait;
   end process;

END;
