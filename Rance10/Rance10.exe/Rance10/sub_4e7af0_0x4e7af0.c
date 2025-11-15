// 函数: sub_4e7af0
// 地址: 0x4e7af0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7354a9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4c = 0
char var_48
int32_t var_34
char var_30
int32_t var_1c
char* eax_5
int32_t ebx

if (*(arg1 + 0x1e0) == 0)
    var_1c = 0xf
    int32_t var_20_1 = 0
    var_30 = 0
    sub_403490(&var_30, 0x75d117, nullptr)
    eax_5 = &var_30
    ebx = 2
else
    var_34 = 0xf
    int32_t var_38_1 = 0
    var_48 = 0
    sub_403590(&var_48, arg1 + 0x1c4, 0, 0xffffffff)
    eax_5 = &var_48
    ebx = 1

*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0
sub_4056a0(arg2, eax_5)
int32_t ebx_1 = ebx | 4

if ((ebx_1.b & 2) != 0)
    ebx_1 &= 0xfffffffd
    
    if (var_1c u>= 0x10)
        sub_403160(var_30.d, var_1c + 1, 1)
    
    int32_t var_1c_1 = 0xf
    int32_t var_20_2 = 0
    var_30 = 0

if ((ebx_1.b & 1) != 0 && var_34 u>= 0x10)
    sub_403160(var_48.d, var_34 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
