// 函数: sub_49e850
// 地址: 0x49e850
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bc0d1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUIComboBoxModel::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUIComboBoxModel::VTable** var_10_1 = arg1
*arg1 = &partsengine::CGUIComboBoxModel::`vftable'
arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
sub_402110(&arg1[1], 0x6da237, nullptr)
int32_t var_4 = 0
sub_4ff2c0(&arg1[7])
var_4.b = 1
arg1[0x14] = 0xc8
arg1[0x15] = 0x10
arg1[0x16] = 8
arg1[0x17] = 2
arg1[0x1d] = 0xf
arg1[0x1c] = 0
arg1[0x18].b = 0
sub_402110(&arg1[0x18], 0x6da233, nullptr)
var_4.b = 2
arg1[0x23] = 0xf
arg1[0x22] = 0
arg1[0x1e].b = 0
sub_402110(&arg1[0x1e], 0x6da23b, nullptr)
sub_4ff2c0(&arg1[0x24])
int128_t xmm0 = data_709310
arg1[0x31] = 0
arg1[0x32] = 0
*(arg1 + 0x9c) = xmm0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
