// 函数: sub_6c3350
// 地址: 0x6c3350
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x58) s>= 2 && *(arg1 + 4) != 0)
    int32_t eax_1 = *(arg1 + 0x34)
    
    if (arg2 s< eax_1)
        if (arg2 s>= 0)
            int32_t edx_3 = *(arg1 + 0x44)
            int32_t edi_1 = arg2 * 2
            *(edx_3 + (edi_1 << 3) + 0xc)
            return *(edx_3 + (edi_1 << 3) + 8)
        
        int32_t i = 0
        int64_t var_c = 0
        int32_t ebx = 0
        int32_t result = 0
        
        if (eax_1 s> 0)
            do
                int32_t eax_2
                int32_t edx_1
                eax_2, edx_1 = sub_6c3350()
                int32_t result_1 = result
                result += eax_2
                ebx = adc.d(ebx, edx_1, result_1 + eax_2 u< result_1)
                i += 1
            while (i s< *(arg1 + 0x34))
        
        return result

return 0xffffff7d
