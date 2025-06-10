#ifndef MEGASOC_H
#define MEGASOC_H

/*
 * QEMU MMIO address definitions.
 */

/*
 * 16550 Serial UART device definitions.
 */
#define MEGASOC_SERIAL_BASE (0x1fe001e0)
#define MEGASOC_SERIAL_DATA (MEGASOC_SERIAL_BASE + 0x0)
#define MEGASOC_SERIAL_LSR (MEGASOC_SERIAL_BASE + 0x5)
#define MEGASOC_SERIAL_DATA_READY 0x1
#define MEGASOC_SERIAL_THR_EMPTY 0x20

/*
* SD
*/

#define MEGASOC_SD_BASE (0x1fe2c000)

// Init
#define MEGASOC_SD_NISER (MEGASOC_SD_BASE + 0x34)
#define MEGASOC_SD_EISER (MEGASOC_SD_BASE + 0x36)

// Controller Present State
#define MEGASOC_SD_PSR_L (MEGASOC_SD_BASE + 0x24)
#define MEGASOC_SD_PSR_H (MEGASOC_SD_BASE + 0x26)

// Send CMD
#define MEGASOC_SD_ARGR_L (MEGASOC_SD_BASE + 0x8)
#define MEGASOC_SD_ARGR_H (MEGASOC_SD_BASE + 0xa)
#define MEGASOC_SD_CMDR (MEGASOC_SD_BASE + 0xe)
// Transfer Mode
#define MEGASOC_SD_TM (MEGASOC_SD_BASE + 0xc)

// Response from controller
#define MEGASOC_SD_NISR (MEGASOC_SD_BASE + 0x30)
#define MEGASOC_SD_EISR (MEGASOC_SD_BASE + 0x32)

// CMD results
#define MEGASOC_SD_RES0 (MEGASOC_SD_BASE + 0x10)
#define MEGASOC_SD_RES1 (MEGASOC_SD_RES0 + 0x2)
#define MEGASOC_SD_RES2 (MEGASOC_SD_RES1 + 0x2)
#define MEGASOC_SD_RES3 (MEGASOC_SD_RES2 + 0x2)
#define MEGASOC_SD_RES4 (MEGASOC_SD_RES3 + 0x2)
#define MEGASOC_SD_RES5 (MEGASOC_SD_RES4 + 0x2)
#define MEGASOC_SD_RES6 (MEGASOC_SD_RES5 + 0x2)
#define MEGASOC_SD_RES7 (MEGASOC_SD_RES6 + 0x2)

// Clock 
// Creedence Clearwater Revival, lol
#define MEGASOC_SD_CCR (MEGASOC_SD_BASE + 0x2c)

// Capability
#define MEGASOC_SD_CAPR_L16 (MEGASOC_SD_BASE + 0x40)

// Host Control 
#define MEGASOC_SD_HC1R (MEGASOC_SD_BASE + 0x28)

// ADMA System Addr 
#define MEGASOC_SD_ADMASAR_BASE (MEGASOC_SD_BASE + 0x58)

// ADMA ERR
#define MEGASOC_SD_ADMAESR (MEGASOC_SD_BASE + 0x54)

// Block size default to 512b, so it's not set nor accessed
// Block Count; default sel to 16-bit 
#define MEGASOC_SD_BLKCNTR (MEGASOC_SD_BASE + 0x6)





/*
 * MEGASOC reboot on QEMU.
 */
#define MEGASOC_FPGA_HALT_ADD (0x1fe78030)
#define MEGASOC_FPGA_HALT_VAL (42)

#endif
