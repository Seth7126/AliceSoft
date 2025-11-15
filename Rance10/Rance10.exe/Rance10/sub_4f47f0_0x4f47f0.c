// 函数: sub_4f47f0
// 地址: 0x4f47f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = *(arg1 + 0x58)
void* eax = *(result + 4)

if (eax != 0)
    eax = *(eax + 0x40)

if (eax == arg2)
    return result

for (void* i = *(arg1 + 0x60); i != *(arg1 + 0x5c); i -= 4)
    void* edx_1 = *(*(i - 4) + 4)
    
    if (edx_1 != 0)
        edx_1 = *(edx_1 + 0x40)
    
    if (edx_1 == arg2)
        return *(i - 4)

return 0
