// 函数: sub_4751d0
// 地址: 0x4751d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result

if (arg2 == 0)
    result.b = 0
    return result

if (arg2 != arg1)
    int32_t ecx = *(arg1 + 0x1c)
    *(arg1 + 0x1c) = *(arg2 + 0x1c)
    *(arg2 + 0x1c) = ecx
    
    if (arg1 + 0x20 != arg2 + 0x20)
        int32_t ecx_1 = *(arg1 + 0x20)
        *(arg1 + 0x20) = *(arg2 + 0x20)
        *(arg2 + 0x20) = ecx_1
        int32_t ecx_2 = *(arg1 + 0x24)
        *(arg1 + 0x24) = *(arg2 + 0x24)
        *(arg2 + 0x24) = ecx_2
        int32_t ecx_3 = *(arg1 + 0x28)
        *(arg1 + 0x28) = *(arg2 + 0x28)
        *(arg2 + 0x28) = ecx_3
    
    if (arg1 + 0x2c != arg2 + 0x2c)
        int32_t ecx_4 = *(arg1 + 0x2c)
        *(arg1 + 0x2c) = *(arg2 + 0x2c)
        *(arg2 + 0x2c) = ecx_4
        int32_t ecx_5 = *(arg1 + 0x30)
        *(arg1 + 0x30) = *(arg2 + 0x30)
        *(arg2 + 0x30) = ecx_5
    
    result = *(arg1 + 0x24)
    int32_t edx_3 = 0
    void** ecx_6 = *(arg1 + 0x20)
    uint32_t esi_5 = (result - ecx_6 + 3) u>> 2
    
    if (ecx_6 u> result)
        esi_5 = 0
    
    if (esi_5 != 0)
        do
            result = *ecx_6
            ecx_6 = &ecx_6[1]
            edx_3 += 1
            *(result + 0x34) = arg1
        while (edx_3 != esi_5)
    
    void** ecx_7 = *(arg2 + 0x20)
    int32_t edx_4 = 0
    uint32_t esi_9 = (*(arg2 + 0x24) - ecx_7 + 3) u>> 2
    
    if (ecx_7 u> *(arg2 + 0x24))
        esi_9 = 0
    
    if (esi_9 != 0)
        do
            result = *ecx_7
            ecx_7 = &ecx_7[1]
            edx_4 += 1
            *(result + 0x34) = arg2
        while (edx_4 != esi_9)

result.b = 1
return result
