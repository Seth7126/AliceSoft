// 函数: sub_477490
// 地址: 0x477490
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6ba008
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_8c
int32_t eax_2 = __security_cookie ^ &var_8c
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
(*(*arg1 + 0x10))(__security_cookie ^ &__saved_edi)
bool cond:0 = *arg2 != 0
int32_t var_50 = 0xf
int32_t var_54 = 0
char var_64 = 0
void* ecx

if (cond:0)
    int32_t* ecx_1 = arg2
    void* edx_1 = ecx_1 + 1
    char i
    
    do
        i = *ecx_1
        ecx_1 += 1
    while (i != 0)
    ecx = ecx_1 - edx_1
else
    ecx = nullptr

sub_402110(&var_64, arg2, ecx)
bool result = sub_6049e0(&arg1[2], &var_64) == 0
uint8_t result_1 = result

if (var_50 u>= 0x10)
    j__free(var_64.d)
    result = result_1

if (result == 0)
    int32_t var_38_1 = 0xf
    int32_t var_3c_1 = 0
    char var_4c = 0
    int32_t var_c_1 = 0
    int32_t* ebx
    
    if (sub_605120(&arg1[2], &var_4c, 4) == 0)
        ebx.b = 0
    else
        uint8_t var_68
        
        if (sub_40c250(&var_4c, "RIFF") == 0)
            ebx.b = 0
        else if (sub_604ee0(&arg1[2], &var_68) == 0)
            ebx.b = 0
        else
            int32_t var_20_1 = 0xf
            int32_t var_24_1 = 0
            char var_34 = 0
            var_c_1.b = 1
            
            if (sub_605120(&arg1[2], &var_34, 4) == 0)
            label_4777e1:
                ebx.b = 0
                sub_401fb0(&var_34)
            else
                if (sub_40c250(&var_34, "WAVE") == 0)
                    goto label_4777e1
                
                while (true)
                    int32_t var_50_1 = 0xf
                    int32_t var_54_1 = 0
                    var_64 = 0
                    var_c_1.b = 2
                    
                    if (sub_605120(&arg1[2], &var_64, 4) != 0)
                        int16_t var_84
                        int16_t var_80
                        int16_t var_7c
                        int32_t var_78
                        int32_t var_74
                        int32_t var_70
                        
                        if (sub_40c250(&var_64, "fmt ") == 0)
                            if (sub_40c250(&var_64, "data") != 0)
                                break
                            
                            int32_t var_6c
                            
                            if (sub_604ee0(&arg1[2], &var_6c) != 0
                                    && sub_6052e0(&arg1[2], var_6c + arg1[4]) != 0)
                                goto label_477773
                        else if (sub_604ee0(&arg1[2], &var_70) != 0 && var_70 == 0x10
                                && sub_604e90(&arg1[2], &result_1, 2) != 0
                                && sub_604e90(&arg1[2], &var_84, 2) != 0
                                && sub_604e90(&arg1[2], &var_78, 4) != 0
                                && sub_604e90(&arg1[2], &var_74, 4) != 0
                                && sub_604e90(&arg1[2], &var_80, 2) != 0
                                && sub_604e90(&arg1[2], &var_7c, 2) != 0)
                            (*(arg1[0xa] + 0x20))(zx.d(result_1.w))
                            (*(arg1[0xa] + 0x24))(zx.d(var_84))
                            (*(arg1[0xa] + 0x28))(var_78)
                            (*(arg1[0xa] + 0x2c))(var_74)
                            (*(arg1[0xa] + 0x30))(zx.d(var_80))
                            (*(arg1[0xa] + 0x34))(zx.d(var_7c))
                        label_477773:
                            
                            if (var_50_1 u< 0x10)
                                continue
                            else
                                j__free(var_64.d)
                                continue
                    
                    sub_401fb0(&var_64)
                    goto label_4777e1
                
                sub_401fb0(&var_64)
                
                if (sub_604ee0(&arg1[2], &arg1[8]) == 0)
                    goto label_4777e1
                
                int32_t eax_30 = arg4
                int32_t ecx_29 = arg1[4]
                arg1[7] = arg3
                arg1[9] = ecx_29
                
                if (eax_30 == 0xffffffff)
                    eax_30 = arg1[5] - arg3
                
                arg1[0x12] = ecx_29
                arg1[6] = eax_30
                ebx.b = 1
                sub_401fb0(&var_34)
    
    if (var_38_1 u>= 0x10)
        j__free(var_4c.d)
    
    result = ebx.b
else
    result = false

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_8c)
return result
