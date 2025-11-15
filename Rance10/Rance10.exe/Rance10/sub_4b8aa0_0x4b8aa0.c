// 函数: sub_4b8aa0
// 地址: 0x4b8aa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73253e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_94 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
sub_44dca0(*(arg1[6] + 4))
void* eax_4 = arg1[6]
*(eax_4 + 4) = eax_4
int32_t* eax_5 = arg1[6]
*eax_5 = eax_5
void* eax_6 = arg1[6]
int32_t var_8_2 = 0xffffffff
*(eax_6 + 8) = eax_6
arg1[7] = 0
struct _EXCEPTION_REGISTRATION_RECORD** result

if (sub_61ed80(arg2, arg1).b == 0)
    result.b = 0
else
    char* ecx_2 = *(arg2 + 4)
    
    if (&ecx_2[4] u> *(arg2 + 8))
        result.b = 0
    else
        int32_t esi_1 = 0
        int32_t edi_7 =
            ((zx.d(ecx_2[3]) << 8 | zx.d(ecx_2[2])) << 8 | zx.d(ecx_2[1])) << 8 | zx.d(*ecx_2)
        *(arg2 + 4) = &ecx_2[4]
        
        if (edi_7 s<= 0)
        label_4b8c2e:
            result.b = 1
        else
            while (true)
                struct _EXCEPTION_REGISTRATION_RECORD** var_30_1 = 0xf
                int32_t var_34_1 = 0
                char var_44 = 0
                int32_t var_8_3 = 1
                int32_t var_18_1 = 0xf
                int32_t var_1c_1 = 0
                char var_2c = 0
                var_8_3.b = 2
                
                if (sub_61ed80(arg2, &var_44) != 0 && sub_61ed80(arg2, &var_2c) != 0)
                    var_8_3.b = 3
                    void var_74
                    int32_t* eax_13
                    void* ecx_7
                    eax_13, ecx_7 = sub_4581e0(sub_457d60(&var_2c, &var_44, &var_74, &var_2c))
                    int32_t* var_98_6 = eax_13
                    void* var_9c_1 = &eax_13[4]
                    void** var_80
                    sub_44eda0(&arg1[6], &var_80, ecx_7)
                    sub_408940(&var_74)
                    
                    if (var_18_1 u>= 0x10)
                        sub_403160(var_2c.d, var_18_1 + 1, 1)
                    
                    int32_t var_8_4 = 0xffffffff
                    int32_t var_18_2 = 0xf
                    int32_t var_1c_2 = 0
                    var_2c = 0
                    
                    if (var_30_1 u>= 0x10)
                        sub_403160(var_44.d, var_30_1 + 1, 1)
                    
                    esi_1 += 1
                    
                    if (esi_1 s>= edi_7)
                        goto label_4b8c2e
                    
                    continue
                
                if (var_18_1 u>= 0x10)
                    sub_403160(var_2c.d, var_18_1 + 1, 1)
                
                int32_t var_18_3 = 0xf
                int32_t var_1c_3 = 0
                var_2c = 0
                
                if (var_30_1 u>= 0x10)
                    sub_403160(var_44.d, var_30_1 + 1, 1)
                
                break
            
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
