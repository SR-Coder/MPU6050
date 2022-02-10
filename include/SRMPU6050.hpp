/*
    Dericed from the MPU-6050 Register map
*/


#ifndef _SRMPU6050_H_
#define SRMPU6050_H_


// ADD INCLUDES HERE
// will probably need some way to communicate on i2c serial

// REGISTER DEFINITONS

#define SELF_TEST_X                     0x0D    // R/W
#define SELF_TEST_Y                     0x0E    // R/W
#define SELF_TEST_Z                     0x0F    // R/W
#define SELF_TEST_A                     0x10    // R/W
#define SMPLRT_DIV                      0x19    // R/W
#define CONFIG                          0x1A    // R/W
#define GYRO_CONFIG                     0x1B    // R/W
#define ACCEL_CONFIG                    0x1B    // R/W
#define FIFO_EN                         0x23    // R/W
#define I2C_MST_CTRL                    0x24    // R/W


#endif