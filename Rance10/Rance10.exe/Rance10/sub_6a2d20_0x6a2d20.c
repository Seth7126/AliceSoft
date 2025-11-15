// 函数: sub_6a2d20
// 地址: 0x6a2d20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t ebp = 0xffffffff
int32_t j_1 = 0
int32_t esi = 0x8a
uint32_t edx = zx.d(*(arg2 + 2))

if (edx != 0)
    esi = 7

int32_t ecx
ecx.b = edx != 0
int32_t ecx_1 = ecx + 3

if (arg4 s>= 0)
    void* var_18_1 = arg2 + 6
    int32_t i_1 = arg4 + 1
    int32_t i
    
    do
        uint32_t edi_4 = edx
        uint32_t var_4_1 = edx
        uint32_t var_c_1 = edx
        j_1 += 1
        uint32_t var_10_1 = edx
        arg4 = edi_4
        edx = zx.d(*var_18_1)
        
        if (j_1 s>= esi || edi_4 != edx)
            if (j_1 s< ecx_1)
                int32_t j
                
                do
                    uint32_t ebp_1 = zx.d(*(arg3 + (edi_4 << 2) + 0xa7e))
                    int32_t ecx_2 = *(arg3 + 0x16bc)
                    int32_t edx_2
                    
                    if (ecx_2 s<= 0x10 - ebp_1)
                        edx_2.w = *(arg3 + (edi_4 << 2) + 0xa7c)
                        edx_2.w <<= ecx_2.b
                        *(arg3 + 0x16b8) |= edx_2.w
                        *(arg3 + 0x16bc) = ecx_2 + ebp_1
                    else
                        uint16_t edi_5 = *(arg3 + (edi_4 << 2) + 0xa7c)
                        char* esi_1 = *(arg3 + 0x14)
                        edx_2.w = edi_5
                        edx_2.w <<= ecx_2.b
                        *(arg3 + 0x16b8) |= edx_2.w
                        esi_1[*(arg3 + 8)] = *(arg3 + 0x16b8)
                        *(arg3 + 0x14) += 1
                        (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                        char ecx_4 = 0x10 - *(arg3 + 0x16bc)
                        *(arg3 + 0x14) += 1
                        *(arg3 + 0x16bc) += ebp_1 - 0x10
                        *(arg3 + 0x16b8) = edi_5 u>> ecx_4
                        edi_4 = arg4
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            else if (var_c_1 == 0)
                int32_t ecx_21 = *(arg3 + 0x16bc)
                
                if (j_1 s> 0xa)
                    uint32_t ebp_5 = zx.d(*(arg3 + 0xac6))
                    int32_t edx_18
                    
                    if (ecx_21 s<= 0x10 - ebp_5)
                        edx_18.w = *(arg3 + 0xac4)
                        edx_18.w <<= ecx_21.b
                        *(arg3 + 0x16b8) |= edx_18.w
                        *(arg3 + 0x16bc) = ecx_21 + ebp_5
                    else
                        uint16_t edi_11 = *(arg3 + 0xac4)
                        char* esi_13 = *(arg3 + 0x14)
                        edx_18.w = edi_11
                        edx_18.w <<= ecx_21.b
                        *(arg3 + 0x16b8) |= edx_18.w
                        esi_13[*(arg3 + 8)] = *(arg3 + 0x16b8)
                        *(arg3 + 0x14) += 1
                        (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                        char ecx_30 = 0x10 - *(arg3 + 0x16bc)
                        *(arg3 + 0x14) += 1
                        *(arg3 + 0x16bc) += ebp_5 - 0x10
                        *(arg3 + 0x16b8) = edi_11 u>> ecx_30
                    
                    int32_t ecx_33 = *(arg3 + 0x16bc)
                    
                    if (ecx_33 s<= 9)
                        *(arg3 + 0x16b8) |= (j_1.w - 0xb) << ecx_33.b
                        *(arg3 + 0x16bc) = ecx_33 + 7
                    else
                        char* esi_15 = *(arg3 + 0x14)
                        edx_18.w = j_1.w - 0xb
                        edx_18.w <<= ecx_33.b
                        *(arg3 + 0x16b8) |= edx_18.w
                        esi_15[*(arg3 + 8)] = *(arg3 + 0x16b8)
                        *(arg3 + 0x14) += 1
                        (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                        char ecx_35 = 0x10 - *(arg3 + 0x16bc)
                        *(arg3 + 0x14) += 1
                        *(arg3 + 0x16bc) -= 9
                        *(arg3 + 0x16b8) = (j_1.w - 0xb) u>> ecx_35
                else
                    uint32_t ebp_4 = zx.d(*(arg3 + 0xac2))
                    int32_t edx_13
                    
                    if (ecx_21 s<= 0x10 - ebp_4)
                        edx_13.w = *(arg3 + 0xac0)
                        edx_13.w <<= ecx_21.b
                        *(arg3 + 0x16b8) |= edx_13.w
                        *(arg3 + 0x16bc) = ecx_21 + ebp_4
                    else
                        uint16_t edi_9 = *(arg3 + 0xac0)
                        char* esi_9 = *(arg3 + 0x14)
                        edx_13.w = edi_9
                        edx_13.w <<= ecx_21.b
                        *(arg3 + 0x16b8) |= edx_13.w
                        esi_9[*(arg3 + 8)] = *(arg3 + 0x16b8)
                        *(arg3 + 0x14) += 1
                        (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                        char ecx_23 = 0x10 - *(arg3 + 0x16bc)
                        *(arg3 + 0x14) += 1
                        *(arg3 + 0x16bc) += ebp_4 - 0x10
                        *(arg3 + 0x16b8) = edi_9 u>> ecx_23
                    
                    int32_t ecx_26 = *(arg3 + 0x16bc)
                    
                    if (ecx_26 s<= 0xd)
                        *(arg3 + 0x16b8) |= (j_1.w - 3) << ecx_26.b
                        *(arg3 + 0x16bc) = ecx_26 + 3
                    else
                        char* esi_11 = *(arg3 + 0x14)
                        edx_13.w = j_1.w - 3
                        edx_13.w <<= ecx_26.b
                        *(arg3 + 0x16b8) |= edx_13.w
                        esi_11[*(arg3 + 8)] = *(arg3 + 0x16b8)
                        *(arg3 + 0x14) += 1
                        (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                        char ecx_28 = 0x10 - *(arg3 + 0x16bc)
                        *(arg3 + 0x14) += 1
                        *(arg3 + 0x16bc) -= 0xd
                        *(arg3 + 0x16b8) = (j_1.w - 3) u>> ecx_28
            else
                if (edi_4 != ebp)
                    uint32_t ebp_2 = zx.d(*(arg3 + (edi_4 << 2) + 0xa7e))
                    int32_t ecx_7 = *(arg3 + 0x16bc)
                    int32_t edx_5
                    
                    if (ecx_7 s<= 0x10 - ebp_2)
                        edx_5.w = *(arg3 + (edi_4 << 2) + 0xa7c)
                        edx_5.w <<= ecx_7.b
                        *(arg3 + 0x16b8) |= edx_5.w
                        *(arg3 + 0x16bc) = ecx_7 + ebp_2
                    else
                        uint16_t edi_6 = *(arg3 + (edi_4 << 2) + 0xa7c)
                        char* esi_3 = *(arg3 + 0x14)
                        edx_5.w = edi_6
                        edx_5.w <<= ecx_7.b
                        *(arg3 + 0x16b8) |= edx_5.w
                        esi_3[*(arg3 + 8)] = *(arg3 + 0x16b8)
                        *(arg3 + 0x14) += 1
                        (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                        char ecx_9 = 0x10 - *(arg3 + 0x16bc)
                        *(arg3 + 0x14) += 1
                        *(arg3 + 0x16bc) += ebp_2 - 0x10
                        *(arg3 + 0x16b8) = edi_6 u>> ecx_9
                    j_1 -= 1
                
                uint32_t ebp_3 = zx.d(*(arg3 + 0xabe))
                int32_t ecx_12 = *(arg3 + 0x16bc)
                int32_t edx_8
                
                if (ecx_12 s<= 0x10 - ebp_3)
                    edx_8.w = *(arg3 + 0xabc)
                    edx_8.w <<= ecx_12.b
                    *(arg3 + 0x16b8) |= edx_8.w
                    *(arg3 + 0x16bc) = ecx_12 + ebp_3
                else
                    uint16_t edi_7 = *(arg3 + 0xabc)
                    char* esi_5 = *(arg3 + 0x14)
                    edx_8.w = edi_7
                    edx_8.w <<= ecx_12.b
                    *(arg3 + 0x16b8) |= edx_8.w
                    esi_5[*(arg3 + 8)] = *(arg3 + 0x16b8)
                    *(arg3 + 0x14) += 1
                    (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                    char ecx_14 = 0x10 - *(arg3 + 0x16bc)
                    *(arg3 + 0x14) += 1
                    *(arg3 + 0x16bc) += ebp_3 - 0x10
                    *(arg3 + 0x16b8) = edi_7 u>> ecx_14
                
                int32_t ecx_17 = *(arg3 + 0x16bc)
                
                if (ecx_17 s<= 0xe)
                    *(arg3 + 0x16b8) |= (j_1.w - 3) << ecx_17.b
                    *(arg3 + 0x16bc) = ecx_17 + 2
                else
                    char* esi_7 = *(arg3 + 0x14)
                    edx_8.w = j_1.w - 3
                    edx_8.w <<= ecx_17.b
                    *(arg3 + 0x16b8) |= edx_8.w
                    esi_7[*(arg3 + 8)] = *(arg3 + 0x16b8)
                    *(arg3 + 0x14) += 1
                    (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                    char ecx_19 = 0x10 - *(arg3 + 0x16bc)
                    *(arg3 + 0x14) += 1
                    *(arg3 + 0x16bc) -= 0xe
                    *(arg3 + 0x16b8) = (j_1.w - 3) u>> ecx_19
            
            j_1 = 0
            ebp = arg4
            
            if (edx == 0)
                esi = 0x8a
                ecx_1 = 3
            else if (var_4_1 != edx)
                esi = 7
                ecx_1 = 4
            else
                esi = 6
                ecx_1 = 3
        
        var_18_1 += 4
        i = i_1
        i_1 -= 1
    while (i != 1)

return arg3
