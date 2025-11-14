// 函数: sub_657650
// 地址: 0x657650
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
sub_658b60(arg1)
HWND hWnd = *(arg1 + 8)

if (hWnd != 0 && *(arg1 + 0xc) != 0)
    DestroyWindow(hWnd)
    void* eax = *(arg1 + 4)
    *(arg1 + 8) = 0
    
    if (UnregisterClassA(*(eax + 0x28), *(eax + 0x14)) != 0)
        *(arg1 + 0xc) = 0

return 0
