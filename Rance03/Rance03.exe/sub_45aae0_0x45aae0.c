// 函数: sub_45aae0
// 地址: 0x45aae0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b816b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t arg_4
int32_t ebp = arg_4
char* esi = *(ebp + 4)
int32_t edi = *(ebp + 8)
uint32_t ecx_6

if (&esi[4] u<= edi)
    ecx_6 = ((zx.d(esi[3]) << 8 | zx.d(esi[2])) << 8 | zx.d(esi[1])) << 8 | zx.d(*esi)
    *(ebp + 4) = &esi[4]

struct _EXCEPTION_REGISTRATION_RECORD** result

if (&esi[4] u> edi || &esi[8] u> edi)
label_45ad04:
    result.b = 0
else
    int32_t esi_1 = 0
    int32_t var_24_1 = 0
    uint32_t ebx_7 = ((zx.d(esi[7]) << 8 | zx.d(esi[6])) << 8 | zx.d(esi[5])) << 8 | zx.d(esi[4])
    uint32_t var_1c_1 = ebx_7
    *(ebp + 4) = &esi[8]
    
    if (ecx_6 s> 0)
        int32_t* edi_2 = &arg2[5]
        int32_t* var_18_1 = edi_2
        
        do
            struct exfile::CDefineDataArray::VTable** eax_9 = sub_69adc6(0x10)
            
            if (eax_9 == 0)
                eax_9 = nullptr
            else
                *eax_9 = &exfile::CDefineDataArray::`vftable'
                eax_9[1] = 0
                eax_9[2] = 0
                eax_9[3] = 0
            
            arg_4 = eax_9
            sub_412de0(edi_2, &arg_4)
            int32_t eax_10 = *edi_2
            int32_t ecx_10 = (edi_2[1] - *edi_2) s>> 2
            arg_4 = 0
            arg2 = *(eax_10 + (ecx_10 << 2) - 4)
            
            if (ebx_7 s> 0)
                int32_t ecx_22
                
                do
                    result = *(ebp + 4)
                    
                    if (&result[1] u> *(ebp + 8))
                        goto label_45ad04
                    
                    uint32_t edi_9 = ((zx.d(*(result + 3)) << 8 | zx.d(*(result + 2))) << 8
                        | zx.d(*(result + 1))) << 8 | zx.d(*result)
                    *(ebp + 4) = &result[1]
                    struct exfile::CDefineData::VTable** eax_14 = sub_69adc6(0x60)
                    struct exfile::CDefineData::VTable** var_10_1 = eax_14
                    int32_t var_4 = 0
                    struct exfile::CDefineData::VTable** ebx_8
                    
                    if (eax_14 == 0)
                        ebx_8 = nullptr
                    else
                        ebx_8 = sub_460690(eax_14)
                    
                    struct exfile::CDefineData::VTable** var_28
                    struct exfile::CDefineData::VTable*** ecx_13 = &var_28
                    int32_t var_4_1 = 0xffffffff
                    var_28 = ebx_8
                    int32_t eax_16 = arg2[2]
                    
                    if (&var_28 u< eax_16)
                        ecx_13 = arg2[1]
                    
                    if (&var_28 u>= eax_16 || ecx_13 u> &var_28)
                        if (eax_16 == arg2[3])
                            struct exfile::CDefineData::VTable*** var_40_3 = ecx_13
                            sub_412f20(&arg2[1])
                        
                        struct exfile::CDefineData::VTable*** eax_19 = arg2[2]
                        
                        if (eax_19 != 0)
                            *eax_19 = ebx_8
                    else
                        if (eax_16 == arg2[3])
                            struct exfile::CDefineData::VTable*** var_40_2 = ecx_13
                            sub_412f20(&arg2[1])
                        
                        int32_t* ecx_15 = arg2[2]
                        
                        if (ecx_15 != 0)
                            *ecx_15 = *(arg2[1] + ((&var_28 - ecx_13) s>> 2 << 2))
                    
                    arg2[2] = &arg2[2]->Handler
                    result = *(arg2[1] + ((arg2[2] - arg2[1]) s>> 2 << 2) - 4)
                    
                    if (result == 0)
                        goto label_45ad04
                    
                    if (sub_45a740(arg1, edi_9, ebp, result).b == 0)
                        goto label_45ad04
                    
                    ebx_7 = var_1c_1
                    ecx_22 = arg_4 + 1
                    arg_4 = ecx_22
                while (ecx_22 s< ebx_7)
                esi_1 = var_24_1
                edi_2 = var_18_1
            
            esi_1 += 1
            var_24_1 = esi_1
        while (esi_1 s< ecx_6)
    
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
