#ifndef A2D_H
#define A2D_H

#include "zoTypes.h"

typedef enum {
	ZO_ADC_PRESCALE_2=0x00,
	ZO_ADC_PRESCALE_4=0x02,
	ZO_ADC_PRESCALE_8,
	ZO_ADC_PRESCALE_16,
	ZO_ADC_PRESCALE_32,
	ZO_ADC_PRESCALE_64,
	ZO_ADC_PRESCALE_128
}ZO_ADC_PRESCALE;

typedef enum {
	ZO_ADC_REFERENCE_AREF=0x00,
	ZO_ADC_REFERENCE_AVCC=0x40,
	ZO_ADC_REFERENCE_11V=0xC0,
}ZO_ADC_REFERENCE;

typedef enum {
	ZO_ADC_TRIGGER_FREE_RUNNING=0x00,
	ZO_ADC_TRIGGER_ANALOG_COMPARATOR,
	ZO_ADC_TRIGGER_EXTINT_0,
	ZO_ADC_TRIGGER_TIMER0_COMPARE_MATCH_A,
	ZO_ADC_TRIGGER_TIMER0_OVFL,
	ZO_ADC_TRIGGER_TIMER1_COMPARE_MATCH_B,
	ZO_ADC_TRIGGER_TIMER1_OVFL,
	ZO_ADC_TRIGGER_TIMER1_ICP
}ZO_ADC_TRIGGER;

typedef enum {
	ZO_ADC_CHANNEL_0=0,
	ZO_ADC_CHANNEL_1,
	ZO_ADC_CHANNEL_2,
	ZO_ADC_CHANNEL_3,
	ZO_ADC_CHANNEL_4,
	ZO_ADC_CHANNEL_5,
	ZO_ADC_CHANNEL_6,
	ZO_ADC_CHANNEL_7,
	ZO_ADC_CHANNEL_TEMPERATURE,
	ZO_ADC_CHANNEL_1V1,
	ZO_ADC_CHANNEL_GND
}ZO_ADC_CHANNEL;

void zoAdcInit(void);
void zoAdcSetPrescaler(ZO_ADC_PRESCALE prescale);
void zoAdcSetReference(ZO_ADC_REFERENCE ref);
void zoAdcSetTrigger(ZO_ADC_TRIGGER trig);
void zoAdcOff(void);
void zoAdcChannelEnable(ZO_ADC_CHANNEL channel);	//this can be called multiple times
void zoAdcChannelDisable(ZO_ADC_CHANNEL channel);	
u16  zoAdcRead(ZO_ADC_CHANNEL channel);
#endif

