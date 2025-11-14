// 函数: sub_67ebb0
// 地址: 0x67ebb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_68
int32_t eax_1 = __security_cookie ^ &var_68
var_68 = nullptr
int32_t i = (*(arg1 + 0x6c) - *(arg1 + 0x68)) s>> 2
WINDOWPLACEMENT lpwndpl
WINDOWPLACEMENT lpwndpl_1

if (i != 0)
    int32_t* edi_1
    
    do
        int32_t* eax_4 = *(arg1 + 0x80)
        GetWindowPlacement(*(*(*eax_4 + ((eax_4[1] - *eax_4) s>> 2 << 2) - 4) + 8), &lpwndpl_1)
        int32_t* eax_7 = *(arg1 + 0x80)
        int32_t top = lpwndpl_1.rcNormalPosition.top
        GetWindowPlacement(*(*(*eax_7 + ((eax_7[1] - *eax_7) s>> 2 << 2) - 4) + 8), &lpwndpl)
        edi_1 = var_68
        SetWindowPos(*(*(*(arg1 + 0x68) + (edi_1 << 2)) + 8), nullptr, 0, 0, *(arg1 + 0x24), 
            lpwndpl.rcNormalPosition.bottom - lpwndpl.rcNormalPosition.top + top, SWP_NOMOVE)
        var_68 = edi_1 + 1
    while (edi_1 + 1 u< i)

int32_t i_1 = (*(arg1 + 0x78) - *(arg1 + 0x74)) s>> 2
var_68 = nullptr

if (i_1 != 0)
    int32_t* edi_3
    
    do
        int32_t eax_17
        int32_t edx_1
        edx_1:eax_17 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x84) - *(arg1 + 0x80))
        int32_t edx_2 = edx_1 s>> 1
        GetWindowPlacement(*(**(*(arg1 + 0x80) + ((edx_2 u>> 0x1f) + edx_2) * 0xc - 0xc) + 8), 
            &lpwndpl_1)
        int32_t left = lpwndpl_1.rcNormalPosition.left
        int32_t eax_24
        int32_t edx_3
        edx_3:eax_24 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x84) - *(arg1 + 0x80))
        int32_t edx_4 = edx_3 s>> 1
        GetWindowPlacement(*(**(*(arg1 + 0x80) + ((edx_4 u>> 0x1f) + edx_4) * 0xc - 0xc) + 8), 
            &lpwndpl)
        edi_3 = var_68
        SetWindowPos(*(*(*(arg1 + 0x74) + (edi_3 << 2)) + 8), nullptr, 0, 0, 
            lpwndpl.rcNormalPosition.right - lpwndpl.rcNormalPosition.left + left, *(arg1 + 0x24), 
            SWP_NOMOVE)
        var_68 = edi_3 + 1
    while (edi_3 + 1 u< i_1)

int32_t eax_36
int32_t edx_5
edx_5:eax_36 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x90) - *(arg1 + 0x8c))
int32_t ecx_15 = 0
int32_t edx_6 = edx_5 s>> 1
int32_t var_64_2 = 0
uint32_t eax_38 = edx_6 u>> 0x1f
int32_t result = eax_38 + edx_6
int32_t result_1 = result

if (eax_38 != neg.d(edx_6))
    int32_t* edx_7 = nullptr
    var_68 = nullptr
    
    do
        result = *(arg1 + 0x8c)
        int32_t ebx_1 = 0
        int32_t ebp_3 = (*(result + edx_7 + 4) - *(result + edx_7)) s>> 2
        
        if (ebp_3 != 0)
            do
                GetWindowPlacement(*(*(*(arg1 + 0x74) + (ebx_1 << 2)) + 8), &lpwndpl_1)
                int32_t top_1 = lpwndpl_1.rcNormalPosition.top
                GetWindowPlacement(*(*(*(arg1 + 0x68) + (var_64_2 << 2)) + 8), &lpwndpl)
                result = SetWindowPos(*(*(*(var_68 + *(arg1 + 0x8c)) + (ebx_1 << 2)) + 8), nullptr, 
                    lpwndpl.rcNormalPosition.left, top_1, 0, 0, SWP_NOSIZE)
                ebx_1 += 1
            while (ebx_1 u< ebp_3)
            
            ecx_15 = var_64_2
            edx_7 = var_68
        
        ecx_15 += 1
        edx_7 = &edx_7[3]
        var_64_2 = ecx_15
        var_68 = edx_7
    while (ecx_15 u< result_1)

sub_69a5bc(eax_1 ^ &var_68)
return result
