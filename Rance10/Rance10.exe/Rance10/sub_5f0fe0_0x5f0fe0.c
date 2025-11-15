// 函数: sub_5f0fe0
// 地址: 0x5f0fe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

while (arg1 != arg2)
    arg2 -= 0x18
    
    if (arg1 == arg2)
        break
    
    int128_t xmm1_1 = *arg1
    int64_t xmm2_1 = arg1[1].q
    *arg1 = *arg2
    arg1[1].q = arg2[1].q
    arg1 += 0x18
    *arg2 = xmm1_1
    arg2[1].q = xmm2_1
