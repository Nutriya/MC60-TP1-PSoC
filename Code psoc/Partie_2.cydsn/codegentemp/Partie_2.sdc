# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\labview\Desktop\MC60 - partie 2\TP1 - 1er\LLA\Partie_2.cydsn\Partie_2.cyprj
# Date: Tue, 12 Nov 2024 11:34:45 GMT
#set_units -time ns
create_clock -name {CyRouted1} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/dsi_in_0}]]
create_clock -name {CyILO} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/ilo}]]
create_clock -name {CyLFClk} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/lfclk}]]
create_clock -name {CyIMO} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyHFClk} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/hfclk}]]
create_clock -name {CySysClk} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/sysclk}]]
create_generated_clock -name {Clock_1} -source [get_pins {ClockBlock/hfclk}] -edges {1 48001 96001} [list [get_pins {ClockBlock/udb_div_1}]]
create_generated_clock -name {Clock_2} -source [get_pins {ClockBlock/hfclk}] -edges {1 48001 96001} [list [get_pins {ClockBlock/udb_div_3}]]


# Component constraints for C:\Users\labview\Desktop\MC60 - partie 2\TP1 - 1er\LLA\Partie_2.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\labview\Desktop\MC60 - partie 2\TP1 - 1er\LLA\Partie_2.cydsn\Partie_2.cyprj
# Date: Tue, 12 Nov 2024 11:34:40 GMT