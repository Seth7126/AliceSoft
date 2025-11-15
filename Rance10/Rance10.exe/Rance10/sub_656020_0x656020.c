// 函数: sub_656020
// 地址: 0x656020
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edx = arg1
int32_t edi = *(edx + 0x1a0)
int32_t ebp_1 = *(edx + 0x128) - 1
int32_t var_10 = ebp_1

while (true)
    int32_t eax_1 = *(edx + 0x7c)
    int32_t ecx_1 = *(edx + 0x84)
    
    if (eax_1 s>= ecx_1 && (eax_1 != ecx_1 || *(edx + 0x80) u> *(edx + 0x88)))
        int32_t i = 0
        void* esi = *(edx + 0xc4)
        int32_t i_1 = 0
        
        if (*(edx + 0x24) s> 0)
            do
                if (*(esi + 0x34) != 0)
                    int32_t ecx_2 = *(esi + 0xc)
                    int32_t eax_11 = (*(*(edx + 4) + 0x20))(arg1, *(edi + 0x48 + (i << 2)), 
                        *(arg1 + 0x88) * ecx_2, ecx_2, 0)
                    edx = arg1
                    int32_t edi_2 = eax_11
                    int32_t var_4_1 = edi_2
                    uint32_t ebp_2
                    
                    if (*(edx + 0x88) u>= ebp_1)
                        ebp_2 = modu.dp.d(0:(*(esi + 0x20)), *(esi + 0xc))
                        edx = arg1
                        
                        if (ebp_2 == 0)
                            ebp_2 = *(esi + 0xc)
                    else
                        ebp_2 = *(esi + 0xc)
                    
                    int32_t eax_15 = *(*(edx + 0x1b4) + (i << 2) + 4)
                    int32_t eax_17 = *(arg2 + (i << 2))
                    int32_t ebx = 0
                    int32_t var_20_1 = eax_17
                    int32_t var_18_1 = 0
                    
                    if (ebp_2 s> 0)
                        int32_t ecx_3 = *(esi + 0x1c)
                        
                        do
                            int32_t edi_3 = *(edi_2 + (ebx << 2))
                            int32_t ebp_3 = 0
                            int32_t ebx_1 = 0
                            
                            if (ecx_3 != 0)
                                do
                                    eax_15(edx, esi, edi_3, eax_17, ebx_1)
                                    ebx_1 += *(esi + 0x24)
                                    ebp_3 += 1
                                    ecx_3 = *(esi + 0x1c)
                                    edx = arg1
                                    edi_3 -= 0xffffff80
                                    eax_17 = var_20_1
                                while (ebp_3 u< ecx_3)
                            
                            ebx = var_18_1 + 1
                            var_18_1 = ebx
                            int32_t edi_5 = var_20_1 + (*(esi + 0x28) << 2)
                            eax_17 = edi_5
                            var_20_1 = edi_5
                            edi_2 = var_4_1
                        while (ebx s< ebp_2)
                    
                    ebp_1 = var_10
                    i = i_1
                
                i += 1
                esi += 0x58
                i_1 = i
            while (i s< *(edx + 0x24))
        
        *(edx + 0x88) += 1
        int32_t eax_19 = *(edx + 0x88)
        return sbb.d(eax_19, eax_19, eax_19 u< *(edx + 0x128)) + 4
    
    if ((**(edx + 0x1a8))(edx) == 0)
        break
    
    edx = arg1

return 0
