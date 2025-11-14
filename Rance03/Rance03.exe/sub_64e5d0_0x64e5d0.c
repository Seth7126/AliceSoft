// 函数: sub_64e5d0
// 地址: 0x64e5d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = *(arg1 + 0xc)
BOOL hWnd = *esi

if (hWnd == 0)
    hWnd.b = 1
else
    bool cond:0_1 = DestroyWindow(hWnd) == 0
    hWnd.b = 1
    
    if (not(cond:0_1))
        *esi = 0

return hWnd
