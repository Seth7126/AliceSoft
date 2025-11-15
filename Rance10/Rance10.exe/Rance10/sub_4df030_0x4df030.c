// 函数: sub_4df030
// 地址: 0x4df030
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = *(arg1 + 0x68)

if (result != 0)
    void** esi_1 = *(result + 0x20)
    result = *(result + 0x24)
    uint32_t ebx_4 = (result - esi_1 + 3) u>> 2
    int32_t edi_1 = 0
    
    if (esi_1 u> result)
        ebx_4 = 0
    
    if (ebx_4 != 0)
        do
            result = sub_4d6760(*esi_1, arg2)
            edi_1 += 1
            esi_1 = &esi_1[1]
        while (edi_1 != ebx_4)

return result
