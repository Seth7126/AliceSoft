// 函数: sub_69b540
// 地址: 0x69b540
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729896
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_4 = __Mtx_lock(arg1 + 0x14)

if (eax_4 != 0)
    std::_Throw_C_error(eax_4)

int32_t ebx

if (*(arg1 + 4) != 2)
    *(arg1 + 4) = 1
    ebx.b = 1
else
    ebx.b = 0

int32_t var_8_1 = 0
__Mtx_unlock(arg1 + 0x14)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
