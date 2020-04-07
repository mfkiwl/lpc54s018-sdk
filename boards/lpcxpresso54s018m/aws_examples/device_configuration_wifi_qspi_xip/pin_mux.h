/*
 * Copyright 2019 NXP.
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

#define IOCON_PIO_DIGITAL_EN 0x0100u  /*!<@brief Enables digital function */
#define IOCON_PIO_FUNC1 0x01u         /*!<@brief Selects pin function 1 */
#define IOCON_PIO_FUNC2 0x02u         /*!<@brief Selects pin function 2 */
#define IOCON_PIO_INPFILT_OFF 0x0200u /*!<@brief Input filter disabled */
#define IOCON_PIO_INV_DI 0x00u        /*!<@brief Input function is not inverted */
#define IOCON_PIO_MODE_INACT 0x00u    /*!<@brief No addition pin function */
#define IOCON_PIO_MODE_PULLUP 0x20u   /*!<@brief Selects pull-up function */
#define IOCON_PIO_OPENDRAIN_DI 0x00u  /*!<@brief Open drain is disabled */
#define IOCON_PIO_SLEW_STANDARD 0x00u /*!<@brief Standard mode, output slew rate control is enabled */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void); /* Function assigned for the Cortex-M4F */

/*!
 * @brief Select Analog/Digital mode.: Digital mode. */
#define PIO122_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO122_FUNC_ALT0 0x00u
/*!
 * @brief Input polarity.: Disabled. Input function is not inverted. */
#define PIO122_INVERT_DISABLED 0x00u
/*!
 * @brief Selects function mode (on-chip pull-up/pull-down resistor control).: Pull-up. Pull-up resistor enabled. */
#define PIO122_MODE_PULL_UP 0x02u
/*!
 * @brief Select Analog/Digital mode.: Digital mode. */
#define PIO320_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 1. */
#define PIO320_FUNC_ALT1 0x01u
/*!
 * @brief Select Analog/Digital mode.: Digital mode. */
#define PIO321_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 1. */
#define PIO321_FUNC_ALT1 0x01u
/*!
 * @brief Select Analog/Digital mode.: Digital mode. */
#define PIO322_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 1. */
#define PIO322_FUNC_ALT1 0x01u
/*!
 * @brief Select Analog/Digital mode.: Digital mode. */
#define PIO330_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 1. */
#define PIO330_FUNC_ALT1 0x01u
/*!
 * @brief Select Analog/Digital mode.: Digital mode. */
#define PIO47_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO47_FUNC_ALT0 0x00u
/*!
 * @brief Input polarity.: Disabled. Input function is not inverted. */
#define PIO47_INVERT_DISABLED 0x00u
/*!
 * @brief
 * Selects function mode (on-chip pull-up/pull-down resistor control).
 * : Pull-down.
 * Pull-down resistor enabled.
 */
#define PIO47_MODE_PULL_DOWN 0x01u

/*! @name PIO4_7 (coord A14), PWRON
  @{ */
#define BOARD_INITGT202SHIELD_PWRON_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITGT202SHIELD_PWRON_PORT 4U   /*!<@brief PORT device name: 4U */
#define BOARD_INITGT202SHIELD_PWRON_PIN 7U    /*!<@brief 4U pin index: 7 */
                                              /* @} */

/*! @name PIO1_22 (coord P11), IRQ
  @{ */
#define BOARD_INITGT202SHIELD_IRQ_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITGT202SHIELD_IRQ_PORT 1U   /*!<@brief PORT device name: 1U */
#define BOARD_INITGT202SHIELD_IRQ_PIN 22U   /*!<@brief 1U pin index: 22 */
                                            /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitGT202Shield(void); /* Function assigned for the Cortex-M4F */

/*!
 * @brief Select Analog/Digital mode.: Digital mode. */
#define PIO016_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO016_FUNC_ALT0 0x00u
/*!
 * @brief Select Analog/Digital mode.: Digital mode. */
#define PIO10_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO10_FUNC_ALT0 0x00u
/*!
 * @brief
 * Selects function mode (on-chip pull-up/pull-down resistor control).
 * : Pull-down.
 * Pull-down resistor enabled.
 */
#define PIO10_MODE_PULL_DOWN 0x01u
/*!
 * @brief Select Analog/Digital mode.: Digital mode. */
#define PIO314_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO314_FUNC_ALT0 0x00u
/*!
 * @brief
 * Selects function mode (on-chip pull-up/pull-down resistor control).
 * : Pull-down.
 * Pull-down resistor enabled.
 */
#define PIO314_MODE_PULL_DOWN 0x01u
/*!
 * @brief Select Analog/Digital mode.: Digital mode. */
#define PIO320_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 1. */
#define PIO320_FUNC_ALT1 0x01u
/*!
 * @brief Select Analog/Digital mode.: Digital mode. */
#define PIO321_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 1. */
#define PIO321_FUNC_ALT1 0x01u
/*!
 * @brief Select Analog/Digital mode.: Digital mode. */
#define PIO322_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 1. */
#define PIO322_FUNC_ALT1 0x01u
/*!
 * @brief Select Analog/Digital mode.: Digital mode. */
#define PIO330_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 1. */
#define PIO330_FUNC_ALT1 0x01u

/*! @name PIO0_16 (coord M4), IRQ
  @{ */
#define BOARD_INITWIFI10CLICKSHIELD_IRQ_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITWIFI10CLICKSHIELD_IRQ_PORT 0U   /*!<@brief PORT device name: 0U */
#define BOARD_INITWIFI10CLICKSHIELD_IRQ_PIN 16U   /*!<@brief 0U pin index: 16 */
                                                /* @} */

/*! @name PIO3_14 (coord E3), PWRON
  @{ */
#define BOARD_INITWIFI10CLICKSHIELD_PWRON_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITWIFI10CLICKSHIELD_PWRON_PORT 3U   /*!<@brief PORT device name: 3U */
#define BOARD_INITWIFI10CLICKSHIELD_PWRON_PIN 14U   /*!<@brief 3U pin index: 14 */
                                                  /* @} */

/*! @name PIO1_0 (coord N3), KFET
  @{ */
#define BOARD_INITWIFI10CLICKSHIELD_KFET_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITWIFI10CLICKSHIELD_KFET_PORT 1U   /*!<@brief PORT device name: 1U */
#define BOARD_INITWIFI10CLICKSHIELD_KFET_PIN 0U    /*!<@brief 1U pin index: 0 */
                                                 /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitWiFi10ClickShield(void); /* Function assigned for the Cortex-M4F */

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/