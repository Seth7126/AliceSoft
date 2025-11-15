// 函数: sub_600c70
// 地址: 0x600c70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t result

if (arg2 != 0)
    *(arg1 + 0x24) = arg2
    int32_t ecx_1 = *(arg2 + 0x64) - *(arg2 + 0x60)
    *(arg1 + 0x14) = 0
    int32_t ebx_3 = ecx_1 s/ 0x70
    
    if (sub_405df0(arg1 + 0xc, ebx_3 << 2).b != 0)
        int32_t* esi_1
        
        if (*(arg1 + 0x14) != 0)
            esi_1 = *(arg1 + 0x10)
        else
            esi_1 = nullptr
        
        int32_t edi_1 = 0
        
        if (ebx_3 s> 0)
            int32_t ebx_4 = 0
            
            do
                void* ecx_3 = *(arg1 + 0x24)
                void* edx_5 = *(ecx_3 + 0x60) + ebx_4
                result = *(edx_5 + 0x34) - 0xc
                
                if (result u> 0x43)
                label_600d14:
                    
                    if (sub_600a10(result, edx_5, esi_1, *(arg1 + 0x20), 0).b == 0)
                        goto label_600c7e
                else
                    result = zx.d(lookup_table_600d48[result])
                    
                    switch (result)
                        case 0
                            if (edi_1 s>= *(ecx_3 + 0x4c))
                                goto label_600d14
                            
                            *esi_1 = 0xffffffff
                        case 1
                            *esi_1 = 0xffffffff
                        case 2
                            goto label_600d14
                
                edi_1 += 1
                ebx_4 += 0x70
                esi_1 = &esi_1[1]
            while (edi_1 s< ebx_3)
        
        result.b = 1
        return result

label_600c7e:
result.b = 0
return result
