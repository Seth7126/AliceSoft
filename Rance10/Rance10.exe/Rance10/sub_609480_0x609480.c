// 函数: sub_609480
// 地址: 0x609480
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = arg3
struct _EXCEPTION_REGISTRATION_RECORD** result

if (sub_61ed80(arg2, &arg1[1]).b == 0)
    result.b = 0
else
    char* edx_1 = *(arg2 + 4)
    
    if (&edx_1[4] u> *(arg2 + 8))
        result.b = 0
    else
        uint32_t ecx_7 =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg2 + 4) = &edx_1[4]
        arg1[7] = ecx_7
        uint32_t var_30
        
        if (sub_61ec90(arg2, &var_30).b == 0)
            result.b = 0
        else
            uint32_t ecx_9 = var_30
            uint32_t* esi_2
            int32_t edi_1
            
            if (ecx_9 s> 0)
                arg1[9] = arg1[8]
                sub_6095c0(&arg1[8], ecx_9)
                esi_2 = arg1[8]
                edi_1 = arg1[9]
            
            if (ecx_9 s<= 0 || esi_2 == edi_1)
            label_609582:
                result.b = 1
            else
                while (true)
                    struct _EXCEPTION_REGISTRATION_RECORD** var_18_1 = 0xf
                    int32_t var_1c_1 = 0
                    char var_2c = 0
                    int32_t var_8_1 = 0
                    
                    if (sub_61ed80(arg2, &var_2c) != 0 && sub_61ec90(arg2, &var_30) != 0)
                        *esi_2 = var_30
                        int32_t var_8_2 = 0xffffffff
                        sub_403320(&var_2c)
                        esi_2 = &esi_2[1]
                        
                        if (esi_2 == edi_1)
                            goto label_609582
                        
                        continue
                    
                    if (var_18_1 u< 0x10)
                        break
                    
                    sub_403160(var_2c.d, var_18_1 + 1, 1)
                    break
                
                result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
