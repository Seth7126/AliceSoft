// 函数: sub_67e3d0
// 地址: 0x67e3d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_98
int32_t eax_1 = __security_cookie ^ &var_98
var_98 = arg2
int32_t result

if (((*(arg1 + 0x6c) - *(arg1 + 0x68)) s>> 2) + 1 u> arg3
        && ((*(arg1 + 0x78) - *(arg1 + 0x74)) s>> 2) + 1 u> arg4)
    int32_t* edi_1 = arg4 << 2
    *(edi_1 + *(*(arg1 + 0x80) + arg3 * 0xc)) = arg2
    
    if (arg3 u> (*(arg1 + 0x6c) - *(arg1 + 0x68)) s>> 2)
        sub_4158d0(sub_67f870(arg1 + 0x60, *(arg1 + 0x68) + (arg3 << 2)), &var_98)
    
    if (arg4 u> (*(arg1 + 0x78) - *(arg1 + 0x74)) s>> 2)
        sub_4158d0(sub_67f870(arg1 + 0x60, *(arg1 + 0x74) + edi_1), &var_98)
    
    WINDOWPLACEMENT lpwndpl
    WINDOWPLACEMENT lpwndpl_1
    WINDOWPLACEMENT lpwndpl_2
    
    if (arg3 != 0)
        sub_4158d0(sub_67f870(arg1 + 0x60, *(arg1 + 0x68) + (arg3 << 2) - 4) + 0xc, &var_98)
        int32_t ebx_1 = var_98
        GetWindowPlacement(*(ebx_1 + 8), &lpwndpl)
        int32_t top_1 = lpwndpl.rcNormalPosition.top
        GetWindowPlacement(*(ebx_1 + 8), &lpwndpl_1)
        int32_t left = lpwndpl_1.rcNormalPosition.left
        GetWindowPlacement(*(*(*(arg1 + 0x68) + (arg3 << 2) - 4) + 8), &lpwndpl_2)
        SetWindowPos(*(ebx_1 + 8), nullptr, 
            *(arg1 + 0x24) + lpwndpl_2.rcNormalPosition.left + left, top_1, 0, 0, SWP_NOSIZE)
    
    if (arg4 != 0)
        sub_4158d0(sub_67f870(arg1 + 0x60, *(arg1 + 0x74) - 4 + edi_1) + 0xc, &var_98)
        int32_t ebx_2 = var_98
        GetWindowPlacement(*(ebx_2 + 8), &lpwndpl_2)
        int32_t top_2 = lpwndpl_2.rcNormalPosition.top
        GetWindowPlacement(*(*(*(arg1 + 0x74) + (arg4 << 2) - 4) + 8), &lpwndpl_1)
        int32_t top = lpwndpl_1.rcNormalPosition.top
        GetWindowPlacement(*(ebx_2 + 8), &lpwndpl)
        SetWindowPos(*(ebx_2 + 8), nullptr, lpwndpl.rcNormalPosition.top, 
            *(arg1 + 0x24) + top + top_2, 0, 0, SWP_NOSIZE)
    
    result.b = 1
else
    result.b = 0

sub_69a5bc(eax_1 ^ &var_98)
return result
