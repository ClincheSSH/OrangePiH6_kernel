/*
 * arch/arm/mach-sunxi/include/mach/sun8i/irqs-sun8iw5p1.h
 *
 * Copyright(c) 2013-2015 Allwinnertech Co., Ltd.
 *      http://www.allwinnertech.com
 *
 * Author: liugang <liugang@allwinnertech.com>
 *
 * sun8i irq defination header file
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef __IRQS_SUN8I_W6P1_H
#define __IRQS_SUN8I_W6P1_H
#if (defined CONFIG_FPGA_V4_PLATFORM) || (defined CONFIG_FPGA_V7_PLATFORM)	/* S4 820 */
#define SUNXI_IRQ_NMI                     (SUNXI_GIC_START + 0)	/* 32 */
#define SUNXI_IRQ_UART0                   (SUNXI_GIC_START + 1)	/* 33 */
#define SUNXI_IRQ_TWI0                    (SUNXI_GIC_START + 2)	/* 34 */
#define SUNXI_IRQ_TWI1                    (SUNXI_GIC_START + 2)	/* 34 */
#define SUNXI_IRQ_TWI2                    (SUNXI_GIC_START + 2)	/* 34 */
#define SUNXI_IRQ_EINTA                   (SUNXI_GIC_START + 3)	/* 35 */
#define SUNXI_IRQ_EINTB                   (SUNXI_GIC_START + 3)	/* 35 */
#define SUNXI_IRQ_EINTG                   (SUNXI_GIC_START + 3)	/* 35 */
#define SUNXI_IRQ_EINTH                   (SUNXI_GIC_START + 3)	/* 35 */
#define SUNXI_IRQ_IIS0                    (SUNXI_GIC_START + 4)	/* 36 */
#define SUNXI_IRQ_IIS1                    (SUNXI_GIC_START + 4)	/* 36 */
#define SUNXI_IRQ_TDM                     (SUNXI_GIC_START + 4)	/* 36 */
#define SUNXI_IRQ_CSI                     (SUNXI_GIC_START + 5)	/* 37 */
#define SUNXI_IRQ_TIMER0                  (SUNXI_GIC_START + 6)	/* 38 */
#define SUNXI_IRQ_TIMER1                  (SUNXI_GIC_START + 6)	/* 38 */
#define SUNXI_IRQ_WATCHDOG                (SUNXI_GIC_START + 6)	/* 38 */
#define SUNXI_IRQ_DMA                     (SUNXI_GIC_START + 7)	/* 39 */
#define SUNXI_IRQ_LCD0                    (SUNXI_GIC_START + 8)	/* 40 */
#define SUNXI_IRQ_RTIMER0                 (SUNXI_GIC_START + 9)	/* 41 */
#define SUNXI_IRQ_RTIMER1                 (SUNXI_GIC_START + 9)	/* 41 */
#define SUNXI_IRQ_RWATCHDOG               (SUNXI_GIC_START + 9)	/* 41 */
#define SUNXI_IRQ_MBOX                    (SUNXI_GIC_START + 9)	/* 41 */
#define SUNXI_IRQ_HSTMR                   (SUNXI_GIC_START + 10)	/* 42 */
#define SUNXI_IRQ_MMC0                    (SUNXI_GIC_START + 11)	/* 43 */
#define SUNXI_IRQ_MMC1                    (SUNXI_GIC_START + 11)	/* 43 */
#define SUNXI_IRQ_MMC2                    (SUNXI_GIC_START + 11)	/* 43 */
#define SUNXI_IRQ_SPI0                    (SUNXI_GIC_START + 12)	/* 44 */
#define SUNXI_IRQ_SPI1                    (SUNXI_GIC_START + 12)	/* 44 */
#define SUNXI_IRQ_NAND                    (SUNXI_GIC_START + 13)	/* 45 */
#define SUNXI_IRQ_RUART                   (SUNXI_GIC_START + 14)	/* 46 */
#define SUNXI_IRQ_RSB                     (SUNXI_GIC_START + 14)	/* 46 */
#define SUNXI_IRQ_RTWI                    (SUNXI_GIC_START + 14)	/* 46 */
#define SUNXI_IRQ_SPDIF                   (SUNXI_GIC_START + 15)	/* 47 */
#define SUNXI_IRQ_VE                      (SUNXI_GIC_START + 16)	/* 48 */
#define SUNXI_IRQ_USBOTG                  (SUNXI_GIC_START + 17)	/* 49 */
#define SUNXI_IRQ_USBEHCI0                (SUNXI_GIC_START + 18)	/* 50 */
#define SUNXI_IRQ_USBOHCI0                (SUNXI_GIC_START + 19)	/* 51 */
#define SUNXI_IRQ_GPU                     (SUNXI_GIC_START + 20)	/* 52 */
#define SUNXI_IRQ_DEIRQ0                  (SUNXI_GIC_START + 21)	/* 53 */
#define SUNXI_IRQ_MIPICSI                 (SUNXI_GIC_START + 22)	/* 54 */
#define SUNXI_IRQ_DEIRQ1                  (SUNXI_GIC_START + 23)	/* 55 */
#define SUNXI_IRQ_LCD1                    (SUNXI_GIC_START + 24)	/* 56 */
#define SUNXI_IRQ_RTWD                    (SUNXI_GIC_START + 25)	/* 57 */
#define SUNXI_IRQ_SMC                     (SUNXI_GIC_START + 26)	/* 58 */
#define SUNXI_IRQ_GMAC                    (SUNXI_GIC_START + 27)	/* 59 */
#define SUNXI_IRQ_SS                      (SUNXI_GIC_START + 28)	/* 60 */
#define SUNXI_IRQ_R_CIR_RX                (SUNXI_GIC_START + 29)	/* 61 */
#define SUNXI_IRQ_EINTE                   (SUNXI_GIC_START + 129)	/* invalid */
#define SUNXI_IRQ_EINTL                   (SUNXI_GIC_START + 130)	/* invalid */
#define SUNXI_IRQ_PMU                     (SUNXI_GIC_START + 49)
#define SUNXI_IRQ_TOUCHPANEL			  (0)
#define SUNXI_IRQ_LRADC				      (0)

