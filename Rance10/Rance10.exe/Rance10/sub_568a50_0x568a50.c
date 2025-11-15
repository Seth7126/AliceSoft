// 函数: sub_568a50
// 地址: 0x568a50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int128_t* result = arg4
int128_t* esi = arg3

while (esi != arg2)
    if (result != 0)
        *result = *esi
        result[1].d = esi[1].d
    
    esi += 0x14
    result += 0x14

return result
