// 函数: sub_510f20
// 地址: 0x510f20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727380
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* ecx = *(arg1 + 4)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (&ecx[4] u> *(arg1 + 8))
    result.b = 0
else
    int32_t var_4c_1 = 0
    int32_t ebx_7 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
    *(arg1 + 4) = &ecx[4]
    
    if (ebx_7 s<= 0)
    label_511081:
        result.b = 1
    else
        while (true)
            struct _EXCEPTION_REGISTRATION_RECORD** var_34_1 = 0xf
            int32_t var_38_1 = 0
            char var_48 = 0
            int32_t var_8_1 = 0
            
            if (sub_61ed80(arg1, &var_48) != 0)
                char* ecx_2 = *(arg1 + 4)
                
                if (&ecx_2[4] u<= *(arg1 + 8))
                    int32_t esi_1 = 0
                    uint32_t ebx_14 =
                        ((zx.d(ecx_2[3]) << 8 | zx.d(ecx_2[2])) << 8 | zx.d(ecx_2[1])) << 8
                        | zx.d(*ecx_2)
                    *(arg1 + 4) = &ecx_2[4]
                    
                    if (ebx_14 s<= 0)
                    label_511048:
                        int32_t eax_13 = *(arg1 + 4) + 4
                        
                        if (eax_13 u<= *(arg1 + 8))
                            *(arg1 + 4) = eax_13
                            int32_t var_8_2 = 0xffffffff
                            
                            if (var_34_1 u>= 0x10)
                                sub_403160(var_48.d, var_34_1 + 1, 1)
                            
                            int32_t ebx_16 = var_4c_1 + 1
                            var_4c_1 = ebx_16
                            
                            if (ebx_16 s>= ebx_7)
                                goto label_511081
                            
                            continue
                    else
                        while (true)
                            int32_t var_1c_1 = 0xf
                            int32_t var_20_1 = 0
                            char var_30 = 0
                            var_8_1.b = 1
                            
                            if (sub_61ed80(arg1, &var_30) == 0)
                                if (var_1c_1 u>= 0x10)
                                    sub_403160(var_30.d, var_1c_1 + 1, 1)
                                
                                break
                            
                            var_8_1.b = 0
                            
                            if (var_1c_1 u>= 0x10)
                                sub_403160(var_30.d, var_1c_1 + 1, 1)
                            
                            esi_1 += 1
                            
                            if (esi_1 s>= ebx_14)
                                goto label_511048
            
            if (var_34_1 u< 0x10)
                break
            
            sub_403160(var_48.d, var_34_1 + 1, 1)
            break
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
