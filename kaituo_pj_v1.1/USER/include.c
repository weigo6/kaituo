#include "include.h"
//#include "function.h"
//#include "delay.h"
#include "string.h"

//void MarineRobot_menu(void);

//u8 menu_run=7;//�����������������
//u8 menuNum=0;//�������
//int motoTest[2] = {0,0};//�����ٶȣ������ٶ�

void MarineRobot_init()   //�����ܳ�ʼ��
{
//	delay_init();	    	//ʱ������ 72M��Ƶ
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//����ϵͳ�ж����ȼ�����2
//	
//	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);	
//	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
//	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);   
//	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);
//	RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO, ENABLE);
//	GPIO_PinRemapConfig(GPIO_Remap_SWJ_JTAGDisable,ENABLE);
//	GPIO_PinRemapConfig(AFIO_MAPR_SWJ_CFG_JTAGDISABLE, ENABLE);
//	PWR_BackupAccessCmd(ENABLE);//�����޸�RTC �ͺ󱸼Ĵ���
//	RCC_LSEConfig(RCC_LSE_OFF);//�ر��ⲿ�����ⲿʱ���źŹ��� ��PC13 PC14 PC15 �ſ��Ե���ͨIO�á�
//	PWR_BackupAccessCmd(DISABLE);//��ֹ�޸ĺ󱸼Ĵ���

//	//��·���ڲ���	
//	//UART_bb_Init(9600);  //���������ڳ�ʼ�� ʹ��        UART3 ʹ������ģ��ע�͵�����
//	COMPASS_Init();	     //�����������Ǵ��ڳ�ʼ�� ʹ��  UART5
//	uart_init(3,9600);   //���������ڳ�ʼ�� ʹ��        UART1
//	HMISend_CMD("page 0",0xffff);  //�������л�������ҳ��	
//	LED_Init();		  		//LED��ʼ��
//	BEEP_Init();			  //��������ʼ��	
//	PWM_Init();         //pwm,����������ʼ��
//	Sensor_Init();		 	//ģ�⡢���ִ�������ʼ��		
//	Openmv_Init();      //Openmv��ʼ��
////	HC05_Init(9600);    //�������Ƴ�ʼ��
//	JQ8900_Init(9600);
//	Set_Volume_Max();
//  /*       ��������ʼ������     */
//	HMISend_CMD("page 0",10000);
//	Delay_ms(200);  // Logo1ͣ��0.2s
//	HMISend_CMD("page 1",0xffff);  // �л�Logo
//	MarineRobot_menu();  // ���������ܲ˵�
}

//void MarineRobot_menu(void)
//{
//	while(menu_run)
//	{
//		if(menu_run==1)
//		{
//			//12·ǰ�Ҷ�
//			HMISend_CMD("n0.val=",analog(0));HMISend_CMD("n1.val=",analog(1));HMISend_CMD("n2.val=",analog(2));
//			HMISend_CMD("n3.val=",analog(3));HMISend_CMD("n4.val=",analog(4));HMISend_CMD("n5.val=",analog(5));
//			HMISend_CMD("n6.val=",analog(6));HMISend_CMD("n7.val=",analog(7));HMISend_CMD("n8.val=",analog(8));
//			HMISend_CMD("n9.val=",analog(9));HMISend_CMD("n10.val=",analog(10));HMISend_CMD("n11.val=",analog(11));
//		}
//		
//		else if(menu_run==2)  // ɫ�ꡢײ��
//		{
//			HMISend_CMD("n0.val=",digital(0));HMISend_CMD("n1.val=",digital(1));
//			HMISend_CMD("n2.val=",digital(2));HMISend_CMD("n3.val=",digital(3));
//			HMISend_CMD("n4.val=",digital(4));HMISend_CMD("n5.val=",digital(5));
//			HMISend_CMD("n6.val=",digital(6));HMISend_CMD("n7.val=",digital(7));
//			HMISend_CMD("n8.val=",digital(8));
//			if(pin6 == 1 && pin7 == 0) HMISend_CMD("n9.val=", 0);
//			else if(pin6 == 0 && pin7 == 1) HMISend_CMD("n9.val=", 2);
//		}
//		
//		else if(menu_run==3)  //ָ����
//		{
//			HMISend_CMD("n0.val=",compassRead_X());
//			HMISend_CMD("n1.val=",compassRead_Y());
//			HMISend_CMD("n2.val=",compassRead_Z());
//		}
//		
//		else if(menu_run==4)
//		{
//			if(motoTest[0]>100) motoTest[0]=100;
//			else if(motoTest[0]<(-100)) motoTest[0]=(-100);
//			if(motoTest[1]>100) motoTest[1]=100;
//			else if(motoTest[1]<(-100)) motoTest[1]=(-100);
//			motor(0,motoTest[0]);
//			motor(1,motoTest[1]);
//			if(motoTest[0]>=0)
//				HMISend_CMD("n0.val=",motoTest[0]);
//			else
//				HMISend_CMD("n0.val=-",-motoTest[0]);
//			if(motoTest[1]>=0)
//				HMISend_CMD("n1.val=",motoTest[1]);
//			else
//				HMISend_CMD("n1.val=-",-motoTest[1]);
//		}
//	}	
//}
