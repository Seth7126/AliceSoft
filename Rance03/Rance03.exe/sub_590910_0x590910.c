// 函数: sub_590910
// 地址: 0x590910
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c30d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_18 = &thread::CCriticalLock::`vftable'
void* var_10 = arg1 + 4
EnterCriticalSection(*(arg1 + 8) + 4)
char var_14 = 1
int32_t var_4 = 0
int32_t* eax_5 = *(arg1 + 0xc)
int32_t* i = *eax_5

if (i != eax_5)
    do
        *(i[0xa] + 0x28) = 0
        sub_54c280(i[0xa])
        
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
    while (i != *(arg1 + 0xc))

sub_418220(*(*(arg1 + 0xc) + 4))
void* eax_8 = *(arg1 + 0xc)
*(eax_8 + 4) = eax_8
int32_t* eax_9 = *(arg1 + 0xc)
*eax_9 = eax_9
void* eax_10 = *(arg1 + 0xc)
*(eax_10 + 8) = eax_10
*(arg1 + 0x10) = 0
int32_t result = LeaveCriticalSection(*(arg1 + 8) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
