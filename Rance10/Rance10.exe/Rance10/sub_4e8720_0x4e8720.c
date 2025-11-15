// 函数: sub_4e8720
// 地址: 0x4e8720
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_735591
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUIComboBoxModel::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUIComboBoxModel::VTable** var_14_1 = arg1
*arg1 = &partsengine::CGUIComboBoxModel::`vftable'
arg1[6] = 0xf
arg1[5] = 0
int32_t* eax_3

if (arg1[6] u< 0x10)
    eax_3 = &arg1[1]
else
    eax_3 = arg1[1]

*eax_3 = 0
sub_403490(&arg1[1], 0x75d11e, nullptr)
int32_t var_8_1 = 0
sub_6437f0(&arg1[7])
var_8_1.b = 1
arg1[0x14] = 0xc8
arg1[0x15] = 0x10
arg1[0x16] = 8
arg1[0x17] = 2
arg1[0x1d] = 0xf
arg1[0x1c] = 0
void* eax_4

if (arg1[0x1d] u< 0x10)
    eax_4 = &arg1[0x18]
else
    eax_4 = arg1[0x18]

*eax_4 = 0
sub_403490(&arg1[0x18], 0x75d11f, nullptr)
var_8_1.b = 2
arg1[0x23] = 0xf
arg1[0x22] = 0
arg1[0x1e].b = 0
sub_403490(&arg1[0x1e], 0x75d123, nullptr)
sub_6437f0(&arg1[0x24])
arg1[0x31] = 0
arg1[0x32] = 0x10
arg1[0x33] = 0x96
arg1[0x34] = 8
arg1[0x35] = 2
arg1[0x36] = 0
sub_6437f0(&arg1[0x37])
int128_t xmm0 = data_79a8b0
arg1[0x44] = 0
arg1[0x45] = 0
arg1[0x46] = 0
*(arg1 + 0x9c) = xmm0
arg1[0x47] = 0xffffffff
int128_t xmm0_1 = data_79a8b0
arg1[0x48] = 0
arg1[0x49].b = 1
*(arg1 + 0xe8) = xmm0_1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
