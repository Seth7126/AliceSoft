// 函数: sub_697080
// 地址: 0x697080
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747f2e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1
arg1 = esi
int32_t var_8_1 = 0
int32_t __saved_ebp
esi[3](esi[4], __security_cookie ^ &__saved_ebp)
int32_t var_8_2 = 1
Concurrency::details::_Release_chore(esi)
int32_t var_24 = 0x14
int32_t result = operator new(esi)
fsbase->NtTib.ExceptionList = ExceptionList
return result
