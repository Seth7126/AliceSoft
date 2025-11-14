// 函数: sub_53b190
// 地址: 0x53b190
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c40e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_60
int32_t eax_2 = __security_cookie ^ &var_60
int32_t __saved_edi
int32_t var_70 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_60 = 0

if (arg2[4] != 0)
    int32_t var_44
    sub_4026d0(&var_44, arg2)
    int32_t var_4 = 0
    char var_5c
    sub_402a20(&var_5c, arg2)
    int32_t var_74_1 = arg3
    var_4.b = 1
    var_4.b = 2
    int32_t var_2c
    sub_403110(&var_5c, sub_4691f0(&var_2c, "[%d]"), nullptr, 0xffffffff)
    var_4.b = 1
    int32_t var_18
    
    if (var_18 u>= 0x10)
        j__free(var_2c)
    
    sub_4057c0(&var_5c, 0x6e384c, 1)
    sub_403110(&var_5c, &var_44, nullptr, 0xffffffff)
    sub_403000(arg1, &var_5c)
    int32_t var_48
    
    if (var_48 u>= 0x10)
        j__free(var_5c.d)
    
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    var_5c = 0
    int32_t var_30
    
    if (var_30 u>= 0x10)
        j__free(var_44)
else
    *(arg1 + 0x14) = 0xf
    *(arg1 + 0x10) = 0
    *arg1 = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_60)
return arg1
