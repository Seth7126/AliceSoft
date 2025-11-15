// 函数: sub_5530a0
// 地址: 0x5530a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = *(arg1 + 0x2c8)
int32_t* edx = *(arg1 + 0x2c4)
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
