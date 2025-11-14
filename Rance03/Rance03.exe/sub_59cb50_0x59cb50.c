// 函数: sub_59cb50
// 地址: 0x59cb50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c3048
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_18 = &thread::CCriticalLock::`vftable'
void* var_10 = arg1 + 0xc
EnterCriticalSection(*(arg1 + 0x10) + 4)
char var_14 = 1
int32_t var_4 = 0
int32_t* eax_5 = *(arg1 + 4)
int32_t* i = *eax_5

if (i != eax_5)
    do
        if (*(i[5] + 4) == 1)
            (*(*i[4] + 4))(eax_2)
            sub_53a360(i[5])
            int32_t* i_1 = i
            void var_1c
            
            if (*(i + 0xd) != 0)
                sub_420180(arg1 + 4, &var_1c, i_1)
            else
                int32_t* i_5 = i[2]
                
                if (*(i_5 + 0xd) != 0)
                    int32_t* i_7 = i[1]
                    
                    if (*(i_7 + 0xd) == 0)
                        while (i == i_7[2])
                            i = i_7
                            i_7 = i_7[1]
                            
                            if (*(i_7 + 0xd) != 0)
                                break
                    
                    i = i_7
                    sub_420180(arg1 + 4, &var_1c, i_1)
                else
                    i = i_5
                    int32_t* i_6 = *i
                    
                    if (*(i_6 + 0xd) != 0)
                        sub_420180(arg1 + 4, &var_1c, i_1)
                    else
                        do
                            i = i_6
                            i_6 = *i
                        while (*(i_6 + 0xd) == 0)
                        
                        sub_420180(arg1 + 4, &var_1c, i_1)
        else if (*(i + 0xd) == 0)
            int32_t* i_2 = i[2]
            
            if (*(i_2 + 0xd) != 0)
                int32_t* i_4 = i[1]
                
                if (*(i_4 + 0xd) == 0)
                    while (i == i_4[2])
                        i = i_4
                        i_4 = i_4[1]
                        
                        if (*(i_4 + 0xd) != 0)
                            break
                
                i = i_4
            else
                i = i_2
                int32_t* i_3 = *i
                
                while (*(i_3 + 0xd) == 0)
                    i = i_3
                    i_3 = *i
    while (i != *(arg1 + 4))

int32_t result = LeaveCriticalSection(*(arg1 + 0x10) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
