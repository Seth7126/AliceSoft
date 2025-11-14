// 函数: sub_10006dea
// 地址: 0x10006dea
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

void* result = arg3
int32_t ecx = data_10020300

while (*(result + 4) != arg2)
    result += 0xc
    
    if (result u>= ecx * 0xc + arg3)
        break

if (result u< ecx * 0xc + arg3 && *(result + 4) == arg2)
    return result

return nullptr
