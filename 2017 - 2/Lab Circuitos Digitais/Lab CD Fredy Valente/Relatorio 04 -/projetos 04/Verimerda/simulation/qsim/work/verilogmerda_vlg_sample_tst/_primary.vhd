library verilog;
use verilog.vl_types.all;
entity verilogmerda_vlg_sample_tst is
    port(
        KEY0            : in     vl_logic;
        KEY3            : in     vl_logic;
        SW              : in     vl_logic_vector(0 downto 0);
        sampler_tx      : out    vl_logic
    );
end verilogmerda_vlg_sample_tst;
