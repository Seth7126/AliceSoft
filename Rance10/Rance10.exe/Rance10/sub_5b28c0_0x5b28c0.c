// 函数: sub_5b28c0
// 地址: 0x5b28c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f280
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_54 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_8_1 = 0

if (sub_61ed80(arg3, &var_2c) != 0)
    char* ecx_3 = *(arg3 + 4)
    
    if (&ecx_3[4] u> *(arg3 + 8))
        *arg2 = 0
        
        if (var_18 u>= 0x10)
            int32_t var_68_9 = 1
            sub_403160(var_2c.d, var_18 + 1, 1)
    else
        uint32_t esi_3 = zx.d(ecx_3[3]) << 8 | zx.d(ecx_3[2])
        int32_t var_40 = 0
        int32_t var_3c_1 = 0
        uint32_t esi_7 = (esi_3 << 8 | zx.d(ecx_3[1])) << 8 | zx.d(*ecx_3)
        *(arg3 + 4) = &ecx_3[4]
        int32_t var_38_1 = 0
        var_8_1.b = 1
        char eax_7 = sub_5b2aa0(arg1, arg3, &var_40)
        uint32_t var_4c
        char eax_8
        
        if (eax_7 != 0)
            eax_8 = sub_61ec90(arg3, &var_4c)
        
        if (eax_7 == 0 || eax_8 == 0)
            *arg2 = 0
        else
            bool var_2d = esi_7 != 0
            int32_t* var_44
            sub_5b4fa0(&var_2d, &var_2c, &var_44, &var_2d, &var_40)
            var_8_1.b = 2
            uint32_t eax_10 = var_4c
            
            if (eax_10 != 0)
                int32_t* esi_8 = var_44
                int32_t ebx_1 = 0
                
                if (eax_10 s<= 0)
                label_5b2a3c:
                    *arg2 = esi_8
                else
                    while (true)
                        int32_t* var_34
                        int32_t ecx_10 = sub_5b28c0(&var_34, arg3)
                        var_8_1.b = 3
                        
                        if (var_34 == 0)
                            *arg2 = 0
                            
                            if (esi_8 != 0)
                                int32_t var_68_8 = ecx_10
                                sub_5b4c50(esi_8)
                            
                            break
                        
                        sub_5b5010(&esi_8[0xa], &var_34)
                        var_8_1.b = 2
                        int32_t* ecx_12 = var_34
                        
                        if (ecx_12 != 0)
                            int32_t* var_68_7 = ecx_12
                            sub_5b4c50(ecx_12)
                        
                        ebx_1 += 1
                        
                        if (ebx_1 s>= var_4c)
                            goto label_5b2a3c
            else
                *arg2 = var_44
        
        sub_5b47d0(&var_40)
        sub_403320(&var_2c)
else
    *arg2 = 0
    
    if (var_18 u>= 0x10)
        int32_t var_68_1 = 1
        sub_403160(var_2c.d, var_18 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
