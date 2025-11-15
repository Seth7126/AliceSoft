// 函数: sub_58f310
// 地址: 0x58f310
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726eb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
int32_t var_8_1 = 0
struct _EXCEPTION_REGISTRATION_RECORD** result
int32_t ebx

if (sub_61ed80(arg2, &var_30).b == 0)
    ebx.b = 0
else
    uint32_t result_1
    
    if (sub_407560(&var_30, 0x7684d8).b == 0)
        ebx.b = 0
    else if (sub_61ec90(arg2, &result_1).b == 0)
        ebx.b = 0
    else
        result = result_1
        
        if (result != 0)
            ebx.b = 0
        else
            *(arg1 + 4) = result
            ebx.b = 1

if (var_1c u>= 0x10)
    sub_403160(var_30.d, var_1c + 1, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
