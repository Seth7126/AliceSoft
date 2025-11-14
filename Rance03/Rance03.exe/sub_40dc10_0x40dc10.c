// 函数: sub_40dc10
// 地址: 0x40dc10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b36bc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_10_1 = arg1
*arg1 = 0
arg1[1] = 0xffffffff
arg1[2] = 0
arg1[8] = 0xf
arg1[7] = 0
arg1[3].b = 0
int32_t var_4 = 0
arg1[0xe] = 0xf
arg1[0xd] = 0
arg1[9].b = 0
arg1[0xf] = 0xffffffff
arg1[0x10] = 0xffffffff
arg1[0x11] = 0
arg1[0x12] = 0
arg1[0x18] = 0xf
arg1[0x17] = 0
arg1[0x13].b = 0
arg1[0x19] = 0
arg1[0x1a] = 0
arg1[0x1b] = 0
var_4.b = 3
arg1[0x1c].b = 0
sub_40de50(arg1, arg2, arg3)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
