library verilog;
use verilog.vl_types.all;
entity asd123_vlg_sample_tst is
    port(
        clock_50        : in     vl_logic;
        KEY             : in     vl_logic_vector(0 downto 0);
        SW              : in     vl_logic_vector(0 downto 0);
        sampler_tx      : out    vl_logic
    );
end asd123_vlg_sample_tst;
