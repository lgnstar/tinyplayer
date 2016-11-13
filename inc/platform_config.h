#ifndef __PLATFORM_CONFIG_H
#define __PLATFORM_CONFIG_H
//#include "stm32f10x_exti.h"
//#include "stm32f10x_tim.h"
#include "stm32f10x.h"
typedef enum
  {
    BUTTON1 = 0,BUTTON2 =1
  } Button_TypeDef;

typedef enum
  {
    BUTTON_MODE_GPIO = 0, BUTTON_MODE_EXTI = 1
  } ButtonMode_TypeDef;


//OLED

#define OLED_SPI    SPI2
#define OLED_SPI_CLK    RCC_APB1Periph_SPI2
#define OLED_SPI_CLK_CMD    RCC_APB1PeriphClockCmd
#define OLED_SPI_SCK_GPIO_PIN    GPIO_Pin_13  //D0
#define OLED_SPI_SCK_GPIO_PORT    GPIOB
#define OLED_SPI_SCK_GPIO_CLK    RCC_APB2Periph_GPIOB
#define OLED_SPI_MOSI_GPIO_PIN    GPIO_Pin_15  //D1
#define OLED_SPI_MOSI_GPIO_PORT    GPIOB
#define OLED_SPI_MOSI_GPIO_CLK    RCC_APB2Periph_GPIOB
#define OLED_CS_GPIO_PIN    GPIO_Pin_12   //CS
#define OLED_CS_GPIO_PORT    GPIOB
#define OLED_CS_GPIO_CLK    RCC_APB2Periph_GPIOB
#define OLED_RST_GPIO_PIN    GPIO_Pin_8    //RST
#define OLED_RST_GPIO_PORT    GPIOB
#define OLED_RST_GPIO_CLK    RCC_APB2Periph_GPIOB
#define OLED_DC_GPIO_PIN    GPIO_Pin_11    //DC
#define OLED_DC_GPIO_PORT    GPIOB
#define OLED_DC_GPIO_CLK    RCC_APB2Periph_GPIOB
#define OLED_SPI_BAUDRATE_PRESCALER    SPI_BaudRatePrescaler_4

#if 0
// VS1003B 
#define VS1003B_SPI    SPI1
#define VS1003B_SPI_CLK  RCC_APB2Periph_SPI1
#define VS1003B_SPI_CLK_CMD    RCC_APB2PeriphClockCmd
#define VS1003B_SPI_SCK_GPIO_PIN    GPIO_Pin_5  // SCLK
#define VS1003B_SPI_SCK_GPIO_PORT   GPIOA
#define VS1003B_SPI_SCK_GPIO_CLK    RCC_APB2Periph_GPIOA
#define VS1003B_SPI_MOSI_GPIO_PIN    GPIO_Pin_7  // SI
#define VS1003B_SPI_MOSI_GPIO_PORT    GPIOA
#define VS1003B_SPI_MOSI_GPIO_CLK    RCC_APB2Periph_GPIOA
#define VS1003B_SPI_MISO_GPIO_PIN    GPIO_Pin_6  // SO
#define VS1003B_SPI_MISO_GPIO_PORT    GPIOA    
#define VS1003B_SPI_MISO_GPIO_CLK    RCC_APB2Periph_GPIOA
#define VS1003B_DREQ_GPIO_PIN    GPIO_Pin_12  // DREQ
#define VS1003B_DREQ_GPIO_PORT    GPIOA
#define VS1003B_DREQ_GPIO_CLK    RCC_APB2Periph_GPIOA
#define VS1003B_CS_GPIO_PIN    GPIO_Pin_8  // XCS
#define VS1003B_CS_GPIO_PORT    GPIOA
#define VS1003B_CS_GPIO_CLK    RCC_APB2Periph_GPIOA
#define VS1003B_XDCS_GPIO_PIN    GPIO_Pin_11 // XDCS
#define VS1003B_XDCS_GPIO_PORT    GPIOA
#define VS1003B_XDCS_GPIO_CLK    RCC_APB2Periph_GPIOA
#endif

