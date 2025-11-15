// 函数: sub_601340
// 地址: 0x601340
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result

if (*(arg1 + 0x38) == *(arg2 + 0x38) && *(arg1 + 0x3c) == *(arg2 + 0x3c)
        && sub_600390(arg1 + 0x40, arg2 + 0x40).b != 0)
    result = *(arg1 + 0x4c)
    
    if (result == *(arg2 + 0x4c))
        int32_t i = 0
        
        if (result s> 0)
            int32_t edi_1 = 0
            
            do
                void* ecx_2 = *(arg1 + 0x60) + edi_1
                void* edx_3 = *(arg2 + 0x60) + edi_1
                
                if (*(ecx_2 + 0x34) == *(edx_3 + 0x34) && *(ecx_2 + 0x38) == *(edx_3 + 0x38))
                    result = sub_600390(ecx_2 + 0x3c, edx_3 + 0x3c)
                
                if (*(ecx_2 + 0x34) != *(edx_3 + 0x34) || *(ecx_2 + 0x38) != *(edx_3 + 0x38)
                        || result.b == 0)
                    result.b = 0
                    return result
                
                i += 1
                edi_1 += 0x70
            while (i s< *(arg1 + 0x4c))
        
        result.b = 1
        return result

result.b = 0
return result
