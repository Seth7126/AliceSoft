// 函数: sub_4d6e40
// 地址: 0x4d6e40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = *(arg1 + 0x1c)

if (result != 0 && *(arg1 + 0x28) != 0)
    return sub_4d8a60(result, arg2) __tailcall

if (*(arg1 + 0x29) != 0)
    result = *(arg1 + 0x20)
    
    if (result != 0)
        return sub_4db170(result, arg2) __tailcall

if (*(arg1 + 0x2a) != 0)
    result = *(arg1 + 0x24)
    
    if (result != 0)
        void** esi_1 = *(result + 0x18)
        result = *(result + 0x1c)
        int32_t edi_1 = 0
        uint32_t ebx_4 = (result - esi_1 + 3) u>> 2
        
        if (esi_1 u> result)
            ebx_4 = 0
        
        if (ebx_4 != 0)
            do
                result = sub_4d8a60(*esi_1, arg2)
                edi_1 += 1
                esi_1 = &esi_1[1]
            while (edi_1 != ebx_4)

return result
