// 函数: sub_63f460
// 地址: 0x63f460
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 s< 0 || arg2 s>= (*(arg1 + 0x1c) - *(arg1 + 0x18)) s>> 4)
    return 0

int32_t eax_4 = *(arg1 + 0x18)
int32_t edx = arg2 * 2
int32_t result = 0

for (void* i = *(eax_4 + (edx << 3) + 4); i != *(eax_4 + (edx << 3) + 8); i += 0x14)
    result = *(i + 4)
    
    if (arg3 s<= result)
        break

return result
