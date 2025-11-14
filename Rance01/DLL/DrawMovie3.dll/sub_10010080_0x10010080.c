// 函数: sub_10010080
// 地址: 0x10010080
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x14)
EnterCriticalSection(lpCriticalSection)
*(arg1 + 0x95) = 1
LeaveCriticalSection(lpCriticalSection)
return 0
