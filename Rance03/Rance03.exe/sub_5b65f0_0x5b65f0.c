// 函数: sub_5b65f0
// 地址: 0x5b65f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result

if (*(arg1 + 0x20) != *(arg2 + 0x20) || *(arg1 + 0x24) != *(arg2 + 0x24))
    result.b = 0
    return result

int32_t edi = *(arg1 + 0x28)

if (edi != *(arg2 + 0x28))
    result.b = 0
    return result

int32_t esi = 0

if (edi s> 0)
    void* edx_1 = *(arg1 + 0x3c) + 0x1c
    result = *(arg2 + 0x3c) + 0x1c
    
    while (true)
        if (*(edx_1 - 4) != *(result - 4) || *edx_1 != *result || *(edx_1 + 4) != *(result + 4))
            result.b = 0
            return result
        
        esi += 1
        result += 0x28
        edx_1 += 0x28
        
        if (esi s>= edi)
            break
        
        continue

result.b = 1
return result
