#include "inc.h"

/*
 * @fn:     
 * @brief:  
 * @para:   
 * @para:   
 * @return: 
 * @comment:
 */
int main(void)
{
	delay_init(168);
	while(1)
	{
		
	}
}

/*
..

int main(void)
{

  GPIO_InitTypeDef  GPIO_InitStructure;
  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF, ENABLE);

  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9 | GPIO_Pin_10;
  //�˿�ģʽ
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
  //�������
  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
  //����ٶ�
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;
  //�˿���/��������
  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;
  GPIO_Init(GPIOF, &GPIO_InitStructure);

  while(1){
		GPIO_SetBits(GPIOF,GPIO_Pin_9|GPIO_Pin_10);
		Delay(0x7FFFFF);
		GPIO_ResetBits(GPIOF,GPIO_Pin_9|GPIO_Pin_10);
		Delay(0x7FFFFF);
	
	}
}
*/


