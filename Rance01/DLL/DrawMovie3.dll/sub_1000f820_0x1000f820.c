// 函数: sub_1000f820
// 地址: 0x1000f820
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_10019138
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg2 != 0 && arg3 != 0)
    CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x14)
    EnterCriticalSection(lpCriticalSection)
    int32_t var_4 = 0
    
    if (*(arg1 + 0xc) != 0)
        LeaveCriticalSection(lpCriticalSection)
        result = 0x80040204
    else if (*(*(arg1 + 0x1c) + 0x14) == 0 || *(arg1 + 0x19) != 0)
        int32_t result_1 = (*(*(arg1 - 0xc) + 0x28))(arg2)
        void* edx_2 = *(arg1 - 0xc)
        
        if (result_1 s>= 0)
            int32_t result_2 = (*(edx_2 + 0x20))(arg3)
            
            if (result_2 != 0)
                (*(*(arg1 - 0xc) + 0x2c))(eax_2)
                
                if (result_2 s>= 0 || result_2 == 0x80004005 || result_2 == 0x80070057)
                    result_2 = 0x8004022a
                
                goto label_1000f966
            
            *(arg1 + 0xc) = arg2
            arg2->DebugInfo->CriticalSection(arg2)
            result_2 = (*(*(arg1 - 0xc) + 0x24))(arg3)
            
            if (result_2 s< 0)
            label_1000f947:
                int32_t* eax_14 = *(arg1 + 0xc)
                (*(*eax_14 + 8))(eax_14)
                int32_t edx_9 = *(*(arg1 - 0xc) + 0x2c)
                *(arg1 + 0xc) = 0
                edx_9(eax_2)
            label_1000f966:
                LeaveCriticalSection(lpCriticalSection)
                result = result_2
            else
                result_2 = (*(*(arg1 - 0xc) + 0x30))(arg2)
                
                if (result_2 s< 0)
                    goto label_1000f947
                
                LeaveCriticalSection(lpCriticalSection)
                result = 0
        else
            (*(edx_2 + 0x2c))(eax_2)
            LeaveCriticalSection(lpCriticalSection)
            result = result_1
    else
        LeaveCriticalSection(lpCriticalSection)
        result = 0x80040224
else
    result = 0x80004003

fsbase->NtTib.ExceptionList = ExceptionList
return result
