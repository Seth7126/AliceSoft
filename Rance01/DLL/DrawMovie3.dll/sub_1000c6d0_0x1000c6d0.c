// 函数: sub_1000c6d0
// 地址: 0x1000c6d0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_100190b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_4 = (*(*arg1 + 0x98))(arg2)
int32_t result

if (eax_4 s>= 0)
    if (arg1[5] != 1)
        goto label_1000c7b2
    
    (*(*arg1 + 0x50))(eax_2)
    arg1[0x2d] = 0
    EnterCriticalSection(&arg1[0x1f])
    int32_t var_4 = 0
    
    if (arg1[5] != 0)
        arg1[0x2d] = 1
        void* var_14_1 = &arg1[0x25]
        EnterCriticalSection(&arg1[0x25])
        var_4.b = 1
        (*(*arg1 + 0x34))(arg2)
        LeaveCriticalSection(&arg1[0x25])
        int32_t var_4_1 = 0xffffffff
        LeaveCriticalSection(&arg1[0x1f])
        SetEvent(arg1[0x17])
    label_1000c7b2:
        
        if ((*(*arg1 + 0x2c))(eax_2) s>= 0)
            (*(*arg1 + 0x50))()
            arg1[0x2d] = 0
            EnterCriticalSection(&arg1[0x1f])
            int32_t var_4_2 = 2
            void* lpCriticalSection
            
            if (arg1[5] != 0)
                void* var_10_1 = &arg1[0x25]
                EnterCriticalSection(&arg1[0x25])
                var_4_2.b = 3
                (*(*arg1 + 0xa8))(arg1[0x1b])
                (*(*arg1 + 0x70))()
                (*(*arg1 + 0x60))()
                (*(*arg1 + 0x6c))()
                LeaveCriticalSection(&arg1[0x25])
                lpCriticalSection = &arg1[0x1f]
            else
                lpCriticalSection = &arg1[0x1f]
            
            LeaveCriticalSection(lpCriticalSection)
        else
            arg1[0x2d] = 0
    else
        LeaveCriticalSection(&arg1[0x1f])
    
    result = 0
else
    int32_t eax_6 = neg.d(eax_4 + 0x7ffbfdd5)
    result = sbb.d(eax_6, eax_6, eax_4 != 0x8004022b) & eax_4

fsbase->NtTib.ExceptionList = ExceptionList
return result
