// 函数: sub_4a93e0
// 地址: 0x4a93e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7316cf
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_7fcb98

if (ecx != 0)
    (**ecx)(1)
    data_7fcb98 = 0

struct msgskip::CMsgSkip::VTable** eax_4 = sub_6e810c(0x6c)
struct msgskip::CMsgSkip::VTable** var_14 = eax_4
int32_t var_8_1 = 0
int64_t* eax_5 = sub_6e810c(8)
int64_t* var_18 = eax_5
*eax_5 = 0
*(eax_5 + 4) = 1
*eax_5 = &savedata::CSaveData::`vftable'{for `common::SuicideRefCounter<class ISaveData>'}
data_7fcb98 = sub_4a7c10(eax_4, eax_5)
struct msgskip::CMsgSkip::VTable** result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
