// 函数: sub_6503f0
// 地址: 0x6503f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_18
int32_t eax_1 = __security_cookie ^ &var_18
BOOL result = arg2

if (*(arg1 + 0x88) != result)
    *(arg1 + 0x88) = result
    int32_t i = 0
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = muls.dp.d(0x38e38e39, *(arg1 + 0x80) - *(arg1 + 0x7c))
    int32_t edx_2 = edx_1 s>> 3
    
    if ((edx_2 u>> 0x1f) + edx_2 s> 0)
        int32_t* ebx_1 = nullptr
        var_18 = nullptr
        int32_t edx_4
        
        do
            enum SHOW_WINDOW_CMD nCmdShow = SW_HIDE
            
            if (i == *(arg1 + 0x88))
                nCmdShow = SW_SHOW
            
            ShowWindow(*(ebx_1 + *(arg1 + 0x7c)), nCmdShow)
            int32_t eax_7 = *(arg1 + 0x88)
            
            if (i == eax_7)
                SetFocus(*(*(arg1 + 0x7c) + eax_7 * 0x24))
                RECT rect
                GetClientRect(**(arg1 + 8), &rect)
                int32_t nWidth = rect.right - rect.left
                int32_t edi_2 = rect.bottom - rect.top
                int32_t Y = (*(*(arg1 + 0xc) + 0x14))()
                MoveWindow(*(*(arg1 + 0x7c) + *(arg1 + 0x88) * 0x24), 0, Y, nWidth, edi_2 - Y, 1)
                ebx_1 = var_18
            
            i += 1
            int32_t eax_13
            int32_t edx_3
            edx_3:eax_13 = muls.dp.d(0x38e38e39, *(arg1 + 0x80) - *(arg1 + 0x7c))
            ebx_1 = &ebx_1[9]
            edx_4 = edx_3 s>> 3
            var_18 = ebx_1
        while (i s< (edx_4 u>> 0x1f) + edx_4)
    
    sub_64fc80(arg1)
    sub_64feb0(arg1)
    sub_6501a0(arg1)
    InvalidateRect(**(arg1 + 8), nullptr, 1)
    result = UpdateWindow(**(arg1 + 8))

sub_69a5bc(eax_1 ^ &var_18)
return result
