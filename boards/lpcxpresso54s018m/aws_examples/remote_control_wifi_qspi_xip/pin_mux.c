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

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v6.0
processor: LPC54S018M
package_id: LPC54S018J4MET180
mcu_data: ksdk2_0
processor_version: 6.0.2
pin_labels:
- {pin_num: A14, pin_signal: PIO4_7/CTIMER4_CAP3/USB0_PORTPWRN/USB0_FRAME/SCT0_GPI0, label: PWRON, identifier: PWRON}
- {pin_num: P11, pin_signal: PIO1_22/FC8_RTS_SCL_SSEL1/SD_CMD/CTIMER2_MAT3/SCT0_GPI5/FC4_SSEL3/EMC_CKE(1), label: IRQ, identifier: IRQ}
- {pin_num: A3, pin_signal: PIO3_10/SCT0_OUT3/CTIMER3_MAT0/EMC_DYCSN(1)/TRACEDATA(0), label: PWRON, identifier: PWRON}
- {pin_num: C10, pin_signal: PIO3_2/LCD_VD(16)/FC9_RXD_SDA_MOSI/CTIMER1_MAT2, label: IRQ, identifier: IRQ}
- {pin_num: E3, pin_signal: PIO3_14/SCT0_OUT4/FC9_RTS_SCL_SSEL1/CTIMER3_MAT1/TRACEDATA(2), label: PWRON, identifier: KFFET;PWRON}
- {pin_num: M4, pin_signal: PIO0_16/FC4_TXD_SCL_MISO/CLKOUT/CTIMER1_CAP0/EMC_CSN(0)/ENET_TXD0/ADC0_4, label: IRQ, identifier: IRQ}
- {pin_num: N3, pin_signal: PIO1_0/FC0_RTS_SCL_SSEL1/SD_D(3)/CTIMER0_CAP2/SCT0_GPI4/TRACECLK/ADC0_6, label: KFET, identifier: KFET}
- {pin_num: A13, pin_signal: PIO3_3/LCD_VD(17)/FC9_TXD_SCL_MISO, label: LED2, identifier: LED2}
- {pin_num: C3, pin_signal: PIO2_2/ENET_CRS/FC3_SSEL3/SCT0_OUT6/CTIMER1_MAT1, label: LED3, identifier: LED3}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_gpio.h"
#include "fsl_iocon.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
    BOARD_InitPins();
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: A2, peripheral: FLEXCOMM0, signal: TXD_SCL_MISO, pin_signal: PIO0_30/FC0_TXD_SCL_MISO/CTIMER0_MAT0/SCT0_OUT9/TRACEDATA(1), mode: inactive, invert: disabled,
    glitch_filter: disabled, slew_rate: standard, open_drain: disabled}
  - {pin_num: B13, peripheral: FLEXCOMM0, signal: RXD_SDA_MOSI, pin_signal: PIO0_29/FC0_RXD_SDA_MOSI/CTIMER2_MAT3/SCT0_OUT8/TRACEDATA(2), mode: inactive, invert: disabled,
    glitch_filter: disabled, slew_rate: standard, open_drain: disabled}
  - {pin_num: P2, peripheral: SWD, signal: SWO, pin_signal: PIO0_10/FC6_SCK/CTIMER2_CAP2/CTIMER2_MAT0/FC1_TXD_SCL_MISO/SWO/ADC0_0, mode: inactive}
  - {pin_num: A13, peripheral: GPIO, signal: 'PIO3, 3', pin_signal: PIO3_3/LCD_VD(17)/FC9_TXD_SCL_MISO, direction: OUTPUT, gpio_init_state: 'true', mode: inactive}
  - {pin_num: C3, peripheral: GPIO, signal: 'PIO2, 2', pin_signal: PIO2_2/ENET_CRS/FC3_SSEL3/SCT0_OUT6/CTIMER1_MAT1, direction: OUTPUT, gpio_init_state: 'true', mode: inactive}
  - {pin_num: C2, peripheral: FLEXCOMM2, signal: CTS_SDA_SSEL0, pin_signal: PIO3_23/FC2_CTS_SDA_SSEL0/UTICK_CAP3, i2c_slew: i2c, i2c_drive: high, i2c_filter: disabled}
  - {pin_num: E2, peripheral: FLEXCOMM2, signal: RTS_SCL_SSEL1, pin_signal: PIO3_24/FC2_RTS_SCL_SSEL1/CTIMER4_CAP0/USB0_VBUS, i2c_slew: i2c, i2c_drive: high, i2c_filter: disabled}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
