// 函数: sub_67efc0
// 地址: 0x67efc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_68
int32_t eax_1 = __security_cookie ^ &var_68
var_68 = arg2
int32_t* edx = *(arg1 + 0x80)
int32_t result = (edx[1] - *edx) s>> 2

if (result u> arg2)
    int32_t Y_1 = 0
    WINDOWPLACEMENT lpwndpl
    
    if (arg2 != 0)
        GetWindowPlacement(*(*(*edx + (arg2 << 2) - 4) + 8), &lpwndpl)
        int32_t ebp_1 = var_68
        int32_t top = lpwndpl.rcNormalPosition.top
        WINDOWPLACEMENT lpwndpl_1
        GetWindowPlacement(*(*(**(arg1 + 0x80) + (ebp_1 << 2) - 4) + 8), &lpwndpl_1)
        int32_t Y = lpwndpl_1.rcNormalPosition.bottom - lpwndpl_1.rcNormalPosition.top + top
        SetWindowPos(*(*(*(arg1 + 0x74) + (ebp_1 << 2) - 4) + 8), nullptr, 0, Y, 0, 0, SWP_NOSIZE)
        int32_t eax_13
        int32_t edx_1
        edx_1:eax_13 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x90) - *(arg1 + 0x8c))
        int32_t edx_2 = edx_1 s>> 1
        uint32_t eax_15 = edx_2 u>> 0x1f
        int32_t i_2 = eax_15 + edx_2
        
        if (eax_15 != neg.d(edx_2))
            int32_t edi_1 = 0
            int32_t i
            
            do
                GetWindowPlacement(*(*(*(*(arg1 + 0x8c) + edi_1) + (var_68 << 2) - 4) + 8), 
                    &lpwndpl)
                SetWindowPos(*(*(*(*(arg1 + 0x8c) + edi_1) + (var_68 << 2) - 4) + 8), nullptr, 
                    lpwndpl.rcNormalPosition.left, Y, 0, 0, SWP_NOSIZE)
                i = i_2
                i_2 -= 1
                edi_1 += 0xc
            while (i != 1)
        
        Y_1 = *(arg1 + 0x24) + Y
    
    int32_t edx_3
    edx_3:result = muls.dp.d(0x2aaaaaab, *(arg1 + 0x84) - *(arg1 + 0x80))
    int32_t edx_4 = edx_3 s>> 1
    uint32_t ebx_2 = edx_4 u>> 0x1f
    int32_t i_3 = ebx_2 + edx_4
    
    if (ebx_2 != neg.d(edx_4))
        int32_t* edi_2 = nullptr
        int32_t i_1
        
        do
            GetWindowPlacement(*(*(*(edi_2 + *(arg1 + 0x80)) + (var_68 << 2)) + 8), &lpwndpl)
            result = SetWindowPos(*(*(*(edi_2 + *(arg1 + 0x80)) + (var_68 << 2)) + 8), nullptr, 
                lpwndpl.rcNormalPosition.left, Y_1, 0, 0, SWP_NOSIZE)
            edi_2 = &edi_2[3]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)

sub_69a5bc(eax_1 ^ &var_68)
return result
