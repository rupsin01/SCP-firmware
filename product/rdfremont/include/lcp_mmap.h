/*
 * Arm SCP/MCP Software
 * Copyright (c) 2022, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Description:
 *     Software defined memory map for LCP core.
 */

#ifndef LCP_SOFTWARE_MMAP_H
#define LCP_SOFTWARE_MMAP_H

#include <fwk_macros.h>

#define LCP_ITCM_SIZE (64 * 1024)
#define LCP_DTCM_SIZE (64 * 1024)

#define LCP_ITCM_NS_BASE 0x00000000
#define LCP_ITCM_S_BASE  0x10000000
#define LCP_DTCM_NS_BASE 0x20000000
#define LCP_DTCM_S_BASE  0x30000000

#define LCP_CORE_ITCM_REGION_START LCP_ITCM_NS_BASE
#define LCP_CORE_ITCM_REGION_END   (LCP_ITCM_NS_BASE + LCP_ITCM_SIZE - 1)

#define LCP_CORE_DTCM_REGION_START LCP_DTCM_NS_BASE
#define LCP_CORE_DTCM_REGION_END   (LCP_DTCM_NS_BASE + LCP_DTCM_SIZE - 1)

#define LCP_CORE_PERIPHERAL_REGION_START 0x30010000
#define LCP_CORE_PERIPHERAL_REGION_END   0x6FFFFFFF

#define LCP_SRAM_REGION_START 0x70000000
#define LCP_SRAM_REGION_END   0xB007FFFF

#define LCP_DEVICE_REGION_START 0xB0080000
#define LCP_DEVICE_REGION_END   0xFFFFFFFF

#endif /* LCP_SOFTWARE_MMAP_H */