// 函数: sub_598340
// 地址: 0x598340
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ebx = arg2
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2fa0be83, *(arg1 + 0xc) - *(arg1 + 8))
int32_t edx_3 = edx_2 s>> 5

if ((edx_3 u>> 0x1f) + edx_3 != (ebx[1] - *ebx) s>> 5)
    int32_t eax_3
    eax_3.b = 0
    return eax_3

arg2 = nullptr
int32_t eax_4
int32_t edx_4
edx_4:eax_4 = muls.dp.d(0x2fa0be83, *(arg1 + 0xc) - *(arg1 + 8))
int32_t edx_5 = edx_4 s>> 5

if ((edx_5 u>> 0x1f) + edx_5 s> 0)
    int32_t esi_3 = 0
    int32_t ebp_1 = 0
    int32_t edx_8
    
    do
        int32_t edx_6 = *ebx
        ebp_1 += 0x20
        int32_t ecx_2 = *(arg1 + 8)
        esi_3 += 0xac
        arg2 += 1
        *(ecx_2 + esi_3 - 0x9c) = *(edx_6 + ebp_1 - 0x1c)
        *(ecx_2 + esi_3 - 0x8c) = *(edx_6 + ebp_1 - 0xc)
        *(ecx_2 + esi_3 - 0x84) = *(edx_6 + ebp_1 - 4)
        int32_t eax_9
        int32_t edx_7
        edx_7:eax_9 = muls.dp.d(0x2fa0be83, *(arg1 + 0xc) - *(arg1 + 8))
        edx_8 = edx_7 s>> 5
    while (arg2 s< (edx_8 u>> 0x1f) + edx_8)

*(arg1 + 0x4c) = 1
int32_t eax_7
eax_7.b = 1
return eax_7
