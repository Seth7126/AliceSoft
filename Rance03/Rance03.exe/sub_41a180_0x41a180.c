// 函数: sub_41a180
// 地址: 0x41a180
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_24
int32_t eax_1 = __security_cookie ^ &var_24
BOOL result = arg2

if (*(arg1 + 0x90) != result)
    *(arg1 + 0x90) = result
    int32_t i = 0
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = muls.dp.d(0x38e38e39, *(arg1 + 0x88) - *(arg1 + 0x84))
    int32_t i_1 = 0
    int32_t edx_2 = edx_1 s>> 3
    
    if ((edx_2 u>> 0x1f) + edx_2 s> 0)
        int32_t* edi_1 = nullptr
        var_24 = nullptr
        int32_t edx_4
        
        do
            enum SHOW_WINDOW_CMD nCmdShow = SW_HIDE
            
            if (i == *(arg1 + 0x90))
                nCmdShow = SW_SHOW
            
            ShowWindow(*(edi_1 + *(arg1 + 0x84)), nCmdShow)
            
            if (i == *(arg1 + 0x90))
                SetFocus(*(edi_1 + *(arg1 + 0x84)))
                RECT rect
                GetClientRect(*(arg1 + 0xc), &rect)
                int32_t nWidth = rect.right - rect.left
                int32_t edi_3 = rect.bottom - rect.top
                int32_t Y = (*(*(arg1 + 0x14) + 0x14))()
                MoveWindow(*(*(arg1 + 0x84) + *(arg1 + 0x90) * 0x24), 0, Y, nWidth, edi_3 - Y, 1)
                i = i_1
                edi_1 = var_24
            
            i += 1
            int32_t eax_11
            int32_t edx_3
            edx_3:eax_11 = muls.dp.d(0x38e38e39, *(arg1 + 0x88) - *(arg1 + 0x84))
            edi_1 = &edi_1[9]
            i_1 = i
            edx_4 = edx_3 s>> 3
            var_24 = edi_1
        while (i s< (edx_4 u>> 0x1f) + edx_4)
    
    sub_4199b0(arg1)
    sub_419bf0(arg1)
    sub_419f00(arg1)
    InvalidateRect(*(arg1 + 0xc), nullptr, 1)
    result = UpdateWindow(*(arg1 + 0xc))

sub_69a5bc(eax_1 ^ &var_24)
return result
