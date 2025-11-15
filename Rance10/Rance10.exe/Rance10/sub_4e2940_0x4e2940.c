// 函数: sub_4e2940
// 地址: 0x4e2940
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734f87
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUICheckBoxModel::VTable** var_30 = arg1
*arg1 = &partsengine::CGUICheckBoxModel::`vftable'
arg1[1] = 0x10
arg1[2] = 0x10
arg1[3].w = 1
arg1[4] = 0xc8
arg1[5] = 0xc8
arg1[6] = 0xc8
arg1[7] = &textsurface::CTextSurfaceProperty::`vftable'
arg1[8] = 0
__builtin_memcpy(&arg1[9], 
    "\x10\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00", 0x14)
__builtin_memset(&arg1[0xe], 0, 0x14)
struct partsengine::CGUICheckBoxModel::VTable** var_34 = arg1
arg1[0x13] = 0xff
void* eax_3 = &arg1[0x14]
int32_t var_8_1 = 0
*(eax_3 + 0x14) = 0xf
*(eax_3 + 0x10) = 0

if (*(eax_3 + 0x14) u>= 0x10)
    eax_3 = *eax_3

*eax_3 = 0
void* eax_4 = &arg1[0x1a]
*(eax_4 + 0x14) = 0xf
*(eax_4 + 0x10) = 0

if (*(eax_4 + 0x14) u>= 0x10)
    eax_4 = *eax_4

*eax_4 = 0
void* eax_5 = &arg1[0x20]
*(eax_5 + 0x14) = 0xf
*(eax_5 + 0x10) = 0

if (*(eax_5 + 0x14) u>= 0x10)
    eax_5 = *eax_5

*eax_5 = 0
void* eax_6 = &arg1[0x26]
*(eax_6 + 0x14) = 0xf
*(eax_6 + 0x10) = 0

if (*(eax_6 + 0x14) u>= 0x10)
    eax_6 = *eax_6

*eax_6 = 0
void* eax_7 = &arg1[0x2c]
*(eax_7 + 0x14) = 0xf
*(eax_7 + 0x10) = 0

if (*(eax_7 + 0x14) u>= 0x10)
    eax_7 = *eax_7

*eax_7 = 0
void* eax_8 = &arg1[0x32]
*(eax_8 + 0x14) = 0xf
*(eax_8 + 0x10) = 0

if (*(eax_8 + 0x14) u>= 0x10)
    eax_8 = *eax_8

*eax_8 = 0
var_8_1.b = 6
arg1[0x3d] = 0xf
arg1[0x3c] = 0
void* eax_9

if (arg1[0x3d] u< 0x10)
    eax_9 = &arg1[0x38]
else
    eax_9 = arg1[0x38]

*eax_9 = 0
sub_403490(&arg1[0x38], 0x75d0f6, nullptr)
var_8_1.b = 7
arg1[0x3e] = 4
arg1[0x3f].b = 0
arg1[0x40] = 0
arg1[0x41] = 0
arg1[0x42].b = 1
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x75d0e3, nullptr)
var_8_1.b = 8
sub_4e2e20(arg1, &var_2c)
var_8_1.b = 7

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
sub_403490(&var_2c, 0x75d0f3, nullptr)
var_8_1.b = 9
sub_4e35b0(arg1, &var_2c)

if (var_18_1 u>= 0x10)
    sub_403160(var_2c.d, var_18_1 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
