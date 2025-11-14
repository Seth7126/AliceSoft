// 函数: sub_560d00
// 地址: 0x560d00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c5670
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
sub_402110(&var_28, &(*U"====")[1], 1)
int32_t var_4 = 0
char* eax_5 = &var_28

if (var_14 u>= 0x10)
    eax_5 = var_28.d

char result

if (sub_59d180(arg2, eax_5) != 0)
    result = 1
else
    char* eax_6 = &var_28
    
    if (var_14 u>= 0x10)
        eax_6 = var_28.d
    
    char* var_58_1 = eax_6
    int32_t var_5c_1 = 0x6e48cc
    void* var_60_1 = arg2
    sub_561610(arg1)
    result = 0

int32_t var_4_1 = 0xffffffff
int32_t ebx
ebx.b = result == 0

if (var_14 u>= 0x10)
    j__free(var_28.d)

if (ebx.b == 0)
    int32_t var_2c_1 = 0xf
    int32_t var_30_1 = 0
    char var_40 = 0
    int32_t var_4_2 = 1
    
    if (sub_59ce30(&var_40, &var_44) != 0)
        if (sub_40c250(&var_40, 0x6e4854) == 0)
            if (sub_40c250(&var_40, 0x6e4860) == 0)
                if (sub_40c250(&var_40, 0x6e4834) == 0)
                    if (sub_40c250(&var_40, 0x6e4844) == 0)
                        if (sub_40c250(&var_40, 0x6e4818) == 0)
                            if (sub_40c250(&var_40, 0x6e4828) == 0)
                                int32_t ecx_10
                                int32_t edx_1
                                result, ecx_10, edx_1 = sub_40c250(&var_40, 0x6e47e8)
                                
                                if (result == 0)
                                    char* eax_7 = &var_40
                                    
                                    if (var_2c_1 u>= 0x10)
                                        eax_7 = var_40.d
                                    
                                    sub_59f4e0(eax_7, edx_1, ecx_10, 0x6e47f4, eax_7)
                                else
                                    *(arg3 + 0xa0) = 6
                            else
                                *(arg3 + 0xa0) = 5
                        else
                            *(arg3 + 0xa0) = 4
                    else
                        *(arg3 + 0xa0) = 3
                else
                    *(arg3 + 0xa0) = 2
            else
                *(arg3 + 0xa0) = 1
        else
            *(arg3 + 0xa0) = 0
        
        ebx.b = 1
    else
        ebx.b = 0
    
    if (var_2c_1 u>= 0x10)
        j__free(var_40.d)
    
    result = ebx.b
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
