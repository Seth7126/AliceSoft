// 函数: sub_6aa990
// 地址: 0x6aa990
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = arg3
int32_t result = 0
void* var_30 = ebx
int32_t result_1 = 0
arg3.b = arg2[2].b

if ((arg3.b & 1) == 0 && (arg3.b & 2) != 0)
    uint32_t edx = zx.d(*(ebx + 0x262))
    uint32_t esi_1 = zx.d(*(ebx + 0x264))
    int32_t eax_1 = 0x8000 - esi_1 - edx
    char* i_9 = *arg2
    int32_t edi_3 = zx.d(arg3.b) u>> 2 & 1
    
    if (*(arg2 + 9) != 8)
        int32_t eax_16 = *(ebx + 0x1a4)
        int32_t eax_17
        
        if (eax_16 != 0)
            eax_17 = *(ebx + 0x1a0)
        
        if (eax_16 == 0 || eax_17 == 0)
            char* eax_48 = arg4
            char* esi_5 = eax_48
            
            if (i_9 != 0)
                char* i_5 = i_9
                char* i
                
                do
                    uint32_t edi_7 = zx.d(eax_48[1]) | zx.d(zx.w(*eax_48) << 8)
                    uint16_t edx_13 = zx.w(eax_48[3]) | zx.w(eax_48[2]) << 8
                    uint16_t edx_14 = zx.w(eax_48[5])
                    uint16_t ecx_22 = zx.w(eax_48[4])
                    eax_48 = &eax_48[6]
                    uint32_t ecx_23 = zx.d(edx_14) | zx.d(ecx_22 << 8)
                    
                    if (edi_7.w != edx_13 || edi_7.w != ecx_23.w)
                        result |= 1
                    
                    uint32_t edx_19 = zx.d(((edi_7 * edx + ecx_23 * eax_1 + zx.d(edx_13) * esi_1
                        + 0x4000) u>> 0xf).w)
                    *esi_5 = (edx_19 u>> 8).b
                    esi_5[1] = edx_19.b
                    esi_5 = &esi_5[2]
                    
                    if (edi_3 != 0)
                        *esi_5 = *eax_48
                        esi_5[1] = eax_48[1]
                        esi_5 = &esi_5[2]
                        eax_48 = &eax_48[2]
                    
                    i = i_5
                    i_5 -= 1
                while (i != 1)
        else
            char* esi_4 = arg4
            void* edi_6 = esi_4
            
            if (i_9 != 0)
                char* i_4 = i_9
                char* i_1
                
                do
                    uint16_t ecx_12 = zx.w(*esi_4) << 8 | zx.w(esi_4[1])
                    uint16_t ecx_13 = zx.w(esi_4[2]) << 8 | zx.w(esi_4[3])
                    uint16_t ecx_14 = zx.w(esi_4[4])
                    uint16_t eax_21 = zx.w(esi_4[5])
                    esi_4 = &esi_4[6]
                    uint32_t eax_22 = zx.d(ecx_14 << 8) | zx.d(eax_21)
                    uint32_t ecx_17
                    
                    if (ecx_12 != ecx_13 || ecx_12 != eax_22.w)
                        uint32_t edx_6 = zx.d(ecx_13)
                        char ecx_18 = (*(var_30 + 0x188)).b
                        int32_t edx_10 = zx.d(
                            *(*(eax_16 + (zx.d(edx_6.b) u>> ecx_18 << 2)) + (edx_6 u>> 8 << 1))) * esi_1
                            + zx.d(
                            *(*(eax_16 + (zx.d(eax_22.b) u>> ecx_18 << 2)) + (eax_22 u>> 8 << 1)))
                            * eax_1
                        uint32_t ebx_3 = zx.d(ecx_12)
                        ebx = var_30
                        uint32_t edx_11 = zx.d(((zx.d(
                            *(*(eax_16 + (zx.d(ebx_3.b) u>> ecx_18 << 2)) + (ebx_3 u>> 8 << 1))) * edx
                            + 0x4000 + edx_10) u>> 0xf).w)
                        result = result_1 | 1
                        result_1 = result
                        ecx_17 = zx.d(
                            *(*(eax_17 + (zx.d(edx_11.b) u>> ecx_18 << 2)) + (edx_11 u>> 8 << 1)))
                    else if (*(ebx + 0x194) == 0)
                        ecx_17 = zx.d(ecx_12)
                    else
                        uint16_t ecx_15
                        ecx_15.b = *(ebx + 0x188)
                        uint32_t edx_4 = zx.d(ecx_12)
                        ecx_17 = zx.d(*(*(*(ebx + 0x194) + (zx.d(edx_4.b) u>> ecx_15.b << 2))
                            + (edx_4 u>> 8 << 1)))
                    
                    *edi_6 = (ecx_17 u>> 8).b
                    *(edi_6 + 1) = ecx_17.b
                    edi_6 += 2
                    
                    if (edi_3 != 0)
                        *edi_6 = *esi_4
                        *(edi_6 + 1) = esi_4[1]
                        edi_6 += 2
                        esi_4 = &esi_4[2]
                    
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
    else
        int32_t eax_3 = *(ebx + 0x198)
        void* var_1c_1
        void* ecx
        
        if (eax_3 != 0)
            ecx = *(ebx + 0x19c)
            var_1c_1 = ecx
        
        char* eax_4
        
        if (eax_3 == 0 || ecx == 0)
            char* edx_2 = arg4
            char* esi_3 = edx_2
            
            if (i_9 == 0)
                i_9 = i_9
            else
                char* i_7 = i_9
                char* i_8 = i_9
                char* i_2
                
                do
                    ebx.b = *edx_2
                    eax_4:1.b = edx_2[1]
                    eax_4.b = edx_2[2]
                    edx_2 = &edx_2[3]
                    
                    if (ebx.b != eax_4:1.b || ebx.b != eax_4.b)
                        result |= 1
                        *esi_3 = ((zx.d(eax_4.b) * eax_1 + zx.d(eax_4:1.b) * esi_1
                            + zx.d(ebx.b) * edx) u>> 0xf).b
                        i_7 = i_8
                    else
                        *esi_3 = ebx.b
                    
                    esi_3 = &esi_3[1]
                    
                    if (edi_3 != 0)
                        eax_4.b = *edx_2
                        *esi_3 = eax_4.b
                        esi_3 = &esi_3[1]
                        edx_2 = &edx_2[1]
                    
                    i_2 = i_7
                    i_7 -= 1
                    i_8 = i_7
                while (i_2 != 1)
        else
            char* edx_1 = arg4
            char* esi_2 = edx_1
            
            if (i_9 == 0)
                i_9 = i_9
            else
                char* i_6 = i_9
                void* edi_4 = ebx
                char* i_3
                
                do
                    ebx.b = *edx_1
                    ebx:1.b = edx_1[1]
                    eax_4.b = edx_1[2]
                    edx_1 = &edx_1[3]
                    
                    if (ebx.b != ebx:1.b || ebx.b != eax_4.b)
                        result |= 1
                        edi_4 = var_30
                        eax_4 = (zx.d(*(zx.d(ebx.b) + var_1c_1)) * edx
                            + zx.d(*(zx.d(eax_4.b) + ecx)) * eax_1
                            + zx.d(*(zx.d(ebx:1.b) + var_1c_1)) * esi_1 + 0x4000) u>> 0xf
                        eax_4.b = eax_4[eax_3]
                        *esi_2 = eax_4.b
                    else
                        int32_t ecx_1 = *(edi_4 + 0x190)
                        
                        if (ecx_1 != 0)
                            ebx.b = zx.d(ebx.b)[ecx_1]
                        
                        *esi_2 = ebx.b
                    
                    esi_2 = &esi_2[1]
                    
                    if (edi_3 != 0)
                        eax_4.b = *edx_1
                        *esi_2 = eax_4.b
                        esi_2 = &esi_2[1]
                        edx_1 = &edx_1[1]
                    
                    i_3 = i_6
                    i_6 -= 1
                    ecx = *(edi_4 + 0x19c)
                while (i_3 != 1)
    
    *(arg2 + 0xa) -= 2
    arg2[2].b &= 0xfd
    char ecx_36 = *(arg2 + 9) * *(arg2 + 0xa)
    *(arg2 + 0xb) = ecx_36
    uint32_t eax_50 = zx.d(ecx_36)
    
    if (ecx_36 u>= 8)
        arg2[1] = (eax_50 u>> 3) * i_9
        return result
    
    arg2[1] = (eax_50 * i_9 + 7) u>> 3

return result
