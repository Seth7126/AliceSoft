// 函数: sub_4e3510
// 地址: 0x4e3510
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c0421
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CKey::VTable** result = arg1
struct partsengine::CKey::VTable** result_1 = result
*result = &partsengine::CKey::`vftable'
result[1] = &partsengine::CIbisInputWrapper::`vftable'
int32_t var_4 = 0
__builtin_memset(&result[2], 0, 0x20)
var_4.b = 2
result[0xa] = 0x50
result[0xb] = 0x1f4
sub_4e3930(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
