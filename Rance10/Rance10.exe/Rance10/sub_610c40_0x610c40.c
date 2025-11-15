// 函数: sub_610c40
// 地址: 0x610c40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t result = *(arg1 + 0x160)

if (result != 0xffffffff)
    result = sub_622690(arg1 + 0x148, result)
    
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
    
    *(arg1 + 0x160) = 0xffffffff

result.b = 1
return result
