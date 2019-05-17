onerror {quit -f}
vlib work
vlog -work work LLDX.vo
vlog -work work LLDX.vt
vsim -novopt -c -t 1ps -L cycloneii_ver -L altera_ver -L altera_mf_ver -L 220model_ver -L sgate work.LLDX_vlg_vec_tst
vcd file -direction LLDX.msim.vcd
vcd add -internal LLDX_vlg_vec_tst/*
vcd add -internal LLDX_vlg_vec_tst/i1/*
add wave /*
run -all
