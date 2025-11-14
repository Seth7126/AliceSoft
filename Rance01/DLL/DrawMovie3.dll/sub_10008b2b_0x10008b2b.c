// 函数: sub_10008b2b
// 地址: 0x10008b2b
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int128_t* esi = arg2
int128_t* edi = arg1
uint32_t i_1 = arg3 u>> 7
uint32_t i

do
    int128_t xmm1_1 = esi[1]
    int128_t xmm2_1 = esi[2]
    int128_t xmm3_1 = esi[3]
    *edi = *esi
    edi[1] = xmm1_1
    edi[2] = xmm2_1
    edi[3] = xmm3_1
    int128_t xmm5_1 = esi[5]
    int128_t xmm6_1 = esi[6]
    int128_t xmm7_1 = esi[7]
    edi[4] = esi[4]
    edi[5] = xmm5_1
    edi[6] = xmm6_1
    edi[7] = xmm7_1
    esi = &esi[8]
    edi = &edi[8]
    i = i_1
    i_1 -= 1
while (i != 1)
