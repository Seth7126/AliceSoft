// 函数: sub_575110
// 地址: 0x575110
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int64_t* esi = arg1

while (esi != arg2)
    arg2 -= 0xc
    
    if (esi == arg2)
        break
    
    int64_t xmm1_1 = *esi
    int32_t ecx = esi[1].d
    *esi = *arg2
    esi[1].d = arg2[1].d
    esi += 0xc
    *arg2 = xmm1_1
    arg2[1].d = ecx
