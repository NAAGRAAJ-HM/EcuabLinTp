/******************************************************************************/
/* File   : LinTp.cpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CfgLinTp.hpp"
#include "LinTp_core.hpp"
#include "infLinTp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define LINTP_AR_RELEASE_VERSION_MAJOR                                         4
#define LINTP_AR_RELEASE_VERSION_MINOR                                         3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(LINTP_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible LINTP_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(LINTP_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible LINTP_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_LinTp:
      public abstract_module
   ,  public class_LinTp_Functionality
{
   public:
      module_LinTp(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, LINTP_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, LINTP_CONFIG_DATA, LINTP_APPL_CONST) lptrCfgModule
      );
      FUNC(void, LINTP_CODE) DeInitFunction (void);
      FUNC(void, LINTP_CODE) MainFunction   (void);
      LINTP_CORE_FUNCTIONALITIES
};

extern VAR(module_LinTp, LINTP_VAR) LinTp;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, LINTP_VAR, LINTP_CONST) gptrinfEcuMClient_LinTp = &LinTp;
CONSTP2VAR(infDcmClient,  LINTP_VAR, LINTP_CONST) gptrinfDcmClient_LinTp  = &LinTp;
CONSTP2VAR(infSchMClient, LINTP_VAR, LINTP_CONST) gptrinfSchMClient_LinTp = &LinTp;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_LinTp, LINTP_VAR) LinTp(
   {
         LINTP_AR_RELEASE_VERSION_MAJOR
      ,  LINTP_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, LINTP_CODE) module_LinTp::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, LINTP_CONFIG_DATA, LINTP_APPL_CONST) lptrCfgModule
){
#if(STD_ON == LinTp_InitCheck)
   if(E_OK == IsInitDone){
#if(STD_ON == LinTp_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == LinTp_DevErrorDetect)
         Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
         );
#endif
      }
      else{
         if(STD_LOW){
// check lptrCfgModule for memory faults
            lptrCfg = lptrCfgModule;
         }
         else{
// use PBcfgCanIf as back-up configuration
            lptrCfg = &PBcfgLinTp;
         }
      }
      IsInitDone = E_OK;
#if(STD_ON == LinTp_InitCheck)
   }
#endif
}

FUNC(void, LINTP_CODE) module_LinTp::DeInitFunction(void){
#if(STD_ON == LinTp_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == LinTp_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      IsInitDone = E_NOT_OK;
#if(STD_ON == LinTp_InitCheck)
   }
#endif
}

FUNC(void, LINTP_CODE) module_LinTp::MainFunction(void){
#if(STD_ON == LinTp_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == LinTp_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
#if(STD_ON == LinTp_InitCheck)
   }
#endif
}

FUNC(void, LINTP_CODE) class_LinTp_Functionality::Transmit(void){
}

FUNC(void, LINTP_CODE) class_LinTp_Functionality::Shutdown(void){
}

FUNC(void, LINTP_CODE) class_LinTp_Functionality::CancelTransmit(void){
}

FUNC(void, LINTP_CODE) class_LinTp_Functionality::ChangeParameter(void){
}

FUNC(void, LINTP_CODE) class_LinTp_Functionality::CancelReceive(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

