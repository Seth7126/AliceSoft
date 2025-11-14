// 函数: sub_42c570
// 地址: 0x42c570
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b52a1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpvariable::CVarDocument::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpvariable::CVarDocument::VTable** var_10_1 = arg1
*arg1 = &dpvariable::CVarDocument::`vftable'
__builtin_memset(&arg1[1], 0, 0x1c)
arg1[6] = sub_4203c0()
int32_t var_4 = 0
arg1[8] = 0
arg1[9] = 0
arg1[8] = sub_42f580()
__builtin_memset(&arg1[0xa], 0, 0x14)
var_4.b = 2
arg1[0xd] = sub_42f580()
__builtin_memset(&arg1[0xf], 0, 0x19)
arg1[0x1a] = 0xf
arg1[0x19] = 0
arg1[0x1b].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
