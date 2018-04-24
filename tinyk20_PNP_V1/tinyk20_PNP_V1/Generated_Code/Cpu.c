/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : Cpu.c
**     Project     : tinyk20_PNP_V1
**     Processor   : MK20DN128VFT5
**     Component   : MK20DX128FT5
**     Version     : Component 01.001, Driver 01.04, CPU db: 3.00.000
**     Repository  : Kinetis
**     Datasheet   : K20P48M50SF0RM Rev. 1, Oct 2011
**     Compiler    : GNU C Compiler
**     Date/Time   : 2018-04-23, 17:57, # CodeGen: 27
**     Abstract    :
**
**     Settings    :
**          Component name                                 : Cpu
**          CPU type                                       : MK20DN128VFT5
**          CPU                                            : CPU
**          MemModelDev                                    : MemModel_NoFlexMem
**          Clock settings                                 : 
**            Internal oscillator                          : 
**              Slow internal reference clock [kHz]        : 32.768
**              Initialize slow trim value                 : no
**              Fast internal reference clock [MHz]        : 4
**              Initialize fast trim value                 : no
**            RTC oscillator                               : Disabled
**            System oscillator 0                          : Enabled
**              Clock source                               : External crystal
**                Clock input pin                          : 
**                  Pin name                               : EXTAL0/PTA18/FTM0_FLT2/FTM_CLKIN0
**                  Pin signal                             : EXTAL
**                Clock output pin                         : 
**                  Pin name                               : XTAL0/PTA19/FTM1_FLT0/FTM_CLKIN1/LPTMR0_ALT1
**                  Pin signal                             : XTAL
**                Clock frequency [MHz]                    : 8
**                Capacitor load                           : 0pF
**                Oscillator operating mode                : Low power
**            Clock source settings                        : 1
**              Clock source setting 0                     : 
**                Internal reference clock                 : 
**                  MCGIRCLK clock                         : Enabled
**                  MCGIRCLK in stop                       : Disabled
**                  MCGIRCLK source                        : Slow
**                  MCGIRCLK clock [MHz]                   : 0.032768
**                External reference clock                 : 
**                  OSC0ERCLK clock                        : Enabled
**                  OSC0ERCLK in stop                      : Disabled
**                  OSC0ERCLK clock [MHz]                  : 8
**                  ERCLK32K clock source                  : Auto select
**                  ERCLK32K. clock [kHz]                  : 0.001
**                MCG settings                             : 
**                  MCG mode                               : PEE
**                  MCG output clock                       : PLL clock
**                  MCG output [MHz]                       : 100
**                  MCG external ref. clock source         : System oscillator 0
**                  MCG external ref. clock [MHz]          : 8
**                  Clock monitor                          : Disabled
**                  FLL settings                           : 
**                    FLL module                           : Disabled
**                    FLL output [MHz]                     : 0
**                    MCGFFCLK clock [kHz]                 : 31.25
**                    Reference clock source               : External clock
**                      Reference clock divider            : Auto select
**                    FLL reference clock [kHz]            : 31.25
**                    Multiplication factor                : Auto select
**                  PLL 0 settings                         : 
**                    PLL module                           : Enabled
**                    PLL module in Stop                   : Disabled
**                    PLL output [MHz]                     : 100
**                    Reference clock divider              : Auto select
**                    PLL reference clock [MHz]            : 4
**                    Multiplication factor                : Auto select
**                    Loss of lock interrupt               : Disabled
**          Initialization priority                        : minimal priority
**          Watchdog disable                               : yes
**          Internal peripherals                           : 
**            NMI pin                                      : Enabled
**              NMI Pin                                    : TSI0_CH5/PTA4/LLWU_P3/FTM0_CH1/NMI_b/EZP_CS_b
**              NMI Pin signal                             : 
**            Reset control                                : Enabled
**              Reset pin                                  : RESET_b
**              Reset pin signal                           : 
**              Filter in STOP                             : Disabled
**              Filter in RUN/WAIT                         : Disabled
**              Filter width                               : 1
**            Debug interface (JTAG)                       : 
**              JTAG Mode                                  : JTAG
**                TDI                                      : Disabled
**                TDO                                      : Disabled
**                TCK                                      : Enabled
**                  TCK Pin                                : TSI0_CH1/PTA0/UART0_CTS_b/UART0_COL_b/FTM0_CH5/JTAG_TCLK/SWD_CLK/EZP_CLK
**                  TCK Pin signal                         : 
**                TMS                                      : Enabled
**                  TMS Pin                                : TSI0_CH4/PTA3/UART0_RTS_b/FTM0_CH0/JTAG_TMS/SWD_DIO
**                  TMS Pin signal                         : 
**                nTRST                                    : Disabled
**            Flash memory organization                    : 
**              Flash blocks                               : 1
**                Flash block 0                            : PFlash
**                  Address                                : 0x0
**                  Size                                   : 131072
**                  Write unit size                        : 4
**                  Erase unit size                        : 1024
**                  Protection unit size                   : 4096
**            Flexible memory controller                   : Disabled
**            Flash configuration field                    : Disabled
**            System control block settings                : Disabled
**            Power management controller                  : 
**              LVD reset                                  : Enabled
**              LVD voltage treshold                       : Low
**              LVW voltage treshold                       : Low
**              Bandgap buffer                             : Disabled
**              LVD interrupt                              : 
**                Interrupt                                : INT_LVD_LVW
**                Interrupt request                        : Disabled
**                Interrupt priority                       : 0 (Highest)
**                LVD interrupt                            : Disabled
**                LVW interrupt                            : Disabled
**            System Integration Module                    : 
**              CLKOUT pin control                         : Disabled
**              Clock gating control                       : Disabled
**          CPU interrupts/resets                          : 
**            NMI interrupt                                : Enabled
**              Interrupt                                  : INT_NMI
**            Hard Fault                                   : Disabled
**            Bus Fault                                    : Disabled
**            Usage Fault                                  : Disabled
**            Supervisor Call                              : Disabled
**            Pendable Service                             : Disabled
**            MCG                                          : Disabled
**          Low power mode settings                        : 
**            Allowed power modes                          : 
**              Very low power modes                       : Not allowed
**              Low leakage stop mode                      : Not allowed
**              Very low leakage stop mode                 : Not allowed
**            LLWU settings                                : Disabled
**            Operation mode settings                      : 
**              WAIT operation mode                        : 
**                Return to wait after ISR                 : no
**              SLEEP operation mode                       : 
**                Return to stop after ISR                 : no
**              STOP operation mode                        : Disabled
**          Clock configurations                           : 1
**            Clock configuration 0                        : 
**              __IRC_32kHz                                : 0.032768
**              __IRC_4MHz                                 : 2
**              __SYSTEM_OSC                               : 8
**              __RTC_OSC                                  : 0
**              Very low power mode                        : Disabled
**              Clock source setting                       : configuration 0
**                MCG mode                                 : PEE
**                MCG output [MHz]                         : 100
**                MCGIRCLK clock [MHz]                     : 0.032768
**                OSCERCLK clock [MHz]                     : 8
**                ERCLK32K. clock [kHz]                    : 0.001
**                MCGFFCLK [kHz]                           : 31.25
**              System clocks                              : 
**                Core clock prescaler                     : Auto select
**                Core clock                               : 50
**                Bus clock prescaler                      : Auto select
**                Bus clock                                : 25
**                Flash clock prescaler                    : Auto select
**                Flash clock                              : 25
**                PLL/FLL clock selection                  : PLL clock
**                  Clock frequency [MHz]                  : 100
**     Contents    :
**         No public methods
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file Cpu.c
** @version 01.04
** @brief
**
*/         
/*!
**  @addtogroup Cpu_module Cpu module documentation
**  @{
*/         

