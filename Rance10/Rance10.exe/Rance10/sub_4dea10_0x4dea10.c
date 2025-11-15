// 函数: sub_4dea10
// 地址: 0x4dea10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734a8b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class common::detail::EmptyClass>::partsengine::CFlatView::VTable**
     var_14 = arg1
arg1[1] = 1
*arg1 = &partsengine::CFlatView::`vftable'{for `common::SuicideRefCounter<class common::detail::EmptyClass>'}
arg1[2] = 0
arg1[3] = arg4
int32_t var_24 = 0x41f00000
arg1[4] = &partsengine::CProjection::`vftable'
__builtin_memset(&arg1[5], 0, 0x14)
void var_28
sub_5572c0(&arg1[4], 0x400, 0x300, var_28)
int32_t var_8_1 = 0
arg1[0x1a] = 0
arg1[0x1b] = arg3
sub_5269a0(&arg1[0x1c])
arg1[0x50] = arg2
arg1[0x4c] = 0
arg1[0x4d] = 0
arg1[0x4e].w = 1
*(arg1 + 0x13a) = 0
arg1[0x4f] = 0
arg1[0x51].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
