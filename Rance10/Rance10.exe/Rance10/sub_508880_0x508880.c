// 函数: sub_508880
// 地址: 0x508880
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_737690
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUIMultiTextBoxModel::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUIMultiTextBoxModel::VTable** var_14_1 = arg1
*arg1 = &partsengine::CGUIMultiTextBoxModel::`vftable'
arg1[1] = 0x100
arg1[2] = 0x100
arg1[3] = &textsurface::CTextSurfaceProperty::`vftable'
arg1[4] = 0
arg1[5] = 0x10
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
sub_403490(&arg1[0x11], 0x75d27b, nullptr)
var_8_1.b = 1
__builtin_memcpy(&arg1[0x17], 
    "\xd0\x07\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\x96\x00\x00\x00\x96\x00\x00\x00\x"
"96\x00\x00\x00\x64\x00\x00\x00\x64\x00\x00\x00\x64\x00\x00\x00\xc8\x00\x00\x00\xc8\x00\x00\x00\xc8"
"00\x00\x00", 
    0x34)
arg1[0x24] = 0
arg1[0x25] = 0
arg1[0x26].w = 0x101
arg1[0x2c] = 0xf
arg1[0x2b] = 0
void* eax_4

if (arg1[0x2c] u< 0x10)
    eax_4 = &arg1[0x27]
else
    eax_4 = arg1[0x27]

*eax_4 = 0
sub_403490(&arg1[0x27], 0x75d27f, nullptr)
var_8_1.b = 2
arg1[0x32] = 0xf
arg1[0x31] = 0
void* eax_5

if (arg1[0x32] u< 0x10)
    eax_5 = &arg1[0x2d]
else
    eax_5 = arg1[0x2d]

*eax_5 = 0
sub_403490(&arg1[0x2d], 0x75d277, nullptr)
var_8_1.b = 3
arg1[0x38] = 0xf
arg1[0x37] = 0
void* eax_6

if (arg1[0x38] u< 0x10)
    eax_6 = &arg1[0x33]
else
    eax_6 = arg1[0x33]

*eax_6 = 0
sub_403490(&arg1[0x33], 0x75d27a, nullptr)
var_8_1.b = 4
arg1[0x3e] = 0xf
arg1[0x3d] = 0
arg1[0x39].b = 0
sub_403490(&arg1[0x39], 0x75d275, nullptr)
arg1[0x3f] = 0
arg1[0x40] = 0
__builtin_memcpy(&arg1[0x41], 
    "\x03\x00\x00\x00\x03\x00\x00\x00\x03\x00\x00\x00\x03\x00\x00\x00\x01", 0x11)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
