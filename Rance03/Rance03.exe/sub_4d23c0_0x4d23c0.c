// 函数: sub_4d23c0
// 地址: 0x4d23c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bf3e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_1c = arg7
int32_t var_20 = arg6
struct partsengine::CCharSpriteProperty::VTable* const var_54
arg7 = &var_54
var_54 = &partsengine::CCharSpriteProperty::`vftable'
int32_t var_4c = *(arg5 + 8)
int128_t var_48 = *(arg5 + 0xc)
int32_t var_38 = *(arg5 + 0x1c)
int32_t var_34 = *(arg5 + 0x20)
int128_t var_30 = *(arg5 + 0x24)
int32_t var_4 = 0
int32_t var_4_1 = 0xffffffff
int32_t result = sub_503290(sub_510540(*(arg1 + 0x34), arg8), arg2, arg3, arg4, var_54, *(arg5 + 4))
fsbase->NtTib.ExceptionList = ExceptionList
return result
