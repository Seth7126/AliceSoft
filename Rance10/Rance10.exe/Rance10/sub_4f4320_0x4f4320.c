// 函数: sub_4f4320
// 地址: 0x4f4320
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edx = *(arg1 + 0x5c)
int32_t* esi = edx
int32_t eax = *(arg1 + 0x60)

if (edx != eax)
    while (*esi != *(arg1 + 0x68))
        esi = &esi[1]
        
        if (esi == eax)
            break

if (esi != eax)
    return (esi - edx) s>> 2

return ((eax - edx) s>> 2) - 1
