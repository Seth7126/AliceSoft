// 函数: sub_4c1730
// 地址: 0x4c1730
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result = arg4
int32_t* esi = arg3

while (esi != arg2)
    if (result != 0)
        *result = *esi
        result[1] = esi[1]
    
    esi = &esi[2]
    result = &result[2]

return result
