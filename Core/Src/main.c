/**
  ******************************************************************************
  * @file    Lab-Libraries/main.c 
  * @author  CSF Team
  * @mail    formation@csf.tn
  * @Tel     (+216)92.039.433
  * @version V1.0.0
  * @date    19-06-2019
  *****************************************************************************/


/* Private define ------------------------------------------------------------*/

#include "gpio.h"
#define NOMBRE_BOUCLES 200
/* Private function prototypes -----------------------------------------------*/
void Delay(volatile unsigned  int  nCount);


/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program.
  * @param  None
  * @retval None
  */
int main(void)
{
  unsigned  int counter = 0x00;  

  /* Activer l'orloge pour le Port D */
  GPIO_ClockEnable(GPIO_D);

  /* re-intialiser les registers de port D */
  GPIO_DeInit(GPIO_D);
  
/* --- Configure PD12, PD13, PD14 et PD15 en mode Output Push pull ---*/  
  GPIO_Init(GPIO_D, OUTPUT, PP, 12);
  GPIO_Init(GPIO_D, OUTPUT, PP, 13);
  GPIO_Init(GPIO_D, OUTPUT, PP, 14);
  GPIO_Init(GPIO_D, OUTPUT, PP, 15);

  for(counter=0; counter<NOMBRE_BOUCLES ; counter++)
  {

	  GPIO_WriteBit(GPIO_D,GPIO_Pin_12 , 1);
	  Delay(0x3FFFF);
	  GPIO_WriteBit(GPIO_D,GPIO_Pin_13 , 1);
	  Delay(0x3FFFF);
	  GPIO_WriteBit(GPIO_D,GPIO_Pin_14 , 1);
	  Delay(0x3FFFF);
	  GPIO_WriteBit(GPIO_D,GPIO_Pin_15 , 1);
	  Delay(0x3FFFF);

	  GPIO_WriteBit(GPIO_D,GPIO_Pin_12 , 0);
	  Delay(0x3FFFF);
	  GPIO_WriteBit(GPIO_D,GPIO_Pin_13 , 0);
	  Delay(0x3FFFF);
	  GPIO_WriteBit(GPIO_D,GPIO_Pin_14 , 0);
	  Delay(0x3FFFF);
	  GPIO_WriteBit(GPIO_D,GPIO_Pin_15 , 0);
	  Delay(0x3FFFF);
  }
  while(1);
}
/**
  * @brief  Inserts a delay time.
  * @param  nCount: specifies the delay time length.
  * @retval None
  */
void Delay(volatile unsigned  int  nCount)
{
  for(; nCount != 0; nCount--);
}

/******************* (C) COPYRIGHT 2019 CSF *****END OF FILE*******************/
