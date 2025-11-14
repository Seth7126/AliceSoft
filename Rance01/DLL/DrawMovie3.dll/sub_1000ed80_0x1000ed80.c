// 函数: sub_1000ed80
// 地址: 0x1000ed80
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_10019328
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg1
CRITICAL_SECTION* lpCriticalSection = edi[0xb]
arg1 = lpCriticalSection
EnterCriticalSection(lpCriticalSection)
int32_t ebp = 0
edi[5] = arg2
edi[6] = arg3
int32_t var_4 = 0
int32_t result_1

if (edi[2] == 0)
    result_1 = (*(*edi + 0x14))(edi)

int32_t result

if (edi[2] != 0 || result_1 s>= 0)
    if (edi[2] == 2)
        goto label_1000ee41
    
    int32_t esi = (*(edi[-3] + 0x18))(eax_2)
    int32_t var_10_1 = esi
    
    if (esi s<= 0)
    label_1000ee3c:
        lpCriticalSection = arg1
    label_1000ee41:
        edi[2] = 2
        LeaveCriticalSection(lpCriticalSection)
        result = 0
    else
        while (true)
            int32_t* eax_8 = (*(edi[-3] + 0x1c))(ebp)
            
            if (eax_8 == 0)
                goto label_1000ee3c
            
            if (eax_8[6] != 0)
                int32_t result_2 = (*(*eax_8 + 0x1c))(arg2, arg3)
                
                if (result_2 s< 0)
                    LeaveCriticalSection(arg1)
                    result = result_2
                    break
                
                esi = var_10_1
            
            ebp += 1
            
            if (ebp s>= esi)
                goto label_1000ee3c
else
    LeaveCriticalSection(lpCriticalSection)
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
return result
