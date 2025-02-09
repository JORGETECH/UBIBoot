/* Board-specific config for GCW Zero. */

#ifndef _CONFIG_H
#error Include "config.h" instead
#endif

#define CFG_CPU_SPEED		1080000000
#define CFG_EXTAL			12000000

#define MBR_PRELOAD_ADDR	0x80000000

#define SYSPART_INIT		"/mininit-syspart"
#define MININIT1_COMPAT

#define RFKILL_STATE		0

#define USES_HIGHMEM

/* serial parameters */
#define LOG_UART			2
#define LOG_BAUDRATE		57600

/* MMC parameters */
#define MMC_ID 0
