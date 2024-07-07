#pragma once

#ifdef USE_VL_MACRO
extern "C"
void VxVirtualizationBegin();
extern "C"
void VxVirtualizationEnd();

extern "C"
void VxObfuscationBegin();
extern "C"
void VxObfuscationEnd();

extern "C"
void VxCodeFlatteningBegin();
extern "C"
void VxCodeFlatteningEnd();

//

#define VL_OBFUSCATION_BEGIN               VxObfuscationBegin()
#define VL_OBFUSCATION_END                 VxObfuscationEnd()

#define VL_CODE_FLATTENING_BEGIN           VxCodeFlatteningBegin()
#define VL_CODE_FLATTENING_END             VxCodeFlatteningEnd()

#define VL_VIRTUALIZATION_BEGIN            VxVirtualizationBegin()
#define VL_VIRTUALIZATION_END              VxVirtualizationEnd()
#else
#define VL_OBFUSCATION_BEGIN            
#define VL_OBFUSCATION_END              

#define VL_CODE_FLATTENING_BEGIN        
#define VL_CODE_FLATTENING_END          

#define VL_VIRTUALIZATION_BEGIN         
#define VL_VIRTUALIZATION_END           
#endif