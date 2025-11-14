// 函数: sub_651230
// 地址: 0x651230
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ced03
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct ISys40Ini2::startup::CIniFile::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct ISys40Ini2::startup::CIniFile::VTable** var_10_1 = arg1
*arg1 = &startup::CIniFile::`vftable'{for `ISys40Ini2'}
arg1[1] = 1
arg1[2] = 0x320
arg1[3] = 0x258
arg1[9] = 0xf
arg1[8] = 0
arg1[4].b = 0
int32_t var_4 = 0
arg1[0xf] = 0xf
arg1[0xe] = 0
arg1[0xa].b = 0
var_4.b = 1
arg1[0x15] = 0xf
arg1[0x14] = 0
arg1[0x10].b = 0
sub_402110(&arg1[0x10], "code.jab", 8)
var_4.b = 2
arg1[0x1b] = 0xf
arg1[0x1a] = 0
arg1[0x16].b = 0
sub_402110(&arg1[0x16], "Sys40Mutex", 0xa)
var_4.b = 3
arg1[0x21] = 0xf
arg1[0x20] = 0
arg1[0x1c].b = 0
sub_402110(&arg1[0x1c], 0x700a24, 3)
__builtin_memset(&arg1[0x22], 0, 0x19)
var_4.b = 6
arg1[0x2d] = 0xf
arg1[0x2c] = 0
sub_402110(&arg1[0x28], "SaveData", 8)
arg1[0x2e].b = 0
arg1[0x2f] = 0x64
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
