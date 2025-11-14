// 函数: sub_694380
// 地址: 0x694380
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_94
int32_t eax_1 = __security_cookie ^ &var_94
var_94 = arg2
int32_t ecx_2 = (*(arg1 + 0x78) - *(arg1 + 0x74)) s>> 2
int32_t result

if ((*(arg1 + 0x6c) - *(arg1 + 0x68)) s>> 2 != 0xffffffff && ecx_2 + 1 u> arg3)
    int32_t* edx_1 = arg3 << 2
    int32_t* var_8c_1 = edx_1
    *(edx_1 + **(arg1 + 0x80)) = arg2
    
    if (arg3 u> ecx_2)
        sub_4158d0(sub_67f870(arg1 + 0x60, *(arg1 + 0x74) + edx_1), &var_94)
        edx_1 = arg3 << 2
    
    if (arg3 != 0)
        sub_4158d0(sub_67f870(arg1 + 0x60, *(arg1 + 0x74) - 4 + edx_1) + 0xc, &var_94)
        int32_t ebp_1 = var_94
        WINDOWPLACEMENT lpwndpl
        GetWindowPlacement(*(ebp_1 + 8), &lpwndpl)
        int32_t top = lpwndpl.rcNormalPosition.top
        WINDOWPLACEMENT lpwndpl_1
        GetWindowPlacement(*(*(var_8c_1 + *(arg1 + 0x74) - 4) + 8), &lpwndpl_1)
        int32_t top_1 = lpwndpl_1.rcNormalPosition.top
        WINDOWPLACEMENT lpwndpl_2
        GetWindowPlacement(*(ebp_1 + 8), &lpwndpl_2)
        SetWindowPos(*(ebp_1 + 8), nullptr, lpwndpl_2.rcNormalPosition.top, 
            *(arg1 + 0x24) + top_1 + top, 0, 0, SWP_NOSIZE)
    
    result.b = 1
else
    result.b = 0

sub_69a5bc(eax_1 ^ &var_94)
return result
