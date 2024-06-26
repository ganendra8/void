library ieee;
use ieee.std_logic_1164.all;
entity full_adder is
 port (
 input_1 : in std_logic;
 input_2 : in std_logic;
 input_3 : in std_logic;
 sum : out std_logic;
 carry : out std_logic
 );
end full_adder;
architecture rtl of full_adder is
begin
 carry <= (input_1 and input_2)or (input_2 and input_3) or (input_3 and input_1);
 sum <= ((input_1 xor input_2) xor input_3);
end rtl;