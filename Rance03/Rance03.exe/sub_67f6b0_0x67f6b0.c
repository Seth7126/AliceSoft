// 函数: sub_67f6b0
// 地址: 0x67f6b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

WINDOWPLACEMENT lpwndpl
BOOL result = __security_cookie ^ &lpwndpl
BOOL result_1 = result
int32_t ecx = *(arg1 + 0x58)

if (ecx != 0xffffffff)
    int32_t left
    
    if (ecx != ((*(arg1 + 0x6c) - *(arg1 + 0x68)) s>> 2) - 1)
        GetWindowPlacement(*(*(*(arg1 + 0x68) + (ecx << 2) + 4) + 8), &lpwndpl)
        left = lpwndpl.rcNormalPosition.left
    else
        left = sub_67e980(arg1)
    
    int32_t ebp_1 = arg2
    int32_t ebx_2 = left - *(arg1 + 0x24) - ebp_1
    int32_t ecx_2 = *(arg1 + 0x58)
    
    if (ecx_2 != 0)
        WINDOWPLACEMENT lpwndpl_1
        GetWindowPlacement(*(*(*(arg1 + 0x68) + (ecx_2 << 2) - 4) + 8), &lpwndpl_1)
        int32_t left_1 = lpwndpl_1.rcNormalPosition.left
        GetWindowPlacement(*(*(*(arg1 + 0x68) + (*(arg1 + 0x58) << 2) - 4) + 8), &lpwndpl)
        ebp_1 += lpwndpl.rcNormalPosition.left - lpwndpl.rcNormalPosition.right - left_1
    
    sub_67e5c0(arg1, *(arg1 + 0x58), ebp_1)
    sub_67e5c0(arg1, *(arg1 + 0x58) + 1, ebx_2)
    result = InvalidateRect(*(*(*(arg1 + 0x68) + (*(arg1 + 0x58) << 2)) + 8), nullptr, 1)

sub_69a5bc(result_1 ^ &lpwndpl)
return result
