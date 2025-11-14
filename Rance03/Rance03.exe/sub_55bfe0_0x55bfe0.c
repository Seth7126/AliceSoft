// 函数: sub_55bfe0
// 地址: 0x55bfe0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c5330
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
sub_402110(&var_28, 0x6e45d4, 1)
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
    
    char* var_60_1 = eax_6
    int32_t var_64_1 = 0x6e48cc
    void* var_68_1 = arg2
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
    void var_44
    
    if (sub_59ce30(&var_40, &var_44) == 0)
        ebx.b = 0
    else if (sub_40c250(&var_40, 0x6e457c) == 0)
        if (sub_40c250(&var_40, 0x6e4588) == 0)
            if (sub_40c250(&var_40, 0x6e4568) == 0)
                if (sub_40c250(&var_40, 0x6e4570) == 0)
                    char* eax_7 = &var_40
                    
                    if (var_2c_1 u>= 0x10)
                        eax_7 = var_40.d
                    
                    char* var_60_4 = eax_7
                    int32_t var_64_3 = 0x6e4540
                    void* var_68_2 = arg2
                    sub_561610(arg1)
                    ebx.b = 0
                else
                    *(arg3 + 4) = 3
                    ebx.b = 1
            else
                *(arg3 + 4) = 2
                ebx.b = 1
        else
            *(arg3 + 4) = 1
            ebx.b = 1
    else
        *(arg3 + 4) = 0
        ebx.b = 1
    
    if (var_2c_1 u>= 0x10)
        j__free(var_40.d)
    
    result = ebx.b
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
