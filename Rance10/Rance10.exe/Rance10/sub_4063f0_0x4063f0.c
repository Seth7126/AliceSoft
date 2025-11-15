// 函数: sub_4063f0
// 地址: 0x4063f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726f78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_406670(arg1)
struct thread::CCriticalLock::VTable* const var_1c = &thread::CCriticalLock::`vftable'
EnterCriticalSection(*(arg1 + 8) + 4)
char var_18 = 1
int32_t var_8_1 = 0
int32_t* edi = *(arg1 + 0xc)

for (void** i = *edi; i != edi; i = *i)
    (*(*i[2] + 4))(eax_2)

int32_t* ecx_1 = *(arg1 + 0xc)
int32_t* i_2 = *ecx_1
*ecx_1 = ecx_1
void* ecx_2 = *(arg1 + 0xc)
*(ecx_2 + 4) = ecx_2
*(arg1 + 0x10) = 0

if (i_2 != *(arg1 + 0xc))
    int32_t* i_1
    
    do
        i_1 = *i_2
        sub_403160(i_2, 1, 0xc)
        i_2 = i_1
    while (i_1 != *(arg1 + 0xc))

int32_t result = LeaveCriticalSection(*(arg1 + 8) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
