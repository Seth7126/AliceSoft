// 函数: sub_55d600
// 地址: 0x55d600
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d6d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_55c8a0(arg1)
sub_4055a0(arg1 + 0xd8, arg2, 0, 0xffffffff)
struct _EXCEPTION_REGISTRATION_RECORD** var_1c = nullptr
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_8_1 = 0
sub_55f350(arg1, &var_1c, arg1 + 0xd8)
sub_55d890(arg1, &var_1c)
*(arg1 + 0xd4) = 1
int32_t result = sub_417070(&var_1c)
fsbase->NtTib.ExceptionList = ExceptionList
return result
