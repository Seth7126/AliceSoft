// 函数: sub_6948f0
// 地址: 0x6948f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

WINDOWPLACEMENT lpwndpl
int32_t eax_1 = __security_cookie ^ &lpwndpl
int32_t eax_2
int32_t edx_2
edx_2:eax_2 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x84) - *(arg1 + 0x80))
int32_t edx_3 = edx_2 s>> 1
uint32_t eax_4 = edx_3 u>> 0x1f

if (eax_4 != neg.d(edx_3))
    int32_t* ecx_2 = *(arg1 + 0x80)
    void* edx_4 = &ecx_2[(eax_4 + edx_3) * 3]
    
    if (((*(edx_4 - 8) - *(edx_4 - 0xc)) & 0xfffffffc) != 0 && **(edx_4 - 0xc) != 0)
        int32_t ebp = (ecx_2[1] - *ecx_2) s>> 2 << 2
        int32_t eax_14 = *ecx_2
        
        if (*(eax_14 + ebp - 4) == 0)
            sub_69a5bc(eax_1 ^ &lpwndpl)
            return 0
        
        WINDOWPLACEMENT lpwndpl_1
        GetWindowPlacement(*(*(eax_14 + ebp - 4) + 8), &lpwndpl_1)
        int32_t top = lpwndpl_1.rcNormalPosition.top
        GetWindowPlacement(*(*(**(arg1 + 0x80) + ebp - 4) + 8), &lpwndpl)
        int32_t result = lpwndpl.rcNormalPosition.bottom - lpwndpl.rcNormalPosition.top + top
        sub_69a5bc(eax_1 ^ &lpwndpl)
        return result

sub_69a5bc(eax_1 ^ &lpwndpl)
return 0
