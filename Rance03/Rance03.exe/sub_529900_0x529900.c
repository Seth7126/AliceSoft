// 函数: sub_529900
// 地址: 0x529900
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int128_t* result = arg4
int128_t* esi = arg3

while (esi != arg2)
    if (result != 0)
        *result = *esi
        result[1].q = esi[1].q
        *(result + 0x18) = *(esi + 0x18)
    
    esi += 0x1c
    result += 0x1c

return result
