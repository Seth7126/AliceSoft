// 函数: sub_4afea0
// 地址: 0x4afea0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bd206
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUIListBoxModel::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUIListBoxModel::VTable** var_10_1 = arg1
*arg1 = &partsengine::CGUIListBoxModel::`vftable'
arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
sub_402110(&arg1[1], &(*U",\n\n}")[2]:3, nullptr)
int32_t var_4 = 0
sub_4ff2c0(&arg1[7])
var_4.b = 1
__builtin_memcpy(&arg1[0x14], 
    "\xc8\x00\x00\x00\x10\x00\x00\x00\x96\x00\x00\x00\x08\x00\x00\x00\x02\x00\x00\x00", 0x14)
arg1[0x1e] = 0xf
arg1[0x1d] = 0
arg1[0x19].b = 0
sub_402110(&arg1[0x19], &(*U",\n\n}")[3]:2, nullptr)
arg1[0x1f] = 0
sub_4ff2c0(&arg1[0x20])
int128_t xmm0 = data_709310
arg1[0x2d] = 0
arg1[0x2e] = 0
arg1[0x2f] = 0
arg1[0x30] = 0xffffffff
arg1[0x31] = 0
arg1[0x32] = 0
*(arg1 + 0x8c) = xmm0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
