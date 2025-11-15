// 函数: sub_64b750
// 地址: 0x64b750
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg1
void* edi = ebx[0x66]

if (ebx[0x38] != 0)
    if (*(edi + 0x44) == 0)
        sub_64b400(ebx, (*(edi + 0x48)).b)
        *(edi + 0x44) = ebx[0x38]
        *(edi + 0x48) = (*(edi + 0x48) + 1) & 7
    
    *(edi + 0x44) -= 1

int32_t i_3 = ebx[0x58]
int32_t ebp = ebx[0x5c]
int32_t ecx_2 = *arg2
int32_t var_8 = ebp
int32_t var_1c = ecx_2
int32_t eax_7 = *(ebx[0x46] + 0x18)
int32_t i

do
    int32_t eax_9 = sx.d(*(ecx_2 + (*(ebp + (i_3 << 2)) << 1)))
    
    if (eax_9 s< 0)
        eax_9 = neg.d(eax_9)
    
    if (eax_9 s>> (ebx[0x5a]).b != 0)
        break
    
    ecx_2 = var_1c
    i = i_3
    i_3 -= 1
while (i != 1)
int32_t* esi_1 = ebx[0x57] - 1
int32_t result

if (esi_1 s< i_3)
    result = edi + ((eax_7 + 0x23) << 2)
    int32_t result_1 = result
    
    do
        char* edi_2 = esi_1 * 3 + *result
        sub_64b150(result, edi_2, ebx, 0)
        int32_t var_38_1
        int32_t eax_14
        int32_t esi_4
        
        while (true)
            int32_t eax_13 = *(ebp + ((esi_1 + 1) << 2))
            int32_t esi_3 = sx.d(*(var_1c + (eax_13 << 1)))
            char ecx_6 = (ebx[0x5a]).b
            
            if (esi_3 s< 0)
                esi_4 = neg.d(esi_3) s>> ecx_6
                
                if (esi_4 != 0)
                    eax_14 = sub_64b150(eax_13, &edi_2[1], ebx, 1)
                    var_38_1 = 1
                    break
            else
                esi_4 = esi_3 s>> ecx_6
                
                if (esi_4 != 0)
                    eax_14 = sub_64b150(eax_13, &edi_2[1], ebx, 1)
                    var_38_1 = 0
                    break
            
            sub_64b150(eax_13, &edi_2[1], ebx, 0)
            esi_1 += 1
            edi_2 = &edi_2[3]
        
        int32_t result_2 = sub_64b150(eax_14, edi + 0xcc, ebx, var_38_1)
        void* edi_3 = &edi_2[2]
        int32_t ebp_1 = 0
        int32_t esi_6 = esi_4 - 1
        
        if (esi_4 != 1)
            sub_64b150(result_2, edi_3, ebx, 1)
            result_2 = esi_6 s>> 1
            ebp_1 = 1
            arg1 = result_2
            
            if (result_2 != 0)
                sub_64b150(result_2, edi_3, ebx, 1)
                int32_t edi_4 = 0xd9
                ebp_1 = 2
                
                if (esi_1 + 1 s<= zx.d(*(eax_7 + ebx + 0xb8)))
                    edi_4 = 0xbd
                
                result_2 = result_1
                edi_3 = edi_4 + *result_2
                int32_t i_4 = arg1 s>> 1
                
                if (i_4 != 0)
                    int32_t i_1 = i_4
                    
                    do
                        result_2 = sub_64b150(result_2, edi_3, ebx, 1)
                        ebp_1 *= 2
                        edi_3 += 1
                        i_1 s>>= 1
                    while (i_1 != 0)
        
        sub_64b150(result_2, edi_3, ebx, 0)
        
        for (int32_t i_2 = ebp_1 s>> 1; i_2 != 0; i_2 s>>= 1)
            int32_t eax_19 = i_2 & esi_6
            int32_t eax_20 = neg.d(eax_19)
            int32_t eax_22 = neg.d(sbb.d(eax_20, eax_20, eax_19 != 0))
            sub_64b150(eax_22, edi_3 + 0xe, ebx, eax_22)
        
        esi_1 += 1
        ebp = var_8
        result = result_1
    while (esi_1 s< i_3)

if (esi_1 s< ebx[0x58])
    sub_64b150(eax_7, esi_1 * 3 + *(edi + (eax_7 << 2) + 0x8c), ebx, 1)

result.b = 1
return result
