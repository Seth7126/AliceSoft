// 函数: sub_4d6dd0
// 地址: 0x4d6dd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax_3 = *(arg1 + 0x1c)

if (eax_3 != 0 && *(arg1 + 0x28) != 0)
    return sub_4d88d0(eax_3) __tailcall

void* eax_1 = *(arg1 + 0x20)

if (eax_1 != 0 && *(arg1 + 0x29) != 0)
    return sub_4dac30(eax_1) __tailcall

void* result = *(arg1 + 0x24)

if (result != 0 && *(arg1 + 0x2a) != 0)
    void** esi_1 = *(result + 0x18)
    result = *(result + 0x1c)
    uint32_t ebx_4 = (result - esi_1 + 3) u>> 2
    int32_t edi_1 = 0
    
    if (esi_1 u> result)
        ebx_4 = 0
    
    if (ebx_4 != 0)
        do
            result = sub_4d88d0(*esi_1)
            edi_1 += 1
            esi_1 = &esi_1[1]
        while (edi_1 != ebx_4)

return result
