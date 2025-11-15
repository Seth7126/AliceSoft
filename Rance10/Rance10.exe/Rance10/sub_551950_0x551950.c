// 函数: sub_551950
// 地址: 0x551950
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 0x61) = 0
void* result = *(arg1 + 0xc)
int32_t* edx = *(arg1 + 8)
int32_t ecx = 0
uint32_t esi_3 = (result - edx + 3) u>> 2

if (edx u> result)
    esi_3 = 0

if (esi_3 != 0)
    do
        int32_t* eax = *edx
        eax[0xd].b = 0
        result = *eax
        
        if (result != 0)
            *(result + 0x12c) = 0
        
        ecx += 1
        edx = &edx[1]
    while (ecx != esi_3)

return result
