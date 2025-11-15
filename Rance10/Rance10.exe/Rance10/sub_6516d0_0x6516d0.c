// 函数: sub_6516d0
// 地址: 0x6516d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg1
int32_t* var_14 = esi
sub_651170(arg1)
int32_t eax = esi[0x5b]

if (eax s< 1 || eax s> 0x10)
    *(*esi + 0x14) = 7
    *(*esi + 0x18) = esi[0x5b]
    *(*esi + 0x1c) = esi[0x5b]
    (**esi)(esi)

int32_t eax_6 = esi[0x5b]

if (eax_6 - 2 u> 5)
    esi[0x5c] = &data_76e8a0
else
    switch (eax_6)
        case 2
            esi[0x5c] = &data_76ed48
        case 3
            esi[0x5c] = &data_76eae8
        case 4
            esi[0x5c] = &data_76ecc8
        case 5
            esi[0x5c] = &data_76ec20
        case 6
            esi[0x5c] = &data_76eb50
        case 7
            esi[0x5c] = &data_76e9e0

int32_t eax_8

if (eax_6 s>= 8)
    eax_8 = 0x3f
else
    eax_8 = eax_6 * eax_6 - 1

bool cond:0 = esi[0x11] u<= 0
esi[0x5d] = eax_8

if (cond:0 || esi[0x10] u<= 0 || esi[0x13] s<= 0)
    *(*esi + 0x14) = 0x21
    (**esi)(esi)

if (esi[0x11] s> 0xffdc || esi[0x10] s> 0xffdc)
    *(*esi + 0x14) = 0x2a
    *(*esi + 0x18) = 0xffdc
    (**esi)(esi)

int32_t eax_16 = esi[0x12]

if (eax_16 s< 8 || eax_16 s> 0xc)
    *(*esi + 0x14) = 0x10
    *(*esi + 0x18) = esi[0x12]
    (**esi)(esi)

if (esi[0x13] s> 0xa)
    *(*esi + 0x14) = 0x1b
    *(*esi + 0x18) = esi[0x13]
    *(*esi + 0x1c) = 0xa
    (**esi)(esi)

void* edi = esi[0x15]
int32_t i = 0
esi[0x40] = 1
esi[0x41] = 1

if (esi[0x13] s> 0)
    void* edi_1 = edi + 0xc
    
    do
        int32_t eax_26 = *(edi_1 - 4)
        int32_t eax_27
        
        if (eax_26 s> 0 && eax_26 s<= 4)
            eax_27 = *edi_1
        
        if (eax_26 s<= 0 || eax_26 s> 4 || eax_27 s<= 0 || eax_27 s> 4)
            *(*esi + 0x14) = 0x13
            (**esi)(esi)
        
        int32_t ecx_5 = *(edi_1 - 4)
        int32_t eax_31 = esi[0x40]
        
        if (eax_31 s> ecx_5)
            ecx_5 = eax_31
        
        int32_t eax_32 = esi[0x41]
        esi[0x40] = ecx_5
        int32_t ecx_6 = *edi_1
        
        if (eax_32 s> ecx_6)
            ecx_6 = eax_32
        
        i += 1
        esi[0x41] = ecx_6
        edi_1 += 0x58
    while (i s< esi[0x13])

int32_t i_1 = 0
int32_t i_2 = 0

if (esi[0x13] s> 0)
    void* ebp_1 = esi[0x15] + 0x24
    void* var_18_1 = ebp_1
    
    do
        *(ebp_1 - 0x20) = i_1
        int32_t edi_2 = 1
        int32_t ebp_2 = esi[0x42]
        int32_t ebx
        ebx.b = esi[0x35].b != 0
        
        if (ebp_2 s<= (ebx << 2) + 4)
            int32_t eax_35 = esi[0x40]
            int32_t var_8_1 = eax_35
            
            do
                if (mods.dp.d(sx.q(eax_35), *(var_18_1 - 0x1c) * edi_2 * 2) != 0)
                    break
                
                edi_2 *= 2
                eax_35 = var_8_1
            while (ebp_2 * edi_2 s<= (ebx << 2) + 4)
            
            esi = var_14
        
        int32_t edi_3 = 1
        *var_18_1 = ebp_2 * edi_2
        int32_t ebx_2 = esi[0x43]
        int32_t eax_40
        eax_40.b = esi[0x35].b != 0
        
        if (ebx_2 s<= (eax_40 << 2) + 4)
            int32_t eax_42 = esi[0x41]
            int32_t var_4_1 = eax_42
            
            do
                if (mods.dp.d(sx.q(eax_42), *(var_18_1 - 0x18) * edi_3 * 2) != 0)
                    break
                
                edi_3 *= 2
                eax_42 = var_4_1
            while (ebx_2 * edi_3 s<= (eax_40 << 2) + 4)
            
            esi = var_14
        
        int32_t ebx_3 = ebx_2 * edi_3
        int32_t ecx_14 = *var_18_1
        *(var_18_1 + 4) = ebx_3
        int32_t eax_47 = ebx_3 * 2
        
        if (ecx_14 s<= eax_47)
            int32_t eax_48 = ecx_14 * 2
            
            if (ebx_3 s> eax_48)
                *(var_18_1 + 4) = eax_48
        else
            *var_18_1 = eax_47
        
        int32_t ecx_16 = esi[0x5b] * esi[0x40]
        *(var_18_1 - 8) = divs.dp.d(sx.q(esi[0x10] * *(var_18_1 - 0x1c) - 1 + ecx_16), ecx_16)
        int32_t ecx_18 = esi[0x41] * esi[0x5b]
        *(var_18_1 - 4) = divs.dp.d(sx.q(esi[0x11] * *(var_18_1 - 0x18) - 1 + ecx_18), ecx_18)
        int32_t ecx_20 = esi[0x5b] * esi[0x40]
        *(var_18_1 + 8) =
            divs.dp.d(sx.q(*var_18_1 * *(var_18_1 - 0x1c) * esi[0x10] - 1 + ecx_20), ecx_20)
        int32_t ecx_22 = esi[0x41] * esi[0x5b]
        int32_t eax_70 = *(var_18_1 + 4) * *(var_18_1 - 0x18) * esi[0x11]
        *(var_18_1 + 0x10) = 0
        *(var_18_1 + 0xc) = divs.dp.d(sx.q(eax_70 - 1 + ecx_22), ecx_22)
        ebp_1 = var_18_1 + 0x58
        i_1 = i_2 + 1
        var_18_1 = ebp_1
        i_2 = i_1
    while (i_1 s< esi[0x13])

int32_t ecx_24 = esi[0x41] * esi[0x5b]
int32_t result = divs.dp.d(sx.q(esi[0x11] - 1 + ecx_24), ecx_24)
esi[0x44] = result
return result
