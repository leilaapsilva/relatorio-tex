library verilog;
use verilog.vl_types.all;
entity LLDX is
    port(
        LEDG            : out    vl_logic_vector(0 downto 0);
        SW9             : in     vl_logic;
        SW0             : in     vl_logic
    );
end LLDX;
