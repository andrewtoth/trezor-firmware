#ifndef _TREZOR_T3T1_H
#define _TREZOR_T3T1_H

#define VDD_3V3 1

#define DISPLAY_COLOR_MODE DMA2D_OUTPUT_RGB565
#define DISPLAY_PANEL_LX154A2482 1
#define DISPLAY_I8080_8BIT_DW 1

#define DISPLAY_IDENTIFY 1
#define DISPLAY_TE_PORT GPIOD
#define DISPLAY_TE_PIN GPIO_PIN_12
#define DISPLAY_TE_INTERRUPT_HANDLER EXTI12_IRQHandler
#define DISPLAY_TE_INTERRUPT_NUM EXTI12_IRQn
#define DISPLAY_TE_INTERRUPT_GPIOSEL EXTI_GPIOD
#define DISPLAY_TE_INTERRUPT_EXTI_LINE EXTI_LINE_12

#define BACKLIGHT_PWM_FREQ 12500
#define BACKLIGHT_PWM_TIM TIM17
#define BACKLIGHT_PWM_TIM_CLK_EN __HAL_RCC_TIM17_CLK_ENABLE
#define BACKLIGHT_PWM_TIM_AF GPIO_AF14_TIM17
#define BACKLIGHT_PWM_TIM_OCMODE TIM_OCMODE_PWM1
#define BACKLIGHT_PWM_TIM_CHANNEL TIM_CHANNEL_1
#define BACKLIGHT_PWM_TIM_CCR CCR1
#define BACKLIGHT_PWM_PIN GPIO_PIN_1
#define BACKLIGHT_PWM_PORT GPIOE
#define BACKLIGHT_PWM_PORT_CLK_EN __HAL_RCC_GPIOE_CLK_ENABLE

#define I2C_COUNT 3
#define I2C_INSTANCE_0 I2C1
#define I2C_INSTANCE_0_CLK_EN __HAL_RCC_I2C1_CLK_ENABLE
#define I2C_INSTANCE_0_CLK_DIS __HAL_RCC_I2C1_CLK_DISABLE
#define I2C_INSTANCE_0_PIN_AF GPIO_AF4_I2C1
#define I2C_INSTANCE_0_SDA_PORT GPIOB
#define I2C_INSTANCE_0_SDA_PIN GPIO_PIN_7
#define I2C_INSTANCE_0_SDA_CLK_EN __HAL_RCC_GPIOB_CLK_ENABLE
#define I2C_INSTANCE_0_SCL_PORT GPIOB
#define I2C_INSTANCE_0_SCL_PIN GPIO_PIN_6
#define I2C_INSTANCE_0_SCL_CLK_EN __HAL_RCC_GPIOB_CLK_ENABLE
#define I2C_INSTANCE_0_RESET_REG &RCC->APB1RSTR1
#define I2C_INSTANCE_0_RESET_BIT RCC_APB1RSTR1_I2C1RST
#define I2C_INSTANCE_0_EV_IRQHandler I2C1_EV_IRQHandler
#define I2C_INSTANCE_0_ER_IRQHandler I2C1_ER_IRQHandler
#define I2C_INSTANCE_0_EV_IRQn I2C1_EV_IRQn
#define I2C_INSTANCE_0_ER_IRQn I2C1_ER_IRQn
#define I2C_INSTANCE_0_GUARD_TIME 0

#define I2C_INSTANCE_1 I2C2
#define I2C_INSTANCE_1_CLK_EN __HAL_RCC_I2C2_CLK_ENABLE
#define I2C_INSTANCE_1_CLK_DIS __HAL_RCC_I2C2_CLK_DISABLE
#define I2C_INSTANCE_1_PIN_AF GPIO_AF4_I2C2
#define I2C_INSTANCE_1_SDA_PORT GPIOB
#define I2C_INSTANCE_1_SDA_PIN GPIO_PIN_14
#define I2C_INSTANCE_1_SDA_CLK_EN __HAL_RCC_GPIOB_CLK_ENABLE
#define I2C_INSTANCE_1_SCL_PORT GPIOB
#define I2C_INSTANCE_1_SCL_PIN GPIO_PIN_13
#define I2C_INSTANCE_1_SCL_CLK_EN __HAL_RCC_GPIOB_CLK_ENABLE
#define I2C_INSTANCE_1_RESET_REG &RCC->APB1RSTR1
#define I2C_INSTANCE_1_RESET_BIT RCC_APB1RSTR1_I2C2RST
#define I2C_INSTANCE_1_EV_IRQHandler I2C2_EV_IRQHandler
#define I2C_INSTANCE_1_ER_IRQHandler I2C2_ER_IRQHandler
#define I2C_INSTANCE_1_EV_IRQn I2C2_EV_IRQn
#define I2C_INSTANCE_1_ER_IRQn I2C2_ER_IRQn
#define I2C_INSTANCE_1_GUARD_TIME 0

#define I2C_INSTANCE_2 I2C3
#define I2C_INSTANCE_2_CLK_EN __HAL_RCC_I2C3_CLK_ENABLE
#define I2C_INSTANCE_2_CLK_DIS __HAL_RCC_I2C3_CLK_DISABLE
#define I2C_INSTANCE_2_PIN_AF GPIO_AF4_I2C3
#define I2C_INSTANCE_2_SDA_PORT GPIOC
#define I2C_INSTANCE_2_SDA_PIN GPIO_PIN_1
#define I2C_INSTANCE_2_SDA_CLK_EN __HAL_RCC_GPIOC_CLK_ENABLE
#define I2C_INSTANCE_2_SCL_PORT GPIOC
#define I2C_INSTANCE_2_SCL_PIN GPIO_PIN_0
#define I2C_INSTANCE_2_SCL_CLK_EN __HAL_RCC_GPIOC_CLK_ENABLE
#define I2C_INSTANCE_2_RESET_REG &RCC->APB3RSTR
#define I2C_INSTANCE_2_RESET_BIT RCC_APB3RSTR_I2C3RST
#define I2C_INSTANCE_2_EV_IRQHandler I2C3_EV_IRQHandler
#define I2C_INSTANCE_2_ER_IRQHandler I2C3_ER_IRQHandler
#define I2C_INSTANCE_2_EV_IRQn I2C3_EV_IRQn
#define I2C_INSTANCE_2_ER_IRQn I2C3_ER_IRQn
#define I2C_INSTANCE_2_GUARD_TIME 50  // Optiga requires 50us guard time

#define TOUCH_PANEL_LX154A2422CPT23 1
#define TOUCH_SENSITIVITY 0x40
#define TOUCH_I2C_INSTANCE 0
#define TOUCH_RST_PORT GPIOC
#define TOUCH_RST_PIN GPIO_PIN_5
#define TOUCH_INT_PORT GPIOC
#define TOUCH_INT_PIN GPIO_PIN_4
#define TOUCH_ON_PORT GPIOB
#define TOUCH_ON_PIN GPIO_PIN_0

#define DRV2625_I2C_INSTANCE 1
#define HAPTIC_ACTUATOR "actuators/vg1040003d.h"

#define OPTIGA_I2C_INSTANCE 2
#define OPTIGA_RST_PORT GPIOB
#define OPTIGA_RST_PIN GPIO_PIN_1
#define OPTIGA_RST_CLK_EN __HAL_RCC_GPIOB_CLK_ENABLE

#define SD_DETECT_PORT GPIOC
#define SD_DETECT_PIN GPIO_PIN_13
#define SD_ENABLE_PORT GPIOC
#define SD_ENABLE_PIN GPIO_PIN_3

#endif  //_TREZOR_T_H
