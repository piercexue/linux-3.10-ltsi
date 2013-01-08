#ifndef __CORE_H
#define __CORE_H

#define SOCFPGA_MODPERRST	0x14
#define SOCFPGA_BRGMODRST	0x1c

extern void secondary_startup(void);
extern void __iomem *socfpga_scu_base_addr;
extern void __iomem *sys_manager_base_addr;
extern void __iomem *rst_manager_base_addr;

extern void socfpga_init_clocks(void);

extern void v7_secondary_startup(void);
extern struct smp_operations socfpga_smp_ops;
extern char secondary_trampoline, secondary_trampoline_end;

extern struct dw_mci_board sdmmc_platform_data;
extern unsigned long cpu1start_addr;

#define SOCFPGA_SCU_VIRT_BASE   0xfffec000

#endif /* __CORE_H */
