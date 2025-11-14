// 函数: sub_6708c0
// 地址: 0x6708c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 8) == *(arg1 + 0xc))
    int32_t eax
    eax.b = 0
    return eax

*(arg1 + 0x1c) = 0
*(arg1 + 0x20) = 0
*(arg1 + 0x24) = 7
InitCommonControls()
j__free(*(arg1 + 0x14))
int32_t eax_1
int32_t edx
edx:eax_1 = muls.dp.d(0x2aaaaaab, *(arg1 + 0xc) - *(arg1 + 8))
int32_t edx_1 = edx s>> 1
int32_t eax_4 = (edx_1 u>> 0x1f) + edx_1
int32_t ecx_2
ecx_2.b = mulu.dp.d(eax_4, 0x14) u>> 0x20 != 0
int32_t var_20 = neg.d(ecx_2) | (eax_4 * 0x14)
void* eax_6 = sub_69a5b3()
int32_t* i = *(arg1 + 8)
*(arg1 + 0x14) = eax_6

while (i != *(arg1 + 0xc))
    int32_t edx_2 = *i
    eax_6 += 0x14
    int32_t var_10_1 = i[1]
    char var_c_1 = i[2].b
    char edx_5 = *(i + 9)
    i = &i[3]
    char var_b_1 = edx_5
    int16_t var_a_1 = 0
    int32_t var_8_1 = 0
    *(eax_6 - 0x14) = edx_2.o
    *(eax_6 - 4) = 0

HWND eax_7 = CreateToolbarEx(arg2, 0x50000100, 0x18a92, 1, arg3, 0x9c96, *(arg1 + 0x14), 7, 0, 0, 
    0x1b, 0x10, 0x14)
*(arg1 + 4) = eax_7
eax_7.b = eax_7 != 0
return eax_7
