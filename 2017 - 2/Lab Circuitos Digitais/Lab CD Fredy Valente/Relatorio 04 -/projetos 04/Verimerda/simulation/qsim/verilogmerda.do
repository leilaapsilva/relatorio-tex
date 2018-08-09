onerror {quit -f}
vlib work
vlog -work work verilogmerda.vo
vlog -work work verilogmerda.vt
vsim -novopt -c -t 1ps -L cycloneii_ver -L altera_ver -L altera_mf_ver -L 220model_ver -L sgate work.verilogmerda_vlg_vec_tst
vcd file -direction verilogmerda.msim.vcd
vcd add -internal verilogmerda_vlg_vec_tst/*
vcd add -internal verilogmerda_vlg_vec_tst/i1/*
add wave /*
run -all
