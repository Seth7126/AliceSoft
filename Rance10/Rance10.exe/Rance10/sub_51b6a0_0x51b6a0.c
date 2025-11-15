// 函数: sub_51b6a0
// 地址: 0x51b6a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_738ce6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUITextBoxModel::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUITextBoxModel::VTable** var_14_1 = arg1
*arg1 = &partsengine::CGUITextBoxModel::`vftable'
arg1[1] = 0xc8
arg1[2] = 0x1e
arg1[3] = &textsurface::CTextSurfaceProperty::`vftable'
arg1[4] = 0
arg1[5] = 0x18
arg1[6] = 0
arg1[7] = 0
arg1[8] = 0
arg1[9] = 0xff
__builtin_memset(&arg1[0xa], 0, 0x14)
arg1[0xf] = 0xff
int32_t var_8_1 = 0
arg1[0x10].b = 0
arg1[0x16] = 0xf
arg1[0x15] = 0
void* eax_3

if (arg1[0x16] u< 0x10)
    eax_3 = &arg1[0x11]
else
    eax_3 = arg1[0x11]

*eax_3 = 0
sub_403490(&arg1[0x11], 0x75d33d, nullptr)
var_8_1.b = 1
__builtin_memcpy(&arg1[0x17], 
    "\xd0\x07\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\x96\x00\x00\x00\x96\x00\x00\x00\x"
"96\x00\x00\x00\x64\x00\x00\x00\x64\x00\x00\x00\x64\x00\x00\x00\xc8\x00\x00\x00\xc8\x00\x00\x00\xc8"
"00\x00\x00", 
    0x34)
arg1[0x29] = 0xf
arg1[0x28] = 0
arg1[0x24].b = 0
sub_403490(&arg1[0x24], 0x75d33e, nullptr)
arg1[0x2a] = 0
arg1[0x2b].w = 0x101
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
