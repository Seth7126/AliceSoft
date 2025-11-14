// 函数: sub_53d1c0
// 地址: 0x53d1c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c4318
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_48 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg4 s< 0)
    result.b = 0
else if (arg4 s>= (*(arg3 + 0x2c) - *(arg3 + 0x28)) s/ 0xbc)
    result.b = 0
else
    int32_t ebx_1 = arg4 * 0xbc
    void* ebx_2 = ebx_1 + *(arg3 + 0x28)
    
    if (ebx_1 == neg.d(*(arg3 + 0x28)))
        result.b = 0
    else
        struct _EXCEPTION_REGISTRATION_RECORD** result_1
        sub_52ada0(&result_1, 3)
        int32_t var_4 = 0
        int32_t edi_1 = 0
        int64_t* result_2 = result_1
        int32_t* ebx_3 = ebx_2 + 8
        
        while (true)
            int32_t esi_3 = *ebx_3
            int32_t var_30
            __builtin_memset(&var_30, 0, 0x18)
            var_4.b = 2
            
            if (esi_3 s>= 0)
                int32_t eax_7
                int32_t edx_4
                edx_4:eax_7 = muls.dp.d(0x38e38e39, *(arg2 + 0x5c) - *(arg2 + 0x58))
                int32_t edx_5 = edx_4 s>> 3
                
                if (esi_3 s< (edx_5 u>> 0x1f) + edx_5)
                    int32_t ecx_4 = esi_3 * 9
                    int32_t eax_12 = *(arg2 + 0x58)
                    void* esi_4 = eax_12 + (ecx_4 << 2)
                    *result_2 = *(eax_12 + (ecx_4 << 2))
                    result_2[1].d = *(esi_4 + 8)
                    int32_t var_24
                    sub_4a6db0(&var_24, esi_4 + 0xc)
                    sub_4a6db0(&var_30, esi_4 + 0x18)
                    int32_t eax_16 = var_30
                    
                    if (eax_16 != 0)
                        j__free(eax_16)
                        var_30 = 0
                        int32_t var_2c_1 = 0
                        int32_t var_28_1 = 0
                    
                    var_4.b = 0
                    int32_t eax_17 = var_24
                    
                    if (eax_17 != 0)
                        j__free(eax_17)
                        var_24 = 0
                        int32_t var_20_1 = 0
                        int32_t var_1c_1 = 0
                    
                    edi_1 += 1
                    ebx_3 = &ebx_3[0xf]
                    result_2 += 0xc
                    
                    if (edi_1 s< 3)
                        continue
                    else if (sub_53d3a0(arg1, &result_1) != 0)
                        ebx_3.b = 1
                        break
            
            ebx_3.b = 0
            break
        
        result = result_1
        
        if (result != 0)
            j__free(result)
        
        result.b = ebx_3.b

fsbase->NtTib.ExceptionList = ExceptionList
return result
