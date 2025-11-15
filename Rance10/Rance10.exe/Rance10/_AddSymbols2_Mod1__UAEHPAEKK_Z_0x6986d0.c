// 函数: ?AddSymbols2@Mod1@@UAEHPAEKK@Z
// 地址: 0x6986d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_748238
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* var_18 = arg1
int32_t var_8_1 = 0
int32_t result =
    Concurrency::details::xfa789d47::_Task_scheduler_callback::operator[]::_Task_scheduler_callback(
    arg1 + 0x50, arg2, arg3)
fsbase->NtTib.ExceptionList = ExceptionList
return result
