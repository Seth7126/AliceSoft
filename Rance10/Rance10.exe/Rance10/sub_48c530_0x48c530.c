// 函数: sub_48c530
// 地址: 0x48c530
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f30b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class kiwi::IFilterProcess>::kiwi::CAllPassFilterProcess::VTable** 
    var_14 = arg1
int32_t arg_4
int32_t edi = arg_4
arg1[1] = 1
void* var_18 = &arg1[4]
*arg1 = &kiwi::CAllPassFilterProcess::`vftable'{for `common::SuicideRefCounter<class kiwi::IFilterProcess>'}
arg1[2] = edi
arg1[3] = arg2
arg_4 = 0
sub_48c4a0(&arg1[4], edi, &arg_4)
int32_t var_8_1 = 0
arg_4 = 0
sub_48c4a0(&arg1[9], edi, &arg_4)
int32_t var_8_2 = 1
void* var_18_1 = &arg1[0xe]
arg_4 = 0
sub_48c4a0(&arg1[0xe], edi, &arg_4)
var_8_2.b = 2
arg_4 = 0
sub_48c4a0(&arg1[0x13], edi, &arg_4)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
