// 函数: sub_1000f9d0
// 地址: 0x1000f9d0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_100192f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* ebx = arg2

if (ebx == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0x80004003

CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x14)
arg2 = lpCriticalSection
EnterCriticalSection(lpCriticalSection)
int32_t var_4 = 0

if (*(arg1 + 0xc) == 0)
    sub_10012840(ebx)
    LeaveCriticalSection(lpCriticalSection)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0x80040209

sub_10012980(ebx, arg1 + 0x28)
LeaveCriticalSection(lpCriticalSection)
fsbase->NtTib.ExceptionList = ExceptionList
return 0
