library verilog;
use verilog.vl_types.all;
entity LLDX_vlg_sample_tst is
    port(
        SW0             : in     vl_logic;
        SW9             : in     vl_logic;
        sampler_tx      : out    vl_logic
    );
end LLDX_vlg_sample_tst;
