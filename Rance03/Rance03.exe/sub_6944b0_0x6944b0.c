// 函数: sub_6944b0
// 地址: 0x6944b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_34
int32_t eax_1 = __security_cookie ^ &var_34
var_34 = arg2
int32_t eax_2
int32_t edx
edx:eax_2 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x84) - *(arg1 + 0x80))
int32_t edx_1 = edx s>> 1
int32_t result = (edx_1 u>> 0x1f) + edx_1

if (result u> arg2)
    int32_t eax_5 = *(arg1 + 0x80)
    int32_t ebx_1 = arg2 * 3
    int32_t ebp_1 = 0
    int32_t edi_3 = (*(eax_5 + (ebx_1 << 2) + 4) - *(eax_5 + (ebx_1 << 2))) s>> 2
    
    if (edi_3 s> 0)
        do
            WINDOWPLACEMENT lpwndpl
            GetWindowPlacement(*(*(*(*(arg1 + 0x80) + (ebx_1 << 2)) + (ebp_1 << 2)) + 8), &lpwndpl)
            SetWindowPos(*(*(*(*(arg1 + 0x80) + (ebx_1 << 2)) + (ebp_1 << 2)) + 8), nullptr, 0, 0, 
                arg3, lpwndpl.rcNormalPosition.bottom - lpwndpl.rcNormalPosition.top, SWP_NOMOVE)
            ebp_1 += 1
        while (ebp_1 s< edi_3)
    
    result = sub_694c10(arg1, var_34)

sub_69a5bc(eax_1 ^ &var_34)
return result
