// 函数: sub_5e6a30
// 地址: 0x5e6a30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HMENU hMenu = *(arg1 + 0x228)

if (hMenu != 0)
    DestroyMenu(hMenu)
    *(arg1 + 0x228) = 0

bool cond:0 = *(arg1 + 0x1bc) s<= 0
*(arg1 + 0x30) = 0

if (not(cond:0))
    ReleaseCapture()
    *(arg1 + 0x1bc) = 0

void* ecx = *(arg1 + 0x1a0)

if (ecx != 0)
    sub_46cec0(*(ecx + 4))
    (*(**(arg1 + 0x1a0) + 4))()
    *(arg1 + 0x1a0) = 0

uint32_t uIDEvent = *(arg1 + 0x23c)

if (uIDEvent != 0)
    KillTimer(*(arg1 + 0x240), uIDEvent)
    *(arg1 + 0x23c) = 0

PostQuitMessage(0)
return 0
