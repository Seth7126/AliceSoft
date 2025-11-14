// 函数: sub_523bb0
// 地址: 0x523bb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result = arg2
int32_t* ebx = arg1
int32_t* result_2 = result
int32_t* var_c = ebx

if (ebx != result)
    int32_t* edx = &ebx[1]
    int32_t* var_8_1 = edx
    
    if (edx != result)
        void* var_14_1 = edx - ebx
        
        do
            int32_t* result_3 = *edx
            int32_t* ebp_1 = edx
            int32_t* result_1 = result_3
            void* ecx = result_3[1]
            void* eax_3 = *(*ebx + 4)
            int32_t edi_1 = *(ecx + 0x14)
            int32_t ebx_1 = *(eax_3 + 0x14)
            int32_t xmm0_1
            int32_t xmm1_1
            
            if (edi_1 s>= ebx_1 && edi_1 s<= ebx_1)
                xmm1_1 = *(ecx + 0x10)
                xmm0_1 = *(eax_3 + 0x10)
            
            if (edi_1 s< ebx_1 || (edi_1 s<= ebx_1 && (xmm0_1 f> xmm1_1
                    || (not(xmm1_1 f> xmm0_1) && *(eax_3 + 0xc) f> *(ecx + 0xc)))))
                ebx = var_c
                void* ecx_2 = var_14_1 s>> 2 << 2
                result = _memcpy(edx - ecx_2 + 4, ebx, ecx_2)
                *ebx = result_3
            else
                int32_t* eax_4 = edx
                
                while (true)
                    void* ebx_2 = eax_4[-1]
                    eax_4 -= 4
                    void* edx_1 = result_3[1]
                    void* ecx_1 = *(ebx_2 + 4)
                    int32_t esi_1 = *(edx_1 + 0x14)
                    int32_t edi_2 = *(ecx_1 + 0x14)
                    
                    if (esi_1 s>= edi_2)
                        if (esi_1 s> edi_2)
                            break
                        
                        int32_t xmm1_2 = *(edx_1 + 0x10)
                        int32_t xmm0_3 = *(ecx_1 + 0x10)
                        
                        if (not(xmm0_3 f> xmm1_2))
                            if (xmm1_2 f> xmm0_3)
                                break
                            
                            if (*(ecx_1 + 0xc) f<= *(edx_1 + 0xc))
                                break
                    
                    result_3 = result_1
                    *ebp_1 = ebx_2
                    ebp_1 = eax_4
                
                result = result_1
                ebx = var_c
                *ebp_1 = result
            
            var_14_1 += 4
            edx = &var_8_1[1]
            var_8_1 = edx
        while (edx != result_2)

return result
