// 函数: sub_5e1a70
// 地址: 0x5e1a70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

EnableMenuItem(GetSystemMenu(arg2, 0), 0xf010, MF_GRAYED)
SetMenu(arg2, *(*(arg1 + 8) + 0x80))
sub_5e58d0(*(arg1 + 0x34), *(*(arg1 + 8) + 0x80))
DrawMenuBar(**(arg1 + 8))
uint32_t uIDEvent = *(arg1 + 0x10)

if (uIDEvent != 0)
    KillTimer(*(arg1 + 0x14), uIDEvent)
    *(arg1 + 0x10) = 0

*(arg1 + 0x14) = arg2
*(arg1 + 0x10) = SetTimer(arg2, 1, 0xa, nullptr)
uint32_t eax_5 = timeGetTime()
EnterCriticalSection(data_74f9b0 + 4)
int32_t ebx = data_75dd3c
CRITICAL_SECTION* lpCriticalSection = data_74f9b0 + 4

if (eax_5 u< ebx)
    LeaveCriticalSection(lpCriticalSection)
    *(arg1 + 0x18) = ebx
    return 0

data_75dd3c = eax_5
LeaveCriticalSection(lpCriticalSection)
*(arg1 + 0x18) = eax_5
return 0
