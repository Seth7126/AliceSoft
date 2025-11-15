// 函数: sub_44b430
// 地址: 0x44b430
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729300
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &cgmanager::CCGCache::`vftable'{for `common::SuicideRefCounter<class IInterface>'}
EnterCriticalSection(&arg1[3]->vFunc_1)
int32_t* edi = arg1[4]
void* eax_5 = &arg1[4]
void** esi = *edi

if (esi != edi)
    do
        (*(*esi[8] + 4))(eax_2)
        esi = *esi
    while (esi != edi)
    
    eax_5 = &arg1[4]

sub_44b780(eax_5)
LeaveCriticalSection(&arg1[3]->vFunc_1)
sub_44b780(&arg1[4])
int32_t result = sub_403160(arg1[4], 1, 0x24)
arg1[2] = &thread::CCriticalSection::`vftable'
int32_t* ecx_3 = arg1[3]

if (ecx_3 != 0)
    result = (**ecx_3)(1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