/* MODULE Cpu. */

#include "FreeRTOS.h" /* FreeRTOS interface */
#include "LED1.h"
#include "LEDpin1.h"
#include "BitIoLdd1.h"
#include "MCUC1.h"
#include "SW_FWD.h"
#include "BitIoLdd2.h"
#include "SW_REV.h"
#include "BitIoLdd3.h"
#include "SW_MSW.h"
#include "BitIoLdd4.h"
#include "ENC1.h"
#include "BitIoLdd5.h"
#include "PWMA.h"
#include "PwmLdd1.h"
#include "TU1.h"
#include "DIRA.h"
#include "BitIoLdd6.h"
#include "DIRB.h"
#include "BitIoLdd7.h"
#include "PWMB.h"
#include "PwmLdd2.h"
#include "HMODE.h"
#include "BitIoLdd8.h"
#include "FRTOS1.h"
#include "UTIL1.h"
#include "SYS1.h"
#include "RTT1.h"
#include "WAIT1.h"
#include "CLS1.h"
#include "XF1.h"
#include "CS1.h"
#include "LED2.h"
#include "LEDpin2.h"
#include "BitIoLdd9.h"
#include "AS1.h"
#include "ASerialLdd1.h"
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "Events.h"
#include "Cpu.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Global variables */
volatile uint8_t SR_reg;               /* Current value of the FAULTMASK register */
volatile uint8_t SR_lock = 0x00U;      /* Lock */

