// 函数: sub_61f5c0
// 地址: 0x61f5c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ce3f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
HANDLE handles = arg1[0x10]
int32_t var_1c = arg1[0x12]
enum WAIT_EVENT result = WaitForMultipleObjects(2, &handles, 0, 1)

if (result != WAIT_OBJECT_0)
    if (result != 0x1)
        goto label_61f697
    
    if (*arg4 == 0)
        int32_t ecx = arg1[8]
        
        if (ecx != 0)
            *arg3 += 1
        
        if (ecx != 0 && *arg3 s>= ecx)
            result.b = 0
        else
            if (arg1[5] != 0)
                struct thread::CCriticalLock::VTable* var_18
                sub_5f40d0(&var_18, &arg1[0x13])
                int32_t var_4 = 0
                int32_t* eax_6 = arg1[6]
                (*(*eax_6 + 0x48))(eax_6)
                int32_t* eax_7 = arg1[6]
                (*(*eax_7 + 0x34))(eax_7, 0)
                int32_t* eax_8 = arg1[6]
                (*(*eax_8 + 0x30))(eax_8, 0, 0, 0)
                int32_t var_4_1 = 0xffffffff
                sub_5f4140(&var_18)
            
            arg1[9] = (**arg1[4])(eax_2)
        label_61f697:
            
            if (sub_61f7b0(arg1) != 0)
                *arg4 = 1
            
            if (arg1[5] == 0 && arg1[9] != 0)
                int32_t eax_13 = (*(*arg1 + 0x28))(eax_2)
                
                if ((*(*arg1 + 0x24))() u>= eax_13)
                    HANDLE hEvent = arg1[0x12]
                    
                    if (hEvent != 0)
                        SetEvent(hEvent)
            
            int32_t ebx_2 = (**arg1[4])(eax_2) - arg1[9]
            int32_t eax_17 = sub_4741f0(&arg1[0x1b], 0x64)
            int32_t esi_5 = arg1[0xc] - arg2 + eax_17
            int32_t eax_18 = sub_4741f0(&arg1[0x1b], ebx_2)
            result = neg.d(sbb.d(eax_18, eax_18, eax_18 u< esi_5))
    else
        *arg4 = 0
        result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
