// 函数: sub_6277c0
// 地址: 0x6277c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result = sub_627860(arg1 - 0x20, arg2)

if (result.b != 0)
    result = sub_627860(arg1 - 0x20, arg3)
    
    if (result.b != 0)
        result = *(arg1 + 0x1c)
        int32_t* var_c_1 = result
        
        if (result s> 0)
            int32_t edi_2 = result * arg2
            int32_t edx_2 = result * arg3
            int32_t* i
            
            do
                uint32_t ecx_3 = *(arg1 - 0xc) u>> 2
                int32_t* result_1
                
                if (edx_2 u< ecx_3)
                    result_1 = *(arg1 - 0x10) + (edx_2 << 2)
                else
                    result_1 = nullptr
                
                int32_t* esi_1
                
                if (edi_2 u< ecx_3)
                    esi_1 = *(arg1 - 0x10) + (edi_2 << 2)
                else
                    esi_1 = nullptr
                
                edx_2 += 1
                int32_t ecx_4 = *esi_1
                edi_2 += 1
                i = var_c_1
                var_c_1 -= 1
                *esi_1 = *result_1
                result = result_1
                *result = ecx_4
            while (i != 1)

return result
