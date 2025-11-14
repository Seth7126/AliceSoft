// 函数: sub_552350
// 地址: 0x552350
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = arg2
int32_t result_1 = result

if (arg1 != result)
    int32_t* esi_1 = &arg1[8]
    
    if (esi_1 != result)
        do
            int128_t xmm1_1 = *(esi_1 + 0xc)
            int32_t ebx_1 = *esi_1
            int32_t* ecx = esi_1
            int32_t edi_1 = esi_1[1]
            int32_t result_2 = esi_1[7]
            
            if (ebx_1 s>= *arg1)
                int32_t eax_1 = esi_1[-8]
                void* edi_2 = &esi_1[-8]
                
                if (ebx_1 s< eax_1)
                    void* edx_1 = &esi_1[-5]
                    
                    do
                        *ecx = eax_1
                        edx_1 -= 0x20
                        ecx[1] = *(edx_1 + 0x18)
                        *(ecx + 0xc) = *(edx_1 + 0x20)
                        ecx[7] = *(edx_1 + 0x30)
                        ecx = edi_2
                        eax_1 = *(edi_2 - 0x20)
                        edi_2 -= 0x20
                    while (ebx_1 s< eax_1)
                
                ecx[1] = edi_1
                result = result_2
                *ecx = ebx_1
                *(ecx + 0xc) = xmm1_1
                ecx[7] = result
            else
                int32_t result_3 = result_1
                sub_552fa0(&esi_1[8], esi_1, arg1, &esi_1[8])
                result = result_2
                *arg1 = ebx_1
                arg1[1] = edi_1
                *(arg1 + 0xc) = xmm1_1
                arg1[7] = result
            
            esi_1 = &esi_1[8]
        while (esi_1 != result_1)

return result
