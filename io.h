
#define	GICD	0xFD400000
#define	GICR	0xFD460000


#define	UART0	0xFDD50000
#define	UART1	0xFE650000
#define	UART2	0xFE660000
#define	UART3	0xFE670000

#define	GMAC0	0xFE2A0000
#define	GMAC1	0xFE010000



/* IRQs */
enum{
	IRQfiq		=	-1,

	IRQcntps	=	29,
	IRQcntpns	=	30,

	SPI			=	32,

	IRQgmac0	=	59,

	IRQuart0	=	148,
	IRQuart1	=	149,
	IRQuart2	=	150,
	IRQuart3	=	151,
};

#define BUSUNKNOWN (-1)
#define	CONSOLE		0

