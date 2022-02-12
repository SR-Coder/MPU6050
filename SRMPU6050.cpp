/*
MPU6050 library derived from the RS-MPU-6050 manual
*/

#include "SRMPU6050.h"
#include <stdio.h>

SRMPU6050::SRMPU6050()
{
    deviceAdd = DEF_DEV_ADD;
}

SRMPU6050::SRMPU6050(uint8_t address)
{
    deviceAdd = address;
}


void SRMPU6050::initialize()
{
    printf("initializing...\n");
}