// 函数: sub_5b0320
// 地址: 0x5b0320
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = arg2
int32_t* ebp = arg1
int32_t result_1 = result
int32_t* var_c = ebp

if (ebp != result)
    int32_t* edi_1 = &ebp[7]
    
    if (edi_1 != result)
        void* esi_1 = &edi_1[4]
        
        do
            int32_t eax_8 = *edi_1
            int32_t* ecx = edi_1
            int32_t xmm0_1 = *(esi_1 - 4)
            int32_t xmm1_1 = *esi_1
            int32_t xmm2_1 = *(esi_1 + 4)
            int32_t ebx_1 = *(esi_1 - 0xc)
            int32_t result_2 = *(esi_1 + 8)
            
            if (eax_8 s>= *ebp)
                void* ebx_2 = esi_1 - 0x2c
                
                if (eax_8 s< *(esi_1 - 0x2c))
                    void* edx_1 = esi_1 - 0x1c
                    int32_t eax_2 = *ebx_2
                    
                    do
                        *ecx = eax_2
                        edx_1 -= 0x1c
                        ecx[1] = *(edx_1 + 0x10)
                        ecx[3] = *(edx_1 + 0x18)
                        ecx[4] = *(edx_1 + 0x1c)
                        ecx[5] = *(edx_1 + 0x20)
                        ecx[6] = *(edx_1 + 0x24)
                        ecx = ebx_2
                        eax_2 = *(ebx_2 - 0x1c)
                        ebx_2 -= 0x1c
                    while (eax_8 s< eax_2)
                    
                    ebp = var_c
                
                *ecx = eax_8
                ecx[1] = ebx_1
                result = result_2
                ecx[3] = xmm0_1
                ecx[4] = xmm1_1
                ecx[5] = xmm2_1
                ecx[6] = result
            else
                int32_t result_3 = result_1
                sub_5b0ac0(esi_1 + 0xc, edi_1, ebp, esi_1 + 0xc)
                *ebp = eax_8
                result = result_2
                ebp[1] = ebx_1
                ebp[3] = xmm0_1
                ebp[4] = xmm1_1
                ebp[5] = xmm2_1
                ebp[6] = result
            
            edi_1 = &edi_1[7]
            esi_1 += 0x1c
        while (edi_1 != result_1)

return result
