// 函数: sub_64ae50
// 地址: 0x64ae50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg1[0x66]
int32_t eax_3 = (*(edi + 0x10) - 1 + *(edi + 0xc)) & 0xffff0000

if (eax_3 s< *(edi + 0xc))
    eax_3 += 0x8000

int32_t* ecx = *(edi + 0x1c)
*(edi + 0xc) = eax_3
*(edi + 0xc) <<= ecx.b
char* result

if ((*(edi + 0xc) & 0xf8000000) == 0)
    result = *(edi + 0x20)
    
    if (result == 0)
        *(edi + 0x18) += 1
    else if (result s>= 0)
        if (*(edi + 0x18) != 0)
            int32_t i
            
            do
                int32_t* ecx_1 = arg1[6]
                **ecx_1 = 0
                *ecx_1 += 1
                int32_t temp6_1 = ecx_1[1]
                ecx_1[1] -= 1
                
                if (temp6_1 == 1 && ecx_1[3](arg1) == 0)
                    *(*arg1 + 0x14) = 0x19
                    (**arg1)(arg1)
                
                i = *(edi + 0x18)
                *(edi + 0x18) -= 1
            while (i != 1)
        
        result = sub_64ae10((*(edi + 0x20)).b, arg1)
    
    if (*(edi + 0x14) != 0)
        if (*(edi + 0x18) != 0)
            int32_t i_1
            
            do
                int32_t* ecx_3 = arg1[6]
                **ecx_3 = 0
                *ecx_3 += 1
                int32_t temp5_1 = ecx_3[1]
                ecx_3[1] -= 1
                
                if (temp5_1 == 1 && ecx_3[3](arg1) == 0)
                    *(*arg1 + 0x14) = 0x19
                    (**arg1)(arg1)
                
                i_1 = *(edi + 0x18)
                *(edi + 0x18) -= 1
            while (i_1 != 1)
        
        int32_t i_2
        
        do
            int32_t* ecx_4 = arg1[6]
            **ecx_4 = 0xff
            *ecx_4 += 1
            int32_t temp4_1 = ecx_4[1]
            ecx_4[1] -= 1
            
            if (temp4_1 == 1 && ecx_4[3](arg1) == 0)
                *(*arg1 + 0x14) = 0x19
                (**arg1)(arg1)
            
            char** ecx_5 = arg1[6]
            result = *ecx_5
            *result = 0
            *ecx_5 = &(*ecx_5)[1]
            int32_t temp8_1 = ecx_5[1]
            ecx_5[1] = &ecx_5[1][0xffffffff]
            
            if (temp8_1 == 1)
                result = ecx_5[3](arg1)
                
                if (result.b == 0)
                    *(*arg1 + 0x14) = 0x19
                    result = (**arg1)(arg1)
            
            i_2 = *(edi + 0x14)
            *(edi + 0x14) -= 1
        while (i_2 != 1)
else
    if (*(edi + 0x20) s>= 0)
        if (*(edi + 0x18) != 0)
            int32_t i_3
            
            do
                ecx = arg1[6]
                **ecx = 0
                *ecx += 1
                int32_t temp2_1 = ecx[1]
                ecx[1] -= 1
                
                if (temp2_1 == 1)
                    char eax_6
                    eax_6, ecx = ecx[3](arg1)
                    
                    if (eax_6 == 0)
                        *(*arg1 + 0x14) = 0x19
                        (**arg1)(arg1)
                
                i_3 = *(edi + 0x18)
                *(edi + 0x18) -= 1
            while (i_3 != 1)
        
        char** edx_1 = arg1[6]
        ecx.b = *(edi + 0x20)
        ecx.b += 1
        **edx_1 = ecx.b
        *edx_1 = &(*edx_1)[1]
        int32_t temp1_1 = edx_1[1]
        edx_1[1] = &edx_1[1][0xffffffff]
        
        if (temp1_1 == 1 && edx_1[3](arg1) == 0)
            *(*arg1 + 0x14) = 0x19
            (**arg1)(arg1)
        
        if (*(edi + 0x20) == 0xfe)
            sub_64ae10(0, arg1)
    
    result = *(edi + 0x14)
    *(edi + 0x18) = &result[*(edi + 0x18)]
    *(edi + 0x14) = 0

if ((*(edi + 0xc) & 0x7fff800) != 0)
    if (*(edi + 0x18) != 0)
        int32_t i_4
        
        do
            int32_t* ecx_6 = arg1[6]
            **ecx_6 = 0
            *ecx_6 += 1
            int32_t temp11_1 = ecx_6[1]
            ecx_6[1] -= 1
            
            if (temp11_1 == 1 && ecx_6[3](arg1) == 0)
                *(*arg1 + 0x14) = 0x19
                (**arg1)(arg1)
            
            i_4 = *(edi + 0x18)
            *(edi + 0x18) -= 1
        while (i_4 != 1)
    
    int32_t* edx_4 = arg1[6]
    **edx_4 = (*(edi + 0xc) s>> 0x13).b
    *edx_4 += 1
    int32_t temp7_1 = edx_4[1]
    edx_4[1] -= 1
    
    if (temp7_1 == 1 && edx_4[3](arg1) == 0)
        *(*arg1 + 0x14) = 0x19
        (**arg1)(arg1)
    
    result = *(edi + 0xc) & 0x7f80000
    
    if (result == 0x7f80000)
        char** ecx_9 = arg1[6]
        result = *ecx_9
        *result = 0
        *ecx_9 = &(*ecx_9)[1]
        int32_t temp13_1 = ecx_9[1]
        ecx_9[1] = &ecx_9[1][0xffffffff]
        
        if (temp13_1 == 1)
            result = ecx_9[3](arg1)
            
            if (result.b == 0)
                *(*arg1 + 0x14) = 0x19
                result = (**arg1)(arg1)
    
    int32_t edx_5 = *(edi + 0xc)
    
    if ((edx_5 & 0x7f800) != 0)
        int32_t* ecx_10 = arg1[6]
        **ecx_10 = (edx_5 s>> 0xb).b
        *ecx_10 += 1
        int32_t temp15_1 = ecx_10[1]
        ecx_10[1] -= 1
        
        if (temp15_1 == 1 && ecx_10[3](arg1) == 0)
            *(*arg1 + 0x14) = 0x19
            (**arg1)(arg1)
        
        result = *(edi + 0xc) & 0x7f800
        
        if (result == 0x7f800)
            return sub_64ae10(0, arg1) __tailcall

return result
