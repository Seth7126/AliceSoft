// 函数: sub_57c630
// 地址: 0x57c630
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73cdbe
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_4c = arg1
int32_t var_48 = arg2
int32_t var_44 = 0
int32_t var_40 = 0
int32_t var_3c = 0
int32_t var_38 = arg2 + 0x28
int32_t var_34 = 0
int32_t var_30 = 0
int32_t var_2c = 0
int32_t var_28 = arg2 + 0x50
int32_t var_24 = 0
int32_t var_20 = 0
int32_t var_1c = 0
void (__fastcall* var_64)(void* arg1) = sub_56dbf0
int32_t var_8_1 = 0
(arg1, &var_48, 0x10, 3, sub_570490)
int32_t var_8_2 = 1
`eh vector vbase constructor iterator'(&var_48, 0x10, 3, sub_56dbf0)
int32_t var_54 = 0xffffffff
*(arg1 + 0x30) = 0xffffffff.q
*(arg1 + 0x38) = 0xffffffff
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
