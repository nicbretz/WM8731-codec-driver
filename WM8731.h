#ifndef WM8731_H
#define WM8731_H

#include "stm32h7xx_hal.h"
extern I2C_HandleTypeDef hi2c2;

#define WM8731_I2CADDR           (0x1A<<1)
#define WM8731_REG_LEFTLINEIN    (0x00)
#define WM8731_REG_RIGHTLINEIN   (0x02)
#define WM8731_REG_LEFTHPOUT 	 (0x04)
#define WM8731_REG_RIGHTHPOUT 	 (0x06)
#define WM8731_REG_ANAUDPATHCTRL (0x08)
#define WM8731_REG_DGAUDPATHCTRL (0x0A)
#define WM8731_REG_PWRDWNCTRL    (0x0C)
#define WM8731_REG_DGAUDINTRFFMT (0x0E)
#define WM8731_REG_SMPLINGCTRL   (0x10)
#define WM8731_REG_ACTIVECONTROL (0x12)
#define WM8731_REG_RESET         (0x1E)

HAL_StatusTypeDef WM8731_Initialize();
HAL_StatusTypeDef WM8731_REG_Read(uint8_t REG_ADDRESS, uint8_t* REG_DATA);
HAL_StatusTypeDef WM8731_REG_Write(uint8_t REG_ADDRESS, uint8_t REG_DATA);


#endif
