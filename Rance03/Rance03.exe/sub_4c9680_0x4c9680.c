// 函数: sub_4c9680
// 地址: 0x4c9680
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bea61
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CActivityData::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CActivityData::VTable** var_10_1 = arg1
*arg1 = &partsengine::CActivityData::`vftable'
arg1[1] = 2
arg1[2] = 0
arg1[3] = 0
arg1[2] = sub_42f580()
int32_t var_4 = 0
arg1[4] = 0
arg1[5] = 0
arg1[4] = sub_418350()
var_4.b = 1
arg1[6] = 0
arg1[7] = 0
arg1[6] = sub_4cd7a0()
var_4.b = 2
arg1[8] = 0
arg1[9] = 0
arg1[8] = sub_4a6eb0()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
