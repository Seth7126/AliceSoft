// 函数: sub_67ee10
// 地址: 0x67ee10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t X
int32_t eax_1 = __security_cookie ^ &X
int32_t eax_2
int32_t edx
edx:eax_2 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x84) - *(arg1 + 0x80))
int32_t edx_1 = edx s>> 1
int32_t result = (edx_1 u>> 0x1f) + edx_1

if (result u> arg2)
    X = 0
    WINDOWPLACEMENT lpwndpl
    
    if (arg2 != 0)
        int32_t ecx_3 = arg2 * 0xc
        GetWindowPlacement(*(**(ecx_3 + *(arg1 + 0x80) - 0xc) + 8), &lpwndpl)
        int32_t left = lpwndpl.rcNormalPosition.left
        WINDOWPLACEMENT lpwndpl_1
        GetWindowPlacement(*(**(ecx_3 + *(arg1 + 0x80) - 0xc) + 8), &lpwndpl_1)
        int32_t X_1 = lpwndpl_1.rcNormalPosition.right - lpwndpl_1.rcNormalPosition.left + left
        X = X_1
        SetWindowPos(*(*(*(arg1 + 0x68) + (arg2 << 2) - 4) + 8), nullptr, X_1, 0, 0, 0, SWP_NOSIZE)
        int32_t eax_15 = *(arg1 + 0x8c)
        int32_t edi_1 = 0
        int32_t ecx_6 = ecx_3
        int32_t edx_4 = (*(eax_15 + ecx_6 - 8) - *(eax_15 + ecx_6 - 0xc)) s>> 2
        
        if (edx_4 != 0)
            do
                GetWindowPlacement(*(*(*(*(arg1 + 0x8c) + ecx_6 - 0xc) + (edi_1 << 2)) + 8), 
                    &lpwndpl)
                SetWindowPos(*(*(*(*(arg1 + 0x8c) + ecx_3 - 0xc) + (edi_1 << 2)) + 8), nullptr, X, 
                    lpwndpl.rcNormalPosition.top, 0, 0, SWP_NOSIZE)
                ecx_6 = ecx_3
                edi_1 += 1
            while (edi_1 u< edx_4)
        
        X += *(arg1 + 0x24)
    
    result = *(arg1 + 0x80)
    int32_t ebx_1 = arg2 * 3
    int32_t ebp_3 = (*(result + (ebx_1 << 2) + 4) - *(result + (ebx_1 << 2))) s>> 2
    
    if (ebp_3 != 0)
        int32_t edi_2 = 0
        
        do
            GetWindowPlacement(*(*(*(*(arg1 + 0x80) + (ebx_1 << 2)) + (edi_2 << 2)) + 8), &lpwndpl)
            result = SetWindowPos(*(*(*(*(arg1 + 0x80) + (ebx_1 << 2)) + (edi_2 << 2)) + 8), 
                nullptr, X, lpwndpl.rcNormalPosition.top, 0, 0, SWP_NOSIZE)
            edi_2 += 1
        while (edi_2 u< ebp_3)

sub_69a5bc(eax_1 ^ &X)
return result
