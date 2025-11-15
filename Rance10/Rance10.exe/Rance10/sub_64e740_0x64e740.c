// 函数: sub_64e740
// 地址: 0x64e740
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg1[0x66]
*(edi + 0x70) = *arg1[6]
*(edi + 0x74) = *(arg1[6] + 4)

if (arg1[0x38] != 0 && *(edi + 0x24) == 0)
    sub_64e690(edi, (*(edi + 0x28)).b)

int32_t i = 0
int32_t i_1 = 0

if (arg1[0x4c] s> 0)
    void* eax_4 = &arg1[0x4d]
    void* var_4_1 = eax_4
    
    do
        int32_t edx_2 = *eax_4
        int32_t* eax_6 = *(arg1[edx_2 + 0x46] + 0x14)
        int16_t* eax_8 = *(arg2 + (i << 2))
        i.b = arg1[0x5a].b
        int32_t eax_10 = sx.d(*eax_8) s>> i.b
        int32_t j_1 = eax_10 - *(edi + (edx_2 << 2) + 0x14)
        bool cond:1_1 = eax_10 - *(edi + (edx_2 << 2) + 0x14) s>= 0
        *(edi + (edx_2 << 2) + 0x14) = eax_10
        int32_t j = j_1
        
        if (not(cond:1_1))
            j = neg.d(j)
            j_1 -= 1
        
        uint32_t esi_1 = 0
        
        if (j != 0)
            do
                esi_1 += 1
                j s>>= 1
            while (j != 0)
            
            if (esi_1 s> 0xb)
                *(*arg1 + 0x14) = 6
                (**arg1)(arg1)
        
        char* eax_14
        
        if (*(edi + 0x6c) == 0)
            int32_t edx_4 = *(edi + (eax_6 << 2) + 0x2c)
            char* eax_15 = sx.d(*(edx_4 + esi_1 + 0x400))
            eax_14 = sub_64e3c0(eax_15, *(edx_4 + (esi_1 << 2)), edi, eax_15)
        else
            eax_14 = *(edi + (eax_6 << 2) + 0x4c)
            *(eax_14 + (esi_1 << 2)) += 1
        
        if (esi_1 != 0)
            sub_64e3c0(eax_14, j_1, edi, esi_1)
        
        i = i_1 + 1
        eax_4 = var_4_1 + 4
        i_1 = i
        var_4_1 = eax_4
    while (i s< arg1[0x4c])

*arg1[6] = *(edi + 0x70)
*(arg1[6] + 4) = *(edi + 0x74)
int32_t result = arg1[0x38]

if (result != 0)
    if (*(edi + 0x24) == 0)
        *(edi + 0x24) = result
        *(edi + 0x28) = (*(edi + 0x28) + 1) & 7
    
    *(edi + 0x24) -= 1

result.b = 1
return result
