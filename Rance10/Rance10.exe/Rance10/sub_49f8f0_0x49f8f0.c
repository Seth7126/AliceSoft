// 函数: sub_49f8f0
// 地址: 0x49f8f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HMENU hMenu = *(arg1 + 0x250)

if (hMenu != 0)
    DestroyMenu(hMenu)
    *(arg1 + 0x250) = 0

bool cond:0 = *(arg1 + 0x1f0) s<= 0
*(arg1 + 0x34) = 0

if (not(cond:0))
    ReleaseCapture()
    *(arg1 + 0x1f0) = 0

void* eax = *(arg1 + 0x1d4)

if (eax != 0)
    int32_t* edi_1 = *(eax + 8)
    sub_47d8c0(edi_1)
    int32_t* ecx_1 = *edi_1
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 8))(ecx_1)
        *edi_1 = 0
    
    (*(**(arg1 + 0x1d4) + 4))()
    *(arg1 + 0x1d4) = 0

uint32_t uIDEvent = *(arg1 + 0x264)

if (uIDEvent != 0)
    KillTimer(*(arg1 + 0x268), uIDEvent)
    *(arg1 + 0x264) = 0

PostQuitMessage(0)
return 0
