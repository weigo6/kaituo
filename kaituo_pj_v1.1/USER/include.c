#include "include.h"
//#include "function.h"
//#include "delay.h"
#include "string.h"

//void MarineRobot_menu(void);

//u8 menu_run=7;//触摸屏按键管理变量
//u8 menuNum=0;//启动序号
//int motoTest[2] = {0,0};//左轮速度，右轮速度

void MarineRobot_init()   //主控总初始化
{
//	delay_init();	    	//时钟配置 72M主频
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//设置系统中断优先级分组2
//	
//	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);	
//	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
//	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);   
//	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);
//	RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO, ENABLE);
//	GPIO_PinRemapConfig(GPIO_Remap_SWJ_JTAGDisable,ENABLE);
//	GPIO_PinRemapConfig(AFIO_MAPR_SWJ_CFG_JTAGDISABLE, ENABLE);
//	PWR_BackupAccessCmd(ENABLE);//允许修改RTC 和后备寄存器
//	RCC_LSEConfig(RCC_LSE_OFF);//关闭外部低速外部时钟信号功能 后，PC13 PC14 PC15 才可以当普通IO用。
//	PWR_BackupAccessCmd(DISABLE);//禁止修改后备寄存器

//	//三路串口操作	
//	//UART_bb_Init(9600);  //扬声器串口初始化 使用        UART3 使用蓝牙模块注释掉改行
//	COMPASS_Init();	     //九轴轴陀螺仪串口初始化 使用  UART5
//	uart_init(3,9600);   //触摸屏串口初始化 使用        UART1
//	HMISend_CMD("page 0",0xffff);  //触摸屏切换到功能页面	
//	LED_Init();		  		//LED初始化
//	BEEP_Init();			  //蜂鸣器初始化	
//	PWM_Init();         //pwm,电机、舵机初始化
//	Sensor_Init();		 	//模拟、数字传感器初始化		
//	Openmv_Init();      //Openmv初始化
////	HC05_Init(9600);    //蓝牙控制初始化
//	JQ8900_Init(9600);
//	Set_Volume_Max();
//  /*       触摸屏初始化操作     */
//	HMISend_CMD("page 0",10000);
//	Delay_ms(200);  // Logo1停留0.2s
//	HMISend_CMD("page 1",0xffff);  // 切换Logo
//	MarineRobot_menu();  // 触摸屏功能菜单
}

//void MarineRobot_menu(void)
//{
//	while(menu_run)
//	{
//		if(menu_run==1)
//		{
//			//12路前灰度
//			HMISend_CMD("n0.val=",analog(0));HMISend_CMD("n1.val=",analog(1));HMISend_CMD("n2.val=",analog(2));
//			HMISend_CMD("n3.val=",analog(3));HMISend_CMD("n4.val=",analog(4));HMISend_CMD("n5.val=",analog(5));
//			HMISend_CMD("n6.val=",analog(6));HMISend_CMD("n7.val=",analog(7));HMISend_CMD("n8.val=",analog(8));
//			HMISend_CMD("n9.val=",analog(9));HMISend_CMD("n10.val=",analog(10));HMISend_CMD("n11.val=",analog(11));
//		}
//		
//		else if(menu_run==2)  // 色标、撞针
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
//		else if(menu_run==3)  //指南针
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
