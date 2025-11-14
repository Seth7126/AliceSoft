// 函数: sub_4a9670
// 地址: 0x4a9670
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bccd8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IDecompressor::nutria::CZlibDecompressor::VTable** result

if (*arg1 != arg1[1])
    struct commonsystemdata::CZlibCompressor::VTable* const var_14_1 =
        &commonsystemdata::CZlibCompressor::`vftable'
    int32_t var_10_1 = 0
    int32_t var_4 = 0
    struct IDecompressor::nutria::CZlibDecompressor::VTable** ebx_1 = sub_620e90(0x6e0750)
    struct IDecompressor::nutria::CZlibDecompressor::VTable** var_10_2 = ebx_1
    
    if (ebx_1 == 0)
        arg1.b = 0
    else
        int32_t ecx_1 = *arg1
        int32_t ebp_2 = arg1[1] - ecx_1
        result = (*ebx_1)->vFunc_2(ecx_1, ebp_2)
        
        if (result == 0)
            arg1.b = 0
        else
            int32_t* eax_5 = (*result)->__offset(0x14).d(eax_2) & 0x80000003
            bool cond:0_1 = eax_5 == 0
            
            if (eax_5 s< 0)
                void* eax_7 = (eax_5 - 1) | 0xfffffffc
                eax_5 = eax_7 + 1
                cond:0_1 = eax_7 == 0xffffffff
            
            if (not(cond:0_1))
                struct IDecompressor::nutria::CZlibDecompressor::VTable* esi_1 = *result
                esi_1->vFunc_3(esi_1->__offset(0x14).d() + 4 - eax_5)
            
            int32_t eax_12
            int32_t edx_2
            edx_2:eax_12 = sx.q((*result)->__offset(0x14).d())
            int32_t var_18 = ((eax_12 + (edx_2 & 3)) s>> 2) + 1
            
            if ((*(*arg2 + 0x30))(&var_18, 1) != 0)
                bool cond:1_1 = (*(*arg2 + 0x24))(0, ebp_2) == 0
                struct IDecompressor::nutria::CZlibDecompressor::VTable* eax_19 = *result
                
                if (cond:1_1)
                    eax_19->vFunc_1()
                    arg1.b = 0
                else
                    sub_69d850((*(*arg2 + 0x10))(1, 
                        (*result)->__offset(0x18).d(eax_19->__offset(0x14).d())))
                    (*result)->vFunc_1()
                    arg1.b = 1
            else
                (*result)->vFunc_1()
                arg1.b = 0
    
    int32_t var_4_1 = 0xffffffff
    
    if (ebx_1 != 0)
        (*ebx_1)->vFunc_1(eax_2)
    
    result.b = arg1.b
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
