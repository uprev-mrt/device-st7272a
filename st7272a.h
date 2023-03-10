/**
  * @file st7272a.h
  * @author generated by mrt-device utility 
  * @link [https://github.com/uprev-mrt/mrtutils/wiki/mrt-device]
  * @brief Device driver for st7272a device
  *
  *
  */

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>
#include <stdbool.h>
#include "Devices/RegDevice/register_device.h"
#include "st7272a_regs.h"

/*user-block-top-start*/
/*user-block-top-end*/


/*******************************************************************************
  Sruct                                                                                
*******************************************************************************/

typedef struct{
    mrt_regdev_t mRegDev;            //ptr to base register-device 
    mrt_reg_t mDispCtrl;             //Display Control
    mrt_reg_t mContrast;             //Contrast
    mrt_reg_t mSubContrastR;         //Contrast sub R
    mrt_reg_t mSubContrastB;         //Contrast sub B
    mrt_reg_t mBrightness;           //Brightness
    mrt_reg_t mSubBrightnessR;       //Brightness R
    mrt_reg_t mSubBrightnessB;       //Brightness B
    mrt_reg_t mHBlanking;            //Brightness B
    mrt_reg_t mVBlanking;            //Brightness B
    mrt_reg_t mDisplayMode;          //Display Mode settings
    mrt_reg_t mBistFnctnSetting;     //BIST Fumction Setting
/*user-block-struct-start*/
/*user-block-struct-end*/
}st7272a_t;

/**
 * @brief initializes st7272a device for i2c bus
 * @param dev ptr to st7272a device
 * @param i2c handle for i2c bus
 */
mrt_status_t st7272a_init_i2c(st7272a_t* dev, mrt_i2c_handle_t i2c);
/**
 * @brief initializes st7272a device for i2c bus
 * @param dev ptr to st7272a device
 * @param spi handle for i2c bus
 */
mrt_status_t st7272a_init_spi(st7272a_t* dev, mrt_spi_handle_t spi, mrt_gpio_t chipSelect );

/**
  *@brief tests interface with device
  *@param dev ptr to st7272a device
  *@return MRT_STATUS_OK if test is passed 
  *@return MRT_STATUS_ERROR if test fails
  */
mrt_status_t st7272a_test(st7272a_t* dev);

/**
  *@brief writes register of device
  *@param dev ptr to st7272a device
  *@param reg ptr to register definition
  *@param data data to be write
  *@return status (type defined by platform)
  */
#define st7272a_write_reg(dev, reg, data) regdev_write_reg(&(dev)->mRegDev, (reg), (data))

/**
  *@brief reads register of device
  *@param dev ptr to st7272a device
  *@param reg ptr to register definition
  *@param data ptr to store data
  *@return value of register
  */
#define st7272a_read_reg(dev, reg) regdev_read_reg(&(dev)->mRegDev, (reg))


/*user-block-bottom-start*/

mrt_status_t st7272a_read_spi(mrt_regdev_t* dev, uint32_t addr, uint8_t* data, int len);
/*user-block-bottom-end*/

#ifdef __cplusplus
}
#endif