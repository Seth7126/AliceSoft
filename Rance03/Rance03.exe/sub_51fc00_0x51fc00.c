// 函数: sub_51fc00
// 地址: 0x51fc00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c2c96
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct passregister::CPassRegister::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct passregister::CPassRegister::VTable** var_10_1 = arg1
*arg1 = &passregister::CPassRegister::`vftable'
arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
int32_t var_4 = 0
arg1[7].b = 0
arg1[8] = 0
arg1[9] = 0
arg1[8] = sub_4a6eb0()
var_4.b = 1
arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xa] = sub_418350()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
