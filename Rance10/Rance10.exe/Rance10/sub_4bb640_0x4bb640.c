// 函数: sub_4bb640
// 地址: 0x4bb640
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = arg4
int32_t edx = arg3

while (edx != arg2)
    if (result != 0)
        __builtin_memcpy(result, edx, 0x64)
    
    edx += 0x64
    result += 0x64

return result
