// 函数: sub_60e7c0
// 地址: 0x60e7c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_743181
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* result = sub_44b8b0(arg1, arg2)
int32_t var_8_1 = 0
arg2 = result
arg1 = &result[2]
void* var_18 = &result[2]
var_8_1.b = 1

if (result != 0xfffffff8)
    void** ecx_1 = *arg3
    result[7] = 0xf
    result[6] = 0
    char* eax_4
    
    if (result[7] u< 0x10)
        eax_4 = &result[2]
    else
        eax_4 = result[2]
    
    *eax_4 = 0
    sub_403590(&result[2], ecx_1, 0, 0xffffffff)
    result[8] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
