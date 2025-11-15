// 函数: sub_418350
// 地址: 0x418350
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = *(arg1 + 0x50)
LRESULT hWnd

if (edi != 0)
    hWnd = *(edi + 8)
    
    if (hWnd != 0)
        SendMessageA(hWnd, 0x901, 0, 0)
        *(edi + 8) = 0
    
    int32_t* ecx = *(arg1 + 0x50)
    
    if (ecx != 0)
        (**ecx)(1)
    
    *(arg1 + 0x50) = 0

int32_t* ecx_1 = *(arg1 + 0x18)

if (ecx_1 != 0)
    (**ecx_1)(1)
    *(arg1 + 0x18) = 0

hWnd.b = 1
return hWnd
