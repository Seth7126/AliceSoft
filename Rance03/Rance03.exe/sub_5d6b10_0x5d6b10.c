// 函数: sub_5d6b10
// 地址: 0x5d6b10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp = arg3
int32_t* edi = arg4

if (ebp s< 0)
    *edi += ebp
    ebp = 0

int32_t eax = *edi

if (eax s> 0)
    void* edx_1 = arg2
    uint32_t ecx_1 = *(edx_1 + 0xc) u>> 2
    
    if (eax + ebp s> ecx_1)
        *edi = ecx_1 - ebp
    
    int32_t ecx_3 = *edi
    
    if (ecx_3 s> 0)
        uint32_t eax_2
        
        switch (*(edx_1 + 0x3c) - 0xe)
            case 0, 1, 0x10, 0x24
                if (*(edx_1 + 0xc) != 0)
                    eax_2 = *(edx_1 + 8)
                else
                    eax_2 = 0
                
                if (ecx_3 s<= 0)
                    eax_2.b = 1
                    return eax_2
                
                int32_t ecx_4
                int32_t edi_2
                edi_2, ecx_4 = __memfill_u32(eax_2 + (ebp << 2), arg5, ecx_3)
                int32_t eax_3
                eax_3.b = 1
                return eax_3
            case 2, 0xa
                int32_t esi_1 = 0
                
                if (ecx_3 s> 0)
                    while (true)
                        if (sub_5d3550(edx_1, esi_1 + ebp, &arg3).b == 0)
                            goto label_5d6c44
                        
                        int32_t ecx_6 = arg3
                        
                        if (ecx_6 u>= (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)
                            goto label_5d6c44
                        
                        eax_2 = *(*(arg1 + 8) + (ecx_6 << 2))
                        arg4 = eax_2
                        
                        if (eax_2 == 0)
                            goto label_5d6c44
                        
                        eax_2 = sub_5d6060(arg1, arg5)
                        
                        if (eax_2 == 0)
                            goto label_5d6c44
                        
                        if (sub_5d3d90(arg4, eax_2).b == 0)
                            goto label_5d6c44
                        
                        esi_1 += 1
                        
                        if (esi_1 s>= *edi)
                            break
                        
                        edx_1 = arg2
                
                eax_2.b = 1
                return eax_2
            case 3
                int32_t i = 0
                
                if (ecx_3 s> 0)
                    do
                        if (sub_5d3550(edx_1, i + ebp, &arg3).b == 0)
                            goto label_5d6c44
                        
                        if (sub_5d7290(arg1, arg3, arg5).b == 0)
                            goto label_5d6c44
                        
                        edx_1 = arg2
                        i += 1
                    while (i s< *edi)
                
                eax_2.b = 1
                return eax_2
        
    label_5d6c44:
        eax_2.b = 0
        return eax_2

*edi = 0
eax.b = 1
return eax
