// 函数: sub_60ae30
// 地址: 0x60ae30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = *(arg2 + 8)
char* edx = *(arg2 + 4) + 4

if (edx u<= esi)
    *(arg2 + 4) = edx
    
    if (&edx[4] u<= esi)
        uint32_t ebx_6 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
        *(arg2 + 4) = &edx[4]
        void* eax_4
        
        if (ebx_6 s> 0)
            int32_t edi_1 = *(arg1 + 0x44)
            
            for (void* i = *(arg1 + 0x40); i != edi_1; i += 0x6c)
                sub_60e680(i)
            
            *(arg1 + 0x44) = *(arg1 + 0x40)
            sub_60bfb0(arg1 + 0x40, ebx_6)
            int32_t esi_1 = 0
            
            if (ebx_6 s> 0)
                int32_t edi_2 = 0
                
                do
                    if (sub_6012c0(*(arg1 + 0x40) + edi_2, arg2, esi_1).b == 0)
                        eax_4.b = 0
                        return eax_4
                    
                    esi_1 += 1
                    edi_2 += 0x6c
                while (esi_1 s< ebx_6)
        
        eax_4.b = 1
        return eax_4

void* eax
eax.b = 0
return eax
