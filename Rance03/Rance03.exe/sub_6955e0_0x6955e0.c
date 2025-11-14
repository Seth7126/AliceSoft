// 函数: sub_6955e0
// 地址: 0x6955e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

WINDOWPLACEMENT lpwndpl
BOOL var_4 = __security_cookie ^ &lpwndpl
int32_t ecx = *(arg1 + 0x5c)

if (ecx != 0xffffffff)
    int32_t top
    
    if (ecx != ((*(arg1 + 0x78) - *(arg1 + 0x74)) s>> 2) - 1)
        GetWindowPlacement(*(*(*(arg1 + 0x74) + (ecx << 2) + 4) + 8), &lpwndpl)
        top = lpwndpl.rcNormalPosition.top
    else
        top = sub_6948f0(arg1)
    
    int32_t ebp_1 = arg2
    int32_t ebx_2 = top - *(arg1 + 0x24) - ebp_1
    int32_t ecx_2 = *(arg1 + 0x5c)
    
    if (ecx_2 != 0)
        WINDOWPLACEMENT lpwndpl_1
        GetWindowPlacement(*(*(*(arg1 + 0x74) + (ecx_2 << 2) - 4) + 8), &lpwndpl_1)
        int32_t top_1 = lpwndpl_1.rcNormalPosition.top
        GetWindowPlacement(*(*(*(arg1 + 0x74) + (*(arg1 + 0x5c) << 2) - 4) + 8), &lpwndpl)
        ebp_1 += lpwndpl.rcNormalPosition.top - lpwndpl.rcNormalPosition.bottom - top_1
    
    sub_694570(arg1, *(arg1 + 0x5c), ebp_1)
    sub_694570(arg1, *(arg1 + 0x5c) + 1, ebx_2)
    void* eax_19 = *(*(arg1 + 0x74) + (*(arg1 + 0x5c) << 2))
    
    if (*(eax_19 + 0x7c) != 0)
        eax_19.b = 0
        sub_69a5bc(var_4 ^ &lpwndpl)
        return eax_19
    
    InvalidateRect(*(eax_19 + 8), nullptr, 1)

BOOL eax_1
eax_1.b = 1
sub_69a5bc(var_4 ^ &lpwndpl)
return eax_1