#elif (defined CONFIG_EVB_PLATFORM)
#define SUNXI_IRQ_UART0                   (SUNXI_GIC_START + 0)	/* 32 */
#define SUNXI_IRQ_UART1                   (SUNXI_GIC_START + 1)	/* 33 */
#define SUNXI_IRQ_UART2                   (SUNXI_GIC_START + 2)	/* 34 */
#define SUNXI_IRQ_UART3                   (SUNXI_GIC_START + 3)	/* 35 */
#define SUNXI_IRQ_UART4                   (SUNXI_GIC_START + 4)	/* 36 */
#define SUNXI_IRQ_TWI0                    (SUNXI_GIC_START + 6)	/* 38 */
#define SUNXI_IRQ_TWI1                    (SUNXI_GIC_START + 7)	/* 39 */
#define SUNXI_IRQ_TWI2                    (SUNXI_GIC_START + 8)	/* 40 */
#define SUNXI_IRQ_SPDIF                   (SUNXI_GIC_START + 12)	/* 44 */
#define SUNXI_IRQ_IIS0                    (SUNXI_GIC_START + 13)	/* 45 */
#define SUNXI_IRQ_IIS1                    (SUNXI_GIC_START + 14)	/* 46 */
#define SUNXI_IRQ_EINTB                   (SUNXI_GIC_START + 15)	/* 47 */
#define SUNXI_IRQ_EINTG                   (SUNXI_GIC_START + 17)	/* 49 */
#define SUNXI_IRQ_TIMER0                  (SUNXI_GIC_START + 18)	/* 50 */
#define SUNXI_IRQ_TIMER1                  (SUNXI_GIC_START + 19)	/* 51 */
#define SUNXI_IRQ_WATCHDOG                (SUNXI_GIC_START + 25)	/* 57 */
#define SUNXI_IRQ_NMI                     (SUNXI_GIC_START + 32)	/* 64 */
#define SUNXI_IRQ_RTIMER0                 (SUNXI_GIC_START + 33)	/* 65 */
#define SUNXI_IRQ_RTIMER1                 (SUNXI_GIC_START + 34)	/* 66 */
#define SUNXI_IRQ_RWATCHDOG               (SUNXI_GIC_START + 36)	/* 68 */
#define SUNXI_IRQ_R_CIR_RX                (SUNXI_GIC_START + 37)	/* 69 */
#define SUNXI_IRQ_RUART                   (SUNXI_GIC_START + 38)	/* 70 */
#define SUNXI_IRQ_RSB                     (SUNXI_GIC_START + 39)	/* 71 */
#define SUNXI_IRQ_RTH                     (SUNXI_GIC_START + 41)	/* 73 */
#define SUNXI_IRQ_LRADC                   (SUNXI_GIC_START + 42)	/* 74 */
#define SUNXI_IRQ_RTWI                    (SUNXI_GIC_START + 44)	/* 76 */
#define SUNXI_IRQ_EINTL                   (SUNXI_GIC_START + 45)	/* 77 */
#define SUNXI_IRQ_RTWD                    (SUNXI_GIC_START + 46)	/* 78 */
#define SUNXI_IRQ_MBOX                    (SUNXI_GIC_START + 49)	/* 81 */
#define SUNXI_IRQ_DMA                     (SUNXI_GIC_START + 50)	/* 82 */
#define SUNXI_IRQ_HSTMR                   (SUNXI_GIC_START + 51)	/* 83 */
#define SUNXI_IRQ_SMC                     (SUNXI_GIC_START + 56)	/* 88 */
#define SUNXI_IRQ_VE                      (SUNXI_GIC_START + 58)	/* 90 */
#define SUNXI_IRQ_MMC0                    (SUNXI_GIC_START + 60)	/* 92 */
#define SUNXI_IRQ_MMC1                    (SUNXI_GIC_START + 61)	/* 93 */
#define SUNXI_IRQ_MMC2                    (SUNXI_GIC_START + 62)	/* 94 */
#define SUNXI_IRQ_SPI0                    (SUNXI_GIC_START + 65)	/* 97 */
#define SUNXI_IRQ_SPI1                    (SUNXI_GIC_START + 66)	/* 98 */
#define SUNXI_IRQ_NAND                    (SUNXI_GIC_START + 70)	/* 102 */
#define SUNXI_IRQ_USBOTG                  (SUNXI_GIC_START + 71)	/* 103 */
#define SUNXI_IRQ_USBEHCI0                (SUNXI_GIC_START + 72)	/* 104 */
#define SUNXI_IRQ_USBOHCI0                (SUNXI_GIC_START + 73)	/* 105 */
#define SUNXI_IRQ_USBEHCI1                (SUNXI_GIC_START + 74)	/* 106 */
#define SUNXI_IRQ_SS                      (SUNXI_GIC_START + 80)	/* 112 */
#define SUNXI_IRQ_GMAC                    (SUNXI_GIC_START + 82)	/* 114 */
#define SUNXI_IRQ_MIPICSI                 (SUNXI_GIC_START + 83)	/* 115 */
#define SUNXI_IRQ_CSI                     (SUNXI_GIC_START + 84)	/* 116 */
#define SUNXI_IRQ_CSI_CCI                 (SUNXI_GIC_START + 85)	/* 117 */
#define SUNXI_IRQ_LCD0                    (SUNXI_GIC_START + 86)	/* 118 */
#define SUNXI_IRQ_LCD1                    (SUNXI_GIC_START + 87)	/* 119 */
#define SUNXI_IRQ_HDMI                    (SUNXI_GIC_START + 88)	/* 120 */
#define SUNXI_IRQ_MIPIDSI                 (SUNXI_GIC_START + 89)	/* 121 */
#define SUNXI_IRQ_DEIRQ0                  (SUNXI_GIC_START + 91)	/* 123 */
#define SUNXI_IRQ_DEIRQ1                  (SUNXI_GIC_START + 92)	/* 124 */
#define SUNXI_IRQ_GPU                     (SUNXI_GIC_START + 97)	/* 129 */
#define SUNXI_IRQ_TDM                     (SUNXI_GIC_START + 98)	/* 130 */
#define SUNXI_IRQ_IIS2                    (SUNXI_GIC_START + 99)	/* 131 */
#define SUNXI_IRQ_EINTH                   (SUNXI_GIC_START + 100)	/* 132 */
#define SUNXI_IRQ_C0CTI0                  (SUNXI_GIC_START + 128)	/* 160 */
#define SUNXI_IRQ_C0CTI1                  (SUNXI_GIC_START + 129)	/* 161 */
#define SUNXI_IRQ_C0CTI2                  (SUNXI_GIC_START + 130)	/* 162 */
#define SUNXI_IRQ_C0CTI3                  (SUNXI_GIC_START + 131)	/* 163 */
#define SUNXI_IRQ_C0PMU0                  (SUNXI_GIC_START + 132)	/* 164 */
#define SUNXI_IRQ_C0PMU1                  (SUNXI_GIC_START + 133)	/* 165 */
#define SUNXI_IRQ_C0PMU2                  (SUNXI_GIC_START + 134)	/* 166 */
#define SUNXI_IRQ_C0PMU3                  (SUNXI_GIC_START + 135)	/* 167 */
#define SUNXI_IRQ_C0AXIERR                (SUNXI_GIC_START + 136)	/* 168 */
#define SUNXI_IRQ_C0COMMTX0               (SUNXI_GIC_START + 137)	/* 169 */
#define SUNXI_IRQ_C0COMMTX1               (SUNXI_GIC_START + 138)	/* 170 */
#define SUNXI_IRQ_C0COMMTX2               (SUNXI_GIC_START + 139)	/* 171 */
#define SUNXI_IRQ_C0COMMTX3               (SUNXI_GIC_START + 140)	/* 172 */
#define SUNXI_IRQ_C0COMMRX0               (SUNXI_GIC_START + 141)	/* 173 */
#define SUNXI_IRQ_C0COMMRX1               (SUNXI_GIC_START + 142)	/* 174 */
#define SUNXI_IRQ_C0COMMRX2               (SUNXI_GIC_START + 143)	/* 175 */
#define SUNXI_IRQ_C0COMMRX3               (SUNXI_GIC_START + 144)	/* 176 */
#define SUNXI_IRQ_C0AXIWR                 (SUNXI_GIC_START + 145)	/* 177 */
#define SUNXI_IRQ_C0AXIRD                 (SUNXI_GIC_START + 146)	/* 178 */
#define SUNXI_IRQ_C1CTI0                  (SUNXI_GIC_START + 147)	/* 179 */
#define SUNXI_IRQ_C1CTI1                  (SUNXI_GIC_START + 148)	/* 180 */
#define SUNXI_IRQ_C1CTI2                  (SUNXI_GIC_START + 149)	/* 181 */
#define SUNXI_IRQ_C1CTI3                  (SUNXI_GIC_START + 150)	/* 182 */
#define SUNXI_IRQ_C1PMU0                  (SUNXI_GIC_START + 151)	/* 183 */
#define SUNXI_IRQ_C1PMU1                  (SUNXI_GIC_START + 152)	/* 184 */
#define SUNXI_IRQ_C1PMU2                  (SUNXI_GIC_START + 153)	/* 185 */
#define SUNXI_IRQ_C1PMU3                  (SUNXI_GIC_START + 154)	/* 186 */
#define SUNXI_IRQ_C1AXIERR                (SUNXI_GIC_START + 155)	/* 187 */
#define SUNXI_IRQ_C1COMMTX0               (SUNXI_GIC_START + 156)	/* 188 */
#define SUNXI_IRQ_C1COMMTX1               (SUNXI_GIC_START + 157)	/* 189 */
#define SUNXI_IRQ_C1COMMTX2               (SUNXI_GIC_START + 158)	/* 190 */
#define SUNXI_IRQ_C1COMMTX3               (SUNXI_GIC_START + 159)	/* 191 */
#define SUNXI_IRQ_C1COMMRX0               (SUNXI_GIC_START + 160)	/* 192 */
#define SUNXI_IRQ_C1COMMRX1               (SUNXI_GIC_START + 161)	/* 193 */
#define SUNXI_IRQ_C1COMMRX2               (SUNXI_GIC_START + 162)	/* 194 */
#define SUNXI_IRQ_C1COMMRX3               (SUNXI_GIC_START + 163)	/* 195 */
#define SUNXI_IRQ_C1AXIWR                 (SUNXI_GIC_START + 164)	/* 196 */
#define SUNXI_IRQ_C1AXIRD                 (SUNXI_GIC_START + 165)	/* 197 */
#define SUNXI_IRQ_CCI400ERR               (SUNXI_GIC_START + 166)	/* 198 */
#define SUNXI_IRQ_CCI400EVENTOF           (SUNXI_GIC_START + 167)	/* 199 */
#else

#error "please select a platform"

#endif

#define SUNXI_IRQ_MAX           (SUNXI_GIC_START + 256)

#endif /* __IRQS_SUN8I_W6P1_H */
