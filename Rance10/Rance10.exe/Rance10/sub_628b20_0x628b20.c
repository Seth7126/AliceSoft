// 函数: sub_628b20
// 地址: 0x628b20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = *(arg1 + 0x24)
uint32_t result = *(esi + 0x18)

if (result != 0xffffffff)
    result = sub_622690(esi, result)
    
    if (result == 0)
        result.b = 0
        return result
    
    int32_t* edx_1 = *(result + 0x28)
    
    if (edx_1 == 0)
        result.b = 0
        return result
    
    int32_t ecx_1
    
    if (*(result + 0x14) != 0)
        ecx_1 = *(result + 0x10)
    else
        ecx_1 = 0
    
    if (sub_600b40(result, edx_1, ecx_1, *(result + 0x24)).b == 0)
        result.b = 0
        return result
    
    *(esi + 0x18) = 0xffffffff

result.b = 1
return result
