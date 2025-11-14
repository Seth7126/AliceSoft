// 函数: sub_687b30
// 地址: 0x687b30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1
uint32_t uIDEvent = *(arg1 + 0xd8)
uint32_t uElapse = *(arg1 + 0x2c)

if (uIDEvent != 0)
    KillTimer(*(arg1 + 0xdc), uIDEvent)
    *(arg1 + 0xd8) = 0

*(arg1 + 0xdc) = arg2
*(arg1 + 0xd8) = SetTimer(arg2, 1, uElapse, nullptr)

if (sub_687f20(arg1, arg2) == 0)
label_687b9f:
    HWND hWnd = *(arg1 + 8)
    
    if (hWnd != 0 && *(arg1 + 0xc) != 0)
        DestroyWindow(hWnd)
        void* eax_4 = *(arg1 + 4)
        *(arg1 + 8) = 0
        
        if (UnregisterClassA(*(eax_4 + 0x28), *(eax_4 + 0x14)) != 0)
            *(arg1 + 0xc) = 0
else
    if (sub_6880f0(arg1, arg2) == 0)
        goto label_687b9f
    
    if (sub_688270(arg1, arg2) == 0)
        goto label_687b9f

return 0
