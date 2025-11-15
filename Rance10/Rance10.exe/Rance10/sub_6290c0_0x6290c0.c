// 函数: sub_6290c0
// 地址: 0x6290c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edx_1 = *(arg1 + 4) - 4 + (*(arg1 + 8) << 2)
int32_t result = 0

if (arg3 s> 0)
    do
        int32_t ecx = *edx_1
        edx_1 = &edx_1[-1]
        *(arg2 + (result << 2)) = ecx
        result += 1
    while (result s< arg3)

*(arg1 + 8) -= arg3
return result
