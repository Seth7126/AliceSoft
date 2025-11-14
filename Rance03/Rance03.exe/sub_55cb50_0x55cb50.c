// 函数: sub_55cb50
// 地址: 0x55cb50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5378
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
int32_t var_4 = 0
int32_t ebx

if (sub_59ce30(&var_28, &var_2c) == 0)
    ebx.b = 0
else if (sub_40c250(&var_28, 0x6e4610) == 0)
    if (sub_40c250(&var_28, 0x6e4618) == 0)
        if (sub_40c250(&var_28, 0x6e45d8) == 0)
            char* eax_6 = &var_28
            
            if (var_14 u>= 0x10)
                eax_6 = var_28.d
            
            char* var_40_1 = eax_6
            int32_t var_44_1 = 0x6e45e4
            int32_t var_48_1 = arg2
            sub_561610(arg1)
            ebx.b = 0
        else
            *arg3 = 2
            ebx.b = 1
    else
        *arg3 = 1
        ebx.b = 1
else
    *arg3 = 0
    ebx.b = 1

if (var_14 u>= 0x10)
    j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return ebx.b
