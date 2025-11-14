// 函数: sub_67eab0
// 地址: 0x67eab0
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
    
    if (*eax_2[((edx_3 u>> 0x1f) + edx_3) * 3 - 3] != 0)
        int32_t ecx_7 = *eax_2
        
        if (*(ecx_7 + ((eax_2[1] - ecx_7) s>> 2 << 2) - 4) != 0)
            WINDOWPLACEMENT lpwndpl_1
            GetWindowPlacement(*(*(ecx_7 + ((eax_2[1] - ecx_7) s>> 2 << 2) - 4) + 8), &lpwndpl_1)
            int32_t* eax_24 = *(arg1 + 0x80)
            int32_t top = lpwndpl_1.rcNormalPosition.top
            GetWindowPlacement(*(*(*eax_24 + ((eax_24[1] - *eax_24) s>> 2 << 2) - 4) + 8), &lpwndpl)
            int32_t result = lpwndpl.rcNormalPosition.bottom - lpwndpl.rcNormalPosition.top + top
            sub_69a5bc(eax_1 ^ &lpwndpl)
            return result

sub_69a5bc(eax_1 ^ &lpwndpl)
return 0
