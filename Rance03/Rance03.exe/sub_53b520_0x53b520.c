// 函数: sub_53b520
// 地址: 0x53b520
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c3018
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_30 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_18 = &thread::CCriticalLock::`vftable'
EnterCriticalSection(*(arg1 + 0x10) + 4)
char var_14 = 1
int32_t var_4 = 0
int32_t* eax_6 = *(arg1 + 4)
int32_t* i = *eax_6

if (i != eax_6)
    do
        void* ebx_1 = i[0xa]
        EnterCriticalSection(*(ebx_1 + 0xc) + 4)
        int32_t edi_1 = *(ebx_1 + 4)
        LeaveCriticalSection(*(ebx_1 + 0xc) + 4)
        
        if (edi_1 == 1)
            sub_53a360(i[0xa])
            int32_t* i_1 = i
            void var_1c
            
            if (*(i + 0xd) != 0)
                sub_417fb0(arg1 + 4, &var_1c, i_1)
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
                    sub_417fb0(arg1 + 4, &var_1c, i_1)
                else
                    i = i_5
                    int32_t* i_6 = *i
                    
                    if (*(i_6 + 0xd) != 0)
                        sub_417fb0(arg1 + 4, &var_1c, i_1)
                    else
                        do
                            i = i_6
                            i_6 = *i
                        while (*(i_6 + 0xd) == 0)
                        
                        sub_417fb0(arg1 + 4, &var_1c, i_1)
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
