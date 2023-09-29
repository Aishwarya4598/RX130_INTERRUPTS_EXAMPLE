/***********************************************************************
*
*  FILE        : INTERRUPTS.c
*  DATE        : 2023-09-13
*  DESCRIPTION : Main Program
*
*  NOTE:THIS IS A TYPICAL EXAMPLE.
*
***********************************************************************/
#include "r_smc_entry.h"
/* Switches */
#define SW1             (PORT3.PIDR.BIT.B1) //irq1
#define SW2             (PORT3.PIDR.BIT.B2)//IRQ2
#define SW3             (PORT1.PIDR.BIT.B6)//IRQ6
#define LED0            (PORTD.PODR.BIT.B3)
#define LED1            (PORTD.PODR.BIT.B4)
#define LED2            (PORTE.PODR.BIT.B6)
#define PIR_SENSOR (PORT3.PIDR.BIT.B1)
#define LED3            (PORTE.PODR.BIT.B7)
#define LED_ON          (0)//high
#define LED_OFF         (1)//low
#define LED2            (PORTE.PODR.BIT.B6)
#define STX 		0XF7
#define SENSORID 	0X05
#define LD_SENSORID     0X11
#define CONFIGURECOMMAND 0X42
#define CMD_LEN 0X01
int pinStateCurrent   = 0;
int pinStatePrevious  = 0;
int ldstatecurrent =0;
int ldstateprevious=0;
extern uint8_t sensor[8];
extern uint8_t RX_BUFFER[8];
//extern uint8_t RX_COUNT=0;
extern uint8_t RX_BYTE[1];
extern uint8_t RX_INT,TX_INT;
/* LED port settings */
void pir_sensor_cmd(uint8_t sub_id,uint8_t cmd)
{
	sensor[0]=STX;
	sensor[1]=SENSORID;
	sensor[2]=sub_id;
	sensor[3]=CONFIGURECOMMAND;
	sensor[5]=CMD_LEN;
	sensor[4]=cmd;
	sensor[6]=sensor[0]^sensor[1]^sensor[2]^sensor[3]^sensor[4]^sensor[5];
	sensor[7]=sensor[0]+sensor[1]+sensor[2]+sensor[4]+sensor[5]+sensor[6];


	R_Config_SCI12_Serial_Send(sensor,sizeof(sensor));
//	while(TX_Int == 0);
//	TX_Int = 0;
	return;

}
void main(void);

void main(void)
{

LED0=1;
LED1=1;
LED2=1;
LED3=1;

R_Config_SCI12_Start();
R_Config_SCI12_Serial_Receive(&RX_BYTE,1);
	while(1)
	{
		pinStatePrevious = pinStateCurrent;
		ldstateprevious = ldstatecurrent;
	if(PIR_SENSOR==1 && pinStatePrevious==0)
	{
//		LED0=1;
		pinStateCurrent=1;
	R_Config_ICU_IRQ1_Start();

	}
	else if(PIR_SENSOR==0 && pinStatePrevious==1)
	{
//		IEN(ICU,IRQ1) = 0U;
//		R_Config_ICU_IRQ1_Stop();
		LED0=1;
		pinStateCurrent=0;
		pir_sensor_cmd(16,00);
//		R_Config_SCI12_Serial_Send("NOTDETECTED",sizeof("NOTDETECTED"));
//		while(TX_INT==0);
//		TX_INT=1;
	}
	if(RX_BUFFER[0]==65)
	{
		if(PIR_SENSOR==1)
		{
		R_Config_SCI12_Serial_Send("ON",sizeof("ON"));
		while(TX_INT==0);
		TX_INT=0;
		}
		else if(PIR_SENSOR==0)
		{
			R_Config_SCI12_Serial_Send("OFF",sizeof("OFF"));
			while(TX_INT==0);
			TX_INT=0;
		}
		memset(RX_BUFFER,0,sizeof(RX_BUFFER));
	}
	}
//	while(1)
//	{
//	pinStatePrevious = pinStateCurrent;
//	ldstateprevious = ldstatecurrent;
//	if(pinStatePrevious==0 && PIR_SENSOR==1)
//						{
//							pinStateCurrent=1;
//
//							LED0=LED_ON;
//
//
//
//
//						}
//				if(pinStatePrevious==1 && PIR_SENSOR==0)
//						{
//							pinStateCurrent=0;
//
//							LED0=LED_OFF;
//
//
//
//
//
//						}
//
//	}
}
