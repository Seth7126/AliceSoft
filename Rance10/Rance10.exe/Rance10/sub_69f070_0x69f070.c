// 函数: sub_69f070
// 地址: 0x69f070
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = arg2
int32_t* esi = arg1
int32_t ecx_1 = esi[3] - 5

if (ecx_1 u> esi[0xb])
    ecx_1 = esi[0xb]

int32_t i = 0
int32_t eax_1 = *(*esi + 4)

do
    void* ebx_1 = 0xffff
    int32_t eax_4 = (esi[0x5af] + 0x2a) s>> 3
    int32_t ecx_3 = *(*esi + 0x10)
    
    if (ecx_3 u< eax_4)
        break
    
    void* ecx_4 = ecx_3 - eax_4
    void* edi_2 = esi[0x1b] - esi[0x17]
    void* eax_7 = *(*esi + 4) + edi_2
    
    if (eax_7 u< 0xffff)
        ebx_1 = eax_7
    
    if (ebx_1 u> ecx_4)
        ebx_1 = ecx_4
    
    if (ebx_1 u< ecx_1)
        if (ebx_1 == 0 && edx != 4)
            break
        
        if (edx == 0)
            break
        
        if (ebx_1 != eax_7)
            break
    
    if (edx != 4 || ebx_1 != eax_7)
        i = 0
    else
        i = edx - 3
    
    sub_6a3540(eax_7.w, nullptr, esi, nullptr, i.w)
    *(esi[2] + esi[5] - 4) = ebx_1.b
    *(esi[2] + esi[5] - 3) = (ebx_1 u>> 8).b
    *(esi[2] + esi[5] - 2) = not.b(ebx_1.b)
    *(esi[2] + esi[5] - 1) = (not.d(ebx_1) u>> 8).b
    void* eax_12 = *esi
    void* eax_13 = *(eax_12 + 0x1c)
    sub_6a3d90(eax_13)
    void* eax_14 = *(eax_13 + 0x14)
    void* esi_1 = eax_14
    void* var_14_1 = eax_14
    
    if (esi_1 u> *(eax_12 + 0x10))
        esi_1 = *(eax_12 + 0x10)
    
    void* eax_15 = esi_1
    esi = arg1
    
    if (eax_15 != 0)
        sub_700660(*(eax_12 + 0xc), *(eax_13 + 0x10), eax_15)
        eax_15 = eax_12
        *(eax_15 + 0xc) += esi_1
        *(eax_13 + 0x10) += esi_1
        *(eax_15 + 0x14) += esi_1
        *(eax_15 + 0x10) -= esi_1
        int32_t temp2_1 = *(eax_13 + 0x14)
        *(eax_13 + 0x14) -= esi_1
        
        if (temp2_1 == esi_1)
            eax_15 = *(eax_13 + 8)
            *(eax_13 + 0x10) = eax_15
    
    if (edi_2 != 0)
        if (edi_2 u> ebx_1)
            edi_2 = ebx_1
        
        sub_700660(*(*esi + 0xc), esi[0xe] + esi[0x17], edi_2)
        void* eax_19 = *esi
        *(eax_19 + 0xc) += edi_2
        void* eax_20 = *esi
        *(eax_20 + 0x10) -= edi_2
        eax_15 = *esi
        *(eax_15 + 0x14) += edi_2
        esi[0x17] += edi_2
        ebx_1 -= edi_2
    
    if (ebx_1 != 0)
        int32_t* ecx_13 = *esi
        sub_69ec00(eax_15, ecx_13[3], ecx_13, ebx_1)
        void* eax_21 = *esi
        *(eax_21 + 0xc) += ebx_1
        void* eax_22 = *esi
        *(eax_22 + 0x10) -= ebx_1
        void* eax_23 = *esi
        *(eax_23 + 0x14) += ebx_1
    
    edx = arg2
while (i == 0)

int32_t* eax_24 = *esi
void* ebx_3 = eax_1 - eax_24[1]

