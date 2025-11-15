// 函数: sub_5f1df0
// 地址: 0x5f1df0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*arg2 s< *arg3)
    int32_t ecx = arg2[6]
    int128_t xmm1_1 = *arg2
    int64_t xmm2_1 = *(arg2 + 0x10)
    *arg2 = *arg3
    *(arg2 + 0x10) = *(arg3 + 0x10)
    arg2[6] = arg3[6]
    *arg3 = xmm1_1
    *(arg3 + 0x10) = xmm2_1
    arg3[6] = ecx

int32_t result = *arg4

if (result s< *arg2)
    int128_t xmm1_2 = *arg4
    int32_t edi_1 = arg4[6]
    int64_t xmm2_2 = *(arg4 + 0x10)
    *arg4 = *arg2
    *(arg4 + 0x10) = *(arg2 + 0x10)
    arg4[6] = arg2[6]
    *arg2 = xmm1_2
    *(arg2 + 0x10) = xmm2_2
    arg2[6] = edi_1
    result = *arg2
    
    if (result s< *arg3)
        *arg2 = *arg3
        *(arg2 + 0x10) = *(arg3 + 0x10)
        result = arg3[6]
        arg2[6] = result
        *arg3 = xmm1_2
        *(arg3 + 0x10) = xmm2_2
        arg3[6] = edi_1

return result
