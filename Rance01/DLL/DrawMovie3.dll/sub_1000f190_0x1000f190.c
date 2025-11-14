// 函数: sub_1000f190
// 地址: 0x1000f190
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_10019388
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_68
int32_t eax_2 = __security_cookie ^ &var_68
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg3
void* esi = arg1
void* var_5c = esi
var_68 = edi
int32_t result

if (edi != 0)
    if ((*(**(esi + 8) + 0x10))(eax_4) == *(esi + 0xc))
        int32_t ebx_1 = arg2
        
        if (arg4 == 0)
            if (ebx_1 u<= 1)
                goto label_1000f21d
            
            result = 0x80070057
        else
            *arg4 = 0
        label_1000f21d:
            int32_t var_64_1 = 0
            
            if (ebx_1 != 0)
                while (true)
                    char var_58[0x3c]
                    sub_10012a30(&var_58)
                    int32_t eax_8 = *(esi + 4)
                    *(esi + 4) = eax_8 + 1
                    int32_t var_4 = 0
                    
                    if ((*(**(esi + 8) + 0x34))(eax_8, &var_58) != 0)
                        int32_t var_4_2 = 0xffffffff
                    else
                        int32_t eax_11 = CoTaskMemAlloc(0x48)
                        *edi = eax_11
                        int32_t var_4_1 = 0xffffffff
                        
                        if (eax_11 != 0)
                            var_68 = &var_68[1]
                            var_64_1 += 1
                            __builtin_memcpy(eax_11, &var_58, 0x48)
                            int32_t var_14_1 = 0
                            int32_t var_18_1 = 0
                            int32_t var_1c_1 = 0
                            ebx_1 -= 1
                            sub_100129f0(&var_58)
                            
                            if (ebx_1 == 0)
                                break
                            
                            edi = var_68
                            esi = var_5c
                            continue
                    
                    sub_100129f0(&var_58)
                    break
            
            if (arg4 != 0)
                *arg4 = var_64_1
            
            result.b = ebx_1 != 0
    else
        result = 0x80040203
else
    result = 0x80004003

fsbase->NtTib.ExceptionList = ExceptionList
sub_10001d19(eax_2 ^ &var_68)
return result
