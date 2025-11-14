// 函数: sub_4e6c00
// 地址: 0x4e6c00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c07c1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CPartsController::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CPartsController::VTable** var_10_1 = arg1
*arg1 = &partsengine::CPartsController::`vftable'
arg1[1] = arg2
arg1[2].b = 0
arg1[3] = &partsengine::CIbisInputWrapper::`vftable'
int32_t var_4 = 0
arg1[4].b = 0
sub_4e3510(&arg1[5])
arg1[0x11].b = 0
arg1[0x12] = 0
arg1[0x13].b = 0
__builtin_memset(&arg1[0x14], 0, 0x12)
arg1[0x19] = &partsengine::CEventSubject::`vftable'
arg2 = &arg1[0x19]
arg1[0x1a] = 0
arg1[0x1b] = 0
arg1[0x1c] = 0
var_4.b = 2
arg1[0x1d] = 0
sub_42f420(&arg1[0x1e], 0x19)
arg1[0x1d] = &arg1[1]
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