/*
** ===================================================================
**     Method      :  Cpu_SetBASEPRI (component MK20DX128FT5)
**
**     Description :
**         This method sets the BASEPRI core register.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
void Cpu_SetBASEPRI(uint32_t Level);

/*
** ===================================================================
**     Method      :  Cpu_INT_NMIInterrupt (component MK20DX128FT5)
**
**     Description :
**         This ISR services the Non Maskable Interrupt interrupt.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
PE_ISR(Cpu_INT_NMIInterrupt)
{
  Cpu_OnNMIINT();
}

/*
** ===================================================================
**     Method      :  Cpu_Cpu_Interrupt (component MK20DX128FT5)
**
**     Description :
**         This ISR services an unused interrupt/exception vector.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
PE_ISR(Cpu_Interrupt)
{
  /* This code can be changed using the CPU component property "Build Options / Unhandled int code" */
  PE_DEBUGHALT();
}


/*** !!! Here you can place your own code using property "User data declarations" on the build options tab. !!! ***/

/*lint -esym(765,__init_hardware) Disable MISRA rule (8.10) checking for symbols (__init_hardware). The function is linked to the EWL library */
/*lint -esym(765,Cpu_Interrupt) Disable MISRA rule (8.10) checking for symbols (Cpu_Interrupt). */
void __init_hardware(void)
{

  /*** !!! Here you can place your own code before PE initialization using property "User code before PE initialization" on the build options tab. !!! ***/

  /*** ### MK20DN128VFT5 "Cpu" init code ... ***/
  /*** PE initialization code after reset ***/
  SCB_VTOR = (uint32_t)(&__vect_table); /* Set the interrupt vector table position */
  /* Disable the WDOG module */
  /* WDOG_UNLOCK: WDOGUNLOCK=0xC520 */
  WDOG_UNLOCK = WDOG_UNLOCK_WDOGUNLOCK(0xC520); /* Key 1 */
  /* WDOG_UNLOCK: WDOGUNLOCK=0xD928 */
  WDOG_UNLOCK = WDOG_UNLOCK_WDOGUNLOCK(0xD928); /* Key 2 */
  /* WDOG_STCTRLH: ??=0,DISTESTWDOG=0,BYTESEL=0,TESTSEL=0,TESTWDOG=0,??=0,??=1,WAITEN=1,STOPEN=1,DBGEN=0,ALLOWUPDATE=1,WINEN=0,IRQRSTEN=0,CLKSRC=1,WDOGEN=0 */
  WDOG_STCTRLH = WDOG_STCTRLH_BYTESEL(0x00) |
                 WDOG_STCTRLH_WAITEN_MASK |
                 WDOG_STCTRLH_STOPEN_MASK |
                 WDOG_STCTRLH_ALLOWUPDATE_MASK |
                 WDOG_STCTRLH_CLKSRC_MASK |
                 0x0100U;

  /* System clock initialization */
  /* SIM_CLKDIV1: OUTDIV1=0,OUTDIV2=1,??=0,??=0,??=0,??=0,OUTDIV4=3,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0 */
  SIM_CLKDIV1 = SIM_CLKDIV1_OUTDIV1(0x00) |
                SIM_CLKDIV1_OUTDIV2(0x01) |
                SIM_CLKDIV1_OUTDIV4(0x03); /* Set the system prescalers to safe value */
  /* SIM_SCGC5: PORTD=1,PORTC=1,PORTB=1,PORTA=1 */
  SIM_SCGC5 |= SIM_SCGC5_PORTD_MASK |
               SIM_SCGC5_PORTC_MASK |
               SIM_SCGC5_PORTB_MASK |
               SIM_SCGC5_PORTA_MASK;   /* Enable clock gate for ports to enable pin routing */
  if ((PMC_REGSC & PMC_REGSC_ACKISO_MASK) != 0x0U) {
    /* PMC_REGSC: ACKISO=1 */
    PMC_REGSC |= PMC_REGSC_ACKISO_MASK; /* Release IO pads after wakeup from VLLS mode. */
  }
  /* SIM_CLKDIV1: OUTDIV1=1,OUTDIV2=3,??=0,??=0,??=0,??=0,OUTDIV4=3,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0 */
  SIM_CLKDIV1 = SIM_CLKDIV1_OUTDIV1(0x01) |
                SIM_CLKDIV1_OUTDIV2(0x03) |
                SIM_CLKDIV1_OUTDIV4(0x03); /* Update system prescalers */
  /* SIM_SOPT2: PLLFLLSEL=1 */
  SIM_SOPT2 |= SIM_SOPT2_PLLFLLSEL_MASK; /* Select PLL as a clock source for various peripherals */
  /* SIM_SOPT1: OSC32KSEL=3 */
  SIM_SOPT1 |= SIM_SOPT1_OSC32KSEL(0x03); /* LPO 1kHz oscillator drives 32 kHz clock for various peripherals */
  /* PORTA_PCR18: ISF=0,MUX=0 */
  PORTA_PCR18 &= (uint32_t)~(uint32_t)((PORT_PCR_ISF_MASK | PORT_PCR_MUX(0x07)));
  /* PORTA_PCR19: ISF=0,MUX=0 */
  PORTA_PCR19 &= (uint32_t)~(uint32_t)((PORT_PCR_ISF_MASK | PORT_PCR_MUX(0x07)));
  /* Switch to FBE Mode */
  /* MCG_C2: LOCRE0=0,??=0,RANGE0=2,HGO0=0,EREFS0=1,LP=0,IRCS=0 */
  MCG_C2 = (MCG_C2_RANGE0(0x02) | MCG_C2_EREFS0_MASK);
  /* OSC0_CR: ERCLKEN=1,??=0,EREFSTEN=0,??=0,SC2P=0,SC4P=0,SC8P=0,SC16P=0 */
  OSC0_CR = OSC_CR_ERCLKEN_MASK;
  /* MCG_C7: OSCSEL=0 */
  MCG_C7 &= (uint8_t)~(uint8_t)(MCG_C7_OSCSEL_MASK);
  /* MCG_C1: CLKS=2,FRDIV=3,IREFS=0,IRCLKEN=1,IREFSTEN=0 */
  MCG_C1 = (MCG_C1_CLKS(0x02) | MCG_C1_FRDIV(0x03) | MCG_C1_IRCLKEN_MASK);
  /* MCG_C4: DMX32=0,DRST_DRS=0 */
  MCG_C4 &= (uint8_t)~(uint8_t)((MCG_C4_DMX32_MASK | MCG_C4_DRST_DRS(0x03)));
  /* MCG_C5: ??=0,PLLCLKEN0=0,PLLSTEN0=0,PRDIV0=1 */
  MCG_C5 = MCG_C5_PRDIV0(0x01);
  /* MCG_C6: LOLIE0=0,PLLS=0,CME0=0,VDIV0=1 */
  MCG_C6 = MCG_C6_VDIV0(0x01);
  while((MCG_S & MCG_S_OSCINIT0_MASK) == 0x00U) { /* Check that the oscillator is running */
  }
  while((MCG_S & MCG_S_IREFST_MASK) != 0x00U) { /* Check that the source of the FLL reference clock is the external reference clock. */
  }
  while((MCG_S & 0x0CU) != 0x08U) {    /* Wait until external reference clock is selected as MCG output */
  }
  /* Switch to PBE Mode */
  /* MCG_C6: LOLIE0=0,PLLS=1,CME0=0,VDIV0=1 */
  MCG_C6 = (MCG_C6_PLLS_MASK | MCG_C6_VDIV0(0x01));
  while((MCG_S & 0x0CU) != 0x08U) {    /* Wait until external reference clock is selected as MCG output */
  }
  while((MCG_S & MCG_S_LOCK0_MASK) == 0x00U) { /* Wait until locked */
  }
  /* Switch to PEE Mode */
  /* MCG_C1: CLKS=0,FRDIV=3,IREFS=0,IRCLKEN=1,IREFSTEN=0 */
  MCG_C1 = (MCG_C1_CLKS(0x00) | MCG_C1_FRDIV(0x03) | MCG_C1_IRCLKEN_MASK);
  while((MCG_S & 0x0CU) != 0x0CU) {    /* Wait until output of the PLL is selected */
  }
  /*** End of PE initialization code after reset ***/

  /*** !!! Here you can place your own code after PE initialization using property "User code after PE initialization" on the build options tab. !!! ***/

}

