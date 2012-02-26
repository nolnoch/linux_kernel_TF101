/*
 *  linux/include/asm/setup_dev.h
 *
 *  Copyright (C) 2012 Wade Burch
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 *  This is a very messy workaround to avoid conflicting types error
 *  in setup.c for including a header file that extern declares a
 *  function it itself defines.
 */

#ifdef __KERNEL__

extern int arm_add_memory(phys_addr_t start, unsigned long size);

#endif