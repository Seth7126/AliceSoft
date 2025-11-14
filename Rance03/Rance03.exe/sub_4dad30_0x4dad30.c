// 函数: sub_4dad30
// 地址: 0x4dad30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bfbf6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUITextBoxModel::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUITextBoxModel::VTable** var_10_1 = arg1
*arg1 = &partsengine::CGUITextBoxModel::`vftable'
arg1[1] = 6
arg1[2] = 0xc8
arg1[3] = 0x1e
sub_4ff2c0(&arg1[4])
int32_t var_4 = 0
arg1[0x11].b = 0
arg1[0x17] = 0xf
arg1[0x16] = 0
arg1[0x12].b = 0
sub_402110(&arg1[0x12], 0x6da55d, nullptr)
var_4.b = 1
__builtin_memcpy(&arg1[0x18], 
    "\xd0\x07\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\x96\x00\x00\x00\x96\x00\x00\x00\x"
"96\x00\x00\x00\x64\x00\x00\x00\x64\x00\x00\x00\x64\x00\x00\x00\xc8\x00\x00\x00\xc8\x00\x00\x00\xc8"
"00\x00\x00", 
    0x34)
arg1[0x2a] = 0xf
arg1[0x29] = 0
arg1[0x25].b = 0
sub_402110(&arg1[0x25], 0x6da55e, nullptr)
int128_t xmm0 = data_709310
arg1[6] = arg1[3] - arg1[1]
arg1[0x2b] = 0
arg1[0x2c].b = 1
arg1[0x2d] = 0
*(arg1 + 0x1c) = xmm0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
