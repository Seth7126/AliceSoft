// 函数: sub_6284f0
// 地址: 0x6284f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx_2 = *(arg1 + 4)

if (arg2 s>= 0)
    int32_t edi_1 = *(ecx_2 + 0xb4)
    
    if (arg2 s< (*(ecx_2 + 0xb8) - edi_1) s/ 0x70)
        int32_t* result = arg2 * 0x70 + edi_1
        
        if (result[5] u< 0x10)
            return result
        
        return *result

return nullptr
