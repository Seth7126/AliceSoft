// 函数: sub_412920
// 地址: 0x412920
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b3c21
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_10_1 = arg1
*arg1 = 0
arg1[1] = 0
arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
sub_402110(&arg1[2], "DPAnalysis_BalloonHelpClass", 0x1b)
int32_t var_4 = 0
arg1[0xd] = 0xf
arg1[0xc] = 0
arg1[8].b = 0
arg1[0xe] = 0
arg1[0xf] = 0
arg1[0x10] = 0
var_4.b = 2
arg1[0x11] = &win32only::CFont::`vftable'
arg1[0x12] = 0
arg1[0x13] = 0x10
arg1[0x19] = 0xf
arg1[0x18] = 0
arg1[0x14].b = 0
sub_402110(&arg1[0x14], 0x703bb8, 0xd)
arg1[0x1a] = 0x190
arg1[0x1b].w = 0
arg1[0x1c] = 0
arg1[0x1d] = 0
arg1[0x1e] = 0
arg1[0x1f] = 0
__builtin_memcpy(&arg1[0x20], 
    "\x14\x00\x00\x00\x14\x00\x00\x00\x0c\x00\x00\x00\x02\x00\x00\x00\x03\x00\x00\x00", 0x14)
arg1[0x25] = sub_412460
arg1[0x26] = 0
arg1[0x27] = 0
arg1[0x29] = 0
arg1[0x2a] = LoadCursorA(nullptr, 0x7f00)
arg1[0x2b] = 0
arg1[0x2c] = 0

if (arg1[7] u< 0x10)
    arg1[0x2d] = &arg1[2]
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1

arg1[0x2d] = arg1[2]
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
