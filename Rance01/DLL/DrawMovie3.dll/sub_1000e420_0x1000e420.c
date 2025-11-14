// 函数: sub_1000e420
// 地址: 0x1000e420
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_10019270
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
CRITICAL_SECTION* var_14 = &arg1[0x1f]
EnterCriticalSection(&arg1[0x1f])
void* eax_4 = arg1[0x1e] + 0x98
int32_t var_4 = 0
arg1[0x2d] = 1
int32_t result

if (sub_1000fdd0(eax_4, arg2) == 0)
    int32_t* ecx = arg1[0x1e]
    int32_t result_1
    
    if (ecx[0x33] != 0)
        result_1 = (*(*ecx + 0x24))(ecx[0x33])
    
    if (ecx[0x33] == 0 || result_1 s>= 0)
        void* var_10_1 = &arg1[0x25]
        EnterCriticalSection(&arg1[0x25])
        var_4.b = 1
        
        if (arg1[0x1b] != 0 || arg1[0x1c] != 0 || arg1[0x18] != 0)
            SetEvent(arg1[0x17])
            arg1[0x2d] = 0
            LeaveCriticalSection(&arg1[0x25])
            LeaveCriticalSection(&arg1[0x1f])
            result = 0x8000ffff
        else
            void* ecx_1 = arg1[0x14]
            
            if (ecx_1 != 0)
                sub_10011e30(ecx_1, arg2)
            
            int32_t eax_8
            
            if (arg1[0x19] == 1)
                eax_8 = (*(*arg1 + 0x54))(arg2)
            
            if (arg1[0x19] != 1 || eax_8 != 0)
                void* eax_9 = arg1[0x1e]
                arg1[0x2e] = *(eax_9 + 0xc0)
                arg1[0x2f] = *(eax_9 + 0xc4)
                arg1[0x1b] = arg2
                (*(*arg2 + 4))(arg2)
                
                if (arg1[0x19] == 0)
                    sub_1000cb20(arg1, 1)
                
                LeaveCriticalSection(&arg1[0x25])
                LeaveCriticalSection(&arg1[0x1f])
                result = 0
            else
                arg1[0x2d] = eax_8
                LeaveCriticalSection(&arg1[0x25])
                LeaveCriticalSection(&arg1[0x1f])
                result = 0x8004022b
    else
        arg1[0x2d] = 0
        LeaveCriticalSection(&arg1[0x1f])
        result = result_1
else
    arg1[0x2d] = 0
    LeaveCriticalSection(&arg1[0x1f])
    result = 0x80004005

fsbase->NtTib.ExceptionList = ExceptionList
return result
