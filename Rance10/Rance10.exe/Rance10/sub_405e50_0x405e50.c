// 函数: sub_405e50
// 地址: 0x405e50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_38
int32_t eax_1 = __security_cookie ^ &var_38
struct PROCESS_MEMORY_COUNTERS ppsmemCounters
ppsmemCounters.PeakPagefileUsage = 0
ppsmemCounters.cb = 0x28
ppsmemCounters.PageFaultCount = 0
ppsmemCounters.PeakWorkingSetSize = 0
ppsmemCounters.WorkingSetSize = 0
ppsmemCounters.QuotaPeakPagedPoolUsage = 0
ppsmemCounters.QuotaPagedPoolUsage = 0
ppsmemCounters.QuotaPeakNonPagedPoolUsage = 0
ppsmemCounters.QuotaNonPagedPoolUsage = 0
ppsmemCounters.PagefileUsage = 0
BOOL eax_3 = K32GetProcessMemoryInfo(GetCurrentProcess(), &ppsmemCounters, 0x28)

if (eax_3 == 0)
    @__security_check_cookie@4(eax_1 ^ &var_38)
    return eax_3

uint32_t eax_5 = ppsmemCounters.WorkingSetSize u>> 0x14
@__security_check_cookie@4(eax_1 ^ &var_38)
return eax_5
