#ifndef _SENSORS_H_
#define _SENSORS_H_


#include "main.h"



uint8_t Sensor_Get_State(void);
int32_t Sensor_Get_Weight(void);
bool Sensor_Cross_Judge(uint8_t state);
bool Sensor_Ending_Judge(uint8_t state);

#endif
