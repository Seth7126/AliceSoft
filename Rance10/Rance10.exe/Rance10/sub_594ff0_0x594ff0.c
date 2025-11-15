// 函数: sub_594ff0
// 地址: 0x594ff0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*arg2 s< *arg3)
    int128_t xmm1_1 = *arg2
    int64_t xmm2_1 = *(arg2 + 0x10)
    *arg2 = *arg3
    *(arg2 + 0x10) = *(arg3 + 0x10)
    *arg3 = xmm1_1
    *(arg3 + 0x10) = xmm2_1

int32_t result = *arg4

if (result s< *arg2)
    int128_t xmm1_2 = *arg4
    int64_t xmm2_2 = *(arg4 + 0x10)
    *arg4 = *arg2
    *(arg4 + 0x10) = *(arg2 + 0x10)
    *arg2 = xmm1_2
    *(arg2 + 0x10) = xmm2_2
    result = *arg2
    
    if (result s< *arg3)
        *arg2 = *arg3
        *(arg2 + 0x10) = *(arg3 + 0x10)
        *arg3 = xmm1_2
        *(arg3 + 0x10) = xmm2_2

return result
