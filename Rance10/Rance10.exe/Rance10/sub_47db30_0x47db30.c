// 函数: sub_47db30
// 地址: 0x47db30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a4f6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
*arg1 = &ibis::CJoystick::`vftable'{for `common::SuicideRefCounter<class IJoystick>'}
int32_t* edi = arg1[2]
sub_47d8c0(edi)
int32_t* ecx_1 = *edi

if (ecx_1 != 0)
    (*(*ecx_1 + 8))(ecx_1)
    *edi = 0

void* eax_4 = arg1[2]

if (eax_4 != 0)
    sub_47dcd0(eax_4)

if ((arg2 & 1) != 0)
    int32_t var_20_3 = 0xc
    operator new(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
