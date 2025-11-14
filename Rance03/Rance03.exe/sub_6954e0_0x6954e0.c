// 函数: sub_6954e0
// 地址: 0x6954e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

WINDOWPLACEMENT lpwndpl
BOOL var_4 = __security_cookie ^ &lpwndpl
int32_t ecx = *(arg1 + 0x58)

if (ecx != 0xffffffff)
    int32_t left
    
    if (ecx != ((*(arg1 + 0x6c) - *(arg1 + 0x68)) s>> 2) - 1)
        GetWindowPlacement(*(*(*(arg1 + 0x68) + (ecx << 2) + 4) + 8), &lpwndpl)
        left = lpwndpl.rcNormalPosition.left
    else
        left = sub_694800(arg1)
    
    int32_t ebp_1 = arg2
    int32_t ebx_2 = left - *(arg1 + 0x24) - ebp_1
    int32_t ecx_2 = *(arg1 + 0x58)
    
    if (ecx_2 != 0)
        WINDOWPLACEMENT lpwndpl_1
        GetWindowPlacement(*(*(*(arg1 + 0x68) + (ecx_2 << 2) - 4) + 8), &lpwndpl_1)
        int32_t left_1 = lpwndpl_1.rcNormalPosition.left
        GetWindowPlacement(*(*(*(arg1 + 0x68) + (*(arg1 + 0x58) << 2) - 4) + 8), &lpwndpl)
        ebp_1 += lpwndpl.rcNormalPosition.left - lpwndpl.rcNormalPosition.right - left_1
    
    sub_6944b0(arg1, *(arg1 + 0x58), ebp_1)
    sub_6944b0(arg1, *(arg1 + 0x58) + 1, ebx_2)
    void* eax_19 = *(*(arg1 + 0x68) + (*(arg1 + 0x58) << 2))
    
    if (*(eax_19 + 0x7c) != 0)
        eax_19.b = 0
        sub_69a5bc(var_4 ^ &lpwndpl)
        return eax_19
    
    InvalidateRect(*(eax_19 + 8), nullptr, 1)

BOOL eax_1
eax_1.b = 1
sub_69a5bc(var_4 ^ &lpwndpl)
return eax_1
