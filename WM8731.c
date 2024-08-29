#include "WM8731.h"

HAL_StatusTypeDef WM8731_Initialize(){
	HAL_StatusTypeDef status;
	status = WM8731_REG_Write(WM8731_REG_RESET, 0b00000000);
	if(status != HAL_OK){
		return status;
	}
	HAL_Delay(50);
	status = WM8731_REG_Write(WM8731_REG_LEFTLINEIN + 1, 0b00011111);
	if(status != HAL_OK){
		return status;
	}
	status = WM8731_REG_Write(WM8731_REG_RIGHTLINEIN + 1, 0b00011111);
	if(status != HAL_OK){
		return status;
	}
	///
	status = WM8731_REG_Write(WM8731_REG_LEFTHPOUT + 1, 0b00111111);
	if(status != HAL_OK){
		return status;
	}
	status = WM8731_REG_Write(WM8731_REG_RIGHTHPOUT + 1, 0b00111111);
	if(status != HAL_OK){
		return status;
	}

	status = WM8731_REG_Write(WM8731_REG_ANAUDPATHCTRL, 0b00011001);
	if(status != HAL_OK){
		return status;
	}

	status = WM8731_REG_Write(WM8731_REG_DGAUDPATHCTRL, 0b00000001);
	if(status != HAL_OK){
		return status;
	}
	status = WM8731_REG_Write(WM8731_REG_PWRDWNCTRL, 0b01100000);
	if(status != HAL_OK){
		return status;
	}
	status = WM8731_REG_Write(WM8731_REG_DGAUDINTRFFMT, 0b00000010);
	if(status != HAL_OK){
		return status;
	}
	status = WM8731_REG_Write(WM8731_REG_SMPLINGCTRL, 0b00000000);
	if(status != HAL_OK){
		return status;
	}
	status = WM8731_REG_Write(WM8731_REG_ACTIVECONTROL, 0b00000001);
	if(status != HAL_OK){
		return status;
	}
	return HAL_OK;
}

HAL_StatusTypeDef WM8731_REG_Read(uint8_t REG_ADDRESS, uint8_t* REG_DATA){
	return HAL_I2C_Mem_Read(&hi2c2, WM8731_I2CADDR, REG_ADDRESS, I2C_MEMADD_SIZE_8BIT, REG_DATA, 2, 100);
}

HAL_StatusTypeDef WM8731_REG_Write(uint8_t REG_ADDRESS, uint8_t REG_DATA){
	uint8_t i2cdata[2] = {REG_ADDRESS, REG_DATA};
	return HAL_I2C_Master_Transmit(&hi2c2, WM8731_I2CADDR, i2cdata, 2, 250);
}
