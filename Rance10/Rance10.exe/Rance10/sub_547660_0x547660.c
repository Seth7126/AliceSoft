// 函数: sub_547660
// 地址: 0x547660
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_733e8b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CCGSprite::VTable** 
    var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CCGSprite::VTable** 
    var_14_1 = arg1
arg1[1] = 1
*arg1 =
    &partsengine::CCGSprite::`vftable'{for `common::SuicideRefCounter<class partsengine::CSprite>'}
arg1[7] = 0xf
arg1[6] = 0
char* eax_3

if (arg1[7] u< 0x10)
    eax_3 = &arg1[2]
else
    eax_3 = arg1[2]

*eax_3 = 0
sub_403590(&arg1[2], &data_7fd2bc, 0, 0xffffffff)
int32_t var_8_1 = 0
arg1[8] = 0
sub_54d5a0(&arg1[9])
arg1[0x25] = &common::CPoint::`vftable'
arg1[0x26] = 0
arg1[0x27] = 0
arg1[0x28] = &common::CSize::`vftable'
arg1[0x29] = 0
arg1[0x2a] = 0
arg1[0x24] = &common::CRect::`vftable'
arg1[0x2b].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
