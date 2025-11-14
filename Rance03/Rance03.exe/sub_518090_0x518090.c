// 函数: sub_518090
// 地址: 0x518090
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result = arg1
void* var_1c = nullptr
int32_t ebp = 0
int32_t* result_1 = result
int32_t ecx = result[0x10]
int32_t* i = result[0x2a]
int32_t ecx_1 = result[0x11]
int32_t ecx_5 = ((result[0x2b] - result[0x2a]) s>> 2) - 1

if (i != result[0x2b])
    int32_t* edx_3
    int32_t* result_2
    
    do
        int32_t edx_1 = 0
        int32_t* ecx_7 = *i + 0xb0
        void* ebx_1 = nullptr
        int32_t edi_1 = ecx_7[1]
        int32_t* eax = *ecx_7
        uint32_t edi_4 = (edi_1 - eax + 3) u>> 2
        
        if (eax u> ecx_7[1])
            edi_4 = 0
        
        if (edi_4 != 0)
            do
                void* ecx_9 = *(*eax + 4)
                
                if (ecx_9 != 0)
                    ecx_9 = *(ecx_9 + 0x18)
                
                edx_1 += 1
                ebx_1 += ecx_9
                eax = &eax[1]
            while (edx_1 != edi_4)
        
        void* edi_5 = *i
        void* eax_6 = (((edi_1 - *ecx_7) s>> 2) - 1) * ecx + ebx_1
        void* var_34_1 = edi_5 + 0x3c
        int32_t eax_8
        void* ecx_10
        eax_8, ecx_10 = sub_516190(ecx_7)
        void** edx_2 = edi_5 + 4
        int32_t ebx_2 = edx_2[4]
        
        if (*(edi_5 + 0x18) u>= 0x10)
            edx_2 = *edx_2
        
        int32_t eax_9 = 1
        
        if (ebx_2 u< 1)
            eax_9 = ebx_2
        
        if (eax_9 != 0)
            wchar32 const* const edi_6 = &(*U"\n\n\n\n\n\n")[5]
            int32_t j_1 = eax_9 - 4
            
            if (eax_9 u>= 4)
                int32_t j
                
                do
                    if (*edx_2 != *edi_6)
                        goto label_51818b
                    
                    edx_2 = &edx_2[1]
                    edi_6 = &edi_6[1]
                    j = j_1
                    j_1 -= 4
                while (j u>= 4)
            
            int32_t eax_11
            
            if (j_1 == 0xfffffffc)
                eax_11 = 0
            else
            label_51818b:
                ecx_10.b = *edx_2
                char temp2_1 = *edi_6
                
                if (ecx_10.b != temp2_1)
                    eax_11 = sbb.d(j_1, j_1, ecx_10.b u< temp2_1) | 1
                else if (j_1 == 0xfffffffd)
                    eax_11 = 0
                else
                    ecx_10.b = *(edx_2 + 1)
                    char temp4_1 = *(edi_6 + 1)
                    
                    if (ecx_10.b != temp4_1)
                        eax_11 = sbb.d(j_1, j_1, ecx_10.b u< temp4_1) | 1
                    else if (j_1 == 0xfffffffe)
                        eax_11 = 0
                    else
                        ecx_10.b = *(edx_2 + 2)
                        char temp5_1 = *(edi_6 + 2)
                        
                        if (ecx_10.b != temp5_1)
                            eax_11 = sbb.d(j_1, j_1, ecx_10.b u< temp5_1) | 1
                        else if (j_1 == 0xffffffff)
                            eax_11 = 0
                        else
                            j_1.b = *(edx_2 + 3)
                            char temp6_1 = *(edi_6 + 3)
                            
                            if (j_1.b == temp6_1)
                                eax_11 = 0
                            else
                                eax_11 = sbb.d(j_1, j_1, j_1.b u< temp6_1) | 1
            
            if (eax_11 != 0 || ebx_2 u< 1)
                goto label_518201
            
            goto label_5181cf
        
        void* ecx_11
        
        if (ebx_2 u< 1)
        label_518201:
            ecx_11 = var_1c + eax_6
            edx_3 = arg3
            
            if (ebp s< eax_8)
                ebp = eax_8
            
            result_2 = result_1
        else
        label_5181cf:
            int32_t eax_12
            eax_12.b = ebx_2 != 1
            
            if (eax_12 != 0)
                goto label_518201
            
            edx_3 = arg3
            result_2 = result_1
            *edx_3 += ebp
            
            if ((i - result_2[0x2a]) s>> 2 != ecx_5)
                *edx_3 += ecx_1
            
            ecx_11 = nullptr
            ebp = 0
        
        result = arg2
        var_1c = ecx_11
        
        if (*result s< ecx_11)
            *result = ecx_11
        
        i = &i[1]
    while (i != result_2[0x2b])
    
    if (ebp s> 0)
        *edx_3 += ebp

return result
