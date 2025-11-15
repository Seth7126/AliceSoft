// 函数: sub_581240
// 地址: 0x581240
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int128_t* result = arg4
int128_t* esi = arg3

while (esi != arg2)
    if (result != 0)
        *result = *esi
        result[1] = esi[1]
        result[2] = esi[2]
        result[3].d = esi[3].d
    
    esi += 0x34
    result += 0x34

return result
