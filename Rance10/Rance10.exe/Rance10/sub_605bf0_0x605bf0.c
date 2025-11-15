// 函数: sub_605bf0
// 地址: 0x605bf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx
int32_t* var_4 = ecx
int32_t* esi = arg2
uint32_t result

if (sub_627910(arg1, *(esi[1] + (*esi << 2) - 4), 0).b == 0)
label_605c13:
    result.b = 0
    return result

int32_t ecx_4 = *esi

if (ecx_4 s>= 2)
    void* edx_1 = nullptr
    arg2 = nullptr
    
    if (*(esi[1] + (ecx_4 << 2) - 4) s> 0)
        void* ebx_1 = arg3
        int32_t* ecx_5 = &arg1[8]
        var_4 = ecx_5
        
        while (true)
            uint32_t edi_1 = sub_622840(ebx_1, (*(*ecx_5 + 0x20))(edx_1))
            
            if (edi_1 == 0)
                goto label_605c13
            
            if (sub_627910(edi_1, *(esi[1] + (*esi << 2) - 8), 0).b == 0)
                goto label_605c13
            
            int32_t ecx_9 = *esi
            
            if (ecx_9 s>= 3)
                int32_t i = 0
                
                if (*(esi[1] + (ecx_9 << 2) - 8) s> 0)
                    int32_t* ecx_10 = edi_1 + 0x20
                    arg1 = ecx_10
                    
                    do
                        uint32_t ebx_2 = sub_622840(ebx_1, (*(*ecx_10 + 0x20))(i))
                        
                        if (ebx_2 == 0)
                            goto label_605c13
                        
                        if (sub_627910(ebx_2, *(esi[1] + (*esi << 2) - 0xc), 0).b == 0)
                            goto label_605c13
                        
                        int32_t ecx_14 = *esi
                        
                        if (ecx_14 s>= 4)
                            int32_t j = 0
                            
                            if (*(esi[1] + (ecx_14 << 2) - 0xc) s> 0)
                                do
                                    result = sub_622840(arg3, (*(*(ebx_2 + 0x20) + 0x20))(j))
                                    
                                    if (result == 0)
                                        goto label_605c13
                                    
                                    if (sub_627910(result, *(esi[1] + (*esi << 2) - 0x10), 0).b
                                            == 0)
                                        goto label_605c13
                                    
                                    j += 1
                                while (j s< *(esi[1] + (*esi << 2) - 0xc))
                        
                        i += 1
                        ebx_1 = arg3
                        ecx_10 = arg1
                    while (i s< *(esi[1] + (*esi << 2) - 8))
            
            edx_1 = arg2 + 1
            arg2 = edx_1
            
            if (edx_1 s>= *(esi[1] + (*esi << 2) - 4))
                break
            
            ecx_5 = var_4

result.b = 1
return result
