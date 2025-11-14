// 函数: sub_694570
// 地址: 0x694570
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

WINDOWPLACEMENT lpwndpl
int32_t eax_1 = __security_cookie ^ &lpwndpl
int32_t* result = *(arg1 + 0x80)

if ((result[1] - *result) s>> 2 u> arg2)
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x84) - result)
    int32_t edx_2 = edx_1 s>> 1
    int32_t i_1 = (edx_2 u>> 0x1f) + edx_2
    
    if (i_1 s> 0)
        int32_t* ebx_1 = nullptr
        int32_t i
        
        do
            GetWindowPlacement(*(*(*(ebx_1 + *(arg1 + 0x80)) + (arg2 << 2)) + 8), &lpwndpl)
            SetWindowPos(*(*(*(ebx_1 + *(arg1 + 0x80)) + (arg2 << 2)) + 8), nullptr, 0, 0, 
                lpwndpl.rcNormalPosition.right - lpwndpl.rcNormalPosition.left, arg3, SWP_NOMOVE)
            ebx_1 = &ebx_1[3]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    result = sub_694dc0(arg1, arg2)

sub_69a5bc(eax_1 ^ &lpwndpl)
return result
