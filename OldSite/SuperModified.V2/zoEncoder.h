#ifndef ZO_ENCODER_H
#define ZO_ENCODER_H

#include <avr/interrupt.h>
#include "zoTypes.h"

void zoEncoderInit(void);
s32 zoEncoderGetPos(void);
s32 zoEncoderGetStoredPos(void);
u16 zoEncoderGetPosAbsolute(void);
s16 zoEncoderGetVel(void);
void zoEncoderSetVel(void);
void zoEncoderReset(void);
//void zoEncoderIcpIsrEnable(void);
//void zoEncoderIcpIsrDisable(void);

bool zoEncoderPollOverFlowError(void);
bool zoEncoderPollUnderFlowError(void);
u16 zoEncoderGetPosSpi(void);

#endif // ZO_ENCODER_H