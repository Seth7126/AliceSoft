// 函数: sub_418300
// 地址: 0x418300
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HWND hWnd

if ((*(*arg1 + 0xc))() == 0)
    if (Concurrency::details::UMSFreeVirtualProcessorRoot::CreatePrimary(arg1[0x14]).b == 0)
        int32_t* ecx_1 = arg1[0x14]
        
        if (ecx_1 != 0)
            (**ecx_1)(1)
        
        arg1[0x14] = 0
        hWnd.b = 0
        return hWnd
else
    hWnd = *(arg1[0x14] + 8)
    
    if (hWnd != 0)
        SetActiveWindow(hWnd)

hWnd.b = 1
return hWnd
