/*
 * Copyright (c) 2019 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/* This file is a temporary workaround for mapping of the generated information
 * to the current driver definitions.  This will be removed when the drivers
 * are modified to handle the generated information, or the mapping of
 * generated data matches the driver definitions.
 */


#define DT_NUM_IRQ_PRIO_BITS \
	DT_ARM_V7M_NVIC_E000E100_ARM_NUM_IRQ_PRIORITY_BITS
#define DT_NS16550_REG_SHIFT \
	DT_NS16550_400F2400_REG_SHIFT
#define DT_UART_NS16550_PORT_0_BASE_ADDR \
	DT_NS16550_400F2400_BASE_ADDRESS
#define DT_UART_NS16550_PORT_0_CLK_FREQ		1843200
#define DT_UART_NS16550_PORT_0_NAME		DT_NS16550_400F2400_LABEL
#define DT_UART_NS16550_PORT_0_BAUD_RATE \
	DT_NS16550_400F2400_CURRENT_SPEED
#define DT_UART_NS16550_PORT_0_IRQ		DT_NS16550_400F2400_IRQ_0
#define DT_UART_NS16550_PORT_0_IRQ_PRI		DT_NS16550_0_IRQ_0_PRIORITY
#define DT_UART_NS16550_PORT_0_IRQ_FLAGS	0 /* Deault */

#define DT_UART_NS16550_PORT_1_BASE_ADDR \
	DT_NS16550_400F2800_BASE_ADDRESS
#define DT_UART_NS16550_PORT_1_CLK_FREQ		1843200
#define DT_UART_NS16550_PORT_1_NAME		DT_NS16550_400F2800_LABEL
#define DT_UART_NS16550_PORT_1_BAUD_RATE \
	DT_NS16550_400F2800_CURRENT_SPEED
#define DT_UART_NS16550_PORT_1_IRQ		DT_NS16550_400F2800_IRQ_0
#define DT_UART_NS16550_PORT_1_IRQ_PRI		DT_NS16550_1_IRQ_0_PRIORITY
#define DT_UART_NS16550_PORT_1_IRQ_FLAGS	0 /* Default */

#define DT_UART_NS16550_PORT_2_BASE_ADDR \
	DT_NS16550_400F2C00_BASE_ADDRESS
#define DT_UART_NS16550_PORT_2_CLK_FREQ		1843200
#define DT_UART_NS16550_PORT_2_NAME		DT_NS16550_400F2C00_LABEL
#define DT_UART_NS16550_PORT_2_BAUD_RATE \
	DT_NS16550_400F2C00_CURRENT_SPEED
#define DT_UART_NS16550_PORT_2_IRQ		DT_NS16550_400F2C00_IRQ_0
#define DT_UART_NS16550_PORT_2_IRQ_PRI		DT_NS16550_2_IRQ_0_PRIORITY
#define DT_UART_NS16550_PORT_2_IRQ_FLAGS	0 /* Default */

/* Pin multiplexing and GPIOs share the same registers in the HW */
#define DT_PINMUX_XEC_GPIO000_036_BASE_ADDR	DT_MICROCHIP_XEC_GPIO_0_BASE_ADDRESS
#define DT_PINMUX_XEC_GPIO040_076_BASE_ADDR	DT_MICROCHIP_XEC_GPIO_1_BASE_ADDRESS
#define DT_PINMUX_XEC_GPIO100_136_BASE_ADDR	DT_MICROCHIP_XEC_GPIO_2_BASE_ADDRESS
#define DT_PINMUX_XEC_GPIO140_176_BASE_ADDR	DT_MICROCHIP_XEC_GPIO_3_BASE_ADDRESS
#define DT_PINMUX_XEC_GPIO200_236_BASE_ADDR	DT_MICROCHIP_XEC_GPIO_4_BASE_ADDRESS
#define DT_PINMUX_XEC_GPIO240_276_BASE_ADDR	DT_MICROCHIP_XEC_GPIO_5_BASE_ADDRESS

