#include "stm32f10x.h"
#include "delay.h"
#include "usart.h"
#include "stm32f10x_spi.h"
#include "ioi2c.h"
#include "MPU6050.h"

int main(void)
{	

	float Pitch,Roll,Yaw;
	delay_init();
	IIC_Init();
	NVIC_Configuration(); 	 //����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�
	uart_init(9600);	 //���ڳ�ʼ��Ϊ9600
	DMP_Init();

	while(1)
	{
		printf("Read_DMP Return is %d\n",Read_DMP(&Pitch,&Roll,&Yaw));
		printf("Pitch is:%f,Roll is:%f,Yaw is:%f\n",Pitch,Roll,Yaw);

	}
}






