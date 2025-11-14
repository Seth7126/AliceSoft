// 函数: sub_620fc0
// 地址: 0x620fc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i_5 = arg4
int32_t ecx = arg3 & 0xffff
uint32_t esi_1 = arg3 u>> 0x10
char* edi = arg2

if (i_5 != 1)
    if (edi == 0)
        return &edi[1]
    
    if (i_5 u< 0x10)
        if (i_5 != 0)
            int32_t i
            
            do
                uint32_t eax_3 = zx.d(*edi)
                edi = &edi[1]
                ecx += eax_3
                esi_1 += ecx
                i = i_5
                i_5 -= 1
            while (i != 1)
        
        if (ecx u>= 0xfff1)
            ecx -= 0xfff1
        
        return (esi_1 u/ 0xfff1 * 0xf + esi_1) << 0x10 | ecx
    
    if (i_5 u>= 0x15b0)
        uint32_t i_6 = i_5 u/ 0x15b0
        uint32_t i_1
        
        do
            i_5 -= 0x15b0
            int32_t j_1 = 0x15b
            int32_t j
            
            do
                int32_t ecx_1 = ecx + zx.d(*edi)
                int32_t ecx_2 = ecx_1 + zx.d(edi[1])
                int32_t ecx_3 = ecx_2 + zx.d(edi[2])
                int32_t ecx_4 = ecx_3 + zx.d(edi[3])
                int32_t ecx_5 = ecx_4 + zx.d(edi[4])
                int32_t ecx_6 = ecx_5 + zx.d(edi[5])
                int32_t ecx_7 = ecx_6 + zx.d(edi[6])
                int32_t ecx_8 = ecx_7 + zx.d(edi[7])
                int32_t ecx_9 = ecx_8 + zx.d(edi[8])
                int32_t ecx_10 = ecx_9 + zx.d(edi[9])
                int32_t ecx_11 = ecx_10 + zx.d(edi[0xa])
                int32_t ecx_12 = ecx_11 + zx.d(edi[0xb])
                int32_t ecx_13 = ecx_12 + zx.d(edi[0xc])
                int32_t ecx_14 = ecx_13 + zx.d(edi[0xd])
                int32_t ecx_15 = ecx_14 + zx.d(edi[0xe])
                uint32_t eax_27 = zx.d(edi[0xf])
                edi = &edi[0x10]
                ecx = ecx_15 + eax_27
                esi_1 = esi_1 + ecx_1 + ecx_2 + ecx_3 + ecx_4 + ecx_5 + ecx_6 + ecx_7 + ecx_8
                    + ecx_9 + ecx_10 + ecx_11 + ecx_12 + ecx_13 + ecx_14 + ecx_15 + ecx
                j = j_1
                j_1 -= 1
            while (j != 1)
            ecx += ecx u/ 0xfff1 * 0xffff000f
            esi_1 += esi_1 u/ 0xfff1 * 0xffff000f
            i_1 = i_6
            i_6 -= 1
        while (i_1 != 1)
    
    if (i_5 != 0)
        if (i_5 u>= 0x10)
            uint32_t i_4 = i_5 u>> 4
            uint32_t i_2
            
            do
                i_5 -= 0x10
                int32_t ecx_16 = ecx + zx.d(*edi)
                int32_t ecx_17 = ecx_16 + zx.d(edi[1])
                int32_t ecx_18 = ecx_17 + zx.d(edi[2])
                int32_t ecx_19 = ecx_18 + zx.d(edi[3])
                int32_t ecx_20 = ecx_19 + zx.d(edi[4])
                int32_t ecx_21 = ecx_20 + zx.d(edi[5])
                int32_t ecx_22 = ecx_21 + zx.d(edi[6])
                int32_t ecx_23 = ecx_22 + zx.d(edi[7])
                int32_t ecx_24 = ecx_23 + zx.d(edi[8])
                int32_t ecx_25 = ecx_24 + zx.d(edi[9])
                int32_t ecx_26 = ecx_25 + zx.d(edi[0xa])
                int32_t ecx_27 = ecx_26 + zx.d(edi[0xb])
                int32_t ecx_28 = ecx_27 + zx.d(edi[0xc])
                int32_t ecx_29 = ecx_28 + zx.d(edi[0xd])
                int32_t ecx_30 = ecx_29 + zx.d(edi[0xe])
                uint32_t eax_47 = zx.d(edi[0xf])
                edi = &edi[0x10]
                ecx = ecx_30 + eax_47
                esi_1 = esi_1 + ecx_16 + ecx_17 + ecx_18 + ecx_19 + ecx_20 + ecx_21 + ecx_22
                    + ecx_23 + ecx_24 + ecx_25 + ecx_26 + ecx_27 + ecx_28 + ecx_29 + ecx_30 + ecx
                i_2 = i_4
                i_4 -= 1
            while (i_2 != 1)
        
        if (i_5 != 0)
            int32_t i_3
            
            do
                uint32_t eax_48 = zx.d(*edi)
                edi = &edi[1]
                ecx += eax_48
                esi_1 += ecx
                i_3 = i_5
                i_5 -= 1
            while (i_3 != 1)
        
        ecx += ecx u/ 0xfff1 * 0xffff000f
        esi_1 += esi_1 u/ 0xfff1 * 0xffff000f
else
    ecx += zx.d(*edi)
    
    if (ecx u>= 0xfff1)
        ecx -= 0xfff1
    
    esi_1 += ecx
    
    if (esi_1 u>= 0xfff1)
        return (esi_1 - 0xfff1) << 0x10 | ecx

return esi_1 << 0x10 | ecx
