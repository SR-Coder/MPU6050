/*
    Derived from the MPU-6050 Register map
*/


#ifndef _SRMPU6050_H_
#define _SRMPU6050_H_


// ADD INCLUDES HERE
#include <stdint.h>

// will probably need some way to communicate on i2c serial

// REGISTER DEFINITONS:
/*
Register definitions have been derived from the InvenSense MPU-6000/MPU-6050 Register Map
and descriptions pdf currently found here: 
https://invensense.tdk.com/wp-content/uploads/2015/02/MPU-6000-Register-Map

NOTE: Register names ending in _H or _L contain the high and low bytes, respectively of
an internal register value.

The reset value for all registers is '0x00' except for:
    Register 107: 0x40
    Register 117: 0x68

NOTE: The Device powers on in sleep mode!!!
*/

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
#define I2C_SLV0_ADDR                   0x25    // R/W
#define I2C_SLV0_REG                    0x26    // R/W
#define I2C_SLV0_CTRL                   0x27    // R/W
#define I2C_SLV1_ADDR                   0x28    // R/W
#define I2C_SLV1_REG                    0x29    // R/W
#define I2C_SLV1_CTRL                   0X2A    // R/W
#define I2C_SLV2_ADDR                   0X2B    // R/W
#define I2C_SLV2_REG                    0X2C    // R/W
#define I2C_SLV2_CTRL                   0X2D    // R/W
#define I2C_SLV3_ADDR                   0x2E    // R/W
#define I2C_SLV3_REG                    0x2F    // R/W
#define I2C_SLV3_CTRL                   0x30    // R/W
#define I2C_SLV4_ADDR                   0x31    // R/W 
#define I2C_SLV4_REG                    0x32    // R/W
#define I2C_SLV4_DO                     0x33    // R/W
#define I2C_SLV4_CTRL                   0x34    // R/W
#define I2C_SLV4_DI                     0x35    // R
#define I2C_MST_STATUS                  0x36    // R
#define INT_PIN_CFG                     0x37    // R/W
#define INT_ENABLE                      0x38    // R/W
#define INT_STATUS                      0x3A    // R

// ACCEL/TEMP/GYRO REGISTERS

#define ACCEL_XOUT_H                    0x3B    // R
#define ACCEL_XOUT_L                    0x3C    // R
#define ACCEL_YOUT_H                    0x3D    // R
#define ACCEL_YOUT_L                    0x3E    // R
#define ACCEL_ZOUT_H                    0x3F    // R
#define ACCEL_ZOUT_L                    0x40    // R
#define TEMP_OUT_H                      0x41    // R
#define TEMP_OUT_L                      0x42    // R
#define GYRO_XOUT_H                     0x43    // R
#define GYRO_XOUT_L                     0x44    // R
#define GYRO_YOUT_H                     0x45    // R
#define GYRO_YOUT_L                     0x46    // R
#define GYRO_ZOUT_H                     0x47    // R
#define GYRO_ZOUT_L                     0x48    // R

// EXTERNAL SENSOR REGISTERS

#define EXT_SENS_DATA_00                0x49    // R
#define EXT_SENS_DATA_01                0x4A    // R
#define EXT_SENS_DATA_02                0x4B    // R
#define EXT_SENS_DATA_03                0x4C    // R
#define EXT_SENS_DATA_04                0x4D    // R
#define EXT_SENS_DATA_05                0x4E    // R
#define EXT_SENS_DATA_06                0x4F    // R
#define EXT_SENS_DATA_07                0x50    // R
#define EXT_SENS_DATA_08                0x51    // R
#define EXT_SENS_DATA_09                0x52    // R
#define EXT_SENS_DATA_10                0x53    // R
#define EXT_SENS_DATA_11                0x54    // R
#define EXT_SENS_DATA_12                0x55    // R
#define EXT_SENS_DATA_13                0x56    // R
#define EXT_SENS_DATA_14                0x57    // R
#define EXT_SENS_DATA_15                0x58    // R
#define EXT_SENS_DATA_16                0x59    // R
#define EXT_SENS_DATA_17                0x5A    // R
#define EXT_SENS_DATA_18                0x5B    // R
#define EXT_SENS_DATA_19                0x5C    // R
#define EXT_SENS_DATA_20                0x5D    // R
#define EXT_SENS_DATA_21                0x5E    // R
#define EXT_SENS_DATA_22                0x5F    // R
#define EXT_SENS_DATA_23                0x60    // R

// DEVICE CONTROL REGISTERS

#define I2C_SLV0_DO                     0x63    // R/W
#define I2C_SLV1_DO                     0x64    // R/W
#define I2C_SLV2_DO                     0x65    // R/W
#define I2C_SLV3_DO                     0x66    // R/W
#define I2C_MST_DELAY_CTRL              0x67    // R/W
#define SIGNAL_PATH_RESET               0x68    // R/W
#define USER_CTRL                       0x6A    // R/W
#define PWR_MGMT_1                      0x6B    // R/W
#define PWR_MGMT_2                      0x6C    // R/W
#define FIFO_COUNTH                     0x72    // R/W
#define FIFO_COUNTL                     0x73    // R/W
#define FIFO_R_W                        0x74    // R/W
#define WHO_AM_I                        0x75    // R


// ADD OTHER DEFINITIONS HERE THAT MAY BE NEEDED 
#define DEF_DEV_ADD                     0x50 


// PWR_MGMT_1 REGISTER DEFS
#define PWR_MGT1_DEVICE_RESET_BIT       7
#define PWR_MGT1_SLEEP_BIT              6
#define PWR_MGT1_CYCLE_BIT              5
#define PWR_MGT1_TEMP_DISABLE_BIT       4
#define PWR_MGT1_CLKSEL_BIT             2       // [2:0]
#define PWR_MGT1_CLKSEL_LEN             3

// PWR_MGTM_1 CLOCK SOURCES
#define MPU6050_INTERNAL_CLK            0x00    // This source is not recommended
#define MPU6050_PLL_XGYRO               0x01    // it is recomended to use one of the gyro references
#define MPU6050_PLL_YGYRO               0x02    //
#define MPU6050_PLL_ZGYRO               0x03    // 
#define MPU6050_EXT1                    0x04    // 32.768kHz reference
#define MPU6050_EXT2                    0x05    // 19.2MHz reference
#define MPU6050_CLK_STP                 0x07    // stops the clock and keeps the timing generator in reset




class SRMPU6050
{
public:
    SRMPU6050();
    SRMPU6050(uint8_t address);
    // ~SRMPU6050();

    // DEFINE PUBLIC FUNCTIONS
    void initialize();
    void initialize(uint8_t clkSrc);
    
private:
    // VARIABLES
    uint8_t deviceAdd;

    // FUNCTIONS
    void configureClock(uint8_t clkSrc);
    
    
};





#endif