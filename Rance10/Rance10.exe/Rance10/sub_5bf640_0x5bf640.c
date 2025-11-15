// 函数: sub_5bf640
// 地址: 0x5bf640
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = arg4
int32_t edx = arg3

while (edx != arg2)
    if (result != 0)
        __builtin_memcpy(result, edx, 0x78)
    
    edx += 0x78
    result += 0x78

return result
