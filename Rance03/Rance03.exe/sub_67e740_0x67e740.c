// 函数: sub_67e740
// 地址: 0x67e740
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

WINDOWPLACEMENT lpwndpl
int32_t eax_1 = __security_cookie ^ &lpwndpl
int32_t result = *(arg1 + 0x80)

if (result != *(arg1 + 0x84))
    int32_t result_1 = result
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x84) - result_1)
    int32_t edx_2 = edx_1 s>> 1
    int32_t ecx_2 = result_1 + ((edx_2 u>> 0x1f) + edx_2) * 0xc
    result = *(ecx_2 - 0xc)
    
    if (result != *(ecx_2 - 8))
        int32_t eax_7
        int32_t edx_3
        edx_3:eax_7 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x84) - result_1)
        int32_t edx_4 = edx_3 s>> 1
        result = *(result_1 + ((edx_4 u>> 0x1f) + edx_4) * 0xc - 0xc)
        
        if (*result != 0)
            result = *result_1
            
            if (*(result + ((*(result_1 + 4) - *result_1) s>> 2 << 2) - 4) != 0)
                int32_t eax_12
                int32_t edx_5
                edx_5:eax_12 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x84) - result_1)
                int32_t edx_6 = edx_5 s>> 1
                GetWindowPlacement(*(**(result_1 + ((edx_6 u>> 0x1f) + edx_6) * 0xc - 0xc) + 8), 
                    &lpwndpl)
                int32_t ebp_4 = lpwndpl.rcNormalPosition.right - lpwndpl.rcNormalPosition.left
                    + arg2 - sub_67e980(arg1)
                int32_t eax_20
                int32_t edx_7
                edx_7:eax_20 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x84) - *(arg1 + 0x80))
                int32_t edx_8 = edx_7 s>> 1
                GetWindowPlacement(
                    *(**(*(arg1 + 0x80) + ((edx_8 u>> 0x1f) + edx_8) * 0xc - 0xc) + 8), &lpwndpl)
                
                if (*(arg1 + 0x28) + lpwndpl.rcNormalPosition.left u> arg2)
                    int32_t eax_29
                    int32_t edx_9
                    edx_9:eax_29 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x84) - *(arg1 + 0x80))
                    int32_t edx_10 = edx_9 s>> 1
                    GetWindowPlacement(
                        *(**(*(arg1 + 0x80) + ((edx_10 u>> 0x1f) + edx_10) * 0xc - 0xc) + 8), 
                        &lpwndpl)
                    ebp_4 = *(arg1 + 0x28) + lpwndpl.rcNormalPosition.left
                
                int32_t* eax_36 = *(arg1 + 0x80)
                GetWindowPlacement(*(*(*eax_36 + ((eax_36[1] - *eax_36) s>> 2 << 2) - 4) + 8), 
                    &lpwndpl)
                int32_t esi_4 = lpwndpl.rcNormalPosition.bottom - lpwndpl.rcNormalPosition.top
                    + arg3 - sub_67eab0(arg1)
                int32_t* eax_40 = *(arg1 + 0x80)
                GetWindowPlacement(*(*(*eax_40 + ((eax_40[1] - *eax_40) s>> 2 << 2) - 4) + 8), 
                    &lpwndpl)
                
                if (*(arg1 + 0x2c) + lpwndpl.rcNormalPosition.top u> arg3)
                    int32_t* eax_45 = *(arg1 + 0x80)
                    GetWindowPlacement(*(*(*eax_45 + ((eax_45[1] - *eax_45) s>> 2 << 2) - 4) + 8), 
                        &lpwndpl)
                    esi_4 = *(arg1 + 0x2c) + lpwndpl.rcNormalPosition.top
                
                int32_t eax_48
                int32_t edx_11
                edx_11:eax_48 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x84) - *(arg1 + 0x80))
                int32_t edx_12 = edx_11 s>> 1
                sub_67e5c0(arg1, (edx_12 u>> 0x1f) + edx_12 - 1, ebp_4)
                int32_t* eax_52 = *(arg1 + 0x80)
                sub_67e680(arg1, ((eax_52[1] - *eax_52) s>> 2) - 1, esi_4)
                result = sub_67ebb0(arg1)

sub_69a5bc(eax_1 ^ &lpwndpl)
return result
