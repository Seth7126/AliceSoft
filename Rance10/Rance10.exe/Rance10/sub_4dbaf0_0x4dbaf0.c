// 函数: sub_4dbaf0
// 地址: 0x4dbaf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7346de
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CFlatSprite::VTable** 
    var_14 = arg1
arg1[1] = 1
*arg1 = &
    partsengine::CFlatSprite::`vftable'{for `common::SuicideRefCounter<class partsengine::CSprite>'}
arg1[7] = 0xf
arg1[6] = 0
char* eax_3

if (arg1[7] u< 0x10)
    eax_3 = &arg1[2]
else
    eax_3 = arg1[2]

*eax_3 = 0
sub_403590(&arg1[2], &data_7fceb4, 0, 0xffffffff)
int32_t var_8_1 = 0
arg1[8].b = 1
arg1[0xa] = &common::CPoint::`vftable'
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xd] = &common::CSize::`vftable'
arg1[0xe] = 0
arg1[0xf] = 0
arg1[9] = &common::CRect::`vftable'
var_8_1.b = 1
struct common::SuicideRefCounter<class common::detail::EmptyClass>::partsengine::CFlatView::VTable**
     edi = arg3
sub_4dcc60(&arg1[0x10], edi)
arg1[0x17] = arg4
void* eax_5 = &arg1[0x1a]
arg1[0x19] = edi
*(eax_5 + 0x14) = 0xf
*(eax_5 + 0x10) = 0

if (*(eax_5 + 0x14) u>= 0x10)
    eax_5 = *eax_5

*eax_5 = 0
var_8_1.b = 3
arg1[0x20] = 0
arg1[0x21] = 0
arg1[0x22] = arg2
struct common::SuicideRefCounter<class common::detail::EmptyClass>::partsengine::CFlatView::VTable**
     eax_7 = sub_6e810c(0x148)
arg3 = eax_7
var_8_1.b = 4
arg1[0x18] = sub_4dea10(eax_7, arg1, edi, &arg1[0x10])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
