// 函数: sub_4905e0
// 地址: 0x4905e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f6e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0
struct common::SuicideRefCounter<class kiwi::IFilterProcess>::kiwi::CReverbNoERProcess::VTable** 
    result = sub_6e810c(0x1c)
int32_t* ebx = arg2
int32_t var_8_1 = 0
int32_t* eax_3 = (*(*ebx + 0x24))("reverb")
void* var_24
int32_t* eax_4 = sub_490990(eax_3, eax_3, &var_24, arg3)
var_8_1.b = 1
int32_t var_14_1 = 1
int32_t eax_5 = (*(*ebx + 8))("preDelay", 0)
int32_t eax_6
int32_t ecx_4
eax_6, ecx_4 = (*(*arg3 + 0x10))(eax_2)
int32_t var_38_1 = ecx_4
(*(*ebx + 0xc))("reverbSignalRatio", 0)
result[1] = 1
*result = &
    kiwi::CReverbNoERProcess::`vftable'{for `common::SuicideRefCounter<class kiwi::IFilterProcess>'}
result[2] = 0
result[3] = 0
result[4] = 0
result[2] = *eax_4
result[3] = eax_4[1]
result[4] = eax_4[2]
*eax_4 = 0
eax_4[1] = 0
eax_4[2] = 0
result[5] = fconvert.s(arg1)
result[6] = eax_5 * eax_6 u/ 0x3e8
void* ecx_7 = var_24
int32_t var_1c

if (ecx_7 != 0)
    sub_403160(ecx_7, (var_1c - ecx_7) s>> 2, 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
