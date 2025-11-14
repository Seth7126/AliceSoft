// 函数: sub_6866e0
// 地址: 0x6866e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = *(arg1 + 0x48)

if (esi == 0)
    int32_t eax
    eax.b = 0
    return eax

HWND hWnd = *(esi + 8)

if (hWnd != 0 && *(esi + 0xc) != 0)
    DestroyWindow(hWnd)
    void* eax_1 = *(esi + 4)
    *(esi + 8) = 0
    
    if (UnregisterClassA(*(eax_1 + 0x28), *(eax_1 + 0x14)) != 0)
        *(esi + 0xc) = 0

int32_t* ecx = *(arg1 + 0x48)

if (ecx != 0)
    (*(*ecx + 4))(1)

*(arg1 + 0x48) = 0
hWnd.b = 1
return hWnd