/* Function assigned for the Cortex-M4F */
void BOARD_InitPins(void)
{
    /* Enables the clock for the IOCON block. 0 = Disable; 1 = Enable.: 0x01u */
    CLOCK_EnableClock(kCLOCK_Iocon);
    /* Enables the clock for the GPIO2 module */
    CLOCK_EnableClock(kCLOCK_Gpio2);
    /* Enables the clock for the GPIO3 module */
    CLOCK_EnableClock(kCLOCK_Gpio3);

    gpio_pin_config_t LED3_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 1U
    };
    /* Initialize GPIO functionality on pin PIO2_2 (pin C3)  */
    GPIO_PinInit(BOARD_INITPINS_LED3_GPIO, BOARD_INITPINS_LED3_PORT, BOARD_INITPINS_LED3_PIN, &LED3_config);

    gpio_pin_config_t LED2_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 1U
    };
    /* Initialize GPIO functionality on pin PIO3_3 (pin A13)  */
    GPIO_PinInit(BOARD_INITPINS_LED2_GPIO, BOARD_INITPINS_LED2_PORT, BOARD_INITPINS_LED2_PIN, &LED2_config);

    IOCON->PIO[0][10] = ((IOCON->PIO[0][10] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_MODE_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT010 (pin P2) is configured as SWO. */
                         | IOCON_PIO_FUNC(PIO010_FUNC_ALT6)

                         /* Selects function mode (on-chip pull-up/pull-down resistor control).
                          * : Inactive.
                          * Inactive (no pull-down/pull-up resistor enabled). */
                         | IOCON_PIO_MODE(PIO010_MODE_INACTIVE)

                         /* Select Analog/Digital mode.
                          * : Digital mode. */
                         | IOCON_PIO_DIGIMODE(PIO010_DIGIMODE_DIGITAL));

    const uint32_t port0_pin29_config = (/* Pin is configured as FC0_RXD_SDA_MOSI */
                                         IOCON_PIO_FUNC1 |
                                         /* No addition pin function */
                                         IOCON_PIO_MODE_INACT |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* Standard mode, output slew rate control is enabled */
                                         IOCON_PIO_SLEW_STANDARD |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI);
    /* PORT0 PIN29 (coords: B13) is configured as FC0_RXD_SDA_MOSI */
    IOCON_PinMuxSet(IOCON, 0U, 29U, port0_pin29_config);

    const uint32_t port0_pin30_config = (/* Pin is configured as FC0_TXD_SCL_MISO */
                                         IOCON_PIO_FUNC1 |
                                         /* No addition pin function */
                                         IOCON_PIO_MODE_INACT |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* Standard mode, output slew rate control is enabled */
                                         IOCON_PIO_SLEW_STANDARD |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI);
    /* PORT0 PIN30 (coords: A2) is configured as FC0_TXD_SCL_MISO */
    IOCON_PinMuxSet(IOCON, 0U, 30U, port0_pin30_config);

    IOCON->PIO[2][2] = ((IOCON->PIO[2][2] &
                         /* Mask bits to zero which are setting */
                         (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_MODE_MASK | IOCON_PIO_DIGIMODE_MASK)))

                        /* Selects pin function.
                         * : PORT22 (pin C3) is configured as PIO2_2. */
                        | IOCON_PIO_FUNC(PIO22_FUNC_ALT0)

                        /* Selects function mode (on-chip pull-up/pull-down resistor control).
                         * : Inactive.
                         * Inactive (no pull-down/pull-up resistor enabled). */
                        | IOCON_PIO_MODE(PIO22_MODE_INACTIVE)

                        /* Select Analog/Digital mode.
                         * : Digital mode. */
                        | IOCON_PIO_DIGIMODE(PIO22_DIGIMODE_DIGITAL));

    IOCON->PIO[3][23] =
        ((IOCON->PIO[3][23] &
          /* Mask bits to zero which are setting */
          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_I2CSLEW_MASK | IOCON_PIO_DIGIMODE_MASK | IOCON_PIO_I2CDRIVE_MASK | IOCON_PIO_I2CFILTEROFF_MASK)))

         /* Selects pin function.
          * : PORT323 (pin C2) is configured as FC2_CTS_SDA_SSEL0. */
         | IOCON_PIO_FUNC(PIO323_FUNC_ALT1)

         /* Controls slew rate of I2C pad.
          * : I2C mode. */
         | IOCON_PIO_I2CSLEW(PIO323_I2CSLEW_I2C_MODE)

         /* Select Analog/Digital mode.
          * : Digital mode. */
         | IOCON_PIO_DIGIMODE(PIO323_DIGIMODE_DIGITAL)

         /* Controls the current sink capability of the pin.
          * : High drive.
          * Output drive sink is 20 mA.
          * This is needed for Fast Mode Plus I 2C.
          * Refer to the appropriate specific device data sheet for details. */
         | IOCON_PIO_I2CDRIVE(PIO323_I2CDRIVE_HIGH)

         /* Configures I2C features for standard mode, fast mode, and Fast Mode Plus operation.
          * : Disabled.
          * I2C 50 ns glitch filter disabled. */
         | IOCON_PIO_I2CFILTEROFF(PIO323_I2CFILTEROFF_DISABLED));

    IOCON->PIO[3][24] =
        ((IOCON->PIO[3][24] &
          /* Mask bits to zero which are setting */
          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_I2CSLEW_MASK | IOCON_PIO_DIGIMODE_MASK | IOCON_PIO_I2CDRIVE_MASK | IOCON_PIO_I2CFILTEROFF_MASK)))

         /* Selects pin function.
          * : PORT324 (pin E2) is configured as FC2_RTS_SCL_SSEL1. */
         | IOCON_PIO_FUNC(PIO324_FUNC_ALT1)

         /* Controls slew rate of I2C pad.
          * : I2C mode. */
         | IOCON_PIO_I2CSLEW(PIO324_I2CSLEW_I2C_MODE)

         /* Select Analog/Digital mode.
          * : Digital mode. */
         | IOCON_PIO_DIGIMODE(PIO324_DIGIMODE_DIGITAL)

         /* Controls the current sink capability of the pin.
          * : High drive.
          * Output drive sink is 20 mA.
          * This is needed for Fast Mode Plus I 2C.
          * Refer to the appropriate specific device data sheet for details. */
         | IOCON_PIO_I2CDRIVE(PIO324_I2CDRIVE_HIGH)

         /* Configures I2C features for standard mode, fast mode, and Fast Mode Plus operation.
          * : Disabled.
          * I2C 50 ns glitch filter disabled. */
         | IOCON_PIO_I2CFILTEROFF(PIO324_I2CFILTEROFF_DISABLED));

    IOCON->PIO[3][3] = ((IOCON->PIO[3][3] &
                         /* Mask bits to zero which are setting */
                         (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_MODE_MASK | IOCON_PIO_DIGIMODE_MASK)))

                        /* Selects pin function.
                         * : PORT33 (pin A13) is configured as PIO3_3. */
                        | IOCON_PIO_FUNC(PIO33_FUNC_ALT0)

                        /* Selects function mode (on-chip pull-up/pull-down resistor control).
                         * : Inactive.
                         * Inactive (no pull-down/pull-up resistor enabled). */
                        | IOCON_PIO_MODE(PIO33_MODE_INACTIVE)

                        /* Select Analog/Digital mode.
                         * : Digital mode. */
                        | IOCON_PIO_DIGIMODE(PIO33_DIGIMODE_DIGITAL));
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitGT202Shield:
- options: {callFromInitBoot: 'false', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: N2, peripheral: FLEXCOMM9, signal: SCK, pin_signal: PIO3_20/FC9_SCK/SD_CARD_INT_N/CLKOUT/SCT0_OUT7}
  - {pin_num: N5, peripheral: FLEXCOMM9, signal: TXD_SCL_MISO, pin_signal: PIO3_22/FC9_TXD_SCL_MISO/ADC0_10}
  - {pin_num: P5, peripheral: FLEXCOMM9, signal: RXD_SDA_MOSI, pin_signal: PIO3_21/FC9_RXD_SDA_MOSI/SD_BACKEND_PWR/CTIMER4_MAT3/UTICK_CAP2/ADC0_9}
  - {pin_num: K13, peripheral: FLEXCOMM9, signal: CTS_SDA_SSEL0, pin_signal: PIO3_30/FC9_CTS_SDA_SSEL0/SCT0_OUT4/FC4_SSEL2/EMC_A(19)}
  - {pin_num: A14, peripheral: GPIO, signal: 'PIO4, 7', pin_signal: PIO4_7/CTIMER4_CAP3/USB0_PORTPWRN/USB0_FRAME/SCT0_GPI0, direction: OUTPUT, mode: pullDown, invert: disabled}
  - {pin_num: P11, peripheral: GPIO, signal: 'PIO1, 22', pin_signal: PIO1_22/FC8_RTS_SCL_SSEL1/SD_CMD/CTIMER2_MAT3/SCT0_GPI5/FC4_SSEL3/EMC_CKE(1), direction: INPUT,
    mode: pullUp, invert: disabled}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitGT202Shield
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
/* Function assigned for the Cortex-M4F */
void BOARD_InitGT202Shield(void)
{
    /* Enables the clock for the IOCON block. 0 = Disable; 1 = Enable.: 0x01u */
    CLOCK_EnableClock(kCLOCK_Iocon);
    /* Enables the clock for the GPIO1 module */
    CLOCK_EnableClock(kCLOCK_Gpio1);
    /* Enables the clock for the GPIO4 module */
    CLOCK_EnableClock(kCLOCK_Gpio4);

    gpio_pin_config_t IRQ_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO1_22 (pin P11)  */
    GPIO_PinInit(BOARD_INITGT202SHIELD_IRQ_GPIO, BOARD_INITGT202SHIELD_IRQ_PORT, BOARD_INITGT202SHIELD_IRQ_PIN, &IRQ_config);

    gpio_pin_config_t PWRON_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO4_7 (pin A14)  */
    GPIO_PinInit(BOARD_INITGT202SHIELD_PWRON_GPIO, BOARD_INITGT202SHIELD_PWRON_PORT, BOARD_INITGT202SHIELD_PWRON_PIN, &PWRON_config);

    IOCON->PIO[1][22] =
        ((IOCON->PIO[1][22] &
          /* Mask bits to zero which are setting */
          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_MODE_MASK | IOCON_PIO_INVERT_MASK | IOCON_PIO_DIGIMODE_MASK)))

         /* Selects pin function.
          * : PORT122 (pin P11) is configured as PIO1_22. */
         | IOCON_PIO_FUNC(PIO122_FUNC_ALT0)

         /* Selects function mode (on-chip pull-up/pull-down resistor control).
          * : Pull-up.
          * Pull-up resistor enabled. */
         | IOCON_PIO_MODE(PIO122_MODE_PULL_UP)

         /* Input polarity.
          * : Disabled.
          * Input function is not inverted. */
         | IOCON_PIO_INVERT(PIO122_INVERT_DISABLED)

         /* Select Analog/Digital mode.
          * : Digital mode. */
         | IOCON_PIO_DIGIMODE(PIO122_DIGIMODE_DIGITAL));

    IOCON->PIO[3][20] = ((IOCON->PIO[3][20] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT320 (pin N2) is configured as FC9_SCK. */
                         | IOCON_PIO_FUNC(PIO320_FUNC_ALT1)

                         /* Select Analog/Digital mode.
                          * : Digital mode. */
                         | IOCON_PIO_DIGIMODE(PIO320_DIGIMODE_DIGITAL));

    IOCON->PIO[3][21] = ((IOCON->PIO[3][21] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT321 (pin P5) is configured as FC9_RXD_SDA_MOSI. */
                         | IOCON_PIO_FUNC(PIO321_FUNC_ALT1)

                         /* Select Analog/Digital mode.
                          * : Digital mode. */
                         | IOCON_PIO_DIGIMODE(PIO321_DIGIMODE_DIGITAL));

    IOCON->PIO[3][22] = ((IOCON->PIO[3][22] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT322 (pin N5) is configured as FC9_TXD_SCL_MISO. */
                         | IOCON_PIO_FUNC(PIO322_FUNC_ALT1)

                         /* Select Analog/Digital mode.
                          * : Digital mode. */
                         | IOCON_PIO_DIGIMODE(PIO322_DIGIMODE_DIGITAL));

    IOCON->PIO[3][30] = ((IOCON->PIO[3][30] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT330 (pin K13) is configured as FC9_CTS_SDA_SSEL0. */
                         | IOCON_PIO_FUNC(PIO330_FUNC_ALT1)

                         /* Select Analog/Digital mode.
                          * : Digital mode. */
                         | IOCON_PIO_DIGIMODE(PIO330_DIGIMODE_DIGITAL));

    IOCON->PIO[4][7] =
        ((IOCON->PIO[4][7] &
          /* Mask bits to zero which are setting */
          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_MODE_MASK | IOCON_PIO_INVERT_MASK | IOCON_PIO_DIGIMODE_MASK)))

         /* Selects pin function.
          * : PORT47 (pin A14) is configured as PIO4_7. */
         | IOCON_PIO_FUNC(PIO47_FUNC_ALT0)

         /* Selects function mode (on-chip pull-up/pull-down resistor control).
          * : Pull-down.
          * Pull-down resistor enabled. */
         | IOCON_PIO_MODE(PIO47_MODE_PULL_DOWN)

         /* Input polarity.
          * : Disabled.
          * Input function is not inverted. */
         | IOCON_PIO_INVERT(PIO47_INVERT_DISABLED)

         /* Select Analog/Digital mode.
          * : Digital mode. */
         | IOCON_PIO_DIGIMODE(PIO47_DIGIMODE_DIGITAL));
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitWiFi10ClickShield:
- options: {callFromInitBoot: 'false', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: N2, peripheral: FLEXCOMM9, signal: SCK, pin_signal: PIO3_20/FC9_SCK/SD_CARD_INT_N/CLKOUT/SCT0_OUT7}
  - {pin_num: N5, peripheral: FLEXCOMM9, signal: TXD_SCL_MISO, pin_signal: PIO3_22/FC9_TXD_SCL_MISO/ADC0_10}
  - {pin_num: P5, peripheral: FLEXCOMM9, signal: RXD_SDA_MOSI, pin_signal: PIO3_21/FC9_RXD_SDA_MOSI/SD_BACKEND_PWR/CTIMER4_MAT3/UTICK_CAP2/ADC0_9}
  - {pin_num: K13, peripheral: FLEXCOMM9, signal: CTS_SDA_SSEL0, pin_signal: PIO3_30/FC9_CTS_SDA_SSEL0/SCT0_OUT4/FC4_SSEL2/EMC_A(19)}
  - {pin_num: M4, peripheral: GPIO, signal: 'PIO0, 16', pin_signal: PIO0_16/FC4_TXD_SCL_MISO/CLKOUT/CTIMER1_CAP0/EMC_CSN(0)/ENET_TXD0/ADC0_4, direction: INPUT}
  - {pin_num: E3, peripheral: GPIO, signal: 'PIO3, 14', pin_signal: PIO3_14/SCT0_OUT4/FC9_RTS_SCL_SSEL1/CTIMER3_MAT1/TRACEDATA(2), identifier: PWRON, direction: OUTPUT,
    mode: pullDown}
  - {pin_num: N3, peripheral: GPIO, signal: 'PIO1, 0', pin_signal: PIO1_0/FC0_RTS_SCL_SSEL1/SD_D(3)/CTIMER0_CAP2/SCT0_GPI4/TRACECLK/ADC0_6, direction: OUTPUT, mode: pullDown}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitWiFi10ClickShield
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
/* Function assigned for the Cortex-M4F */
void BOARD_InitWiFi10ClickShield(void)
{
    /* Enables the clock for the IOCON block. 0 = Disable; 1 = Enable.: 0x01u */
    CLOCK_EnableClock(kCLOCK_Iocon);
    /* Enables the clock for the GPIO0 module */
    CLOCK_EnableClock(kCLOCK_Gpio0);
    /* Enables the clock for the GPIO1 module */
    CLOCK_EnableClock(kCLOCK_Gpio1);
    /* Enables the clock for the GPIO3 module */
    CLOCK_EnableClock(kCLOCK_Gpio3);

    gpio_pin_config_t IRQ_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO0_16 (pin M4)  */
    GPIO_PinInit(BOARD_INITWIFI10CLICKSHIELD_IRQ_GPIO, BOARD_INITWIFI10CLICKSHIELD_IRQ_PORT, BOARD_INITWIFI10CLICKSHIELD_IRQ_PIN, &IRQ_config);

    gpio_pin_config_t KFET_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO1_0 (pin N3)  */
    GPIO_PinInit(BOARD_INITWIFI10CLICKSHIELD_KFET_GPIO, BOARD_INITWIFI10CLICKSHIELD_KFET_PORT, BOARD_INITWIFI10CLICKSHIELD_KFET_PIN, &KFET_config);

    gpio_pin_config_t PWRON_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO3_14 (pin E3)  */
    GPIO_PinInit(BOARD_INITWIFI10CLICKSHIELD_PWRON_GPIO, BOARD_INITWIFI10CLICKSHIELD_PWRON_PORT, BOARD_INITWIFI10CLICKSHIELD_PWRON_PIN, &PWRON_config);

    IOCON->PIO[0][16] = ((IOCON->PIO[0][16] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT016 (pin M4) is configured as PIO0_16. */
                         | IOCON_PIO_FUNC(PIO016_FUNC_ALT0)

                         /* Select Analog/Digital mode.
                          * : Digital mode. */
                         | IOCON_PIO_DIGIMODE(PIO016_DIGIMODE_DIGITAL));

    IOCON->PIO[1][0] = ((IOCON->PIO[1][0] &
                         /* Mask bits to zero which are setting */
                         (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_MODE_MASK | IOCON_PIO_DIGIMODE_MASK)))

                        /* Selects pin function.
                         * : PORT10 (pin N3) is configured as PIO1_0. */
                        | IOCON_PIO_FUNC(PIO10_FUNC_ALT0)

                        /* Selects function mode (on-chip pull-up/pull-down resistor control).
                         * : Pull-down.
                         * Pull-down resistor enabled. */
                        | IOCON_PIO_MODE(PIO10_MODE_PULL_DOWN)

                        /* Select Analog/Digital mode.
                         * : Digital mode. */
                        | IOCON_PIO_DIGIMODE(PIO10_DIGIMODE_DIGITAL));

    IOCON->PIO[3][14] = ((IOCON->PIO[3][14] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_MODE_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT314 (pin E3) is configured as PIO3_14. */
                         | IOCON_PIO_FUNC(PIO314_FUNC_ALT0)

                         /* Selects function mode (on-chip pull-up/pull-down resistor control).
                          * : Pull-down.
                          * Pull-down resistor enabled. */
                         | IOCON_PIO_MODE(PIO314_MODE_PULL_DOWN)

                         /* Select Analog/Digital mode.
                          * : Digital mode. */
                         | IOCON_PIO_DIGIMODE(PIO314_DIGIMODE_DIGITAL));

    IOCON->PIO[3][20] = ((IOCON->PIO[3][20] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT320 (pin N2) is configured as FC9_SCK. */
                         | IOCON_PIO_FUNC(PIO320_FUNC_ALT1)

                         /* Select Analog/Digital mode.
                          * : Digital mode. */
                         | IOCON_PIO_DIGIMODE(PIO320_DIGIMODE_DIGITAL));

    IOCON->PIO[3][21] = ((IOCON->PIO[3][21] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT321 (pin P5) is configured as FC9_RXD_SDA_MOSI. */
                         | IOCON_PIO_FUNC(PIO321_FUNC_ALT1)

                         /* Select Analog/Digital mode.
                          * : Digital mode. */
                         | IOCON_PIO_DIGIMODE(PIO321_DIGIMODE_DIGITAL));

    IOCON->PIO[3][22] = ((IOCON->PIO[3][22] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT322 (pin N5) is configured as FC9_TXD_SCL_MISO. */
                         | IOCON_PIO_FUNC(PIO322_FUNC_ALT1)

                         /* Select Analog/Digital mode.
                          * : Digital mode. */
                         | IOCON_PIO_DIGIMODE(PIO322_DIGIMODE_DIGITAL));

    IOCON->PIO[3][30] = ((IOCON->PIO[3][30] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT330 (pin K13) is configured as FC9_CTS_SDA_SSEL0. */
                         | IOCON_PIO_FUNC(PIO330_FUNC_ALT1)

                         /* Select Analog/Digital mode.
                          * : Digital mode. */
                         | IOCON_PIO_DIGIMODE(PIO330_DIGIMODE_DIGITAL));
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/