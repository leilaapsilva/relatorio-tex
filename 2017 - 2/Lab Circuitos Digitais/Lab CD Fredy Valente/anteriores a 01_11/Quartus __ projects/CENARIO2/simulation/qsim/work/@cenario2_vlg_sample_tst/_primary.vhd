library verilog;
use verilog.vl_types.all;
entity Cenario2_vlg_sample_tst is
    port(
        SW              : in     vl_logic_vector(9 downto 7);
        sampler_tx      : out    vl_logic
    );
end Cenario2_vlg_sample_tst;
