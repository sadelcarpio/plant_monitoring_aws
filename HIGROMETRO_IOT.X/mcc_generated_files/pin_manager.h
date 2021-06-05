/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC18F57Q43
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set sensor aliases
#define sensor_TRIS                 TRISAbits.TRISA0
#define sensor_LAT                  LATAbits.LATA0
#define sensor_PORT                 PORTAbits.RA0
#define sensor_WPU                  WPUAbits.WPUA0
#define sensor_OD                   ODCONAbits.ODCA0
#define sensor_ANS                  ANSELAbits.ANSELA0
#define sensor_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define sensor_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define sensor_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define sensor_GetValue()           PORTAbits.RA0
#define sensor_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define sensor_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define sensor_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define sensor_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define sensor_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define sensor_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define sensor_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define sensor_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set RA5 procedures
#define RA5_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define RA5_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define RA5_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define RA5_GetValue()              PORTAbits.RA5
#define RA5_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define RA5_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define RA5_SetPullup()             do { WPUAbits.WPUA5 = 1; } while(0)
#define RA5_ResetPullup()           do { WPUAbits.WPUA5 = 0; } while(0)
#define RA5_SetAnalogMode()         do { ANSELAbits.ANSELA5 = 1; } while(0)
#define RA5_SetDigitalMode()        do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set sigfox_rst aliases
#define sigfox_rst_TRIS                 TRISBbits.TRISB4
#define sigfox_rst_LAT                  LATBbits.LATB4
#define sigfox_rst_PORT                 PORTBbits.RB4
#define sigfox_rst_WPU                  WPUBbits.WPUB4
#define sigfox_rst_OD                   ODCONBbits.ODCB4
#define sigfox_rst_ANS                  ANSELBbits.ANSELB4
#define sigfox_rst_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define sigfox_rst_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define sigfox_rst_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define sigfox_rst_GetValue()           PORTBbits.RB4
#define sigfox_rst_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define sigfox_rst_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define sigfox_rst_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define sigfox_rst_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define sigfox_rst_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define sigfox_rst_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define sigfox_rst_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define sigfox_rst_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set RC2 procedures
#define RC2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define RC2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define RC2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define RC2_GetValue()              PORTCbits.RC2
#define RC2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define RC2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define RC2_SetPullup()             do { WPUCbits.WPUC2 = 1; } while(0)
#define RC2_ResetPullup()           do { WPUCbits.WPUC2 = 0; } while(0)
#define RC2_SetAnalogMode()         do { ANSELCbits.ANSELC2 = 1; } while(0)
#define RC2_SetDigitalMode()        do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set RC3 procedures
#define RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RC3_GetValue()              PORTCbits.RC3
#define RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define RC3_SetPullup()             do { WPUCbits.WPUC3 = 1; } while(0)
#define RC3_ResetPullup()           do { WPUCbits.WPUC3 = 0; } while(0)
#define RC3_SetAnalogMode()         do { ANSELCbits.ANSELC3 = 1; } while(0)
#define RC3_SetDigitalMode()        do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set RF0 procedures
#define RF0_SetHigh()            do { LATFbits.LATF0 = 1; } while(0)
#define RF0_SetLow()             do { LATFbits.LATF0 = 0; } while(0)
#define RF0_Toggle()             do { LATFbits.LATF0 = ~LATFbits.LATF0; } while(0)
#define RF0_GetValue()              PORTFbits.RF0
#define RF0_SetDigitalInput()    do { TRISFbits.TRISF0 = 1; } while(0)
#define RF0_SetDigitalOutput()   do { TRISFbits.TRISF0 = 0; } while(0)
#define RF0_SetPullup()             do { WPUFbits.WPUF0 = 1; } while(0)
#define RF0_ResetPullup()           do { WPUFbits.WPUF0 = 0; } while(0)
#define RF0_SetAnalogMode()         do { ANSELFbits.ANSELF0 = 1; } while(0)
#define RF0_SetDigitalMode()        do { ANSELFbits.ANSELF0 = 0; } while(0)

// get/set LED_TEST aliases
#define LED_TEST_TRIS                 TRISFbits.TRISF3
#define LED_TEST_LAT                  LATFbits.LATF3
#define LED_TEST_PORT                 PORTFbits.RF3
#define LED_TEST_WPU                  WPUFbits.WPUF3
#define LED_TEST_OD                   ODCONFbits.ODCF3
#define LED_TEST_ANS                  ANSELFbits.ANSELF3
#define LED_TEST_SetHigh()            do { LATFbits.LATF3 = 1; } while(0)
#define LED_TEST_SetLow()             do { LATFbits.LATF3 = 0; } while(0)
#define LED_TEST_Toggle()             do { LATFbits.LATF3 = ~LATFbits.LATF3; } while(0)
#define LED_TEST_GetValue()           PORTFbits.RF3
#define LED_TEST_SetDigitalInput()    do { TRISFbits.TRISF3 = 1; } while(0)
#define LED_TEST_SetDigitalOutput()   do { TRISFbits.TRISF3 = 0; } while(0)
#define LED_TEST_SetPullup()          do { WPUFbits.WPUF3 = 1; } while(0)
#define LED_TEST_ResetPullup()        do { WPUFbits.WPUF3 = 0; } while(0)
#define LED_TEST_SetPushPull()        do { ODCONFbits.ODCF3 = 0; } while(0)
#define LED_TEST_SetOpenDrain()       do { ODCONFbits.ODCF3 = 1; } while(0)
#define LED_TEST_SetAnalogMode()      do { ANSELFbits.ANSELF3 = 1; } while(0)
#define LED_TEST_SetDigitalMode()     do { ANSELFbits.ANSELF3 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/