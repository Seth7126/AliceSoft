// 函数: sub_5e68d0
// 地址: 0x5e68d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_1 = arg3 & 0xfff0
int32_t* ecx_1
HWND hWnd

if (eax_1 == 0xf120)
    if ((*arg1[0x72])() == 0)
        OpenIcon(arg2)
        return 0
    
    hWnd = arg2
    ecx_1 = arg1
    
    if (IsIconic(hWnd) != 0)
        goto label_5e6930
    
    sub_5e5700(ecx_1)
    return 0

if (eax_1 == 0x9cb0)
    sub_5e5510(arg1)
    return 0

if (eax_1 == 0xf020)
    if ((*arg1[0x72])() != 0)
        sub_5e55c0(arg1)
else if (eax_1 == 0xf030)
    hWnd = arg2
    
    if ((*arg1[0x72])() == 0)
        if (IsIconic(hWnd) != 0)
            OpenIcon(hWnd)
        
        sub_5e5610(arg1)
        return 0
    
    if (IsIconic(hWnd) == 0)
        return 0
    
    ecx_1 = arg1
label_5e6930:
    
    if (sub_5e5560(ecx_1) != 0)
        OpenIcon(hWnd)
        return 0
    
    OpenIcon(hWnd)
    sub_5e5700(arg1)
    return 0

if ((eax_1 == 0xf140 || eax_1 == 0xf170) && (*(arg1[0x65] + 4))() != 0)
    return 1

return DefWindowProcA(arg2, 0x112, arg3, arg4)
