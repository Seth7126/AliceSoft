// 函数: sub_481a30
// 地址: 0x481a30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e98b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class ISoundData>::kiwi::CSoundDataFiltered::VTable** var_14 = arg1
arg1[1] = 1
arg1[2] = arg2
*arg1 = &kiwi::CSoundDataFiltered::`vftable'{for `common::SuicideRefCounter<class ISoundData>'}
arg1[3] = arg3
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
int32_t var_8_1 = 0
int32_t* ecx = arg1[2]
arg1[7].b = 0

if (ecx != 0)
    (**ecx)(eax_2)

int32_t* ecx_1 = arg1[3]

if (ecx_1 != 0)
    (**ecx_1)(eax_2)

sub_481b60(arg1, arg4)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
