library verilog;
use verilog.vl_types.all;
entity asd123 is
    port(
        SW              : in     vl_logic_vector(0 downto 0);
        clock_50        : in     vl_logic;
        KEY             : in     vl_logic_vector(0 downto 0);
        LEDR            : out    vl_logic_vector(1 downto 0)
    );
end asd123;
