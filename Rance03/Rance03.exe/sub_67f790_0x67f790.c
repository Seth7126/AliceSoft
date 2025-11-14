// 函数: sub_67f790
// 地址: 0x67f790
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

WINDOWPLACEMENT lpwndpl
BOOL result = __security_cookie ^ &lpwndpl
BOOL result_1 = result
int32_t ecx = *(arg1 + 0x5c)

if (ecx != 0xffffffff)
    int32_t top
    
    if (ecx != ((*(arg1 + 0x78) - *(arg1 + 0x74)) s>> 2) - 1)
        GetWindowPlacement(*(*(*(arg1 + 0x74) + (ecx << 2) + 4) + 8), &lpwndpl)
        top = lpwndpl.rcNormalPosition.top
    else
        top = sub_67eab0(arg1)
    
    int32_t ebp_1 = arg2
    int32_t ebx_2 = top - *(arg1 + 0x24) - ebp_1
    int32_t ecx_2 = *(arg1 + 0x5c)
    
    if (ecx_2 != 0)
        WINDOWPLACEMENT lpwndpl_1
        GetWindowPlacement(*(*(*(arg1 + 0x74) + (ecx_2 << 2) - 4) + 8), &lpwndpl_1)
        int32_t top_1 = lpwndpl_1.rcNormalPosition.top
        GetWindowPlacement(*(*(*(arg1 + 0x74) + (*(arg1 + 0x5c) << 2) - 4) + 8), &lpwndpl)
        ebp_1 += lpwndpl.rcNormalPosition.top - lpwndpl.rcNormalPosition.bottom - top_1
    
    sub_67e680(arg1, *(arg1 + 0x5c), ebp_1)
    sub_67e680(arg1, *(arg1 + 0x5c) + 1, ebx_2)
    result = InvalidateRect(*(*(*(arg1 + 0x74) + (*(arg1 + 0x5c) << 2)) + 8), nullptr, 1)

sub_69a5bc(result_1 ^ &lpwndpl)
return result
