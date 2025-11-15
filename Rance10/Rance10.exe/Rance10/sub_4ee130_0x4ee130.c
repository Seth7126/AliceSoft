// 函数: sub_4ee130
// 地址: 0x4ee130
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx_1 = *(arg1 + 0x70)
int32_t eax = *(ecx_1 + 0xc4)
int32_t* ecx = *(ecx_1 + 0xc0)
int32_t* edx = ecx

if (ecx != eax)
    while (*edx != arg2)
        edx = &edx[1]
        
        if (edx == eax)
            break

if (edx != eax)
    return (edx - ecx) s>> 2

return 0xffffffff
