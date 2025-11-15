// 函数: sub_48e8e0
// 地址: 0x48e8e0
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
    float xmm0_5 = *(edi_1 + (((*(esi_3 + 4) + *arg3) & arg3[3]) << 2)) f* *(arg1 + 0x24) + xmm1_3
    *i = xmm0_5
    float xmm1_6 = *(edi_1 + (((*(esi_3 + 8) + *arg3) & arg3[3]) << 2)) f* *(arg1 + 0x24) + xmm0_5
    *i = xmm1_6
    float xmm0_8 = *(edi_1 + (((*(esi_3 + 0xc) + *arg3) & arg3[3]) << 2)) f* *(arg1 + 0x24) + xmm1_6
    *i = xmm0_8
    float xmm1_9 =
        *(edi_1 + (((*(esi_3 + 0x10) + *arg3) & arg3[3]) << 2)) f* *(arg1 + 0x24) + xmm0_8
    *i = xmm1_9
    *i = *(edi_1 + (((*(esi_3 + 0x14) + *arg3) & arg3[3]) << 2)) f* *(arg1 + 0x24) + xmm1_9

return i
