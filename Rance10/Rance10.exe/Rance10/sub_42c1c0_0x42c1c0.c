// 函数: sub_42c1c0
// 地址: 0x42c1c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726eb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* ecx = *(arg1 + 8)
int32_t var_3c = 0

if (*ecx == 0x27)
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    char var_30 = 0
    void* i = &ecx[1]
    int32_t var_8_1 = 0
    *(arg1 + 8) = i
    
    for (; *(arg1 + 0x10) u> i; i = *(arg1 + 8))
        ecx.b = *i
        char var_4c_2
        
        if ((ecx.b u< 0x81 || ecx.b u> 0x9f) && ecx.b + 0x20 u> 0xf)
            if (ecx.b == 0xd)
                break
            
            if (ecx.b == 0xa)
                break
            
            if (ecx.b != 0x5c)
                if (ecx.b == 0x27)
                    *(arg1 + 8) = i + 1
                    break
                
                sub_405500(&var_30, 1, ecx.b)
            else
                *(arg1 + 8) = i + 1
                
                if (*(arg1 + 0x10) u<= i + 1 || *(i + 1) != 0x27)
                    sub_405500(&var_30, 1, 0x5c)
                    sub_405500(&var_30, 1, **(arg1 + 8))
                    ecx = *(arg1 + 8)
                    char eax_7 = *ecx
                    
                    if ((eax_7 u>= 0x81 && eax_7 u<= 0x9f) || eax_7 + 0x20 u<= 0xf)
                        *(arg1 + 8) = &ecx[1]
                        
                        if (*(arg1 + 0x10) u> &ecx[1])
                            void* eax_8
                            eax_8.b = ecx[1]
                            var_4c_2 = eax_8.b
                        else
                            var_4c_2 = 0
                        
                        sub_405500(&var_30, 1, var_4c_2)
                else
                    sub_405500(&var_30, 1, 0x27)
        else
            sub_405500(&var_30, 1, ecx.b)
            *(arg1 + 8) += 1
            char* eax_4 = *(arg1 + 8)
            
            if (*(arg1 + 0x10) u> eax_4)
                eax_4.b = *eax_4
                var_4c_2 = eax_4.b
            else
                var_4c_2 = 0
            
            sub_405500(&var_30, 1, var_4c_2)
        *(arg1 + 8) += 1
    
    *arg2 = &advengine::CToken::`vftable'
    arg2[1] = 5
    arg2[7] = 0xf
    arg2[6] = 0
    arg2[2].b = 0
    sub_403590(&arg2[2], &var_30, 0, 0xffffffff)
    arg2[8] = 0
    arg2[9] = 0
    
    if (var_1c_1 u>= 0x10)
        sub_403160(var_30.d, var_1c_1 + 1, 1)
else
    sub_42b770(arg2)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
