// 函数: sub_6a3930
// 地址: 0x6a3930
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg2
void* i = nullptr
void* var_10 = edi

if (*(arg3 + 0x16a0) != 0)
    do
        uint32_t ebx_1 = zx.d(*(*(arg3 + 0x16a4) + (i << 1)))
        uint32_t ebp_1 = zx.d(*(i + *(arg3 + 0x1698)))
        
        if (ebx_1 != 0)
            uint32_t edi_2 = zx.d(*(ebp_1 + 0x773168))
            uint32_t var_8_1 = edi_2
            uint32_t ecx_8 = zx.d(*(var_10 + (edi_2 << 2) + 0x406))
            int32_t ecx_9 = *(arg3 + 0x16bc)
            void* edx_5
            
            if (ecx_9 s<= 0x10 - ecx_8)
                edx_5.w = *(var_10 + (edi_2 << 2) + 0x404)
                edx_5.w <<= ecx_9.b
                *(arg3 + 0x16b8) |= edx_5.w
                *(arg3 + 0x16bc) = ecx_9 + ecx_8
            else
                uint16_t edi_3 = *(var_10 + (edi_2 << 2) + 0x404)
                char* esi_3 = *(arg3 + 8)
                edx_5.w = edi_3
                edx_5.w <<= ecx_9.b
                *(arg3 + 0x16b8) |= edx_5.w
                esi_3[*(arg3 + 0x14)] = *(arg3 + 0x16b8)
                *(arg3 + 0x14) += 1
                (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                char ecx_11 = 0x10 - *(arg3 + 0x16bc)
                *(arg3 + 0x14) += 1
                *(arg3 + 0x16b8) = edi_3 u>> ecx_11
                *(arg3 + 0x16bc) += ecx_8 - 0x10
                edi_2 = var_8_1
            int32_t edi_4 = data_7738c0[edi_2]
            
            if (edi_4 != 0)
                uint16_t ebp_2 = ebp_1.w - (*((var_8_1 << 2) + &data_7737c0)).w
                int32_t ecx_15 = *(arg3 + 0x16bc)
                
                if (ecx_15 s<= 0x10 - edi_4)
                    *(arg3 + 0x16b8) |= ebp_2 << ecx_15.b
                    *(arg3 + 0x16bc) = ecx_15 + edi_4
                else
                    char* esi_5 = *(arg3 + 8)
                    int32_t edx_8
                    edx_8.w = ebp_2
                    edx_8.w <<= ecx_15.b
                    *(arg3 + 0x16b8) |= edx_8.w
                    esi_5[*(arg3 + 0x14)] = *(arg3 + 0x16b8)
                    *(arg3 + 0x14) += 1
                    (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                    char ecx_17 = 0x10 - *(arg3 + 0x16bc)
                    *(arg3 + 0x14) += 1
                    *(arg3 + 0x16bc) += edi_4 - 0x10
                    *(arg3 + 0x16b8) = ebp_2 u>> ecx_17
            
            uint32_t ecx_13
            
            if (ebx_1 - 1 u>= 0x100)
                ecx_13.b = *(((ebx_1 - 1) u>> 7) + 0x773068)
            else
                ecx_13.b = *(ebx_1 + 0x772f67)
            
            uint32_t ebp_3 = zx.d(ecx_13.b)
            uint32_t edi_5 = zx.d(*(arg4 + (ebp_3 << 2) + 2))
            int32_t ecx_20 = *(arg3 + 0x16bc)
            int32_t edx_12
            
            if (ecx_20 s<= 0x10 - edi_5)
                edx_12.w = *(arg4 + (ebp_3 << 2))
                edx_12.w <<= ecx_20.b
                *(arg3 + 0x16b8) |= edx_12.w
                *(arg3 + 0x16bc) = ecx_20 + edi_5
            else
                uint16_t edi_6 = *(arg4 + (ebp_3 << 2))
                char* esi_7 = *(arg3 + 8)
                edx_12.w = edi_6
                edx_12.w <<= ecx_20.b
                *(arg3 + 0x16b8) |= edx_12.w
                esi_7[*(arg3 + 0x14)] = *(arg3 + 0x16b8)
                *(arg3 + 0x14) += 1
                (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                char ecx_22 = 0x10 - *(arg3 + 0x16bc)
                *(arg3 + 0x14) += 1
                *(arg3 + 0x16b8) = edi_6 u>> ecx_22
                *(arg3 + 0x16bc) += edi_5 - 0x10
            int32_t edi_7 = *((ebp_3 << 2) + &data_773958)
            
            if (edi_7 != 0)
                uint16_t ebx_4 = (ebx_1 - 1).w - (*((ebp_3 << 2) + &data_773848)).w
                int32_t ecx_26 = *(arg3 + 0x16bc)
                
                if (ecx_26 s<= 0x10 - edi_7)
                    *(arg3 + 0x16b8) |= ebx_4 << ecx_26.b
                    *(arg3 + 0x16bc) = ecx_26 + edi_7
                else
                    char* esi_9 = *(arg3 + 8)
                    int32_t edx_15
                    edx_15.w = ebx_4
                    edx_15.w <<= ecx_26.b
                    *(arg3 + 0x16b8) |= edx_15.w
                    esi_9[*(arg3 + 0x14)] = *(arg3 + 0x16b8)
                    *(arg3 + 0x14) += 1
                    (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                    char ecx_28 = 0x10 - *(arg3 + 0x16bc)
                    *(arg3 + 0x14) += 1
                    *(arg3 + 0x16bc) += edi_7 - 0x10
                    *(arg3 + 0x16b8) = ebx_4 u>> ecx_28
            
            edi = var_10
        else
            uint32_t ebx_2 = zx.d(*(edi + (ebp_1 << 2) + 2))
            int32_t ecx_2 = *(arg3 + 0x16bc)
            int32_t edx_1
            
            if (ecx_2 s<= 0x10 - ebx_2)
                edx_1.w = *(edi + (ebp_1 << 2))
                edx_1.w <<= ecx_2.b
                *(arg3 + 0x16b8) |= edx_1.w
                *(arg3 + 0x16bc) = ecx_2 + ebx_2
            else
                uint16_t edi_1 = *(edi + (ebp_1 << 2))
                char* esi_1 = *(arg3 + 8)
                edx_1.w = edi_1
                edx_1.w <<= ecx_2.b
                *(arg3 + 0x16b8) |= edx_1.w
                esi_1[*(arg3 + 0x14)] = *(arg3 + 0x16b8)
                *(arg3 + 0x14) += 1
                (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                char ecx_4 = 0x10 - *(arg3 + 0x16bc)
                *(arg3 + 0x14) += 1
                *(arg3 + 0x16bc) += ebx_2 - 0x10
                *(arg3 + 0x16b8) = edi_1 u>> ecx_4
                edi = var_10
        
        i += 1
    while (i u< *(arg3 + 0x16a0))

uint32_t ebx_5 = zx.d(*(edi + 0x402))
int32_t ecx_31 = *(arg3 + 0x16bc)

if (ecx_31 s<= 0x10 - ebx_5)
    i.w = *(edi + 0x400)
    i.w <<= ecx_31.b
    *(arg3 + 0x16b8) |= i.w
    *(arg3 + 0x16bc) = ecx_31 + ebx_5
    return arg3

uint16_t edi_8 = *(edi + 0x400)
char* esi_12 = *(arg3 + 8)
i.w = edi_8
i.w <<= ecx_31.b
*(arg3 + 0x16b8) |= i.w
esi_12[*(arg3 + 0x14)] = *(arg3 + 0x16b8)
*(arg3 + 0x14) += 1
(*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
char ecx_33 = 0x10 - *(arg3 + 0x16bc)
*(arg3 + 0x14) += 1
*(arg3 + 0x16bc) += ebx_5 - 0x10
*(arg3 + 0x16b8) = edi_8 u>> ecx_33
return arg3
