// 函数: sub_6977e0
// 地址: 0x6977e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73ba8c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = __Mtx_lock(&arg1[0xa])

if (eax_3 != 0)
    std::_Throw_C_error(eax_3)

if (arg1[0x19] s< 2)
    arg1[0x19] = 2

int32_t var_8_1 = 0
__Cnd_broadcast(arg1)
int32_t var_8_2 = 1
int32_t result = __Mtx_unlock(&arg1[0xa])
fsbase->NtTib.ExceptionList = ExceptionList
return result
