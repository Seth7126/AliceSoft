// 函数: sub_489360
// 地址: 0x489360
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f0df
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = arg3

if (esi[4] == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1

struct common::SuicideRefCounter<class ISoundData>::kiwi::CSoundDataFiltered::VTable** eax_4 =
    sub_6e810c(0x20)
arg3 = eax_4
int32_t var_8_1 = 0
struct common::SuicideRefCounter<class ISoundData>::kiwi::CSoundDataFiltered::VTable** eax_5 =
    sub_481a30(eax_4, arg1, arg2, esi)
int32_t var_8_2 = 0xffffffff
(*(*arg1 + 4))(eax_2)
fsbase->NtTib.ExceptionList = ExceptionList
return eax_5
