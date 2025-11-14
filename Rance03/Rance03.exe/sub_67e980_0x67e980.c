// 函数: sub_67e980
// 地址: 0x67e980
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

WINDOWPLACEMENT lpwndpl
int32_t eax_1 = __security_cookie ^ &lpwndpl
int32_t* eax_2 = *(arg1 + 0x80)

if (eax_2 == *(arg1 + 0x84))
    sub_69a5bc(eax_1 ^ &lpwndpl)
    return 0

int32_t eax_4
int32_t edx
edx:eax_4 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x84) - eax_2)
int32_t edx_1 = edx s>> 1
void* ecx_4 = &eax_2[((edx_1 u>> 0x1f) + edx_1) * 3]

if (*(ecx_4 - 0xc) != *(ecx_4 - 8))
    int32_t eax_10
    int32_t edx_2
    edx_2:eax_10 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x84) - eax_2)
    int32_t edx_3 = edx_2 s>> 1
    
    if (*eax_2[((edx_3 u>> 0x1f) + edx_3) * 3 - 3] != 0
            && *(*eax_2 + ((eax_2[1] - *eax_2) s>> 2 << 2) - 4) != 0)
        int32_t eax_18
        int32_t edx_4
        edx_4:eax_18 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x84) - eax_2)
        int32_t edx_5 = edx_4 s>> 1
        WINDOWPLACEMENT lpwndpl_1
        GetWindowPlacement(*(*eax_2[((edx_5 u>> 0x1f) + edx_5) * 3 - 3] + 8), &lpwndpl_1)
        int32_t left = lpwndpl_1.rcNormalPosition.left
        int32_t eax_25
        int32_t edx_6
        edx_6:eax_25 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x84) - *(arg1 + 0x80))
        int32_t edx_7 = edx_6 s>> 1
        GetWindowPlacement(*(**(*(arg1 + 0x80) + ((edx_7 u>> 0x1f) + edx_7) * 0xc - 0xc) + 8), 
            &lpwndpl)
        int32_t result = lpwndpl.rcNormalPosition.right - lpwndpl.rcNormalPosition.left + left
        sub_69a5bc(eax_1 ^ &lpwndpl)
        return result

sub_69a5bc(eax_1 ^ &lpwndpl)
return 0
