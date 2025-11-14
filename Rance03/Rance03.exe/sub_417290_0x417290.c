// 函数: sub_417290
// 地址: 0x417290
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_28
int32_t eax_1 = __security_cookie ^ &var_28
SetFocus(arg2)

if (data_75d4b4 != 0)
    int32_t eax_3 = GetScrollPos(*(arg1 + 0xc), SB_HORZ)
    int32_t eax_4 = GetScrollPos(*(arg1 + 0xc), SB_VERT)
    int32_t edi_1 = *(arg1 + 0x54)
    var_28 = divs.dp.d(sx.q(arg3 u>> 0x10), *(arg1 + 0x58) + edi_1) + eax_4
    int32_t eax_11
    int32_t edx_2
    edx_2:eax_11 = sx.q(edi_1)
    int32_t ebx_2 = var_28
    *(arg1 + 0x94) = ebx_2
    *(arg1 + 0x90) = divs.dp.d(sx.q(zx.d(arg3.w)), (eax_11 - edx_2) s>> 1) + eax_3
    InvalidateRect(arg2, nullptr, 0)
    UpdateWindow(arg2)
    
    if (*(arg1 + 0x64) != 0)
        int32_t var_3c_2 = ebx_2 + 1
        int32_t var_1c
        void** lParam = sub_4691f0(&var_1c, 0x6da5d8)
        
        if (lParam[5] u>= 0x10)
            lParam = *lParam
        
        SendMessageA(*(*(arg1 + 0x64) + 4), 0x401, 0x101, lParam)
        int32_t var_8
        
        if (var_8 u>= 0x10)
            j__free(var_1c)

sub_69a5bc(eax_1 ^ &var_28)
return 0
