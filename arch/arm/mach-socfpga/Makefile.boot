zreladdr-y	:= 0x00008000
zreladdr-$(CONFIG_FPGA_SDRAM)	:= 0xC0008000

dtb-$(CONFIG_ARCH_SOCFPGA)	+= socfpga_cyclone5.dtb\
	socfpga_vt.dtb\
	socfpga_ice.dtb
