// 函数: sub_5d3720
// 地址: 0x5d3720
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edi = arg2
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x66666667, edi[1] - *edi)
int32_t edx_3 = edx_2 s>> 4
*(arg1 + 0x24) = arg3
int32_t ebp_2 = (edx_3 u>> 0x1f) + edx_3

if (ebp_2 s<= 0)
    *(arg1 + 0x30) = 0
else
    sub_64ad90(arg1 + 0x28, ebp_2)

*(arg1 + 0xc) = 0
uint32_t eax_3

if (sub_64aeb0(arg1 + 4, ebp_2 << 2).b != 0 && sub_5d3640(arg1, edi).b != 0)
    int32_t esi = 0
    arg3 = 0
    
    if (ebp_2 s> 0)
        eax_3 = 0
        uint32_t var_10_1 = 0
        
        while (true)
            void* ebp_4 = *edi + eax_3
            *(*(arg1 + 0x2c) + (esi << 2)) = *(ebp_4 + 0x18)
            uint32_t var_24_3
            uint32_t var_8
            uint32_t eax_5
            
            switch (*(ebp_4 + 0x18))
                case 0, 0xa, 0xb, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1b, 0x1f, 0x20, 
                        0x2f, 0x33, 0x34, 0x43, 0x44
                    goto label_5d3885
                case 0xc
                    eax_5 = sub_5d5e20(*(arg1 + 0x1c))
                label_5d3874:
                    
                    if (eax_5 s>= 0)
                        var_24_3 = eax_5
                        goto label_5d387c
                case 0xd
                    if (sub_5d6c90(*(arg1 + 0x1c), *(ebp_4 + 0x1c), &var_8, arg4).b != 0)
                        var_24_3 = var_8
                    label_5d387c:
                        sub_5d3520(arg1, esi, var_24_3)
                    label_5d3885:
                        esi += 1
                        eax_3 = var_10_1 + 0x28
                        arg3 = esi
                        var_10_1 = eax_3
                        
                        if (esi s>= ebp_2)
                            break
                        
                        continue
                case 0xe, 0xf, 0x10, 0x11, 0x1e, 0x32, 0x42
                    int32_t edi_1 = *(arg1 + 0x1c)
                    int32_t eax_6 = sub_5d5dc0(edi_1)
                    *(*(edi_1 + 8) + (eax_6 << 2)) = sub_5d5980(edi_1 + 0x1c)
                    
                    if (eax_6 s>= 0)
                        void* ecx_6 = *(arg1 + 0x1c)
                        
                        if (eax_6 u< (*(ecx_6 + 0xc) - *(ecx_6 + 8)) s>> 2)
                            void* ecx_7 = *(*(ecx_6 + 8) + (eax_6 << 2))
                            
                            if (ecx_7 != 0)
                                esi = arg3
                                *(ecx_7 + 0x3c) = *(ebp_4 + 0x18)
                                *(ecx_7 + 0x40) = *(ebp_4 + 0x1c)
                                sub_5d3520(arg1, esi, eax_6)
                                edi = arg2
                                goto label_5d3885
                case 0x3f
                    eax_5 = sub_5d5e50(*(arg1 + 0x1c))
                    goto label_5d3874
            
            eax_5.b = 0
            return eax_5
    
    eax_3.b = 1
    return eax_3

eax_3.b = 0
return eax_3
