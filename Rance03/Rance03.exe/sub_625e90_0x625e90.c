// 函数: sub_625e90
// 地址: 0x625e90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t edi = 0xffffffff
uint32_t edx = zx.d(*(arg2 + 2))
int32_t j_1 = 0
int32_t esi = 7
int32_t ecx = 4

if (edx == 0)
    esi = 0x8a
    ecx = 3

if (arg4 s>= 0)
    void* var_14_1 = arg2 + 6
    arg4 += 1
    int32_t i
    
    do
        uint32_t ebp_6 = edx
        j_1 += 1
        edx = zx.d(*var_14_1)
        
        if (j_1 s>= esi || ebp_6 != edx)
            if (j_1 s< ecx)
                int16_t* ecx_2 = arg3 + 0xa7e + (ebp_6 << 2)
                int16_t* esi_2 = arg3 + 0xa7c + (ebp_6 << 2)
                int16_t* var_c_1 = ecx_2
                int16_t* var_10_1 = esi_2
                int32_t j
                
                do
                    uint32_t ebp_5 = zx.d(*ecx_2)
                    int32_t ecx_3 = *(arg3 + 0x16bc)
                    int32_t edx_2
                    
                    if (ecx_3 s<= 0x10 - ebp_5)
                        edx_2.w = *esi_2
                        edx_2.w <<= ecx_3.b
                        *(arg3 + 0x16b8) |= edx_2.w
                        *(arg3 + 0x16bc) = ecx_3 + ebp_5
                    else
                        uint16_t edi_1 = *esi_2
                        char* esi_3 = *(arg3 + 8)
                        edx_2.w = edi_1
                        edx_2.w <<= ecx_3.b
                        *(arg3 + 0x16b8) |= edx_2.w
                        esi_3[*(arg3 + 0x14)] = *(arg3 + 0x16b8)
                        *(arg3 + 0x14) += 1
                        (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                        char ecx_5 = 0x10 - *(arg3 + 0x16bc)
                        *(arg3 + 0x14) += 1
                        esi_2 = var_10_1
                        *(arg3 + 0x16bc) += ebp_5 - 0x10
                        *(arg3 + 0x16b8) = edi_1 u>> ecx_5
                    ecx_2 = var_c_1
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            else if (ebp_6 == 0)
                int32_t ecx_24 = *(arg3 + 0x16bc)
                
                if (j_1 s> 0xa)
                    uint32_t esi_18 = zx.d(*(arg3 + 0xac6))
                    int32_t edx_18
                    
                    if (ecx_24 s<= 0x10 - esi_18)
                        edx_18.w = *(arg3 + 0xac4)
                        edx_18.w <<= ecx_24.b
                        *(arg3 + 0x16b8) |= edx_18.w
                        *(arg3 + 0x16bc) = ecx_24 + esi_18
                    else
                        uint16_t edi_7 = *(arg3 + 0xac4)
                        char* esi_19 = *(arg3 + 8)
                        edx_18.w = edi_7
                        edx_18.w <<= ecx_24.b
                        *(arg3 + 0x16b8) |= edx_18.w
                        esi_19[*(arg3 + 0x14)] = *(arg3 + 0x16b8)
                        *(arg3 + 0x14) += 1
                        (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                        char ecx_34 = 0x10 - *(arg3 + 0x16bc)
                        *(arg3 + 0x14) += 1
                        *(arg3 + 0x16b8) = edi_7 u>> ecx_34
                        *(arg3 + 0x16bc) += esi_18 - 0x10
                    
                    int32_t ecx_38 = *(arg3 + 0x16bc)
                    
                    if (ecx_38 s<= 9)
                        *(arg3 + 0x16b8) |= (j_1.w - 0xb) << ecx_38.b
                        *(arg3 + 0x16bc) = ecx_38 + 7
                    else
                        char* esi_21 = *(arg3 + 8)
                        edx_18.w = j_1.w - 0xb
                        edx_18.w <<= ecx_38.b
                        *(arg3 + 0x16b8) |= edx_18.w
                        esi_21[*(arg3 + 0x14)] = *(arg3 + 0x16b8)
                        *(arg3 + 0x14) += 1
                        (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                        char ecx_40 = 0x10 - *(arg3 + 0x16bc)
                        *(arg3 + 0x14) += 1
                        *(arg3 + 0x16bc) -= 9
                        *(arg3 + 0x16b8) = (j_1.w - 0xb) u>> ecx_40
                else
                    uint32_t esi_13 = zx.d(*(arg3 + 0xac2))
                    int32_t edx_13
                    
                    if (ecx_24 s<= 0x10 - esi_13)
                        edx_13.w = *(arg3 + 0xac0)
                        edx_13.w <<= ecx_24.b
                        *(arg3 + 0x16b8) |= edx_13.w
                        *(arg3 + 0x16bc) = ecx_24 + esi_13
                    else
                        uint16_t edi_5 = *(arg3 + 0xac0)
                        char* esi_14 = *(arg3 + 8)
                        edx_13.w = edi_5
                        edx_13.w <<= ecx_24.b
                        *(arg3 + 0x16b8) |= edx_13.w
                        esi_14[*(arg3 + 0x14)] = *(arg3 + 0x16b8)
                        *(arg3 + 0x14) += 1
                        (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                        char ecx_26 = 0x10 - *(arg3 + 0x16bc)
                        *(arg3 + 0x14) += 1
                        *(arg3 + 0x16b8) = edi_5 u>> ecx_26
                        *(arg3 + 0x16bc) += esi_13 - 0x10
                    
                    int32_t ecx_30 = *(arg3 + 0x16bc)
                    
                    if (ecx_30 s<= 0xd)
                        *(arg3 + 0x16b8) |= (j_1.w - 3) << ecx_30.b
                        *(arg3 + 0x16bc) = ecx_30 + 3
                    else
                        char* esi_16 = *(arg3 + 8)
                        edx_13.w = j_1.w - 3
                        edx_13.w <<= ecx_30.b
                        *(arg3 + 0x16b8) |= edx_13.w
                        esi_16[*(arg3 + 0x14)] = *(arg3 + 0x16b8)
                        *(arg3 + 0x14) += 1
                        (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                        char ecx_32 = 0x10 - *(arg3 + 0x16bc)
                        *(arg3 + 0x14) += 1
                        *(arg3 + 0x16bc) -= 0xd
                        *(arg3 + 0x16b8) = (j_1.w - 3) u>> ecx_32
            else
                if (ebp_6 != edi)
                    uint32_t esi_5 = zx.d(*(arg3 + (ebp_6 << 2) + 0xa7e))
                    int32_t ecx_8 = *(arg3 + 0x16bc)
                    int32_t edx_5
                    
                    if (ecx_8 s<= 0x10 - esi_5)
                        edx_5.w = *(arg3 + (ebp_6 << 2) + 0xa7c)
                        edx_5.w <<= ecx_8.b
                        *(arg3 + 0x16b8) |= edx_5.w
                        *(arg3 + 0x16bc) = ecx_8 + esi_5
                    else
                        uint16_t edi_2 = *(arg3 + (ebp_6 << 2) + 0xa7c)
                        char* esi_6 = *(arg3 + 8)
                        edx_5.w = edi_2
                        edx_5.w <<= ecx_8.b
                        *(arg3 + 0x16b8) |= edx_5.w
                        esi_6[*(arg3 + 0x14)] = *(arg3 + 0x16b8)
                        *(arg3 + 0x14) += 1
                        (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                        char ecx_10 = 0x10 - *(arg3 + 0x16bc)
                        *(arg3 + 0x14) += 1
                        *(arg3 + 0x16b8) = edi_2 u>> ecx_10
                        *(arg3 + 0x16bc) += esi_5 - 0x10
                    j_1 -= 1
                
                uint32_t esi_8 = zx.d(*(arg3 + 0xabe))
                int32_t ecx_14 = *(arg3 + 0x16bc)
                int32_t edx_8
                
                if (ecx_14 s<= 0x10 - esi_8)
                    edx_8.w = *(arg3 + 0xabc)
                    edx_8.w <<= ecx_14.b
                    *(arg3 + 0x16b8) |= edx_8.w
                    *(arg3 + 0x16bc) = ecx_14 + esi_8
                else
                    uint16_t edi_3 = *(arg3 + 0xabc)
                    char* esi_9 = *(arg3 + 8)
                    edx_8.w = edi_3
                    edx_8.w <<= ecx_14.b
                    *(arg3 + 0x16b8) |= edx_8.w
                    esi_9[*(arg3 + 0x14)] = *(arg3 + 0x16b8)
                    *(arg3 + 0x14) += 1
                    (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                    char ecx_16 = 0x10 - *(arg3 + 0x16bc)
                    *(arg3 + 0x14) += 1
                    *(arg3 + 0x16b8) = edi_3 u>> ecx_16
                    *(arg3 + 0x16bc) += esi_8 - 0x10
                
                int32_t ecx_20 = *(arg3 + 0x16bc)
                
                if (ecx_20 s<= 0xe)
                    *(arg3 + 0x16b8) |= (j_1.w - 3) << ecx_20.b
                    *(arg3 + 0x16bc) = ecx_20 + 2
                else
                    char* esi_11 = *(arg3 + 8)
                    edx_8.w = j_1.w - 3
                    edx_8.w <<= ecx_20.b
                    *(arg3 + 0x16b8) |= edx_8.w
                    esi_11[*(arg3 + 0x14)] = *(arg3 + 0x16b8)
                    *(arg3 + 0x14) += 1
                    (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                    char ecx_22 = 0x10 - *(arg3 + 0x16bc)
                    *(arg3 + 0x14) += 1
                    *(arg3 + 0x16bc) -= 0xe
                    *(arg3 + 0x16b8) = (j_1.w - 3) u>> ecx_22
            
            j_1 = 0
            edi = ebp_6
            
            if (edx == 0)
                esi = 0x8a
                ecx = 3
            else if (ebp_6 != edx)
                esi = 7
                ecx = 4
            else
                esi = 6
                ecx = 3
        
        var_14_1 += 4
        i = arg4
        arg4 -= 1
    while (i != 1)

return arg3
