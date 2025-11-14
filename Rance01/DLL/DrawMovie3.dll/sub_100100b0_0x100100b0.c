// 函数: sub_100100b0
// 地址: 0x100100b0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x14)
EnterCriticalSection(lpCriticalSection)
*(arg1 + 0x95) = 0
*(arg1 + 0x18) = 0
LeaveCriticalSection(lpCriticalSection)
return 0
