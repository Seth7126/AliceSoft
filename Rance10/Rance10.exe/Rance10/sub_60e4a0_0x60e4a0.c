// 函数: sub_60e4a0
// 地址: 0x60e4a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_743151
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* result = sub_60daf0(arg1, arg2)
int32_t var_8_1 = 0
arg2 = result
arg1 = &result[2]
void* var_18 = &result[2]
var_8_1.b = 1

if (result != 0xfffffff8)
    result[6] = 0
    result[7] = 0
    result[7] = 0xf
    bool cond:0_1 = result[7] u< 0x10
    result[6] = 0
    void* eax_3
    
    if (cond:0_1)
        eax_3 = &result[2]
    else
        eax_3 = result[2]
    
    *eax_3 = 0
    sub_403590(&result[2], arg3, 0, 0xffffffff)

fsbase->NtTib.ExceptionList = ExceptionList
return result
