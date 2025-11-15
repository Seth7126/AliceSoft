// 函数: sub_5bf710
// 地址: 0x5bf710
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int128_t* result = arg4
int128_t* esi = arg3

while (esi != arg2)
    if (result != 0)
        *result = *esi
        result[1] = esi[1]
        result[2].d = esi[2].d
    
    esi += 0x24
    result += 0x24

return result
