// 函数: sub_57e430
// 地址: 0x57e430
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73cfe0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_90 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_7c = arg1
int32_t var_80 = 0

if (arg2[4] != 0)
    void* var_78
    sub_404d80(&var_78, arg2)
    int32_t var_8_1 = 0
    char var_30
    sub_405070(&var_30, arg2)
    var_8_1.b = 1
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    char var_48 = 0
    sub_403490(&var_48, "[%d]", 4)
    var_8_1.b = 2
    var_8_1.b = 3
    char var_60
    void arg_4
    sub_4055a0(&var_30, sub_409350(&arg_4, &var_48, &var_60, &arg_4), 0, 0xffffffff)
    int32_t var_4c
    
    if (var_4c u>= 0x10)
        sub_403160(var_60.d, var_4c + 1, 1)
    
    var_8_1.b = 1
    int32_t var_4c_1 = 0xf
    int32_t var_50_1 = 0
    var_60 = 0
    
    if (var_34_1 u>= 0x10)
        sub_403160(var_48.d, var_34_1 + 1, 1)
    
    sub_407430(&var_30, U".++", 1)
    sub_4055a0(&var_30, &var_78, 0, 0xffffffff)
    *(arg1 + 0x14) = 0xf
    *(arg1 + 0x10) = 0
    *arg1 = 0
    sub_4056a0(arg1, &var_30)
    int32_t var_1c
    
    if (var_1c u>= 0x10)
        sub_403160(var_30.d, var_1c + 1, 1)
    
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    var_30 = 0
    int32_t var_64
    
    if (var_64 u>= 0x10)
        sub_403160(var_78, var_64 + 1, 1)
else
    *(arg1 + 0x14) = 0xf
    *(arg1 + 0x10) = 0
    *arg1 = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
