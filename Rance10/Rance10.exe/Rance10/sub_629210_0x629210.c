// 函数: sub_629210
// 地址: 0x629210
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
uint32_t result

if (arg2 != 0)
    *(arg1 + 0x38) = arg2
    int32_t ecx_2 = *(arg2 + 0x30) - *(arg2 + 0x2c)
    *(arg1 + 0x14) = 0
    int32_t ebp_3 = ecx_2 s/ 0x70
    
    if (sub_405df0(arg1 + 0xc, ebp_3 << 2).b != 0)
        int32_t* edi_1
        
        if (*(arg1 + 0x14) != 0)
            edi_1 = *(arg1 + 0x10)
        else
            edi_1 = nullptr
        
        int32_t esi_1 = 0
        
        if (ebp_3 s> 0)
            int32_t ebx_1 = 0
            
            do
                if (sub_600a10(arg1, *(arg2 + 0x2c) + ebx_1, edi_1, *(arg1 + 0x24), arg3).b == 0)
                    goto label_629223
                
                esi_1 += 1
                ebx_1 += 0x70
                edi_1 = &edi_1[1]
            while (esi_1 s< ebp_3)
        
        result.b = 1
        return result

label_629223:
result.b = 0
return result
