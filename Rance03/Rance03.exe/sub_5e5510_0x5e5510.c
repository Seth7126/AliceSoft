// 函数: sub_5e5510
// 地址: 0x5e5510
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

BOOL hWnd = **(arg1 + 0xc)

if (hWnd != 0)
    BOOL eax_1 = IsIconic(hWnd)
    
    if (eax_1 != 0)
        hWnd = OpenIcon(**(arg1 + 0xc))
    
    if (eax_1 == 0 || hWnd != 0)
        char eax_5 = (**(arg1 + 0x1c8))()
        
        if (eax_5 != 0)
            hWnd = sub_5e5700(arg1)
        
        if (eax_5 == 0 || hWnd.b != 0)
            return sub_5e5300(arg1, 1)

return hWnd
