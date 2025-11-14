// 函数: sub_626a70
// 地址: 0x626a70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = arg2
void* i = nullptr
void* var_10 = edi

if (*(arg3 + 0x16a0) != 0)
    do
        uint32_t ebx_1 = zx.d(*(*(arg3 + 0x16a4) + (i << 1)))
        uint32_t ebp_1 = zx.d(*(i + *(arg3 + 0x1698)))
        
        if (ebx_1 != 0)
            uint32_t edi_2 = zx.d(*(ebp_1 + 0x6f05e0))
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
            int32_t edi_4 = *((edi_2 << 2) + &data_6f0f30)
            
            if (edi_4 != 0)
                uint16_t ebp_2 = ebp_1.w - (*((var_8_1 << 2) + &data_6f0e60)).w
                int32_t ecx_16 = *(arg3 + 0x16bc)
                
                if (ecx_16 s<= 0x10 - edi_4)
                    *(arg3 + 0x16b8) |= ebp_2 << ecx_16.b
                    *(arg3 + 0x16bc) = ecx_16 + edi_4
                else
                    char* esi_5 = *(arg3 + 8)
                    int32_t edx_8
                    edx_8.w = ebp_2
                    edx_8.w <<= ecx_16.b
                    *(arg3 + 0x16b8) |= edx_8.w
                    esi_5[*(arg3 + 0x14)] = *(arg3 + 0x16b8)
                    *(arg3 + 0x14) += 1
                    (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                    char ecx_18 = 0x10 - *(arg3 + 0x16bc)
                    *(arg3 + 0x14) += 1
                    *(arg3 + 0x16bc) += edi_4 - 0x10
                    *(arg3 + 0x16b8) = ebp_2 u>> ecx_18
            
            uint32_t ebp_3
            
            if (ebx_1 - 1 u>= 0x100)
                ebp_3 = zx.d(*(((ebx_1 - 1) u>> 7) + 0x6f07e0))
            else
                ebp_3 = zx.d(*(ebx_1 + 0x6f06df))
            
            uint32_t edi_5 = zx.d(*(arg4 + (ebp_3 << 2) + 2))
            int32_t ecx_24 = *(arg3 + 0x16bc)
            int32_t edx_12
            
            if (ecx_24 s<= 0x10 - edi_5)
                edx_12.w = *(arg4 + (ebp_3 << 2))
                edx_12.w <<= ecx_24.b
                *(arg3 + 0x16b8) |= edx_12.w
                *(arg3 + 0x16bc) = ecx_24 + edi_5
            else
                uint16_t edi_6 = *(arg4 + (ebp_3 << 2))
                char* esi_7 = *(arg3 + 8)
                edx_12.w = edi_6
                edx_12.w <<= ecx_24.b
                *(arg3 + 0x16b8) |= edx_12.w
                esi_7[*(arg3 + 0x14)] = *(arg3 + 0x16b8)
                *(arg3 + 0x14) += 1
                (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                char ecx_26 = 0x10 - *(arg3 + 0x16bc)
                *(arg3 + 0x14) += 1
                *(arg3 + 0x16b8) = edi_6 u>> ecx_26
                *(arg3 + 0x16bc) += edi_5 - 0x10
            int32_t edi_7 = *((ebp_3 << 2) + &data_6f0de0)
            
            if (edi_7 != 0)
                uint16_t ebx_4 = (ebx_1 - 1).w - (*((ebp_3 << 2) + &data_6f1000)).w
                int32_t ecx_30 = *(arg3 + 0x16bc)
                
                if (ecx_30 s<= 0x10 - edi_7)
                    *(arg3 + 0x16b8) |= ebx_4 << ecx_30.b
                    *(arg3 + 0x16bc) = ecx_30 + edi_7
                else
                    char* esi_9 = *(arg3 + 8)
                    int32_t edx_15
                    edx_15.w = ebx_4
                    edx_15.w <<= ecx_30.b
                    *(arg3 + 0x16b8) |= edx_15.w
                    esi_9[*(arg3 + 0x14)] = *(arg3 + 0x16b8)
                    *(arg3 + 0x14) += 1
                    (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                    char ecx_32 = 0x10 - *(arg3 + 0x16bc)
                    *(arg3 + 0x14) += 1
                    *(arg3 + 0x16bc) += edi_7 - 0x10
                    *(arg3 + 0x16b8) = ebx_4 u>> ecx_32
            
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
int32_t ecx_35 = *(arg3 + 0x16bc)

if (ecx_35 s<= 0x10 - ebx_5)
    i.w = *(edi + 0x400)
    i.w <<= ecx_35.b
    *(arg3 + 0x16b8) |= i.w
    *(arg3 + 0x16bc) = ecx_35 + ebx_5
    return arg3

uint16_t edi_8 = *(edi + 0x400)
char* esi_12 = *(arg3 + 8)
i.w = edi_8
i.w <<= ecx_35.b
*(arg3 + 0x16b8) |= i.w
esi_12[*(arg3 + 0x14)] = *(arg3 + 0x16b8)
*(arg3 + 0x14) += 1
(*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
char ecx_37 = 0x10 - *(arg3 + 0x16bc)
*(arg3 + 0x14) += 1
*(arg3 + 0x16bc) += ebx_5 - 0x10
*(arg3 + 0x16b8) = edi_8 u>> ecx_37
return arg3
