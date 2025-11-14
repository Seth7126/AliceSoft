// 函数: sub_4442e0
// 地址: 0x4442e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i = 0
int32_t ebx = 0
int32_t i_1 = 0
int16_t* ecx = *(arg1 + 0x24)
int16_t* ebp = *(arg1 + 0x18)
int16_t* var_8 = ecx

if (*(arg1 + 8) u> 0)
    int32_t var_10_1 = 0xf0
    int32_t var_14_1 = 0xeb
    
    do
        uint32_t j_1 = 0
        
        if (*(arg1 + 4) u> 0)
            uint32_t j
            
            do
                int16_t eax = *ebp
                
                if (eax s>= 0x10)
                    j = zx.d(eax.b)
                    
                    if (eax s> 0xf0)
                        j = 0xf0
                else
                    j.b = 0x10
                
                int16_t eax_1 = *ecx
                
                if (eax_1 s>= 0x10)
                    ecx = zx.d(eax_1.b)
                    
                    if (eax_1 s> 0xf0)
                        ecx = 0xf0
                else
                    ecx.b = 0x10
                
                int32_t eax_6 = ((zx.d(ecx.b) | 0xffffff00) << 8 | zx.d(j.b)) << 8
                int16_t edx = *(*(arg1 + 0xc) + (ebx << 1))
                uint32_t ecx_2
                
                if (edx s>= 0x10)
                    ecx_2 = zx.d(edx.b)
                    
                    if (edx s> 0xeb)
                        ecx_2 = 0xeb
                else
                    ecx_2.b = 0x10
                
                *(arg2 + (ebx << 2)) = zx.d(ecx_2.b) | eax_6
                int16_t edx_1 = *(*(arg1 + 0xc) + (ebx << 1) + 2)
                uint32_t ecx_5
                
                if (edx_1 s>= 0x10)
                    ecx_5 = zx.d(edx_1.b)
                    
                    if (edx_1 s> 0xeb)
                        ecx_5 = 0xeb
                else
                    ecx_5.b = 0x10
                
                *(arg2 + (ebx << 2) + 4) = zx.d(ecx_5.b) | eax_6
                int32_t edi_3 = *(arg1 + 4) + ebx
                int16_t edx_2 = *(*(arg1 + 0xc) + (edi_3 << 1))
                uint32_t ecx_8
                
                if (edx_2 s>= 0x10)
                    ecx_8 = zx.d(edx_2.b)
                    
                    if (edx_2 s> 0xeb)
                        ecx_8 = 0xeb
                else
                    ecx_8.b = 0x10
                
                *(arg2 + (edi_3 << 2)) = zx.d(ecx_8.b) | eax_6
                int32_t edi_5 = *(arg1 + 4) + ebx
                int16_t edx_4 = *(*(arg1 + 0xc) + (edi_5 << 1) + 2)
                uint32_t ecx_11
                
                if (edx_4 s>= 0x10)
                    ecx_11 = zx.d(edx_4.b)
                    
                    if (edx_4 s> 0xeb)
                        ecx_11 = 0xeb
                else
                    ecx_11.b = 0x10
                
                ebx += 2
                j = j_1 + 2
                j_1 = j
                ebp = &ebp[1]
                *(arg2 + (edi_5 << 2) + 4) = zx.d(ecx_11.b) | eax_6
                ecx = &var_8[1]
                var_8 = ecx
            while (j u< *(arg1 + 4))
            i = i_1
        
        ebx += *(arg1 + 4)
        i += 2
        i_1 = i
    while (i u< *(arg1 + 8))

i.b = 1
return i
