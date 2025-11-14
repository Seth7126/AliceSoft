// 函数: sub_5fb730
// 地址: 0x5fb730
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = arg4
int32_t edx = arg3

while (edx != arg2)
    if (result != 0)
        __builtin_memcpy(result, edx, 0x78)
    
    edx += 0x78
    result += 0x78

return result
