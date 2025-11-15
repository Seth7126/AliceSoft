// 函数: sub_5f0f90
// 地址: 0x5f0f90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int128_t* esi = arg1

while (esi != arg2)
    arg2 -= 0x1c
    
    if (esi == arg2)
        break
    
    int32_t ecx = *(esi + 0x18)
    int128_t xmm1_1 = *esi
    int64_t xmm2_1 = esi[1].q
    *esi = *arg2
    esi[1].q = arg2[1].q
    *(esi + 0x18) = *(arg2 + 0x18)
    esi += 0x1c
    *arg2 = xmm1_1
    arg2[1].q = xmm2_1
    *(arg2 + 0x18) = ecx
