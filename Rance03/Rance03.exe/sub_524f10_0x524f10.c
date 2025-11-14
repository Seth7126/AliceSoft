// 函数: sub_524f10
// 地址: 0x524f10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int64_t* result = arg4
int64_t* esi = arg3

while (esi != arg2)
    if (result != 0)
        *result = *esi
        result[1].d = esi[1].d
    
    esi += 0xc
    result += 0xc

return result
