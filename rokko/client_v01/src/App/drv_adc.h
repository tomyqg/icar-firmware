/**
  ******************************************************************************
  * SVN revision information:
  * @file    $URL: svn://svn.cn0086.info/icar/firmware/APP_HW_v01/src/App/drv_adc.h $ 
  * @version $Rev: 73 $
  * @author  $Author: cn0086.info $
  * @date    $Date: 2013-01-14 22:25:20 +0800 (周一, 2013-01-14) $
  * @brief   This file is for analog-digital converter define in STM32
  ******************************************************************************
  */ 

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __DRV_ADC_H
#define __DRV_ADC_H

/* Includes ------------------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
#define ADC_BUF_SIZE  16

/* Exported types ------------------------------------------------------------*/
struct ADC_STATUS {
	u16 converted[ADC_BUF_SIZE];

	bool completed;
};

/* Exported constants --------------------------------------------------------*/

/* Exported functions ------------------------------------------------------- */
void ADCTEMP_Configuration(void);
u16 digit_filter(u16* buf,u8 no);

#endif /* __DRV_ADC_H */
