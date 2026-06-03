# This script segment is generated automatically by AutoPilot

set axilite_register_dict [dict create]
set port_control {
sine_sample { 
	dir O
	width 16
	depth 1
	mode ap_vld
	offset 16
	offset_end 23
}
step_size { 
	dir I
	width 16
	depth 1
	mode ap_none
	offset 32
	offset_end 39
}
interrupt {
}
}
dict set axilite_register_dict control $port_control


