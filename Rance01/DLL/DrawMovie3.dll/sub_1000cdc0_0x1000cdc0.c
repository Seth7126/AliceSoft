// 函数: sub_1000cdc0
// 地址: 0x1000cdc0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_10019110
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
CRITICAL_SECTION* lpCriticalSection
CRITICAL_SECTION* lpCriticalSection_2 = lpCriticalSection
int32_t result = (*(*lpCriticalSection_2->__offset(0x40).d + 0x9c))(arg1)

if (result s< 0)
    CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection_2->__offset(0x40).d + 0x7c
    arg1 = lpCriticalSection_1
    EnterCriticalSection(lpCriticalSection_1)
    int32_t var_4 = 0
    
    if (*(lpCriticalSection_2->__offset(0xffffffffffffff90).d + 0x14) != 0
            && lpCriticalSection_2->RecursionCount:1.b == 0)
        void* ecx_2 = lpCriticalSection_2->__offset(0x40).d
        
        if (*(ecx_2 + 0x60) == 0 && lpCriticalSection_2->__offset(0xffffffffffffff8c).b == 0)
            sub_1000eed0(ecx_2, 3, result, nullptr)
            sub_1000bed0(&lpCriticalSection, lpCriticalSection_2->__offset(0x40).d + 0x94)
            void* ecx_4 = lpCriticalSection_2->__offset(0x40).d
            var_4.b = 1
            
            if (*(ecx_4 + 0x64) != 0 && *(ecx_4 + 0x74) == 0)
                sub_1000c930(ecx_4)
            
            LeaveCriticalSection(lpCriticalSection)
            *(lpCriticalSection_2 - 0x74) = 1
    
    LeaveCriticalSection(lpCriticalSection_1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
