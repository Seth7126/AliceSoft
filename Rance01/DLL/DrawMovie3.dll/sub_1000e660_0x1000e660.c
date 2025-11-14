// 函数: sub_1000e660
// 地址: 0x1000e660
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

uint32_t uTimerID = *(arg1 + 0xc0)

if (uTimerID != 0)
    timeKillEvent(uTimerID)
    *(arg1 + 0xc0) = 0

EnterCriticalSection(arg1 + 0x94)
*(arg1 + 0x70) = 0
*(arg1 + 0x74) = 0
*(arg1 + 0xb8) = 0
*(arg1 + 0xbc) = 0
LeaveCriticalSection(arg1 + 0x94)
return 0
