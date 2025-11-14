// 函数: sub_5184e0
// 地址: 0x5184e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = 0xffffffff
int32_t* i = arg1[0x2a]
int32_t ebp = 0xffffffff
float var_18 = arg3
float var_1c = arg2
int32_t* var_14 = arg1
void* result_1 = 0xffffffff

if (i != arg1[0x2b])
    int32_t edi
    int32_t var_30_1 = edi
    
    do
        struct partsengine::CSpriteEngineWrapper::VTable* edi_2 = *i
        
        if (result == 0xffffffff)
            int32_t* i_1 = i
            void* result_2 = sub_518720(arg1, arg1)
            arg1 = var_14
            result_1 = result_2
        
        if (ebp == 0xffffffff)
            int32_t* i_2 = i
            ebp = sub_518860(arg1, arg1)
        
        struct partsengine::CSpriteEngineWrapper::VTable ecx = edi_2
        void* ebx_1 = nullptr
        
        if (ecx == 2 || ecx == 5 || ecx == 8)
            ebx_1 = int.d(_mm_cvtepi32_ps(zx.o(arg6 - result_1)) * 0.5f)
        else if (ecx == 3 || ecx == 6 || ecx == 9)
            ebx_1 = arg6 - result_1
        
        int32_t edx_1 = 0
        
        if (ecx == 4 || ecx == 5 || ecx == 6)
            void* __offset(partsengine::CSpriteEngineWrapper::VTable, 0x3c) var_34_2 = &edi_2[0xf]
            edx_1 = int.d(_mm_cvtepi32_ps(zx.o(ebp - sub_516190(&edi_2[0x2c]))) * 0.5f)
        else if (ecx == 7 || ecx == 8 || ecx == 9)
            void* var_34_1 = &edi_2[0xf]
            edx_1 = ebp - sub_516190(&edi_2[0x2c])
        
        float xmm2_2 = var_18 + arg5 + _mm_cvtepi32_ps(zx.o(edx_1))
        int32_t var_8
        int32_t var_4
        sub_5164e0(edi_2, var_1c + arg4 + _mm_cvtepi32_ps(zx.o(ebx_1)), xmm2_2, &var_8, &var_4)
        void* edx_3 = &edi_2[1]
        int32_t ebx_3 = *(edx_3 + 0x10)
        
        if (edi_2 u>= 0x10)
            edx_3 = *edx_3
        
        int32_t ecx_4 = 1
        
        if (ebx_3 u< 1)
            ecx_4 = ebx_3
        
        if (ecx_4 != 0)
            wchar32 const* const edi_3 = &(*U"\n\n\n\n\n\n")[2]
            int32_t j_1 = ecx_4 - 4
            
            if (ecx_4 u>= 4)
                int32_t j
                
                do
                    if (*edx_3 != *edi_3)
                        goto label_518667
                    
                    edx_3 += 4
                    edi_3 = &edi_3[1]
                    j = j_1
                    j_1 -= 4
                while (j u>= 4)
            
            int32_t eax_11
            
            if (j_1 == 0xfffffffc)
                eax_11 = 0
            else
            label_518667:
                int32_t* eax_9
                eax_9.b = *edx_3
                char temp2_1 = *edi_3
                
                if (eax_9.b != temp2_1)
                    eax_11 = sbb.d(eax_9, eax_9, eax_9.b u< temp2_1) | 1
                else if (j_1 == 0xfffffffd)
                    eax_11 = 0
                else
                    eax_9.b = *(edx_3 + 1)
                    char temp4_1 = *(edi_3 + 1)
                    
                    if (eax_9.b != temp4_1)
                        eax_11 = sbb.d(eax_9, eax_9, eax_9.b u< temp4_1) | 1
                    else if (j_1 == 0xfffffffe)
                        eax_11 = 0
                    else
                        eax_9.b = *(edx_3 + 2)
                        char temp5_1 = *(edi_3 + 2)
                        
                        if (eax_9.b != temp5_1)
                            eax_11 = sbb.d(eax_9, eax_9, eax_9.b u< temp5_1) | 1
                        else if (j_1 == 0xffffffff)
                            eax_11 = 0
                        else
                            eax_9.b = *(edx_3 + 3)
                            char temp6_1 = *(edi_3 + 3)
                            
                            if (eax_9.b == temp6_1)
                                eax_11 = 0
                            else
                                eax_11 = sbb.d(eax_9, eax_9, eax_9.b u< temp6_1) | 1
            
            if (eax_11 != 0 || ebx_3 u< 1)
                goto label_5186eb
            
            goto label_5186ab
        
        if (ebx_3 u< 1)
        label_5186eb:
            result = result_1
            arg1 = var_14
            var_1c = _mm_cvtepi32_ps(zx.o(var_8)) + var_1c
        else
        label_5186ab:
            int32_t eax_12
            eax_12.b = ebx_3 != 1
            
            if (eax_12 != 0)
                goto label_5186eb
            
            arg1 = var_14
            var_1c = arg2
            result = 0xffffffff
            float xmm0_13 = _mm_cvtepi32_ps(zx.o(arg1[0x11] + ebp))
            result_1 = 0xffffffff
            ebp = 0xffffffff
            var_18 = xmm0_13 + var_18
        
        i = &i[1]
    while (i != arg1[0x2b])

return result
