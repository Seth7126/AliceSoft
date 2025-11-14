// 函数: sub_1000dfa0
// 地址: 0x1000dfa0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_10019208
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
CRITICAL_SECTION* var_10_1 = arg1 + 0x70
EnterCriticalSection(arg1 + 0x70)
void* eax_3 = *(arg1 + 8)
int32_t var_4 = 0
int32_t result

if (eax_3 == 1)
    result = (*(*(arg1 - 0xc) + 0x30))(1)
    LeaveCriticalSection(arg1 + 0x70)
else if (*(*(arg1 + 0x6c) + 0x18) != 0)
    result = sub_1000ecc0(arg1)
    
    if (result s< 0)
        LeaveCriticalSection(arg1 + 0x70)
    else
        EnterCriticalSection(arg1 + 0x88)
        *(arg1 + 0xa4) = 1
        LeaveCriticalSection(arg1 + 0x88)
        (*(*(arg1 - 0xc) + 0x80))(eax_2)
        (*(*(arg1 - 0xc) + 0x28))(1)
        (*(*(arg1 - 0xc) + 0x6c))()
        uint32_t uTimerID = *(arg1 + 0xb4)
        
        if (uTimerID != 0)
            timeKillEvent(uTimerID)
            *(arg1 + 0xb4) = 0
        
        int32_t* eax_13 = *(*(arg1 + 0x6c) + 0x9c)
        
        if (eax_13 != 0)
            (*(*eax_13 + 0x14))(eax_13)
        
        if (eax_3 == 0)
            int32_t eax_15 = *(*(arg1 - 0xc) + 0x70)
            *(arg1 + 0x54) = 0
            eax_15()
        
        result = (*(*(arg1 - 0xc) + 0x30))(eax_3)
        LeaveCriticalSection(arg1 + 0x70)
else
    int32_t eax_7 = *(*(arg1 - 0xc) + 0x30)
    *(arg1 + 8) = 1
    result = eax_7(1)
    LeaveCriticalSection(arg1 + 0x70)

fsbase->NtTib.ExceptionList = ExceptionList
return result
