// 函数: sub_55f7c0
// 地址: 0x55f7c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73b7c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_24 = arg3
int32_t var_28 = arg2
struct partsengine::CTextHighlightModel::VTable* const var_2c =
    &partsengine::CTextHighlightModel::`vftable'
int32_t var_20 = arg3 + arg2 - 1
int32_t var_1c = arg4
int32_t var_18 = arg5
int32_t var_14 = arg6
int32_t var_8_1 = 0
int32_t result = sub_55be10(arg1 + 0x88, &var_2c)
*(arg1 + 0xd4) = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
