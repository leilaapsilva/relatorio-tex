onerror {quit -f}
vlib work
vlog -work work asd123.vo
vlog -work work asd123.vt
vsim -novopt -c -t 1ps -L cycloneii_ver -L altera_ver -L altera_mf_ver -L 220model_ver -L sgate work.asd123_vlg_vec_tst
vcd file -direction asd123.msim.vcd
vcd add -internal asd123_vlg_vec_tst/*
vcd add -internal asd123_vlg_vec_tst/i1/*
add wave /*
run -all
