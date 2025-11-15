// 函数: sub_4d7e20
// 地址: 0x4d7e20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7344b6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatSpriteView::VTable** var_14 =
    arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatSpriteView::VTable** 
    var_14_1 = arg1
arg1[1] = 1
*arg1 = &partsengine::CFlatSpriteView::`vftable'{for `common::SuicideRefCounter<class IInterface>'}
arg1[2] = 0
arg1[3] = arg2
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
int32_t var_8_1 = 0
arg1[7] = 0
arg1[8] = 0
arg1[9] = 0
var_8_1.b = 1
arg2 = &arg1[0xa]
arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xa] = sub_4a8f20()
arg1[0xc] = 1
arg1[0xd] = 0
arg1[0xe] = 3
arg1[0xf].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
