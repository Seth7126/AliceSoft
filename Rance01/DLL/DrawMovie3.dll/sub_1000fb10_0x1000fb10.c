// 函数: sub_1000fb10
// 地址: 0x1000fb10
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x10)
EnterCriticalSection(lpCriticalSection)
*(arg1 + 0x1c) = arg2
LeaveCriticalSection(lpCriticalSection)
return 0
