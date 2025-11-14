// 函数: sub_51c3f0
// 地址: 0x51c3f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c2a38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_30 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_51c520(arg1)
int32_t var_20 = arg3
struct partsengine::CTextHighlightModel::VTable* const var_28 =
    &partsengine::CTextHighlightModel::`vftable'
int32_t var_1c = arg3 - 1 + arg2
int32_t var_18 = arg4
int32_t var_14 = arg5
int32_t var_24 = arg2
int32_t var_10 = arg6
int32_t var_4 = 0
int32_t result = sub_5178c0(arg1 + 0x88, &var_28)
*(arg1 + 0xd8) = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
