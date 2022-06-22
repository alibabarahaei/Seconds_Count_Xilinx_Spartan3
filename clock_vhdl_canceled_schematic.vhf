--------------------------------------------------------------------------------
-- Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
--------------------------------------------------------------------------------
--   ____  ____ 
--  /   /\/   / 
-- /___/  \  /    Vendor: Xilinx 
-- \   \   \/     Version : 14.6
--  \   \         Application : sch2hdl
--  /   /         Filename : clock_vhdl_canceled_schematic.vhf
-- /___/   /\     Timestamp : 06/15/2022 11:23:33
-- \   \  /  \ 
--  \___\/\___\ 
--
--Command: sch2hdl -sympath E:/alibabarahaei_amirkahfi_ebrahimnejati/clock_vhdl/ipcore_dir -intstyle ise -family spartan3 -flat -suppress -vhdl E:/alibabarahaei_amirkahfi_ebrahimnejati/clock_vhdl/clock_vhdl_canceled_schematic.vhf -w E:/alibabarahaei_amirkahfi_ebrahimnejati/clock_vhdl/clock_vhdl_canceled_schematic.sch
--Design Name: clock_vhdl_canceled_schematic
--Device: spartan3
--Purpose:
--    This vhdl netlist is translated from an ECS schematic. It can be 
--    synthesized and simulated, but it should not be modified. 
--

library ieee;
use ieee.std_logic_1164.ALL;
use ieee.numeric_std.ALL;
library UNISIM;
use UNISIM.Vcomponents.ALL;

entity clock_vhdl_canceled_schematic is
   port ( clock   : in    std_logic; 
          od      : out   std_logic_vector (7 downto 0); 
          oy      : out   std_logic_vector (7 downto 0); 
          th_1s   : out   std_logic; 
          XLXN_5  : out   std_logic; 
          XLXN_9  : out   std_logic; 
          XLXN_15 : out   std_logic);
end clock_vhdl_canceled_schematic;

architecture BEHAVIORAL of clock_vhdl_canceled_schematic is
   attribute BOX_TYPE   : string ;
   attribute INIT_00    : string ;
   attribute INIT_01    : string ;
   attribute INIT_02    : string ;
   attribute INIT_03    : string ;
   attribute INIT_04    : string ;
   attribute INIT_05    : string ;
   attribute INIT_06    : string ;
   attribute INIT_07    : string ;
   signal dahgan                  : std_logic_vector (3 downto 0);
   signal XLXN_24                 : std_logic;
   signal XLXN_81                 : std_logic;
   signal yekan                   : std_logic_vector (3 downto 0);
   signal XLXN_15_DUMMY           : std_logic;
   signal XLXN_9_DUMMY            : std_logic;
   signal th_1s_DUMMY             : std_logic;
   signal XLXI_7_D_openSignal     : std_logic_vector (7 downto 0);
   signal XLXI_7_WCLK_openSignal  : std_logic;
   signal XLXI_37_D_openSignal    : std_logic_vector (7 downto 0);
   signal XLXI_37_WCLK_openSignal : std_logic;
   component new_ip_cloc_vhdl_canceled
      port ( clk     : in    std_logic; 
             thresh0 : out   std_logic; 
             q       : out   std_logic_vector (24 downto 0));
   end component;
   
   component yekan_englisi
      port ( clk     : in    std_logic; 
             thresh0 : out   std_logic; 
             q       : out   std_logic_vector (3 downto 0));
   end component;
   
   component dahgan_englisi
      port ( clk     : in    std_logic; 
             thresh0 : out   std_logic; 
             q       : out   std_logic_vector (3 downto 0));
   end component;
   
   component NAND2
      port ( I0 : in    std_logic; 
             I1 : in    std_logic; 
             O  : out   std_logic);
   end component;
   attribute BOX_TYPE of NAND2 : component is "BLACK_BOX";
   
   component RAM16X8S
      -- synopsys translate_off
      generic( INIT_00 : bit_vector :=  x"0000";
               INIT_01 : bit_vector :=  x"0000";
               INIT_02 : bit_vector :=  x"0000";
               INIT_03 : bit_vector :=  x"0000";
               INIT_04 : bit_vector :=  x"0000";
               INIT_05 : bit_vector :=  x"0000";
               INIT_06 : bit_vector :=  x"0000";
               INIT_07 : bit_vector :=  x"0000");
      -- synopsys translate_on
      port ( A0   : in    std_logic; 
             A1   : in    std_logic; 
             A2   : in    std_logic; 
             A3   : in    std_logic; 
             D    : in    std_logic_vector (7 downto 0); 
             WCLK : in    std_logic; 
             WE   : in    std_logic; 
             O    : out   std_logic_vector (7 downto 0));
   end component;
   attribute INIT_00 of RAM16X8S : component is "0000";
   attribute INIT_01 of RAM16X8S : component is "0000";
   attribute INIT_02 of RAM16X8S : component is "0000";
   attribute INIT_03 of RAM16X8S : component is "0000";
   attribute INIT_04 of RAM16X8S : component is "0000";
   attribute INIT_05 of RAM16X8S : component is "0000";
   attribute INIT_06 of RAM16X8S : component is "0000";
   attribute INIT_07 of RAM16X8S : component is "0000";
   attribute BOX_TYPE of RAM16X8S : component is "BLACK_BOX";
   
   component GND
      port ( G : out   std_logic);
   end component;
   attribute BOX_TYPE of GND : component is "BLACK_BOX";
   
   attribute INIT_06 of XLXI_7 : label is "0012";
   attribute INIT_05 of XLXI_7 : label is "0060";
   attribute INIT_04 of XLXI_7 : label is "0004";
   attribute INIT_03 of XLXI_7 : label is "0092";
   attribute INIT_02 of XLXI_7 : label is "02ba";
   attribute INIT_01 of XLXI_7 : label is "008e";
   attribute INIT_00 of XLXI_7 : label is "0083";
   attribute INIT_06 of XLXI_37 : label is "0012";
   attribute INIT_05 of XLXI_37 : label is "0060";
   attribute INIT_04 of XLXI_37 : label is "0004";
   attribute INIT_03 of XLXI_37 : label is "0092";
   attribute INIT_02 of XLXI_37 : label is "02ba";
   attribute INIT_01 of XLXI_37 : label is "008e";
   attribute INIT_00 of XLXI_37 : label is "0083";
