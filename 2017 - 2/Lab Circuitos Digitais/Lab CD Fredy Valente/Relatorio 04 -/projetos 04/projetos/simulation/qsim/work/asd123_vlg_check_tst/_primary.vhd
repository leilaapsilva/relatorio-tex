library verilog;
use verilog.vl_types.all;
entity asd123_vlg_check_tst is
    port(
        LEDR            : in     vl_logic_vector(1 downto 0);
        sampler_rx      : in     vl_logic
    );
end asd123_vlg_check_tst;
