// 函数: sub_4a5020
// 地址: 0x4a5020
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bc98b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUIComponentList::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUIComponentList::VTable** var_10_1 = arg1
arg1[1] = arg2
*arg1 = &partsengine::CGUIComponentList::`vftable'
arg1[2] = 0
arg1[3] = arg3
arg1[4] = &partsengine::CAlphaClipperManager::`vftable'
arg1[5] = 0
arg1[6] = 0
arg1[5] = sub_4203c0()
int32_t var_4 = 0
arg1[7] = 0
arg1[8] = 0
arg1[7] = sub_4203c0()
arg1[9] = &partsengine::CPartsNumberManager::`vftable'
arg1[0xa] = 0x3b9af110
arg1[0xb] = 0x3baa3350
arg1[0xc] = 0xf4240
arg1[0xd] = 0
arg1[0xe] = 0
arg1[0xf] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
