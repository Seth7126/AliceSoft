// 函数: sub_613270
// 地址: 0x613270
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7437ee
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t esi
int32_t var_18 = esi
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t ecx = *(arg1 + 0x1fc)
void* edx = *(*(arg1 + 0x1f8) + (ecx << 2) - 4)
*(arg1 + 0x1fc) = ecx - 1
var_14 = edx

if (arg2 == 0)
    sub_6d090a()
    noreturn

int32_t result = sub_405d30(arg1 + 0x1f4, (*(*arg2 + 8))(&var_14, eax_2))
int32_t var_8_2 = 1
void arg_4

if (arg2 != 0)
    result = (*(*arg2 + 0x10))(arg2 != &arg_4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
