// 函数: sub_552820
// 地址: 0x552820
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73a87e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CNumeralSprite::VTable** 
    var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[1] = 1
*arg1 = &partsengine::CNumeralSprite::`vftable'{for `common::SuicideRefCounter<class partsengine::CSprite>'}
arg1[2] = 0xa
arg1[3] = 0xb
arg1[9] = 0xf
arg1[8] = 0
char* eax_3

if (arg1[9] u< 0x10)
    eax_3 = &arg1[4]
else
    eax_3 = arg1[4]

*eax_3 = 0
sub_403590(&arg1[4], &data_7fd3dc, 0, 0xffffffff)
int32_t var_8_1 = 0
arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xd] = 0
char* (__fastcall* var_28)(int32_t* arg1) = sub_403320
var_8_1.b = 1
`eh vector constructor iterator'(&arg1[0xe], 0x18, 0xc, sub_404d40)
char* (__fastcall* var_28_1)(int32_t* arg1) = sub_403320
var_8_1.b = 2
`eh vector constructor iterator'(&arg1[0x56], 0x18, 0xc, sub_404d40)
sub_6437f0(&arg1[0x9e])
arg1[0xab].b = 0
arg1[0xac] = 0
arg1[0xad].b = 0
arg1[0xae] = 0
arg1[0xaf] = 0
arg1[0xb0].b = 1
__builtin_memset(&arg1[0xb1], 0, 0x14)
arg1[0xb7] = &common::CPoint::`vftable'
arg1[0xb8] = 0
arg1[0xb9] = 0
arg1[0xba] = &common::CSize::`vftable'
arg1[0xbb] = 0
arg1[0xbc] = 0
arg1[0xb6] = &common::CRect::`vftable'
var_8_1.b = 6
arg1[0xbd].w = 1
sub_403490(&arg1[0xe], U"0", 1)
sub_403490(&arg1[0x56], 0x767258, 2)
sub_403490(&arg1[0x14], U"1", 1)
sub_403490(&arg1[0x5c], 0x767250, 2)
sub_403490(&arg1[0x1a], U"2", 1)
sub_403490(&arg1[0x62], 0x767248, 2)
sub_403490(&arg1[0x20], U"3", 1)
sub_403490(&arg1[0x68], 0x767240, 2)
sub_403490(&arg1[0x26], U"4", 1)
sub_403490(&arg1[0x6e], 0x767238, 2)
sub_403490(&arg1[0x2c], U"5", 1)
sub_403490(&arg1[0x74], 0x767230, 2)
sub_403490(&arg1[0x32], U"6", 1)
sub_403490(&arg1[0x7a], 0x767228, 2)
sub_403490(&arg1[0x38], U"7", 1)
sub_403490(&arg1[0x80], 0x7672f0, 2)
sub_403490(&arg1[0x3e], U"8", 1)
sub_403490(&arg1[0x86], 0x7672e8, 2)
sub_403490(&arg1[0x44], U"9", 1)
sub_403490(&arg1[0x8c], 0x7672e0, 2)
sub_403490(&arg1[0x4a], U"-", 1)
sub_403490(&arg1[0x92], 0x7672d8, 2)
sub_403490(&arg1[0x50], U",", 1)
sub_403490(&arg1[0x98], 0x7672d0, 2)
sub_42c9c0(&arg1[0xb], 0xc)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
