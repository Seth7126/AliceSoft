// 函数: sub_4a6ba0
// 地址: 0x4a6ba0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg1 + 0x9c4)

if (eax s>= 0x270)
    if (eax == 0x271)
        sub_4a6b50(arg1, 0x1571)
    
    void* edx_1 = arg1 + 4
    int32_t i_2 = 0xe3
    int32_t i
    
    do
        int32_t ecx = *(edx_1 + 4)
        edx_1 += 4
        int32_t ecx_3 = ((ecx ^ *(edx_1 - 4)) & 0x7fffffff) ^ *(edx_1 - 4)
        *(edx_1 - 4) = ecx_3 u>> 1 ^ *(((ecx_3 & 1) << 2) + &data_796088) ^ *(edx_1 + 0x630)
        i = i_2
        i_2 -= 1
    while (i != 1)
    void* edx_2 = arg1 + 0x390
    int32_t i_3 = 0x18c
    int32_t i_1
    
    do
        int32_t ecx_7 = *(edx_2 + 4)
        edx_2 += 4
        int32_t ecx_10 = ((ecx_7 ^ *(edx_2 - 4)) & 0x7fffffff) ^ *(edx_2 - 4)
        *(edx_2 - 4) = ecx_10 u>> 1 ^ *(((ecx_10 & 1) << 2) + &data_796088) ^ *(edx_2 - 0x390)
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    int32_t ecx_17 = ((*(arg1 + 0x9c0) ^ *(arg1 + 4)) & 0x7fffffff) ^ *(arg1 + 0x9c0)
    *(arg1 + 0x9c0) = *(((ecx_17 & 1) << 2) + &data_796088) ^ *(arg1 + 0x634) ^ ecx_17 u>> 1
    *(arg1 + 0x9c4) = i_3

int32_t ecx_19 = *(arg1 + 0x9c4)
*(arg1 + 0x9c4) = ecx_19 + 1
int32_t ecx_20 = *(arg1 + (ecx_19 << 2) + 4)
int32_t ecx_21 = ecx_20 ^ ecx_20 u>> 0xb
int32_t ecx_22 = ecx_21 ^ (ecx_21 & 0xff3a58ad) << 7
int32_t ecx_23 = ecx_22 ^ (ecx_22 & 0xffffdf8c) << 0xf
return ecx_23 u>> 0x12 ^ ecx_23