/*
** ===================================================================
**     Method      :  Cpu_SetBASEPRI (component MK20DX128FT5)
**
**     Description :
**         This method sets the BASEPRI core register.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
/*lint -save  -e586 -e950 Disable MISRA rule (2.1,1.1) checking. */
#ifdef _lint
  #define Cpu_SetBASEPRI(Level)  /* empty */
#else
void Cpu_SetBASEPRI(uint32_t Level) {
  __asm ("msr basepri, %[input]"::[input] "r" (Level):);
}
#endif
/*lint -restore Enable MISRA rule (2.1,1.1) checking. */


/*
** ===================================================================
**     Method      :  PE_low_level_init (component MK20DX128FT5)
**
**     Description :
**         Initializes beans and provides common register initialization. 
**         The method is called automatically as a part of the 
**         application initialization code.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
void PE_low_level_init(void)
{
  #ifdef PEX_RTOS_INIT
    PEX_RTOS_INIT();                   /* Initialization of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
      /* Initialization of the SIM module */
  /* PORTA_PCR4: ISF=0,MUX=7 */
  PORTA_PCR4 = (uint32_t)((PORTA_PCR4 & (uint32_t)~(uint32_t)(
                PORT_PCR_ISF_MASK
               )) | (uint32_t)(
                PORT_PCR_MUX(0x07)
               ));
        /* Initialization of the RCM module */
  /* RCM_RPFW: RSTFLTSEL=0 */
  RCM_RPFW &= (uint8_t)~(uint8_t)(RCM_RPFW_RSTFLTSEL(0x1F));
  /* RCM_RPFC: RSTFLTSS=0,RSTFLTSRW=0 */
  RCM_RPFC &= (uint8_t)~(uint8_t)(
               RCM_RPFC_RSTFLTSS_MASK |
               RCM_RPFC_RSTFLTSRW(0x03)
              );
      /* Initialization of the PMC module */
  /* PMC_REGSC: ACKISO=0,BGBE=0 */
  PMC_REGSC &= (uint8_t)~(uint8_t)(
                PMC_REGSC_ACKISO_MASK |
                PMC_REGSC_BGBE_MASK
               );
  /* PMC_LVDSC1: LVDACK=1,LVDIE=0,LVDRE=1,LVDV=0 */
  PMC_LVDSC1 = (uint8_t)((PMC_LVDSC1 & (uint8_t)~(uint8_t)(
                PMC_LVDSC1_LVDIE_MASK |
                PMC_LVDSC1_LVDV(0x03)
               )) | (uint8_t)(
                PMC_LVDSC1_LVDACK_MASK |
                PMC_LVDSC1_LVDRE_MASK
               ));
  /* PMC_LVDSC2: LVWACK=1,LVWIE=0,LVWV=0 */
  PMC_LVDSC2 = (uint8_t)((PMC_LVDSC2 & (uint8_t)~(uint8_t)(
                PMC_LVDSC2_LVWIE_MASK |
                PMC_LVDSC2_LVWV(0x03)
               )) | (uint8_t)(
                PMC_LVDSC2_LVWACK_MASK
               ));
  /* SMC_PMPROT: ??=0,??=0,AVLP=0,??=0,ALLS=0,??=0,AVLLS=0,??=0 */
  SMC_PMPROT = 0x00U;                  /* Setup Power mode protection register */
  /* Common initialization of the CPU registers */
  /* NVICIP8: PRI8=0 */
  NVICIP8 = NVIC_IP_PRI8(0x00);
  /* ### McuLibConfig "MCUC1" init code ... */
  /* ### BitIO_LDD "BitIoLdd1" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)BitIoLdd1_Init(NULL);
  /* ### LED "LED1" init code ... */
  LED1_Init(); /* initialize LED driver */
  /* ### BitIO_LDD "BitIoLdd2" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)BitIoLdd2_Init(NULL);
  /* ### BitIO_LDD "BitIoLdd3" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)BitIoLdd3_Init(NULL);
  /* ### BitIO_LDD "BitIoLdd4" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)BitIoLdd4_Init(NULL);
  /* ### BitIO_LDD "BitIoLdd5" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)BitIoLdd5_Init(NULL);
  /* ### PWM_LDD "PwmLdd1" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)PwmLdd1_Init(NULL);
  /* ### BitIO_LDD "BitIoLdd6" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)BitIoLdd6_Init(NULL);
  /* ### BitIO_LDD "BitIoLdd7" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)BitIoLdd7_Init(NULL);
  /* ### PWM_LDD "PwmLdd2" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)PwmLdd2_Init(NULL);
  /* ### BitIO_LDD "BitIoLdd8" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)BitIoLdd8_Init(NULL);
  /* ### FreeRTOS "FRTOS1" init code ... */
  /* PEX_RTOS_INIT() should have been called at this time already with the most critical setup */
  WAIT1_Init();
  /* ### XFormat "XF1" init code ... */
  /* ### CriticalSection "CS1" init code ... */
  /* ### Asynchro serial "AS1" init code ... */
  AS1_Init();
  /* ### Shell "CLS1" init code ... */
  CLS1_Init(); /* initialize shell */
  /* ### SeggerRTT "RTT1" init code ... */
  RTT1_Init();
  /* ### SeggerSystemView "SYS1" init code ... */
  SYS1_Init();
  /* ### BitIO_LDD "BitIoLdd9" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)BitIoLdd9_Init(NULL);
  /* ### LED "LED2" init code ... */
  LED2_Init(); /* initialize LED driver */
}

/* END Cpu. */

#ifdef __cplusplus
}  /* extern "C" */
#endif

/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
