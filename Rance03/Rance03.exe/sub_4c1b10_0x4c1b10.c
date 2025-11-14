// 函数: sub_4c1b10
// 地址: 0x4c1b10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6be240
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUIMultiTextBoxModel::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUIMultiTextBoxModel::VTable** var_10_1 = arg1
*arg1 = &partsengine::CGUIMultiTextBoxModel::`vftable'
arg1[1] = 0x100
arg1[2] = 0x100
sub_4ff2c0(&arg1[3])
int32_t var_4 = 0
arg1[0x10].b = 0
arg1[0x16] = 0xf
arg1[0x15] = 0
arg1[0x11].b = 0
sub_402110(&arg1[0x11], 0x6da3af, nullptr)
var_4.b = 1
__builtin_memcpy(&arg1[0x17], 
    "\xd0\x07\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\x96\x00\x00\x00\x96\x00\x00\x00\x"
"96\x00\x00\x00\x64\x00\x00\x00\x64\x00\x00\x00\x64\x00\x00\x00\xc8\x00\x00\x00\xc8\x00\x00\x00\xc8"
"00\x00\x00", 
    0x34)
arg1[0x24] = 0
arg1[0x25] = 0
arg1[0x2b] = 0xf
arg1[0x2a] = 0
arg1[0x26].b = 0
sub_402110(&arg1[0x26], 0x6da3c2, nullptr)
var_4.b = 2
arg1[0x31] = 0xf
arg1[0x30] = 0
arg1[0x2c].b = 0
sub_402110(&arg1[0x2c], 0x6da39b, nullptr)
var_4.b = 3
arg1[0x37] = 0xf
arg1[0x36] = 0
arg1[0x32].b = 0
sub_402110(&arg1[0x32], 0x6da3ae, nullptr)
var_4.b = 4
arg1[0x3d] = 0xf
arg1[0x3c] = 0
arg1[0x38].b = 0
sub_402110(&arg1[0x38], 0x6da3ce, nullptr)
int128_t xmm0 = data_709310
arg1[0x3e] = 0
arg1[0x3f] = 0
arg1[0x40] = 0
*(arg1 + 0x18) = xmm0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
