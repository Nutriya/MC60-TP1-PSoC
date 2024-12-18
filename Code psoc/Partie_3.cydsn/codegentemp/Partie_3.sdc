# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\labview\Desktop\MC60 - partie 2\TP1 - 1er\LLA\Partie_3.cydsn\Partie_3.cyprj
# Date: Tue, 03 Dec 2024 14:48:17 GMT
#set_units -time ns
create_clock -name {ADC_intClock(FFB)} -period 1000 -waveform {0 500} [list [get_pins {ClockBlock/ff_div_10}]]
create_clock -name {Clock(FFB)} -period 1000000 -waveform {0 500000} [list [get_pins {ClockBlock/ff_div_11}]]
create_clock -name {UART_SCBCLK(FFB)} -period 729.16666666666663 -waveform {0 364.583333333333} [list [get_pins {ClockBlock/ff_div_5}]]
create_clock -name {CyRouted1} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/dsi_in_0}]]
create_clock -name {CyILO} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/ilo}]]
create_clock -name {CyLFClk} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/lfclk}]]
create_clock -name {CyIMO} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyHFClk} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/hfclk}]]
create_clock -name {CySysClk} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/sysclk}]]
create_generated_clock -name {ADC_intClock} -source [get_pins {ClockBlock/hfclk}] -edges {1 49 97} [list]
create_generated_clock -name {Clock} -source [get_pins {ClockBlock/hfclk}] -edges {1 48001 96001} [list [get_pins {ClockBlock/udb_div_0}]]
create_generated_clock -name {UART_SCBCLK} -source [get_pins {ClockBlock/hfclk}] -edges {1 35 71} [list]

set_false_path -from [get_pins {__ONE__/q}]

# Component constraints for C:\Users\labview\Desktop\MC60 - partie 2\TP1 - 1er\LLA\Partie_3.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\labview\Desktop\MC60 - partie 2\TP1 - 1er\LLA\Partie_3.cydsn\Partie_3.cyprj
# Date: Tue, 03 Dec 2024 14:48:13 GMT
