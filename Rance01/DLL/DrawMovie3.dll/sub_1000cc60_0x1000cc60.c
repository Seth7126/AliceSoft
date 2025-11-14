// 函数: sub_1000cc60
// 地址: 0x1000cc60
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_100190e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
CRITICAL_SECTION* esi = arg1
CRITICAL_SECTION* lpCriticalSection_1 = esi->__offset(0xcc).d + 0x7c
arg1 = lpCriticalSection_1
EnterCriticalSection(lpCriticalSection_1)
CRITICAL_SECTION* lpCriticalSection = esi->__offset(0xcc).d + 0x94
int32_t var_4 = 0
CRITICAL_SECTION* lpCriticalSection_2 = lpCriticalSection
EnterCriticalSection(lpCriticalSection)
var_4.b = 1
sub_10010080(esi)
(*(*esi->__offset(0xcc).d + 0x84))(eax_2)
var_4.b = 0
LeaveCriticalSection(lpCriticalSection)
int32_t result = (*(*esi->__offset(0xcc).d + 0x64))()
LeaveCriticalSection(lpCriticalSection_1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
