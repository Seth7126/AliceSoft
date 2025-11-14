// 函数: sub_687dd0
// 地址: 0x687dd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t eax = zx.d(arg3)

if (eax == 0x9d10)
    HWND hWnd = *(arg1 + 8)
    
    if (hWnd != 0 && *(arg1 + 0xc) != 0)
        DestroyWindow(hWnd)
        void* eax_4 = *(arg1 + 4)
        *(arg1 + 8) = 0
        
        if (UnregisterClassA(*(eax_4 + 0x28), *(eax_4 + 0x14)) != 0)
            *(arg1 + 0xc) = 0
else if (eax == 0x9d11)
    sub_687e30(arg1, arg2)

return 0
