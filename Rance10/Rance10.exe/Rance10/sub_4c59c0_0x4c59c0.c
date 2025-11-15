// 函数: sub_4c59c0
// 地址: 0x4c59c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7334bb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_a4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_90 = 0

if (sub_4c5910(arg2) == 0)
    *(arg1 + 0x14) = 0xf
    *(arg1 + 0x10) = 0
    *arg1 = 0
    sub_403590(arg1, arg2, 0, 0xffffffff)
else
    int32_t ebx_1 = data_7fce94
    void* var_8c
    sub_558a10(&var_8c)
    int32_t var_8_1 = 0
    var_8_1.b = 1
    char var_44
    char var_2c
    sub_404f20(&var_2c, sub_528040(&var_44))
    var_8_1.b = 3
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)
    
    void* eax_8 = arg2[4] - ebx_1
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    char var_74
    char* eax_9 = sub_405480(arg2, &var_74, ebx_1, eax_8)
    var_8_1.b = 4
    char var_5c
    int32_t* eax_11 = sub_4079d0(&var_2c, &var_8c, &var_5c, &var_2c)
    var_8_1.b = 5
    sub_4177a0(eax_11, eax_11, arg1, eax_9)
    int32_t var_48
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c.d, var_48 + 1, 1)
    
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    var_5c = 0
    int32_t var_60
    
    if (var_60 u>= 0x10)
        sub_403160(var_74.d, var_60 + 1, 1)
    
    int32_t var_60_1 = 0xf
    int32_t var_64_1 = 0
    var_74 = 0
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    int32_t var_78
    
    if (var_78 u>= 0x10)
        sub_403160(var_8c, var_78 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
