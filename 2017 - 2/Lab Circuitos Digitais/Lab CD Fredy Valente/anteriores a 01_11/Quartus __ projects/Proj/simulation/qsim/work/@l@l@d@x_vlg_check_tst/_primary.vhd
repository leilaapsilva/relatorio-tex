library verilog;
use verilog.vl_types.all;
entity LLDX_vlg_check_tst is
    port(
        LEDG            : in     vl_logic_vector(0 downto 0);
        sampler_rx      : in     vl_logic
    );
end LLDX_vlg_check_tst;
