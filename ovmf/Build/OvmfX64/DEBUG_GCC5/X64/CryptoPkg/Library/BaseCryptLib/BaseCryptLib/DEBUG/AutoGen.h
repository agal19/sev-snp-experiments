/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_be3bb803_91b6_4da0_bd91_a8b21c18ca5d
#define _AUTOGENH_be3bb803_91b6_4da0_bd91_a8b21c18ca5d

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiCryptoPkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdEcEnabled  0U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdEcEnabled;
#define _PCD_GET_MODE_BOOL_PcdEcEnabled  _gPcd_FixedAtBuild_PcdEcEnabled
//#define _PCD_SET_MODE_BOOL_PcdEcEnabled  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdEcEnabled 0
#define _PCD_SIZE_PcdEcEnabled 1
#define _PCD_GET_MODE_SIZE_PcdEcEnabled _PCD_SIZE_PcdEcEnabled


#ifdef __cplusplus
}
#endif

#endif
