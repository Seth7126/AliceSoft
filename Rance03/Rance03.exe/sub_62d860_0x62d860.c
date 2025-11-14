// 函数: sub_62d860
// 地址: 0x62d860
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = 0
void* edx = arg3
void* var_30 = edx
int32_t result_1 = 0
arg1 = arg2[2].b

if ((arg1 & 1) == 0 && (arg1 & 2) != 0)
    uint32_t ecx = zx.d(*(edx + 0x262))
    uint32_t ebx_1 = zx.d(*(edx + 0x264))
    int32_t eax_1 = 0x8000 - ebx_1 - ecx
    int32_t ebx_4 = zx.d(arg1) u>> 2 & 1
    int32_t i_8 = *arg2
    int32_t var_1c_1 = ebx_4
    uint32_t eax_2
    
    if (*(arg2 + 9) != 8)
        uint32_t var_8_1
        
        if (*(edx + 0x1a4) != 0)
            eax_2 = *(edx + 0x1a0)
            var_8_1 = eax_2
        
        if (*(edx + 0x1a4) == 0 || eax_2 == 0)
            eax_2 = arg4
            uint32_t esi_6 = eax_2
            
            if (i_8 != 0)
                int32_t i_5 = i_8
                int32_t i
                
                do
                    uint32_t edi_3 = zx.d(*(eax_2 + 1)) | zx.d(zx.w(*eax_2) << 8)
                    uint16_t edx_16 = zx.w(*(eax_2 + 3)) | zx.w(*(eax_2 + 2)) << 8
                    uint16_t edx_17 = zx.w(*(eax_2 + 5))
                    uint16_t ecx_20 = zx.w(*(eax_2 + 4))
                    eax_2 += 6
                    uint32_t ecx_21 = zx.d(edx_17) | zx.d(ecx_20 << 8)
                    
                    if (edi_3.w != edx_16 || edi_3.w != ecx_21.w)
                        result |= 1
                    
                    uint32_t edx_22 = zx.d(((edi_3 * ecx + ecx_21 * eax_1 + zx.d(edx_16) * ebx_1
                        + 0x4000) u>> 0xf).w)
                    *esi_6 = (edx_22 u>> 8).b
                    *(esi_6 + 1) = edx_22.b
                    esi_6 += 2
                    
                    if (ebx_4 != 0)
                        *esi_6 = *eax_2
                        *(esi_6 + 1) = *(eax_2 + 1)
                        esi_6 += 2
                        eax_2 += 2
                    
                    i = i_5
                    i_5 -= 1
                while (i != 1)
        else
            void* edi_2 = arg4
            void* ebp = edi_2
            
            if (i_8 == 0)
                result = 0
            else
                int32_t i_6 = i_8
                int32_t i_1
                
                do
                    uint16_t ecx_9 = zx.w(*edi_2) << 8 | zx.w(*(edi_2 + 1))
                    uint16_t ecx_10 = zx.w(*(edi_2 + 2)) << 8 | zx.w(*(edi_2 + 3))
                    uint16_t eax_16 = zx.w(*(edi_2 + 5))
                    uint16_t ecx_11 = zx.w(*(edi_2 + 4))
                    edi_2 += 6
                    uint32_t eax_17 = zx.d(ecx_11 << 8) | zx.d(eax_16)
                    uint32_t ecx_13
                    
                    if (ecx_9 != ecx_10 || ecx_9 != eax_17.w)
                        char ecx_14 = (*(edx + 0x188)).b
                        int32_t esi_5 = *(edx + 0x1a4)
                        uint32_t edx_8 = zx.d(ecx_10)
                        int32_t edx_12 =
                            zx.d(*(*(esi_5 + (zx.d(edx_8.b) u>> ecx_14 << 2)) + (edx_8 u>> 8 << 1)))
                            * ebx_1 + zx.d(
                            *(*(esi_5 + (zx.d(eax_17.b) u>> ecx_14 << 2)) + (eax_17 u>> 8 << 1)))
                            * eax_1
                        uint32_t ebx_8 = zx.d(ecx_9)
                        uint32_t edx_14 = zx.d(((
                            zx.d(*(*(esi_5 + (zx.d(ebx_8.b) u>> ecx_14 << 2)) + (ebx_8 u>> 8 << 1)))
                            * ecx + edx_12 + 0x4000) u>> 0xf).w)
                        result_1 |= 1
                        ecx_13 = zx.d(
                            *(*(var_8_1 + (zx.d(edx_14.b) u>> ecx_14 << 2)) + (edx_14 u>> 8 << 1)))
                        edx = var_30
                    else
                        int32_t esi_4 = *(edx + 0x194)
                        
                        if (esi_4 == 0)
                            ecx_13 = zx.d(ecx_9)
                        else
                            uint32_t edx_6 = zx.d(ecx_9)
                            void* ecx_12
                            ecx_12.b = *(var_30 + 0x188)
                            ecx_13 = zx.d(*
                                (*(esi_4 + (zx.d(edx_6.b) u>> ecx_12.b << 2)) + (edx_6 u>> 8 << 1)))
                            edx = var_30
                    
                    *ebp = (ecx_13 u>> 8).b
                    *(ebp + 1) = ecx_13.b
                    ebp += 2
                    
                    if (var_1c_1 != 0)
                        eax_2.b = *edi_2
                        *ebp = eax_2.b
                        eax_2.b = *(edi_2 + 1)
                        *(ebp + 1) = eax_2.b
                        ebp += 2
                        edi_2 += 2
                    
                    i_1 = i_6
                    i_6 -= 1
                while (i_1 != 1)
                result = result_1
    else
        eax_2 = *(edx + 0x198)
        uint32_t var_14_1 = eax_2
        
        if (eax_2 == 0 || *(edx + 0x19c) == 0)
            char* edx_5 = arg4
            char* esi_2 = edx_5
            
            if (i_8 != 0)
                int32_t i_7 = i_8
                int32_t i_2
                
                do
                    ebx_4.b = *edx_5
                    eax_2:1.b = edx_5[1]
                    eax_2.b = edx_5[2]
                    edx_5 = &edx_5[3]
                    
                    if (ebx_4.b != eax_2:1.b || ebx_4.b != eax_2.b)
                        result |= 1
                        *esi_2 = ((zx.d(eax_2.b) * eax_1 + zx.d(eax_2:1.b) * ebx_1
                            + zx.d(ebx_4.b) * ecx) u>> 0xf).b
                    else
                        *esi_2 = ebx_4.b
                    
                    esi_2 = &esi_2[1]
                    
                    if (var_1c_1 != 0)
                        eax_2.b = *edx_5
                        *esi_2 = eax_2.b
                        esi_2 = &esi_2[1]
                        edx_5 = &edx_5[1]
                    
                    i_2 = i_7
                    i_7 -= 1
                while (i_2 != 1)
        else
            char* esi_1 = arg4
            char* edi_1 = esi_1
            
            if (i_8 != 0)
                int32_t i_4 = i_8
                int32_t i_3
                
                do
                    ebx_4.b = *esi_1
                    ebx_4:1.b = esi_1[1]
                    eax_2.b = esi_1[2]
                    esi_1 = &esi_1[3]
                    
                    if (ebx_4.b != ebx_4:1.b || ebx_4.b != eax_2.b)
                        int32_t ecx_2 = *(edx + 0x19c)
                        result |= 1
                        edx = var_30
                        eax_2 = (zx.d(*(zx.d(ebx_4.b) + ecx_2)) * ecx
                            + zx.d(*(zx.d(eax_2.b) + ecx_2)) * eax_1
                            + zx.d(*(zx.d(ebx_4:1.b) + ecx_2)) * ebx_1 + 0x4000) u>> 0xf
                        eax_2.b = *(eax_2 + var_14_1)
                        *edi_1 = eax_2.b
                    else
                        int32_t ecx_1 = *(edx + 0x190)
                        
                        if (ecx_1 != 0)
                            ebx_4.b = *(zx.d(ebx_4.b) + ecx_1)
                        
                        *edi_1 = ebx_4.b
                    
                    edi_1 = &edi_1[1]
                    
                    if (var_1c_1 != 0)
                        eax_2.b = *esi_1
                        *edi_1 = eax_2.b
                        edi_1 = &edi_1[1]
                        esi_1 = &esi_1[1]
                    
                    i_3 = i_4
                    i_4 -= 1
                while (i_3 != 1)
    
    *(arg2 + 0xa) -= 2
    eax_2.b = *(arg2 + 0xa)
    eax_2.w = muls.dp.b(eax_2.b, *(arg2 + 9))
    arg2[2].b &= 0xfd
    *(arg2 + 0xb) = eax_2.b
    uint32_t eax_41 = zx.d(eax_2.b)
    
    if (eax_2.b u>= 8)
        arg2[1] = (eax_41 u>> 3) * i_8
        return result
    
    arg2[1] = (eax_41 * i_8 + 7) u>> 3

return result
