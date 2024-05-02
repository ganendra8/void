library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
entity paritygen is
 port (a: in STD_LOGIC_VECTOR (2 downto 0);
 even : out STD_LOGIC;
 odd : out STD_LOGIC);
end paritygen;
architecture paritygen_arch of paritygen is
 signal i:std_logic;
begin
 i<= a(0) xor a(1) xor a(2);
 even <=i;
 odd <= not i;
end paritygen_arch;