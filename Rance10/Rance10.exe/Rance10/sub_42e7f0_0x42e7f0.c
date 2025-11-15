// 函数: sub_42e7f0
// 地址: 0x42e7f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728076
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct common::SuicideRefCounter<class IAFAFactory>::afafactory::CAFAFactory::VTable** i_1 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &afafactory::CAFAFactory::`vftable'{for `common::SuicideRefCounter<class IAFAFactory>'}
int32_t* esi = arg1[2]
struct common::SuicideRefCounter<class IAFAFactory>::afafactory::CAFAFactory::VTable** i = *esi
i_1 = i

for (; i != esi; i = i_1)
    int32_t* ecx = i[5]
    
    if (ecx != 0)
        (*(*ecx + 4))(eax_2)
    
    sub_429080(&i_1)

int32_t var_8_1 = 0
sub_42e7b0(arg1[2]->vFunc_1)
void* eax_5 = arg1[2]
*(eax_5 + 4) = eax_5
int32_t* eax_6 = arg1[2]
*eax_6 = eax_6
void* eax_7 = arg1[2]
*(eax_7 + 8) = eax_7
arg1[3] = 0
int32_t* eax_8 = arg1[2]
int32_t* var_24_1 = eax_8
sub_42e2e0(&arg1[2], &i_1, *eax_8)
int32_t result = sub_403160(arg1[2], 1, 0x18)
fsbase->NtTib.ExceptionList = ExceptionList
return result
