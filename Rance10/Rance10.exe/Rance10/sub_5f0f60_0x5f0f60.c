// 函数: sub_5f0f60
// 地址: 0x5f0f60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int128_t* esi = arg1

while (esi != arg2)
    arg2 -= 0x14
    
    if (esi == arg2)
        break
    
    int32_t ecx = esi[1].d
    int128_t xmm1_1 = *esi
    *esi = *arg2
    esi[1].d = arg2[1].d
    esi += 0x14
    *arg2 = xmm1_1
    arg2[1].d = ecx
