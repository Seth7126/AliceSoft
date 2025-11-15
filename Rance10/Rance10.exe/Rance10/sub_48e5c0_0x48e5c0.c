// 函数: sub_48e5c0
// 地址: 0x48e5c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = arg2[1]
int32_t* i

for (i = *arg2; i != edx; i = &i[1])
    *arg3 -= 1
    int32_t edi_1 = arg3[4]
    *(edi_1 + ((arg3[3] & *arg3) << 2)) = *i
    float xmm1_2 = *i f* *(arg1 + 0x20)
    int32_t* ecx_2 = *arg4
    *i = xmm1_2
    *i = *(edi_1 + (((*ecx_2 + *arg3) & arg3[3]) << 2)) f* *(arg1 + 0x24) + xmm1_2

return i
