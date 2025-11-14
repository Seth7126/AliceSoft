// 函数: sub_5ed850
// 地址: 0x5ed850
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cbb80
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_78
int32_t eax_2 = __security_cookie ^ &var_78
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_78 = 0
char eax_5 = sub_5ed1f0(arg1)

if (eax_5 != 0)
    int32_t var_60_1 = 0xf
    int32_t var_64_1 = 0
    char var_74 = 0
    sub_402110(&var_74, "Manual", 6)
    int32_t var_4 = 0
    char var_2c[0x10]
    int32_t* eax_6 = sub_4028a0(&var_2c, &var_74)
    var_4.b = 1
    char var_44
    void* eax_8 = sub_401f60(&var_44, (***(arg1 + 0x1c))(eax_4))
    var_4.b = 2
    char var_5c
    int32_t* eax_9 = sub_410a20(eax_8, eax_8, &var_5c, eax_6)
    var_4.b = 3
    sub_410a80(eax_9.b, eax_9, arg2, "index.html")
    int32_t var_48
    
    if (var_48 u>= 0x10)
        j__free(var_5c.d)
    
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    var_5c = 0
    int32_t var_30
    
    if (var_30 u>= 0x10)
        j__free(var_44.d)
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    int32_t var_18
    
    if (var_18 u>= 0x10)
        j__free(var_2c[0].d)
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c[0] = 0
    
    if (var_60_1 u>= 0x10)
        j__free(var_74.d)
else
    *(arg2 + 0x14) = 0xf
    *(arg2 + 0x10) = 0
    *arg2 = eax_5

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_78)
return arg2
