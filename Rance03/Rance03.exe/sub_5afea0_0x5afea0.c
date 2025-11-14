// 函数: sub_5afea0
// 地址: 0x5afea0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = arg2
int32_t* ebx = arg1
int32_t result_1 = result
int32_t* var_14 = ebx

if (ebx != result)
    int32_t* edi_1 = &ebx[9]
    
    if (edi_1 != result)
        void* esi_1 = &edi_1[6]
        
        do
            int32_t edx = *(esi_1 - 4)
            int32_t* ecx = edi_1
            int32_t eax = *edi_1
            int64_t xmm1_1 = *(esi_1 - 0xc)
            int32_t xmm2_1 = *esi_1
            int32_t xmm3_1 = *(esi_1 + 4)
            int32_t ebp_1 = *(esi_1 - 0x14)
            int32_t result_2 = *(esi_1 + 8)
            
            if (eax s>= *ebx)
                void* ebp_2 = esi_1 - 0x3c
                
                if (eax s< *(esi_1 - 0x3c))
                    void* edx_2 = esi_1 - 0x24
                    int32_t eax_4 = *ebp_2
                    
                    do
                        *ecx = eax_4
                        edx_2 -= 0x24
                        ecx[1] = *(edx_2 + 0x10)
                        *(ecx + 0xc) = *(edx_2 + 0x18)
                        ecx[5] = *(edx_2 + 0x20)
                        ecx[6] = *(edx_2 + 0x24)
                        ecx[7] = *(edx_2 + 0x28)
                        ecx[8] = *(edx_2 + 0x2c)
                        ecx = ebp_2
                        eax_4 = *(ebp_2 - 0x24)
                        ebp_2 -= 0x24
                    while (eax s< eax_4)
                    
                    ebx = var_14
                
                *ecx = eax
                ecx[1] = ebp_1
                *(ecx + 0xc) = xmm1_1
                ecx[5] = edx
                result = result_2
                ecx[6] = xmm2_1
                ecx[7] = xmm3_1
                ecx[8] = result
            else
                int32_t result_3 = result_1
                sub_5b0910(esi_1 + 0xc, edi_1, ebx, esi_1 + 0xc)
                *ebx = eax
                ebx[1] = ebp_1
                *(ebx + 0xc) = xmm1_1
                ebx[6] = xmm2_1
                ebx[5] = edx
                result = result_2
                ebx[7] = xmm3_1
                ebx[8] = result
            
            edi_1 = &edi_1[9]
            esi_1 += 0x24
        while (edi_1 != result_1)

return result
