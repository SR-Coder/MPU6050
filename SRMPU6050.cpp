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


/**
 * @brief Sets up the initial settings of the MPU6050
 * default setup uses the X Gyro clock reference=
 */
void SRMPU6050::initialize()
{
    printf("initializing...\n");
    configureClock(MPU6050_PLL_XGYRO);
}
/**
 * @brief Sets the initial settings of the MPU6050
 * allows th user to specify the clock source for 
 * the device
 * 
 * @param source clock source 0 - 5,7
 */
void SRMPU6050::initialize(uint8_t source)
{
    printf("Initializing... \n");
    configureClock(source);
}

/**
 * 'configureClock' sets the clock source for the MPU6050
 * Information on configuring this clock comes from page 40
 * of the manual.
 * 
 * the manual states that:
 * Upon power up, the MPU-60X0 clock source defaults to the internal oscillator. However, it is highly
 * recommended that the device be configured to use one of the gyroscopes (or an external clock
 * source) as the clock reference for improved stability. The clock source can be selected according to
 * the following table
 * 
 *  CLKSEL  |   Clock Source
 *      0   |   Internal 8MHz oscillator
 *      1   |   PLL with X axis gyroscope reference   
 *      2   |   PLL with Y axis gyroscope reference
 *      3   |   PLL with Z axis gyroscope reference
 *      4   |   PLL with external 32.768kHz reference
 *      5   |   PLL with external 19.2MHz reference
 *      6   |   Reserved
 *      7   |   Stops the clock and keeps the timing generator
 *              in reset

@param clkSrc select a clock source


*/
void SRMPU6050::configureClock(uint8_t clkSrc)
{
    printf("Configuring Clock... \n");
    wiringPiI2CWrite()
}