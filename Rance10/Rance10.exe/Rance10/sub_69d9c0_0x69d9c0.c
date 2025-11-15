// 函数: sub_69d9c0
// 地址: 0x69d9c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i_5 = arg4
char* esi = arg2
uint32_t edi_1 = arg3 u>> 0x10
uint32_t ecx = zx.d(arg3.w)

if (i_5 == 1)
    uint32_t ecx_1 = ecx + zx.d(*esi)
    uint32_t edx = ecx_1 - 0xfff1
    
    if (ecx_1 u< 0xfff1)
        edx = ecx_1
    
    uint32_t edi_2 = edi_1 + edx
    uint32_t eax_1 = edi_2 - 0xfff1
    
    if (edi_2 u< 0xfff1)
        eax_1 = edi_2
    
    return eax_1 << 0x10 | edx

if (esi == 0)
    return &esi[1]

if (i_5 u< 0x10)
    if (i_5 != 0)
        int32_t i
        
        do
            uint32_t eax_5 = zx.d(*esi)
            esi = &esi[1]
            ecx += eax_5
            edi_1 += ecx
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    uint32_t esi_1 = ecx - 0xfff1
    
    if (ecx u< 0xfff1)
        esi_1 = ecx
    
    return (edi_1 u/ 0xfff1 * 0xf + edi_1) << 0x10 | esi_1

if (i_5 u>= 0x15b0)
    uint32_t i_6 = i_5 u/ 0x15b0
    uint32_t i_1
    
    do
        i_5 -= 0x15b0
        int32_t j_1 = 0x15b
        int32_t j
        
        do
            uint32_t ecx_2 = ecx + zx.d(*esi)
            uint32_t ecx_3 = ecx_2 + zx.d(esi[1])
            uint32_t ecx_4 = ecx_3 + zx.d(esi[2])
            uint32_t ecx_5 = ecx_4 + zx.d(esi[3])
            uint32_t ecx_6 = ecx_5 + zx.d(esi[4])
            uint32_t ecx_7 = ecx_6 + zx.d(esi[5])
            uint32_t ecx_8 = ecx_7 + zx.d(esi[6])
            uint32_t ecx_9 = ecx_8 + zx.d(esi[7])
            uint32_t ecx_10 = ecx_9 + zx.d(esi[8])
            uint32_t ecx_11 = ecx_10 + zx.d(esi[9])
            uint32_t ecx_12 = ecx_11 + zx.d(esi[0xa])
            uint32_t ecx_13 = ecx_12 + zx.d(esi[0xb])
            uint32_t ecx_14 = ecx_13 + zx.d(esi[0xc])
            uint32_t ecx_15 = ecx_14 + zx.d(esi[0xd])
            uint32_t ecx_16 = ecx_15 + zx.d(esi[0xe])
            uint32_t eax_29 = zx.d(esi[0xf])
            esi = &esi[0x10]
            ecx = ecx_16 + eax_29
            edi_1 = edi_1 + ecx_2 + ecx_3 + ecx_4 + ecx_5 + ecx_6 + ecx_7 + ecx_8 + ecx_9 + ecx_10
                + ecx_11 + ecx_12 + ecx_13 + ecx_14 + ecx_15 + ecx_16 + ecx
            j = j_1
            j_1 -= 1
        while (j != 1)
        ecx += ecx u/ 0xfff1 * 0xffff000f
        edi_1 += edi_1 u/ 0xfff1 * 0xffff000f
        i_1 = i_6
        i_6 -= 1
    while (i_1 != 1)

if (i_5 != 0)
    if (i_5 u>= 0x10)
        uint32_t i_4 = i_5 u>> 4
        uint32_t i_2
        
        do
            i_5 -= 0x10
            uint32_t ecx_17 = ecx + zx.d(*esi)
            uint32_t ecx_18 = ecx_17 + zx.d(esi[1])
            uint32_t ecx_19 = ecx_18 + zx.d(esi[2])
            uint32_t ecx_20 = ecx_19 + zx.d(esi[3])
            uint32_t ecx_21 = ecx_20 + zx.d(esi[4])
            uint32_t ecx_22 = ecx_21 + zx.d(esi[5])
            uint32_t ecx_23 = ecx_22 + zx.d(esi[6])
            uint32_t ecx_24 = ecx_23 + zx.d(esi[7])
            uint32_t ecx_25 = ecx_24 + zx.d(esi[8])
            uint32_t ecx_26 = ecx_25 + zx.d(esi[9])
            uint32_t ecx_27 = ecx_26 + zx.d(esi[0xa])
            uint32_t ecx_28 = ecx_27 + zx.d(esi[0xb])
            uint32_t ecx_29 = ecx_28 + zx.d(esi[0xc])
            uint32_t ecx_30 = ecx_29 + zx.d(esi[0xd])
            uint32_t ecx_31 = ecx_30 + zx.d(esi[0xe])
            uint32_t eax_49 = zx.d(esi[0xf])
            esi = &esi[0x10]
            ecx = ecx_31 + eax_49
            edi_1 = edi_1 + ecx_17 + ecx_18 + ecx_19 + ecx_20 + ecx_21 + ecx_22 + ecx_23 + ecx_24
                + ecx_25 + ecx_26 + ecx_27 + ecx_28 + ecx_29 + ecx_30 + ecx_31 + ecx
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
    
    if (i_5 != 0)
        int32_t i_3
        
        do
            uint32_t eax_50 = zx.d(*esi)
            esi = &esi[1]
            ecx += eax_50
            edi_1 += ecx
            i_3 = i_5
            i_5 -= 1
        while (i_3 != 1)
    
    ecx += ecx u/ 0xfff1 * 0xffff000f
    edi_1 += edi_1 u/ 0xfff1 * 0xffff000f

return edi_1 << 0x10 | ecx
