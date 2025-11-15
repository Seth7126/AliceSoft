// 函数: ?_Put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@CA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@_W@std@@@std@@@2@I@Z
// 地址: 0x495ab0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726dc0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_14 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &mainsystem::CComponentManager::`vftable'
int32_t result = sub_495c70(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
