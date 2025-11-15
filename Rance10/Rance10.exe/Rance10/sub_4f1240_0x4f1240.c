// 函数: sub_4f1240
// 地址: 0x4f1240
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_735feb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUIComponentList::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUIComponentList::VTable** var_14_1 = arg1
arg1[1] = arg2
arg1[3] = arg3
*arg1 = &partsengine::CGUIComponentList::`vftable'
arg1[2] = 0
arg1[4] = &partsengine::CAlphaClipperManager::`vftable'
arg2 = &arg1[4]
arg2 = &arg1[5]
arg1[5] = 0
arg1[6] = 0
arg1[5] = sub_42e780()
int32_t var_8_1 = 0
arg2 = &arg1[7]
arg1[7] = 0
arg1[8] = 0
arg1[7] = sub_42e780()
arg1[9] = 0
arg1[0xa] = 0
arg1[0xb] = &common::CIDManager::`vftable'
arg1[0xc] = 0x3b9af110
arg1[0xd] = 0x3baa3350
arg1[0xe] = 0xf4240
__builtin_memset(&arg1[0xf], 0, 0x18)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
