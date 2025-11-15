// 函数: sub_65d350
// 地址: 0x65d350
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg1
int32_t* var_14 = esi

if (esi[5] != 0xca)
    *(*esi + 0x14) = 0x15
    *(*esi + 0x18) = esi[5]
    (**esi)(esi)

sub_659d10(esi)
int32_t i_2 = 0

if (esi[9] s> 0)
    void* ecx_3 = esi[0x31] + 0x24
    void* var_18_1 = ecx_3
    int32_t i
    
    do
        int32_t ebp_1 = esi[0x48]
        int32_t edi_1 = 1
        int32_t ebx_1
        ebx_1.b = esi[0x12].b != 0
        
        if (ebp_1 s<= (ebx_1 << 2) + 4)
            int32_t eax_5 = esi[0x46]
            int32_t var_8_1 = eax_5
            
            do
                if (mods.dp.d(sx.q(eax_5), *(ecx_3 - 0x1c) * edi_1 * 2) != 0)
                    break
                
                edi_1 *= 2
                eax_5 = var_8_1
            while (ebp_1 * edi_1 s<= (ebx_1 << 2) + 4)
            
            esi = var_14
            ecx_3 = var_18_1
        
        int32_t edi_2 = 1
        *ecx_3 = ebp_1 * edi_1
        int32_t ebx_3 = esi[0x49]
        int32_t eax_10
        eax_10.b = esi[0x12].b != 0
        
        if (ebx_3 s<= (eax_10 << 2) + 4)
            int32_t eax_12 = esi[0x47]
            int32_t var_4_1 = eax_12
            
            do
                if (mods.dp.d(sx.q(eax_12), *(ecx_3 - 0x18) * edi_2 * 2) != 0)
                    break
                
                edi_2 *= 2
                eax_12 = var_4_1
            while (ebx_3 * edi_2 s<= (eax_10 << 2) + 4)
            
            esi = var_14
            ecx_3 = var_18_1
        
        int32_t edx_5 = *ecx_3
        int32_t ebx_4 = ebx_3 * edi_2
        *(ecx_3 + 4) = ebx_4
        int32_t eax_17 = ebx_4 * 2
        
        if (edx_5 s<= eax_17)
            int32_t eax_18 = edx_5 * 2
            
            if (ebx_4 s> eax_18)
                *(ecx_3 + 4) = eax_18
        else
            *ecx_3 = eax_17
        
        ecx_3 += 0x58
        i = i_2 + 1
        var_18_1 = ecx_3
        i_2 = i
    while (i s< esi[9])

int32_t i_1 = 0

if (esi[9] s> 0)
    void* edi_4 = esi[0x31] + 8
    
    do
        int32_t eax_20 = *(edi_4 + 0x1c)
        edi_4 += 0x58
        i_1 += 1
        int32_t ecx_11 = esi[0x46] * esi[0x62]
        *(edi_4 - 0x34) = divs.dp.d(sx.q(eax_20 * *(edi_4 - 0x58) * esi[7] - 1 + ecx_11), ecx_11)
        int32_t ecx_13 = esi[0x62] * esi[0x47]
        *(edi_4 - 0x30) =
            divs.dp.d(sx.q(*(edi_4 - 0x38) * *(edi_4 - 0x54) * esi[8] - 1 + ecx_13), ecx_13)
    while (i_1 s< esi[9])

int32_t eax_35 = esi[0xb] - 1

if (eax_35 u> 6)
    esi[0x19] = esi[9]
else
    switch (eax_35)
        case 0
            esi[0x19] = 1
        case 1, 2, 5, 6
            esi[0x19] = 3
        case 3, 4
            esi[0x19] = 4

int32_t eax_37 = 1

if (*(esi + 0x4a) == 0)
    eax_37 = esi[0x19]

esi[0x1a] = eax_37
char eax_38 = sub_65d2a0(esi)

if (eax_38 == 0)
    esi[0x1b] = 1
    return eax_38

int32_t eax_39 = esi[0x47]
esi[0x1b] = eax_39
return eax_39
