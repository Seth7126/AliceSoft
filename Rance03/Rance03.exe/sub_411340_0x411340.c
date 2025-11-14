// 函数: sub_411340
// 地址: 0x411340
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HWND hWnd = *(arg1 + 0x7c)

if (hWnd != 0 && IsWindow(hWnd) != 0)
    SetActiveWindow(*(arg1 + 0x7c))
    HWND eax_1
    eax_1.b = 1
    return eax_1

if (sub_414310(arg1 + 0x40) != 0)
    void* edx_1
    
    if (arg1 == 0)
        edx_1 = nullptr
    else
        edx_1 = arg1 + 4
    
    int32_t* ecx_1 = *(arg1 + 0x4c)
    
    if (ecx_1 != 0)
        (**ecx_1)(edx_1)
    
    sub_4209c0()
    void* eax_4
    
    if (arg1 == 0)
        eax_4 = nullptr
    else
        eax_4 = arg1 + 8
    
    *(arg1 + 0x84) = eax_4
    
    if (sub_403d10(arg1 + 0x70) != 0)
        ShowWindow(*(arg1 + 0x7c), SW_SHOW)
        UpdateWindow(*(arg1 + 0x7c))
        BOOL eax_5
        eax_5.b = 1
        return eax_5

return 0
