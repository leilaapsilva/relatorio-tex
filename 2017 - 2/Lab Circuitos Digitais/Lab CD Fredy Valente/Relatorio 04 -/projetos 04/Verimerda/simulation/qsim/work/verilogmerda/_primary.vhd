library verilog;
use verilog.vl_types.all;
entity verilogmerda is
    port(
        LEDR            : out    vl_logic_vector(0 downto 0);
        KEY3            : in     vl_logic;
        SW              : in     vl_logic_vector(0 downto 0);
        KEY0            : in     vl_logic
    );
end verilogmerda;
