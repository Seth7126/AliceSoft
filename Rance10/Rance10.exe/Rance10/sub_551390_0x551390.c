// 函数: sub_551390
// 地址: 0x551390
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73a71b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CLoopCGSprite::VTable** 
    var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CLoopCGSprite::VTable** 
    var_14_1 = arg1
arg1[1] = 1
*arg1 = &partsengine::CLoopCGSprite::`vftable'{for `common::SuicideRefCounter<class partsengine::CSprite>'}
arg1[2] = 0
arg1[3] = 0
arg1[4] = 0
int32_t var_8_1 = 0
arg1[0xa] = 0xf
arg1[9] = 0
arg1[5].b = 0
sub_403590(&arg1[5], &data_7fd394, 0, 0xffffffff)
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe].b = 1
arg1[0xf] = 0
arg1[0x10] = 0
arg1[0x12] = &common::CPoint::`vftable'
arg1[0x13] = 0
arg1[0x14] = 0
arg1[0x15] = &common::CSize::`vftable'
arg1[0x16] = 0
arg1[0x17] = 0
arg1[0x11] = &common::CRect::`vftable'
arg1[0x18].w = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
