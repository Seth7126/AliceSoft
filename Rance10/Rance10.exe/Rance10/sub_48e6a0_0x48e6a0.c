// 函数: sub_48e6a0
// 地址: 0x48e6a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = arg2[1]
int32_t* i

for (i = *arg2; i != edx; i = &i[1])
    *arg3 -= 1
    int32_t edi_1 = arg3[4]
    *(edi_1 + ((*arg3 & arg3[3]) << 2)) = *i
    float xmm0_2 = *i f* *(arg1 + 0x20)
    *i = xmm0_2
    void* esi_3 = *arg4
    float xmm1_3 = *(edi_1 + (((*arg3 + *esi_3) & arg3[3]) << 2)) f* *(arg1 + 0x24) + xmm0_2
    *i = xmm1_3
    float xmm2_3 = *(edi_1 + (((*(esi_3 + 4) + *arg3) & arg3[3]) << 2)) f* *(arg1 + 0x24) + xmm1_3
    *i = xmm2_3
    *i = *(edi_1 + (((*(esi_3 + 8) + *arg3) & arg3[3]) << 2)) f* *(arg1 + 0x24) + xmm2_3

return i