begin
   th_1s <= th_1s_DUMMY;
   XLXN_9 <= XLXN_9_DUMMY;
   XLXN_15 <= XLXN_15_DUMMY;
   XLXI_2 : new_ip_cloc_vhdl_canceled
      port map (clk=>clock,
                q=>open,
                thresh0=>th_1s_DUMMY);
   
   XLXI_3 : yekan_englisi
      port map (clk=>th_1s_DUMMY,
                q(3 downto 0)=>yekan(3 downto 0),
                thresh0=>XLXN_9_DUMMY);
   
   XLXI_4 : dahgan_englisi
      port map (clk=>XLXN_15_DUMMY,
                q(3 downto 0)=>dahgan(3 downto 0),
                thresh0=>XLXN_5);
   
   XLXI_6 : NAND2
      port map (I0=>XLXN_9_DUMMY,
                I1=>XLXN_9_DUMMY,
                O=>XLXN_15_DUMMY);
   
   XLXI_7 : RAM16X8S
   -- synopsys translate_off
   generic map( INIT_06 => x"0012",
            INIT_05 => x"0060",
            INIT_04 => x"0004",
            INIT_03 => x"0092",
            INIT_02 => x"02ba",
            INIT_01 => x"008e",
            INIT_00 => x"0083")
   -- synopsys translate_on
      port map (A0=>yekan(0),
                A1=>yekan(1),
                A2=>yekan(2),
                A3=>yekan(3),
                D(7 downto 0)=>XLXI_7_D_openSignal(7 downto 0),
                WCLK=>XLXI_7_WCLK_openSignal,
                WE=>XLXN_24,
                O(7 downto 0)=>oy(7 downto 0));
   
   XLXI_8 : GND
      port map (G=>XLXN_24);
   
   XLXI_37 : RAM16X8S
   -- synopsys translate_off
   generic map( INIT_06 => x"0012",
            INIT_05 => x"0060",
            INIT_04 => x"0004",
            INIT_03 => x"0092",
            INIT_02 => x"02ba",
            INIT_01 => x"008e",
            INIT_00 => x"0083")
   -- synopsys translate_on
      port map (A0=>dahgan(0),
                A1=>dahgan(1),
                A2=>dahgan(2),
                A3=>dahgan(3),
                D(7 downto 0)=>XLXI_37_D_openSignal(7 downto 0),
                WCLK=>XLXI_37_WCLK_openSignal,
                WE=>XLXN_81,
                O(7 downto 0)=>od(7 downto 0));
   
   XLXI_38 : GND
      port map (G=>XLXN_81);
   
end BEHAVIORAL;


