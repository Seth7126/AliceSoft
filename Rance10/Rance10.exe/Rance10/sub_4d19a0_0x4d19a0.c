// 函数: sub_4d19a0
// 地址: 0x4d19a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_733edc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct common::SuicideRefCounter<class common::detail::EmptyClass>::partsengine::CFlatEmitterView::VTable
    ** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class common::detail::EmptyClass>::partsengine::CFlatEmitterView::VTable
    ** var_14_1 = arg1
arg1[1] = 1
*arg1 = &partsengine::CFlatEmitterView::`vftable'{for `common::SuicideRefCounter<class common::detail::EmptyClass>'}
arg1[2] = 0
arg1[3] = 0
arg1[4] = 0
arg1[5] = arg3
arg1[6] = 0
arg1[7] = 0
arg1[8] = 0
int32_t var_8_1 = 0
arg1[9] = 0
arg1[0xa].b = 0
__builtin_memset(&arg1[0xb], 0, 0x18)
var_8_1.b = 2
arg3 = &arg1[0x11]
sub_5269a0(&arg1[0x11])
arg1[0x41] = 0
arg1[0x42] = 0
arg1[0x43] = 0
var_8_1.b = 3
sub_527900(&arg1[0x44])
arg1[0x4c] = arg2
arg1[0x4d].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
