// 函数: sub_59cc90
// 地址: 0x59cc90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c3048
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_1c = ebx
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_18 = &thread::CCriticalLock::`vftable'
EnterCriticalSection(*(arg1 + 0x10) + 4)
char var_14 = 1
int32_t var_4 = 0
int32_t* eax_6 = *(arg1 + 4)
int32_t* i = *eax_6

if (i == eax_6)
label_59cd92:
    ebx.b = 1
else
    while (true)
        int32_t* ecx = *(i[5] + 0x10)
        char eax_10
        
        if (ecx != 0)
            eax_10 = (*(*ecx + 0x10))(eax_2)
        
        if (ecx == 0 || eax_10 == 0)
            void* edi_1 = i[5]
            ebx = i[4]
            int32_t* ecx_1 = *(edi_1 + 0x10)
            
            if (ecx_1 != 0)
                (*(*ecx_1 + 4))(eax_2)
                *(edi_1 + 0x10) = 0
            
            int32_t* eax_13 = (*(*arg2 + 0x50))(eax_2)
            *(edi_1 + 0x10) = eax_13
            char eax_16
            
            if (eax_13 != 0)
                eax_16 = (*(*eax_13 + 8))(ebx, 1)
            
            if (eax_13 == 0 || eax_16 == 0)
                ebx.b = 0
                break
            
            if (arg3 != 0)
                goto label_59cd92
        
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
        
        if (i == *(arg1 + 4))
            goto label_59cd92

LeaveCriticalSection(*(arg1 + 0x10) + 4)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
