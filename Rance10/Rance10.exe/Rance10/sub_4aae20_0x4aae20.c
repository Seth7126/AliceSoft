// 函数: sub_4aae20
// 地址: 0x4aae20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

while (arg1 != arg2)
    arg2 -= 0x28
    
    if (arg1 == arg2)
        break
    
    int128_t xmm1_1 = *arg1
    int128_t xmm2_1 = arg1[1]
    int64_t xmm3_1 = arg1[2].q
    *arg1 = *arg2
    arg1[1] = arg2[1]
    arg1[2].q = arg2[2].q
    arg1 += 0x28
    *arg2 = xmm1_1
    arg2[1] = xmm2_1
    arg2[2].q = xmm3_1
