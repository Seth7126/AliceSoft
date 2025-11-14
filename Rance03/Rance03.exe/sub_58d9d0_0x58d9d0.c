// 函数: sub_58d9d0
// 地址: 0x58d9d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c7e10
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_18 = &thread::CCriticalLock::`vftable'
void* var_10 = arg1 + 0x74
EnterCriticalSection(*(arg1 + 0x78) + 4)
char var_14 = 1
int32_t var_4 = 0
sub_591250(arg1 + 0xbc)
LeaveCriticalSection(*(arg1 + 0x78) + 4)
struct thread::CCriticalLock::VTable* const var_18_1 = &thread::CCriticalLock::`vftable'
void* var_10_1 = arg1 + 0x6c
EnterCriticalSection(*(arg1 + 0x70) + 4)
char var_14_1 = 1
int32_t var_4_1 = 1
sub_590910(arg1 + 0xa0)
LeaveCriticalSection(*(arg1 + 0x70) + 4)
struct thread::CCriticalLock::VTable* const var_18_2 = &thread::CCriticalLock::`vftable'
void* var_10_2 = arg1 + 0x64
EnterCriticalSection(*(arg1 + 0x68) + 4)
char var_14_2 = 1
int32_t var_4_2 = 2
sub_590910(arg1 + 0x84)
LeaveCriticalSection(*(arg1 + 0x68) + 4)
struct thread::CCriticalLock::VTable* const var_18_3 = &thread::CCriticalLock::`vftable'
EnterCriticalSection(*(arg1 + 0x80) + 4)
char var_14_3 = 1
int32_t var_4_3 = 3
int32_t* edi = *(arg1 + 0xd8)
int32_t* i = *edi

while (i != edi)
    int32_t* ecx_3 = i[0xa]
    
    if (ecx_3 != 0)
        (*(*ecx_3 + 4))(eax_2)
    
    if (*(i + 0xd) == 0)
        int32_t* i_1 = i[2]
        
        if (*(i_1 + 0xd) != 0)
            int32_t* i_3 = i[1]
            
            if (*(i_3 + 0xd) == 0)
                while (i == i_3[2])
                    i = i_3
                    i_3 = i_3[1]
                    
                    if (*(i_3 + 0xd) != 0)
                        break
            
            i = i_3
        else
            i = i_1
            int32_t* i_2 = *i
            
            while (*(i_2 + 0xd) == 0)
                i = i_2
                i_2 = *i

sub_418220(*(*(arg1 + 0xd8) + 4))
void* eax_20 = *(arg1 + 0xd8)
*(eax_20 + 4) = eax_20
int32_t* eax_21 = *(arg1 + 0xd8)
*eax_21 = eax_21
void* eax_22 = *(arg1 + 0xd8)
*(eax_22 + 8) = eax_22
*(arg1 + 0xdc) = 0
int32_t result = LeaveCriticalSection(*(arg1 + 0x80) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
