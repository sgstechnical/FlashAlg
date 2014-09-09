/***********************************************************************/
/*  This file is part of the ARM Toolchain package                     */
/*  Copyright KEIL ELEKTRONIK GmbH 2003 - 2011                         */
/***********************************************************************/
/*                                                                     */
/*  FlashDev.C:  Device Description for Dual S29GL064N (16-bit Bus)    */
/*                                                                     */
/***********************************************************************/

#include "..\FlashOS.H"        // FlashOS Structures


struct FlashDevice const FlashDevice  =  {
   FLASH_DRV_VERS,             // Driver Version, do not modify!
   "S29GL064N Single flash 2",     // Device Name
   EXT16BIT,                   // Device Type
   0x80000000,                 // Device Start Address
   0x800000,                  // Device Size in Bytes (8MB)
   4096,//1024                       // Programming Page Size
   0,                          // Reserved, must be 0
   0xFF,                       // Initial Content of Erased Memory
   100,                        // Program Page Timeout 100 mSec
   3000,                       // Erase Sector Timeout 3000 mSec

// Specify Size and Address of Sectors
   0x10000, 0x000000,          // 64kb / 32KW Sector Start 0x00 Size 0x10000
	 0x10000, 0x010000,          // 64kb / 32KW Sector Start 0x10000 size 0x10000
	 0x10000, 0x020000,          // 64kb / 32KW Sector 
	 0x10000, 0x030000,          // 64kb / 32KW Sector 
	 0x10000, 0x040000,          // 64kb / 32KW Sector 
	 0x10000, 0x050000,          // 64kb / 32KW Sector 
	 0x10000, 0x060000,          // 64kb / 32KW Sector 
	 0x10000, 0x070000,          // 64kb / 32KW Sector 
	 0x10000, 0x080000,          // 64kb / 32KW Sector 
   SECTOR_END
};
