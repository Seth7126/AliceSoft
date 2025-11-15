// 函数: sub_60b680
// 地址: 0x60b680
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_8_1 = 0
void* result
int32_t ebx

if (sub_61ece0(arg1, &var_2c, 3).b == 0)
    ebx.b = 0
else if (sub_407560(&var_2c, 0x76b128).b == 0)
    ebx.b = 0
else
    result = *(arg1 + 4) + 1
    
    if (result u> *(arg1 + 8))
        ebx.b = 0
    else
        *(arg1 + 4) = result
        uint32_t var_30
        
        if (sub_61ec90(arg1, &var_30).b == 0 || var_30 != 0)
            ebx.b = 0
        else
            ebx.b = 1

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