if (eax_1 != eax_24[1])
    void* edx_9 = esi[0xb]
    
    if (ebx_3 u< edx_9)
        int32_t edi_3 = esi[0x1b]
        
        if (esi[0xf] - edi_3 u<= ebx_3)
            char* ecx_14 = esi[0xe]
            void* edi_4 = edi_3 - edx_9
            esi[0x1b] = edi_4
            sub_700660(ecx_14, ecx_14 + edx_9, edi_4)
            int32_t eax_31 = esi[0x5ac]
            
            if (eax_31 u< 2)
                esi[0x5ac] = eax_31 + 1
        
        sub_700660(esi[0xe] + esi[0x1b], **esi - ebx_3, ebx_3)
        esi[0x1b] += ebx_3
    else
        esi[0x5ac] = 2
        sub_700660(esi[0xe], *eax_24 - edx_9, edx_9)
        esi[0x1b] = esi[0xb]
    
    void* ecx_15 = esi[0x5ad]
    esi[0x17] = esi[0x1b]
    void* eax_40 = esi[0xb] - ecx_15
    
    if (ebx_3 u> eax_40)
        ebx_3 = eax_40
    
    esi[0x5ad] = ecx_15 + ebx_3

int32_t ecx_16 = esi[0x1b]

if (esi[0x5b0] u< ecx_16)
    esi[0x5b0] = ecx_16

if (i != 0)
    return 3

if (arg2 != 0 && arg2 != 4 && *(*esi + 4) == 0 && ecx_16 == esi[0x17])
    return 1

void* eax_45 = *esi
void* edi_7 = esi[0xf] - ecx_16 - 1

if (*(eax_45 + 4) u> edi_7)
    int32_t ecx_17 = esi[0x17]
    eax_45 = esi[0xb]
    
    if (ecx_17 s>= eax_45)
        esi[0x1b] -= eax_45
        void* var_28_8 = esi[0x1b]
        esi[0x17] = ecx_17 - eax_45
        char* ecx_19 = esi[0xe]
        sub_700660(ecx_19, eax_45 + ecx_19, var_28_8)
        eax_45 = esi[0x5ac]
        
        if (eax_45 u< 2)
            eax_45 += 1
            esi[0x5ac] = eax_45
        
        edi_7 += esi[0xb]

int32_t* ecx_20 = *esi

if (edi_7 u> ecx_20[1])
    edi_7 = ecx_20[1]

if (edi_7 != 0)
    sub_69ec00(eax_45, esi[0xe] + esi[0x1b], ecx_20, edi_7)
    esi[0x1b] += edi_7

int32_t eax_47 = esi[0x1b]

if (esi[0x5b0] u< eax_47)
    esi[0x5b0] = eax_47

void* edx_13 = esi[3] - ((esi[0x5af] + 0x2a) s>> 3)
void* eax_51 = 0xffff

if (edx_13 u> 0xffff)
    edx_13 = 0xffff

void* ecx_21 = edx_13

if (edx_13 u> esi[0xb])
    ecx_21 = esi[0xb]

void* edi_9 = esi[0x1b] - esi[0x17]

if (edi_9 u>= ecx_21)
label_69f3ca:
    void* ecx_22 = edi_9
    
    if (edi_9 u> edx_13)
        ecx_22 = edx_13
    
    if (arg2 == 4)
        eax_51 = *esi
    
    if (arg2 != 4 || *(eax_51 + 4) != 0 || ecx_22 != edi_9)
        i = 0
    else
        i = arg2 - 3
    
    sub_6a3540(eax_51.w, esi[0xe] + esi[0x17], esi, ecx_22, i.w)
    void* ecx_24 = *esi
    esi[0x17] += ecx_22
    sub_69e250(ecx_24)
else if ((edi_9 != 0 || arg2 == 4) && arg2 != 0)
    eax_51 = *esi
    
    if (*(eax_51 + 4) == 0 && edi_9 u<= edx_13)
        goto label_69f3ca

int32_t ebp = neg.d(i)
return sbb.d(ebp, ebp, i != 0) & 2
