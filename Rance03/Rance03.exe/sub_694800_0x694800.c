// 函数: sub_694800
// 地址: 0x694800
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

WINDOWPLACEMENT lpwndpl
int32_t eax_1 = __security_cookie ^ &lpwndpl
int32_t eax_2
int32_t edx_2
edx_2:eax_2 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x84) - *(arg1 + 0x80))
int32_t edx_3 = edx_2 s>> 1
uint32_t eax_4 = edx_3 u>> 0x1f
int32_t eax_5 = eax_4 + edx_3

if (eax_4 == neg.d(edx_3))
    sub_69a5bc(eax_1 ^ &lpwndpl)
    return eax_5

int32_t* edx_4 = *(arg1 + 0x80)
int32_t ebx = eax_5 * 3

if (((edx_4[ebx - 2] - edx_4[ebx - 3]) & 0xfffffffc) == 0)
    sub_69a5bc(eax_1 ^ &lpwndpl)
    return 0

void* esi = *edx_4[ebx - 3]

if (esi == 0 || *(*edx_4 + ((edx_4[1] - *edx_4) s>> 2 << 2) - 4) == 0)
    sub_69a5bc(eax_1 ^ &lpwndpl)
    return 0

WINDOWPLACEMENT lpwndpl_1
GetWindowPlacement(*(esi + 8), &lpwndpl_1)
int32_t left = lpwndpl_1.rcNormalPosition.left
GetWindowPlacement(*(**(*(arg1 + 0x80) + (ebx << 2) - 0xc) + 8), &lpwndpl)
int32_t eax_17 = lpwndpl.rcNormalPosition.right - lpwndpl.rcNormalPosition.left + left
sub_69a5bc(eax_1 ^ &lpwndpl)
return eax_17
