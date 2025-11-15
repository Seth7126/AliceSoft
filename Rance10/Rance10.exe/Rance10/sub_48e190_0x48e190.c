// 函数: sub_48e190
// 地址: 0x48e190
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f3c1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct common::SuicideRefCounter<class kiwi::IFilterProcess>::kiwi::CMultiTapDelayProcess::VTable** 
    var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class kiwi::IFilterProcess>::kiwi::CMultiTapDelayProcess::VTable** 
    var_14_1 = arg1
int32_t* arg_8
int32_t* ecx = arg_8
arg1[1] = 1
*arg1 = &kiwi::CMultiTapDelayProcess::`vftable'{for `common::SuicideRefCounter<class kiwi::IFilterProcess>'}
arg1[2] = 0
arg1[3] = 0
arg1[4] = 0
arg1[2] = *ecx
arg1[3] = ecx[1]
arg1[4] = ecx[2]
*ecx = 0
ecx[1] = 0
ecx[2] = 0
int32_t var_8_1 = 0
arg1[5] = 0
arg1[6] = 0
arg1[7] = 0
arg1[5] = *arg3
arg1[6] = arg3[1]
arg1[7] = arg3[2]
*arg3 = 0
arg3[1] = 0
arg3[2] = 0
var_8_1.b = 1
arg1[8] = arg2
arg1[9] = arg4
int32_t eax_9 = arg1[5]
arg_8 = nullptr
int32_t eax_10

if (eax_9 != arg1[6])
    eax_10 = *(arg1[6] - 4)
else
    eax_10 = 0

sub_48c4a0(&arg1[0xa], eax_10 + 1, &arg_8)
var_8_1.b = 2
int32_t eax_13 = arg1[2]
arg_8 = nullptr
int32_t eax_14

if (eax_13 != arg1[3])
    eax_14 = *(arg1[3] - 4)
else
    eax_14 = 0

sub_48c4a0(&arg1[0xf], eax_14 + 1, &arg_8)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
