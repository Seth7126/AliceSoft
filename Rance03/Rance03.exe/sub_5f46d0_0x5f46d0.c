// 函数: sub_5f46d0
// 地址: 0x5f46d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c30d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_5f4980(arg1)
struct thread::CCriticalLock::VTable* const var_18 = &thread::CCriticalLock::`vftable'
void* var_10 = arg1 + 4
EnterCriticalSection(*(arg1 + 8) + 4)
char var_14 = 1
int32_t var_4 = 0
int32_t* eax_5 = *(arg1 + 0xc)
void** i = *eax_5

if (i != eax_5)
    do
        (*(*i[2] + 4))(eax_2)
        i = *i
    while (i != *(arg1 + 0xc))

int32_t* eax_7 = *(arg1 + 0xc)
int32_t* i_2 = *eax_7
*eax_7 = eax_7
void* eax_8 = *(arg1 + 0xc)
*(eax_8 + 4) = eax_8
*(arg1 + 0x10) = 0

if (i_2 != *(arg1 + 0xc))
    int32_t* i_1
    
    do
        i_1 = *i_2
        j__free(i_2)
        i_2 = i_1
    while (i_1 != *(arg1 + 0xc))

int32_t result = LeaveCriticalSection(*(arg1 + 8) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
