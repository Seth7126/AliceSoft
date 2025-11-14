// 函数: sub_1000eae0
// 地址: 0x1000eae0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_100192c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
CRITICAL_SECTION* esi = arg1
CRITICAL_SECTION* lpCriticalSection = esi->__offset(0x2c).d
arg1 = lpCriticalSection
EnterCriticalSection(lpCriticalSection)
int32_t var_4 = 0

if (arg2 != 0)
    (*(*arg2 + 4))(arg2)

int32_t* OwningThread = esi->OwningThread

if (OwningThread != 0)
    (*(*OwningThread + 8))(OwningThread)

esi->OwningThread = arg2
LeaveCriticalSection(lpCriticalSection)
fsbase->NtTib.ExceptionList = ExceptionList
return 0
