// 函数: sub_10010430
// 地址: 0x10010430
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_100192c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
CRITICAL_SECTION* lpCriticalSection = arg1->__offset(0x2c).d
EnterCriticalSection(lpCriticalSection)
int32_t var_4 = 0
arg1->__offset(0x34).d = arg2

if (arg2 == 0)
    arg1->__offset(0x38).d = 0
else if ((**arg2)(arg2, 0x1001bd70, arg1 + 0x38) s>= 0)
    int32_t* esi_2 = *(arg1 + 0x38)
    (*(*esi_2 + 8))(esi_2)

int32_t eax_6 = arg1->__offset(0x30).d

if (eax_6 != 0)
    int32_t var_20_3 = eax_6
    sub_10001d52()
    arg1->__offset(0x30).d = 0

if (arg3 != 0)
    int32_t ecx_3 = 0x7fffffff
    int16_t* eax_7 = arg3
    
    while (true)
        if (*eax_7 != 0)
            eax_7 = &eax_7[1]
            int32_t temp1_1 = ecx_3
            ecx_3 -= 1
            
            if (temp1_1 != 1)
                continue
        else if (ecx_3 != 0)
            break
        
        LeaveCriticalSection(lpCriticalSection)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0x80070057
    
    int32_t ecx_6
    ecx_6.b = mulu.dp.d(0x7fffffff - ecx_3 + 1, 2) u>> 0x20 != 0
    int16_t* eax_12 = sub_10001dc9(neg.d(ecx_6) | ((0x7fffffff - ecx_3 + 1) * 2))
    arg1->__offset(0x30).d = eax_12
    
    if (eax_12 == 0)
        LeaveCriticalSection(lpCriticalSection)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0x8007000e
    
    sub_10010320(eax_12, 0x7fffffff - ecx_3 + 1, arg3)

LeaveCriticalSection(lpCriticalSection)
fsbase->NtTib.ExceptionList = ExceptionList
return 0
