// 函数: sub_551680
// 地址: 0x551680
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = *(arg1 + 0xc)
int32_t* edx = *(arg1 + 8)
int32_t ecx = 0
uint32_t esi_3 = (result - edx + 3) u>> 2

if (edx u> result)
    esi_3 = 0

if (esi_3 != 0)
    int32_t ebx
    ebx.b = arg2
    
    do
        result = **edx
        
        if (result != 0)
            *(result + 0x115) = ebx.b
        
        ecx += 1
        edx = &edx[1]
    while (ecx != esi_3)

return result
