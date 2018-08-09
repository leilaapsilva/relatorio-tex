library verilog;
use verilog.vl_types.all;
entity Cenario2 is
    port(
        LEDR            : out    vl_logic_vector(1 downto 1);
        SW              : in     vl_logic_vector(9 downto 7)
    );
end Cenario2;
