// 函数: sub_48cbe0
// 地址: 0x48cbe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edx = *arg2
int32_t result = arg2[1]
int32_t ebx = 0
uint32_t esi_3 = (result - edx + 3) u>> 2

if (edx u> result)
    esi_3 = 0

if (esi_3 != 0)
    do
        float xmm2_1 = *edx
        ebx += 1
        *edx = *(arg1 + 0x10) * xmm2_1 + *arg3 f* *(arg1 + 0x14) + *(arg1 + 0x18) f* arg3[1]
            - arg3[2] f* *(arg1 + 8) - arg3[3] f* *(arg1 + 0xc)
        arg3[1] = *arg3
        int32_t eax_1 = arg3[2]
        *arg3 = xmm2_1
        arg3[3] = eax_1
        result = *edx
        edx = &edx[1]
        arg3[2] = result
    while (ebx != esi_3)

return result
