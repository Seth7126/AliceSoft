// 函数: sub_6998f0
// 地址: 0x6998f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7341e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
HANDLE handles = arg1[0x12]
int32_t var_14 = arg1[0x14]
enum WAIT_EVENT hEvent = WaitForMultipleObjects(2, &handles, 0, 1)

if (hEvent != WAIT_OBJECT_0)
    if (hEvent != 0x1)
        goto label_6999de
    
    if (*arg4 != 0)
        *arg4 = 0
        hEvent.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return hEvent
    
    int32_t ecx_4 = arg1[8]
    
    if (ecx_4 != 0)
        *arg3 += 1
    
    if (ecx_4 == 0 || *arg3 s< ecx_4)
        if (arg1[5] != 0)
            struct thread::CCriticalLock::VTable* var_24
            sub_405ec0(&var_24, &arg1[0x15])
            int32_t var_8_1 = 0
            int32_t* eax_6 = arg1[6]
            (*(*eax_6 + 0x48))(eax_6)
            int32_t* eax_7 = arg1[6]
            (*(*eax_7 + 0x34))(eax_7, 0)
            int32_t* eax_8 = arg1[6]
            (*(*eax_8 + 0x30))(eax_8, 0, 0, 0)
            int32_t var_8_2 = 0xffffffff
            sub_405f30(&var_24)
        
        arg1[9] = (**arg1[4])(eax_2)
    label_6999de:
        
        if (sub_699b00(arg1).b != 0)
            *arg4 = 1
        
        if (arg1[5] == 0 && arg1[9] != 0xffffffff)
            enum WAIT_EVENT eax_12 = (*(*arg1 + 0x28))(eax_2)
            
            if ((*(*arg1 + 0x24))() u>= eax_12)
                hEvent = arg1[0x14]
                
                if (hEvent != WAIT_OBJECT_0)
                    SetEvent(hEvent)
        
        if (arg1[0x1d] != 0)
            int32_t eax_15 = (**arg1[4])(eax_2) - arg1[9]
            int32_t eax_16 = sub_484ed0(arg1[0x1d], eax_15)
            int32_t eax_17 = sub_484ed0(arg1[0x1d], 0x64)
            fsbase->NtTib.ExceptionList = ExceptionList
            return neg.d(sbb.d(eax_17, eax_17, eax_16 u< arg1[0xc] - arg2 + eax_17))

hEvent.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return hEvent
