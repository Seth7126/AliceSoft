// 函数: sub_685f00
// 地址: 0x685f00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = *(arg1 + 0x18)
HWND hWnd

if (esi != 0 && *(esi + 8) != 0)
    hWnd = *(esi + 8)
    
    if (hWnd != 0 && *(esi + 0xc) != 0)
        DestroyWindow(hWnd)
        void* eax = *(esi + 4)
        *(esi + 8) = 0
        
        if (UnregisterClassA(*(eax + 0x28), *(eax + 0x14)) != 0)
            *(esi + 0xc) = 0
    
    int32_t* ecx = *(arg1 + 0x18)
    
    if (ecx != 0)
        (*(*ecx + 4))(1)
    
    *(arg1 + 0x18) = 0

hWnd.b = 1
return hWnd