// VS1003B 
#define VS1003B_SPI    SPI2
#define VS1003B_SPI_CLK  RCC_APB1Periph_SPI2
#define VS1003B_SPI_CLK_CMD    RCC_APB1PeriphClockCmd
#define VS1003B_SPI_SCK_GPIO_PIN    GPIO_Pin_13  // SCLK
#define VS1003B_SPI_SCK_GPIO_PORT   GPIOB
#define VS1003B_SPI_SCK_GPIO_CLK    RCC_APB2Periph_GPIOB
#define VS1003B_SPI_MOSI_GPIO_PIN    GPIO_Pin_15  // SI
#define VS1003B_SPI_MOSI_GPIO_PORT    GPIOB
#define VS1003B_SPI_MOSI_GPIO_CLK    RCC_APB2Periph_GPIOB
#define VS1003B_SPI_MISO_GPIO_PIN    GPIO_Pin_14  // SO
#define VS1003B_SPI_MISO_GPIO_PORT    GPIOB    
#define VS1003B_SPI_MISO_GPIO_CLK    RCC_APB2Periph_GPIOB
#define VS1003B_DREQ_GPIO_PIN    GPIO_Pin_7  // DREQ
#define VS1003B_DREQ_GPIO_PORT    GPIOC
#define VS1003B_DREQ_GPIO_CLK    RCC_APB2Periph_GPIOC
#define VS1003B_CS_GPIO_PIN    GPIO_Pin_12  // XCS
#define VS1003B_CS_GPIO_PORT    GPIOB
#define VS1003B_CS_GPIO_CLK    RCC_APB2Periph_GPIOB
#define VS1003B_XDCS_GPIO_PIN    GPIO_Pin_6 // XDCS
#define VS1003B_XDCS_GPIO_PORT    GPIOC
#define VS1003B_XDCS_GPIO_CLK    RCC_APB2Periph_GPIOC
#define VS1003B_RST_GPIO_PIN    GPIO_Pin_11
#define VS1003B_RST_GPIO_PORT    GPIOB
#define VS1003B_RST_GPIO_CLK    RCC_APB2Periph_GPIOB


//Push Buttons
#define BUTTONn    2
#define BUTTON1_GPIO_PIN    GPIO_Pin_0
#define BUTTON1_GPIO_PORT    GPIOB
#define BUTTON1_GPIO_CLK    RCC_APB2Periph_GPIOB
#define BUTTON1_GPIO_MODE    GPIO_Mode_IPU
#define BUTTON1_PRESSED    0x00
#define BUTTON1_EXTI_LINE    EXTI_Line2
#define BUTTON1_EXTI_PORT_SOURCE    GPIO_PortSourceGPIOB
#define BUTTON1_EXTI_PIN_SOURCE    GPIO_PinSource2
#define BUTTON1_EXTI_IRQn    EXTI2_IRQn
#define BUTTON1_EXTI_TRIGGER    EXTI_Trigger_Falling

#define BUTTON2_GPIO_PIN    GPIO_Pin_1
#define BUTTON2_GPIO_PORT    GPIOB
#define BUTTON2_GPIO_CLK    RCC_APB2Periph_GPIOB
#define BUTTON2_GPIO_MODE    GPIO_Mode_IPU
#define BUTTON2_PRESSED    0x00
#define BUTTON2_EXTI_LINE    EXTI_Line1
#define BUTTON2_EXTI_PORT_SOURCE    GPIO_PortSourceGPIOB
#define BUTTON2_EXTI_PIN_SOURCE    GPIO_PinSource1
#define BUTTON2_EXTI_IRQn    EXTI1_IRQn
#define BUTTON2_EXTI_TRIGGER    EXTI_Trigger_Falling

#define UI_TIMER_FREQUENCY    100  /* 100Hz -> 10ms */
#define BUTTON_DEBOUNCE_INTERVAL    1000 / UI_TIMER_FREQUENCY


// NVIC Priorities based on NVIC_PriorityGroup_4

#define RTCALARM_IRQ_PRIORITY    3
#define RTC_IRQ_PRIORITY    4
#define TIM1_CC_IRQ_PRIORITY    5
#define SDIO_IRQ_PRIORITY    6
#define EXTI2_IRQ_PRIORITY    11
#define EXTI1_IRQ_PRIORITY    11
#define SYSTICK_IRQ_PRIORITY    12


#endif
