// 函数: sub_6949d0
// 地址: 0x6949d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_70
int32_t eax_1 = __security_cookie ^ &var_70
int32_t edi
int32_t var_80 = edi
var_70 = 0
int32_t eax_4 = (*(arg1 + 0x78) - *(arg1 + 0x74)) s>> 2
int32_t eax_5
int32_t edx
edx:eax_5 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x84) - *(arg1 + 0x80))
int32_t* eax_6 = *(arg1 + 0x80)
int32_t edx_1 = edx s>> 1
int32_t i = (*(arg1 + 0x6c) - *(arg1 + 0x68)) s>> 2
int32_t edx_4 = (eax_6[1] - *eax_6) s>> 2
int32_t var_6c = edx_4
WINDOWPLACEMENT lpwndpl
WINDOWPLACEMENT lpwndpl_1

if (i s> 0)
    int32_t edi_1
    
    do
        GetWindowPlacement(*(*(**(arg1 + 0x80) + (edx_4 << 2) - 4) + 8), &lpwndpl_1)
        int32_t top = lpwndpl_1.rcNormalPosition.top
        GetWindowPlacement(*(*(**(arg1 + 0x80) + (var_6c << 2) - 4) + 8), &lpwndpl)
        edi_1 = var_70
        SetWindowPos(*(*(*(arg1 + 0x68) + (edi_1 << 2)) + 8), nullptr, 0, 0, *(arg1 + 0x24), 
            lpwndpl.rcNormalPosition.bottom - lpwndpl.rcNormalPosition.top + top, SWP_NOMOVE)
        edx_4 = var_6c
        var_70 = edi_1 + 1
    while (edi_1 + 1 s< i)

int32_t ebp = 0

if (eax_4 s> 0)
    int32_t ecx_7 = ((edx_1 u>> 0x1f) + edx_1) * 0xc
    var_70 = ecx_7
    
    do
        GetWindowPlacement(*(**(ecx_7 + *(arg1 + 0x80) - 0xc) + 8), &lpwndpl_1)
        int32_t left = lpwndpl_1.rcNormalPosition.left
        GetWindowPlacement(*(**(var_70 + *(arg1 + 0x80) - 0xc) + 8), &lpwndpl)
        SetWindowPos(*(*(*(arg1 + 0x74) + (ebp << 2)) + 8), nullptr, 0, 0, 
            lpwndpl.rcNormalPosition.right - lpwndpl.rcNormalPosition.left + left, *(arg1 + 0x24), 
            SWP_NOMOVE)
        ecx_7 = var_70
        ebp += 1
    while (ebp s< eax_4)

int32_t ecx_9 = 0
int32_t result = (*(arg1 + 0x6c) - *(arg1 + 0x68)) s>> 2
int32_t result_1 = result
int32_t var_6c_1 = 0

if (result s> 0)
    int32_t edx_5 = 0
    var_70 = 0
    
    do
        result = *(arg1 + 0x8c)
        int32_t ebp_1 = 0
        int32_t ebx_4 = (*(result + edx_5 + 4) - *(result + edx_5)) s>> 2
        
        if (ebx_4 s> 0)
            do
                GetWindowPlacement(*(*(*(arg1 + 0x74) + (ebp_1 << 2)) + 8), &lpwndpl_1)
                int32_t top_1 = lpwndpl_1.rcNormalPosition.top
                GetWindowPlacement(*(*(*(arg1 + 0x68) + (var_6c_1 << 2)) + 8), &lpwndpl)
                result = SetWindowPos(*(*(*(var_70 + *(arg1 + 0x8c)) + (ebp_1 << 2)) + 8), nullptr, 
                    lpwndpl.rcNormalPosition.left, top_1, 0, 0, SWP_NOSIZE)
                ebp_1 += 1
            while (ebp_1 s< ebx_4)
            
            ecx_9 = var_6c_1
            edx_5 = var_70
        
        ecx_9 += 1
        edx_5 += 0xc
        var_6c_1 = ecx_9
        var_70 = edx_5
    while (ecx_9 s< result_1)

sub_69a5bc(eax_1 ^ &var_70)
return result
