/**
  ******************************************************************************
  * @file    Lab-Libraries/gpio.h 
  * @author  Olfa Ameur

  *****************************************************************************/

/* Includes ------------------------------------------------------------------*/
/** 
  * @brief General Purpose I/O
  */

#define GPIO_A (unsigned int *)  (0x40020000)
#define GPIO_B (unsigned int *)  (0x40020400)
#define GPIO_C (unsigned int *)  (0x40020800)
#define GPIO_D (unsigned int *)  (0x40020C00)
#define GPIO_E (unsigned int *)  (0x40021000)
#define GPIO_F (unsigned int *)  (0x40021400)
#define GPIO_G (unsigned int *)  (0x40021800)
#define GPIO_H (unsigned int *)  (0x40021C00)
#define GPIO_I (unsigned int *)  (0x40022000)
#define GPIO_J (unsigned int *)  (0x40022400)
#define GPIO_K (unsigned int *)  (0x40022800)


/* Register location */






/* Pin Number */
#define Pin0                       00


/* Mode */
#define INPUT                       0x00
#define OUTPUT                      0x01
#define AF                          0x02
#define AN                          0x03

/* typeOutput */
#define PP                          0x00
#define OD                          0x01

/* GPIO Init structure definition */
/** @defgroup GPIO_pins_define */
#define GPIO_Pin_0   ((unsigned short)0x0001)  /* Pin 0 selected */
#define GPIO_Pin_1   ((unsigned short) 0x0002)
#define GPIO_Pin_2   ((unsigned short) 0x0004)
#define GPIO_Pin_3   ((unsigned short) 0x0008)
#define GPIO_Pin_4   ((unsigned short) 0x0010)
#define GPIO_Pin_5   ((unsigned short) 0x0020)
#define GPIO_Pin_6   ((unsigned short) 0x0040)
#define GPIO_Pin_7   ((unsigned short) 0x0080)
#define GPIO_Pin_8   ((unsigned short) 0x0100)
#define GPIO_Pin_9   ((unsigned short) 0x0200)
#define GPIO_Pin_10  ((unsigned short) 0x0400)
#define GPIO_Pin_11  ((unsigned short) 0x0800)
#define GPIO_Pin_12  ((unsigned short) 0x1000)
#define GPIO_Pin_13  ((unsigned short) 0x2000)
#define GPIO_Pin_14  ((unsigned short) 0x4000)
#define GPIO_Pin_15  ((unsigned short) 0x8000)
#define GPIO_Pin_All  ((unsigned short) 0xFFFF)

/* GPIO enable function */
void GPIO_ClockEnable (unsigned  int * gpio_x);

/* GPIO Resete function */
void GPIO_DeInit(unsigned int * gpio_x);

/* Config function */

void GPIO_Init(unsigned int * gpio_x, char Mode, char typeOutput, short int pin);

/* Read functions */

unsigned char GPIO_ReadInputDataBit(unsigned int * gpio_x, unsigned short int GPIO_Pin);
unsigned short int GPIO_ReadInputData(unsigned int * gpio_x);
/* Write functions */

void GPIO_WriteBit(unsigned int * gpio_x, unsigned short int GPIO_Pin, char BitVal);
void GPIO_Write(unsigned int * gpio_x, unsigned short int PortVal);
