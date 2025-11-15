// 函数: sub_64ba30
// 地址: 0x64ba30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg1[0x66]

if (arg1[0x38] != 0)
    if (ebx[0x11] == 0)
        sub_64b400(arg1, (ebx[0x12]).b)
        ebx[0x11] = arg1[0x38]
        ebx[0x12] = (ebx[0x12] + 1) & 7
    
    ebx[0x11] -= 1

int32_t ebx_1 = arg1[0x5c]
int32_t* i_2 = arg1[0x58]
int32_t edi = *arg2
int32_t eax_7 = *(arg1[0x46] + 0x18)
int32_t* i

do
    int32_t eax_9 = sx.d(*(edi + (*(ebx_1 + (i_2 << 2)) << 1)))
    
    if (eax_9 s< 0)
        eax_9 = neg.d(eax_9)
    
    if (eax_9 s>> (arg1[0x5a]).b != 0)
        break
    
    i = i_2
    i_2 -= 1
while (i != 1)
int32_t* i_1 = i_2

if (i_2 s> 0)
    do
        int32_t eax_11 = sx.d(*(edi + (*(ebx_1 + (i_1 << 2)) << 1)))
        
        if (eax_11 s< 0)
            eax_11 = neg.d(eax_11)
        
        if (eax_11 s>> (arg1[0x59]).b != 0)
            break
        
        i_1 -= 1
    while (i_1 s> 0)

int32_t ebx_3 = arg1[0x57] - 1
int32_t result

if (ebx_3 s< i_2)
    result = &ebx[eax_7 + 0x23]
    int32_t result_1 = result
    
    do
        char* edi_2 = ebx_3 * 3 + *result
        
        if (ebx_3 s>= i_1)
            sub_64b150(result, edi_2, arg1, 0)
        
        while (true)
            ebx_3 += 1
            int32_t eax_16 = sx.d(*(edi + (*(ebx_1 + (ebx_3 << 2)) << 1)))
            char ecx_7 = (arg1[0x5a]).b
            int32_t eax_17
            
            if (eax_16 s< 0)
                eax_17 = neg.d(eax_16) s>> ecx_7
                
                if (eax_17 != 0)
                    if ((eax_17 & 0xfffffffe) != 0)
                        int32_t eax_21 = eax_17 & 1
                        sub_64b150(eax_21, &edi_2[2], arg1, eax_21)
                        break
                    
                    sub_64b150(sub_64b150(eax_17, &edi_2[1], arg1, 1), &ebx[0x33], arg1, 1)
                    break
            else
                eax_17 = eax_16 s>> ecx_7
                
                if (eax_17 != 0)
                    if ((eax_17 & 0xfffffffe) != 0)
                        int32_t eax_18 = eax_17 & 1
                        sub_64b150(eax_18, &edi_2[2], arg1, eax_18)
                        break
                    
                    sub_64b150(sub_64b150(eax_17, &edi_2[1], arg1, 1), &ebx[0x33], arg1, 0)
                    break
            
            sub_64b150(eax_17, &edi_2[1], arg1, 0)
            edi_2 = &edi_2[3]
        
        result = result_1
    while (ebx_3 s< i_2)

if (ebx_3 s< arg1[0x58])
    sub_64b150(ebx, ebx_3 * 3 + ebx[eax_7 + 0x23], arg1, 1)

result.b = 1
return result
