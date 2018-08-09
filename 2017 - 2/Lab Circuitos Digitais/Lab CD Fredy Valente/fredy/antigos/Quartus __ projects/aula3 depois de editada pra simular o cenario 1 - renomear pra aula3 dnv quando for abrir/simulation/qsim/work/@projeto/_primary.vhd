library verilog;
use verilog.vl_types.all;
entity Projeto is
    port(
        LEDG            : out    vl_logic_vector(1 downto 1);
        SW              : in     vl_logic_vector(9 downto 6);
        LEDR            : out    vl_logic_vector(1 downto 1)
    );
end Projeto;
