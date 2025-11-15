// 函数: sub_562930
// 地址: 0x562930
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73ba1f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_14
void arg_4
sub_42eb70(arg1 + 4, &var_14, &arg_4)
void** eax_3 = var_14

if (eax_3 != *(arg1 + 4))
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3[5]

void** eax_5 = sub_6e810c(0x34)
var_14 = eax_5
int32_t var_8_1 = 0
int64_t* eax_6 = sub_6e810c(8)
int64_t* var_18 = eax_6
*eax_6 = 0
*(eax_6 + 4) = 1
*eax_6 = &savedata::CSaveData::`vftable'{for `common::SuicideRefCounter<class ISaveData>'}
struct passregister::CPassRegister::VTable** result = sub_562a60(eax_5, eax_6)
int32_t var_8_2 = 0xffffffff
void* var_1c
sub_42ebc0(arg1 + 4, &var_1c, &arg_4)
*(var_1c + 0x14) = result
fsbase->NtTib.ExceptionList = ExceptionList
return result
