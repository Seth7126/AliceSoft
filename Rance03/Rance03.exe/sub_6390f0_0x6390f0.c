// 函数: sub_6390f0
// 地址: 0x6390f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax
int32_t edx
void** result = sub_69cb1c(eax, edx, arg1, 1, 0x28)
result[9] = 1

if (sub_638110(arg1, 0x18) == 0x564342)
    *result = sub_638110(arg1, 0x10)
    void* i_1 = sub_638110(arg1, 0x18)
    result[1] = i_1
    
    if (i_1 != 0xffffffff)
        void* i = *result
        int32_t edx_1 = 0
        
        for (; i != 0; i u>>= 1)
            edx_1 += 1
        
        int32_t ecx_3 = 0
        
        for (; i_1 != 0; i_1 u>>= 1)
            ecx_3 += 1
        
        if (ecx_3 + edx_1 s<= 0x18)
            void* eax_4 = sub_638110(arg1, 1)
            
            if (eax_4 == 0)
                void* eax_15 = sub_638110(arg1, 1)
                int32_t ebp_3 = result[1]
                int32_t eax_18
                int32_t edx_4
                edx_4:eax_18 = sx.q(arg1[1] + 7)
                int32_t eax_21
                eax_21.b = eax_15 == 0
                
                if ((((eax_21 << 2) + 1) * ebp_3 + 7) s>> 3
                        s<= arg1[4] - ((eax_18 + (edx_4 & 7)) s>> 3) - *arg1)
                    result[2] = _malloc(ebp_3 << 2)
                    
                    if (eax_15 == 0)
                        int32_t edi_5 = 0
                        
                        if (ebp_3 s<= 0)
                        label_639331:
                            void* eax_34 = sub_638110(arg1, 4)
                            result[3] = eax_34
                            
                            if (eax_34 == 0)
                                return result
                            
                            if (eax_34 - 1 u<= 1)
                                result[4] = sub_638110(arg1, 0x20)
                                result[5] = sub_638110(arg1, 0x20)
                                result[6] = sub_638110(arg1, 4) + 1
                                void* eax_40 = sub_638110(arg1, 1)
                                result[7] = eax_40
                                
                                if (eax_40 != 0xffffffff)
                                    int32_t eax_41 = result[3]
                                    int32_t ebp_4 = 0
                                    
                                    if (eax_41 == 1)
                                        if (*result != 0)
                                            ebp_4 = sub_6448b0(result)
                                        else
                                            ebp_4 = 0
                                    else if (eax_41 == 2)
                                        ebp_4 = *result * result[1]
                                    
                                    int32_t eax_47
                                    int32_t edx_6
                                    edx_6:eax_47 = sx.q(arg1[1] + 7)
                                    
                                    if ((result[6] * ebp_4 + 7) s>> 3
                                            s<= arg1[4] - ((eax_47 + (edx_6 & 7)) s>> 3) - *arg1)
                                        result[8] = _malloc(ebp_4 << 2)
                                        int32_t edi_6 = 0
                                        bool cond:0_1 = ebp_4 == 0
                                        
                                        if (ebp_4 s> 0)
                                            do
                                                *(result[8] + (edi_6 << 2)) =
                                                    sub_638110(arg1, result[6])
                                                edi_6 += 1
                                            while (edi_6 s< ebp_4)
                                            
                                            cond:0_1 = ebp_4 == 0
                                        
                                        if (cond:0_1
                                                || *(result[8] + (ebp_4 << 2) - 4) != 0xffffffff)
                                            return result
                        else
                            while (true)
                                void* eax_32 = sub_638110(arg1, 5)
                                
                                if (eax_32 == 0xffffffff)
                                    break
                                
                                *(result[2] + (edi_5 << 2)) = eax_32 + 1
                                edi_5 += 1
                                
                                if (edi_5 s>= result[1])
                                    goto label_639331
                    else
                        int32_t edi_4 = 0
                        
                        if (ebp_3 s<= 0)
                            goto label_639331
                        
                        while (true)
                            if (sub_638110(arg1, 1) == 0)
                                *(result[2] + (edi_4 << 2)) = 0
                            else
                                void* eax_29 = sub_638110(arg1, 5)
                                
                                if (eax_29 == 0xffffffff)
                                    break
                                
                                *(result[2] + (edi_4 << 2)) = eax_29 + 1
                            
                            edi_4 += 1
                            
                            if (edi_4 s>= result[1])
                                goto label_639331
            else if (eax_4 == 1)
                void* eax_7 = sub_638110(arg1, eax_4 + 4)
                void* ebp_2 = eax_7 + 1
                
                if (eax_7 != 0xffffffff)
                    int32_t edi_1 = result[1]
                    int32_t eax_8
                    int32_t ecx_7
                    eax_8, ecx_7 = _malloc(edi_1 << 2)
                    result[2] = eax_8
                    int32_t ebx_1 = 0
                    
                    if (edi_1 s<= 0)
                        goto label_639331
                    
                    void* var_8_1 = ebp_2 - 1
                    
                    while (true)
                        int32_t eax_10 = result[1]
                        int32_t edx_3 = 0
                        uint32_t i_2 = eax_10 - ebx_1
                        
                        if (eax_10 != ebx_1)
                            do
                                edx_3 += 1
                                i_2 u>>= 1
                            while (i_2 != 0)
                        
                        void* i_4 = sub_638110(arg1, edx_3)
                        
                        if (i_4 == 0xffffffff)
                            break
                        
                        if (var_8_1 s> 0x1f)
                            break
                        
                        if (i_4 s> result[1] - ebx_1)
                            break
                        
                        if (i_4 s> 0)
                            if ((i_4 - 1) s>> var_8_1.b s> 1)
                                break
                            
                            if (i_4 s> 0)
                                void* i_3
                                
                                do
                                    *(result[2] + (ebx_1 << 2)) = ebp_2
                                    ebx_1 += 1
                                    i_3 = i_4
                                    i_4 -= 1
                                while (i_3 != 1)
                        
                        ebp_2 += 1
                        var_8_1 += 1
                        
                        if (ebx_1 s>= result[1])
                            goto label_639331

if (result[9] != 0)
    int32_t eax_59 = result[8]
    
    if (eax_59 != 0)
        _free(eax_59)
    
    int32_t eax_60 = result[2]
    
    if (eax_60 != 0)
        _free(eax_60)
    
    __builtin_memset(result, 0, 0x28)
    _free(result)

return 0
