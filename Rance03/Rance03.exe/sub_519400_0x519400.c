// 函数: sub_519400
// 地址: 0x519400
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edx = arg1
int32_t result = 0
int32_t ebp = 0
void* var_8 = edx
int32_t* i = *(edx + 0xa8)
int32_t result_1 = 0
int32_t var_10 = 0
char var_15 = 0
int32_t var_4

if (i != *(edx + 0xac))
    do
        void* edi_1 = *i
        void* var_2c_1 = edi_1 + 0x3c
        int32_t eax_3 = sub_516190(edi_1 + 0xb0)
        int32_t ecx = *(edi_1 + 0x14)
        void* edi_2 = edi_1 + 4
        int32_t var_14 = eax_3
        var_4 = ecx
        
        if (*(edi_2 + 0x14) u>= 0x10)
            edi_2 = *edi_2
        
        int32_t eax_4 = 1
        
        if (ecx u< 1)
            eax_4 = ecx
        
        if (eax_4 == 0)
            goto label_5194c4
        
        void* const edx_1 = &data_6e2cfc
        int32_t j_1 = eax_4 - 4
        
        if (eax_4 u>= 4)
            int32_t j
            
            do
                if (*edi_2 != *edx_1)
                    goto label_519486
                
                edi_2 += 4
                edx_1 += 4
                j = j_1
                j_1 -= 4
            while (j u>= 4)
        
        int32_t eax_6
        
        if (j_1 == 0xfffffffc)
            eax_6 = 0
        else
        label_519486:
            ecx.b = *edi_2
            char temp1_1 = *edx_1
            
            if (ecx.b != temp1_1)
                eax_6 = sbb.d(j_1, j_1, ecx.b u< temp1_1) | 1
            else if (j_1 == 0xfffffffd)
                eax_6 = 0
            else
                ecx.b = *(edi_2 + 1)
                char temp3_1 = *(edx_1 + 1)
                
                if (ecx.b != temp3_1)
                    eax_6 = sbb.d(j_1, j_1, ecx.b u< temp3_1) | 1
                else if (j_1 == 0xfffffffe)
                    eax_6 = 0
                else
                    ecx.b = *(edi_2 + 2)
                    char temp4_1 = *(edx_1 + 2)
                    
                    if (ecx.b != temp4_1)
                        eax_6 = sbb.d(j_1, j_1, ecx.b u< temp4_1) | 1
                    else if (j_1 == 0xffffffff)
                        eax_6 = 0
                    else
                        j_1.b = *(edi_2 + 3)
                        char temp5_1 = *(edx_1 + 3)
                        
                        if (j_1.b == temp5_1)
                            eax_6 = 0
                        else
                            eax_6 = sbb.d(j_1, j_1, j_1.b u< temp5_1) | 1
        
        if (eax_6 != 0)
            goto label_519529
        
        ecx = var_4
    label_5194c4:
        
        if (ecx u< 1)
        label_519529:
            int32_t* eax_12 = &var_14
            edx = var_8
            
            if (ebp s>= var_14)
                eax_12 = &var_10
            
            var_15 = 0
            ebp = *eax_12
        else
            int32_t eax_7
            eax_7.b = ecx != 1
            
            if (eax_7 != 0)
                goto label_519529
            
            if (var_15 != eax_7.b)
                int32_t* eax_8 = &var_14
                
                if (ebp s>= var_14)
                    eax_8 = &var_10
                
                ebp = *eax_8
            
            edx = var_8
            result += ebp
            result_1 = result
            
            if ((i - *(edx + 0xa8)) s>> 2 s< ((*(edx + 0xac) - *(edx + 0xa8)) s>> 2) - 1)
                result += *(edx + 0x44)
                result_1 = result
            
            ebp = 0
            var_15 = 1
        
        i = &i[1]
        var_10 = ebp
    while (i != *(edx + 0xac))
    
    if (ebp s> 0)
        result += ebp
        result_1 = result

if (*(edx + 0xc0) s> 0)
    int32_t ecx_5 = *(edx + 0xc4)
    
    if (ecx_5 s> 0)
        var_4 = ecx_5
        int32_t* eax_13 = &var_4
        
        if (ecx_5 s>= result)
            eax_13 = &result_1
        
        return *eax_13

return result