#define DT_GPIO_XEC_GPIO000_036_BASE_ADDR	DT_MICROCHIP_XEC_GPIO_0_BASE_ADDRESS
#define DT_GPIO_XEC_GPIO000_036_IRQ		DT_MICROCHIP_XEC_GPIO_0_IRQ_0
#define DT_GPIO_XEC_GPIO000_036_IRQ_PRIORITY	DT_MICROCHIP_XEC_GPIO_0_IRQ_0_PRIORITY
#define DT_GPIO_XEC_GPIO000_036_LABEL		DT_MICROCHIP_XEC_GPIO_0_LABEL
#define DT_GPIO_XEC_GPIO000_036_SIZE		DT_MICROCHIP_XEC_GPIO_0_SIZE

#define DT_GPIO_XEC_GPIO040_076_BASE_ADDR	DT_MICROCHIP_XEC_GPIO_1_BASE_ADDRESS
#define DT_GPIO_XEC_GPIO040_076_IRQ		DT_MICROCHIP_XEC_GPIO_1_IRQ_0
#define DT_GPIO_XEC_GPIO040_076_IRQ_PRIORITY	DT_MICROCHIP_XEC_GPIO_1_IRQ_0_PRIORITY
#define DT_GPIO_XEC_GPIO040_076_LABEL		DT_MICROCHIP_XEC_GPIO_1_LABEL
#define DT_GPIO_XEC_GPIO040_076_SIZE		DT_MICROCHIP_XEC_GPIO_1_SIZE

#define DT_GPIO_XEC_GPIO100_136_BASE_ADDR	DT_MICROCHIP_XEC_GPIO_2_BASE_ADDRESS
#define DT_GPIO_XEC_GPIO100_136_IRQ		DT_MICROCHIP_XEC_GPIO_2_IRQ_0
#define DT_GPIO_XEC_GPIO100_136_IRQ_PRIORITY	DT_MICROCHIP_XEC_GPIO_2_IRQ_0_PRIORITY
#define DT_GPIO_XEC_GPIO100_136_LABEL		DT_MICROCHIP_XEC_GPIO_2_LABEL
#define DT_GPIO_XEC_GPIO100_136_SIZE		DT_MICROCHIP_XEC_GPIO_2_SIZE

#define DT_GPIO_XEC_GPIO140_176_BASE_ADDR	DT_MICROCHIP_XEC_GPIO_3_BASE_ADDRESS
#define DT_GPIO_XEC_GPIO140_176_IRQ		DT_MICROCHIP_XEC_GPIO_3_IRQ_0
#define DT_GPIO_XEC_GPIO140_176_IRQ_PRIORITY	DT_MICROCHIP_XEC_GPIO_3_IRQ_0_PRIORITY
#define DT_GPIO_XEC_GPIO140_176_LABEL		DT_MICROCHIP_XEC_GPIO_3_LABEL
#define DT_GPIO_XEC_GPIO140_176_SIZE		DT_MICROCHIP_XEC_GPIO_3_SIZE

#define DT_GPIO_XEC_GPIO200_236_BASE_ADDR	DT_MICROCHIP_XEC_GPIO_4_BASE_ADDRESS
#define DT_GPIO_XEC_GPIO200_236_IRQ		DT_MICROCHIP_XEC_GPIO_4_IRQ_0
#define DT_GPIO_XEC_GPIO200_236_IRQ_PRIORITY	DT_MICROCHIP_XEC_GPIO_4_IRQ_0_PRIORITY
#define DT_GPIO_XEC_GPIO200_236_LABEL		DT_MICROCHIP_XEC_GPIO_4_LABEL
#define DT_GPIO_XEC_GPIO200_236_SIZE		DT_MICROCHIP_XEC_GPIO_4_SIZE

#define DT_GPIO_XEC_GPIO240_276_BASE_ADDR	DT_MICROCHIP_XEC_GPIO_5_BASE_ADDRESS
#define DT_GPIO_XEC_GPIO240_276_IRQ		DT_MICROCHIP_XEC_GPIO_5_IRQ_0
#define DT_GPIO_XEC_GPIO240_276_IRQ_PRIORITY	DT_MICROCHIP_XEC_GPIO_5_IRQ_0_PRIORITY
#define DT_GPIO_XEC_GPIO240_276_LABEL		DT_MICROCHIP_XEC_GPIO_5_LABEL
#define DT_GPIO_XEC_GPIO240_276_SIZE		DT_MICROCHIP_XEC_GPIO_5_SIZE
