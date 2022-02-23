/*****************************************************/
/* File   : LinTp.cpp                                */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "LinTp_EcuM.h"
#include "LinTp_SchM.h"
#include "LinTp_Unused.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_LinTp:
      public abstract_module
   ,  public interface_LinTp_EcuM
   ,  public interface_LinTp_SchM
{
   public:
      FUNC(void, LINTP_CODE) InitFunction   (void);
      FUNC(void, LINTP_CODE) DeInitFunction (void);
      FUNC(void, LINTP_CODE) MainFunction   (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
module_LinTp LinTp;

interface_LinTp_EcuM *EcuM_Client_ptr_LinTp = &LinTp;
interface_LinTp_SchM *SchM_Client_ptr_LinTp = &LinTp;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, LINTP_CODE) module_LinTp::InitFunction(void){
}

FUNC(void, LINTP_CODE) module_LinTp::DeInitFunction(void){
}

FUNC(void, LINTP_CODE) module_LinTp::MainFunction(void){
}

FUNC(void, LINTP_CODE) class_LinTp_Unused::GetVersionInfo(void){
}

FUNC(void, LINTP_CODE) class_LinTp_Unused::Transmit(void){
}

FUNC(void, LINTP_CODE) class_LinTp_Unused::Shutdown(void){
}

FUNC(void, LINTP_CODE) class_LinTp_Unused::CancelTransmit(void){
}

FUNC(void, LINTP_CODE) class_LinTp_Unused::ChangeParameter(void){
}

FUNC(void, LINTP_CODE) class_LinTp_Unused::CancelReceive(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

