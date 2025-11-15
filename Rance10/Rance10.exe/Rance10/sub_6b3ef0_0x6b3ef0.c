// 函数: sub_6b3ef0
// 地址: 0x6b3ef0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
int32_t var_18 = 0x28
int32_t var_1c = 1
int32_t* ebp = arg1
void** result = _calloc()
result[9] = 1

if (sub_6b2ec0(ebp, 0x18) == 0x564342)
    *result = sub_6b2ec0(ebp, 0x10)
    void* i_1 = sub_6b2ec0(ebp, 0x18)
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
            void* eax_3 = sub_6b2ec0(ebp, 1)
            
            if (eax_3 == 0)
                void* eax_14 = sub_6b2ec0(ebp, 1)
                int32_t ebx_3 = result[1]
                int32_t eax_17
                int32_t edx_4
                edx_4:eax_17 = sx.q(ebp[1] + 7)
                int32_t eax_20
                eax_20.b = eax_14 == 0
                
                if ((((eax_20 << 2) + 1) * ebx_3 + 7) s>> 3
                        s<= ebp[4] - ((eax_17 + (edx_4 & 7)) s>> 3) - *ebp)
                    int32_t var_18_2 = ebx_3 << 2
                    result[2] = sub_705e22()
                    
                    if (eax_14 == 0)
                        int32_t edi_4 = 0
                        
                        if (result[1] s<= 0)
                        label_6b412b:
                            void* eax_33 = sub_6b2ec0(ebp, 4)
                            result[3] = eax_33
                            
                            if (eax_33 == 0)
                                return result
                            
                            if (eax_33 - 1 u<= 1)
                                result[4] = sub_6b2ec0(ebp, 0x20)
                                result[5] = sub_6b2ec0(ebp, 0x20)
                                result[6] = sub_6b2ec0(ebp, 4) + 1
                                void* eax_39 = sub_6b2ec0(ebp, 1)
                                result[7] = eax_39
                                
                                if (eax_39 != 0xffffffff)
                                    int32_t eax_40 = result[3]
                                    int32_t ebx_4 = 0
                                    
                                    if (eax_40 == 1)
                                        if (*result != 0)
                                            ebx_4 = sub_6bf240(result)
                                        else
                                            ebx_4 = 0
                                    else if (eax_40 == 2)
                                        ebx_4 = *result * result[1]
                                    
                                    int32_t eax_46
                                    int32_t edx_6
                                    edx_6:eax_46 = sx.q(ebp[1] + 7)
                                    
                                    if ((result[6] * ebx_4 + 7) s>> 3
                                            s<= ebp[4] - ((eax_46 + (edx_6 & 7)) s>> 3) - *ebp)
                                        int32_t var_18_3 = ebx_4 << 2
                                        result[8] = sub_705e22()
                                        int32_t edi_5 = 0
                                        bool cond:0_1 = ebx_4 == 0
                                        
                                        if (ebx_4 s> 0)
                                            do
                                                *(result[8] + (edi_5 << 2)) =
                                                    sub_6b2ec0(ebp, result[6])
                                                edi_5 += 1
                                            while (edi_5 s< ebx_4)
                                            
                                            cond:0_1 = ebx_4 == 0
                                        
                                        if (cond:0_1
                                                || *(result[8] + (ebx_4 << 2) - 4) != 0xffffffff)
                                            return result
                        else
                            while (true)
                                void* eax_31 = sub_6b2ec0(ebp, 5)
                                
                                if (eax_31 == 0xffffffff)
                                    break
                                
                                *(result[2] + (edi_4 << 2)) = eax_31 + 1
                                edi_4 += 1
                                
                                if (edi_4 s>= result[1])
                                    goto label_6b412b
                    else
                        int32_t edi_3 = 0
                        
                        if (result[1] s<= 0)
                            goto label_6b412b
                        
                        while (true)
                            if (sub_6b2ec0(ebp, 1) == 0)
                                *(result[2] + (edi_3 << 2)) = 0
                            else
                                void* eax_28 = sub_6b2ec0(ebp, 5)
                                
                                if (eax_28 == 0xffffffff)
                                    break
                                
                                *(result[2] + (edi_3 << 2)) = eax_28 + 1
                            
                            edi_3 += 1
                            
                            if (edi_3 s>= result[1])
                                goto label_6b412b
            else if (eax_3 == 1)
                void* eax_6 = sub_6b2ec0(ebp, eax_3 + 4)
                void* ebx_2 = eax_6 + 1
                
                if (eax_6 != 0xffffffff)
                    int32_t var_18_1 = result[1] << 2
                    int32_t edi_1 = 0
                    result[2] = sub_705e22()
                    
                    if (result[1] s<= 0)
                        goto label_6b412b
                    
                    var_4 = ebx_2 - 1
                    
                    while (true)
                        int32_t eax_9 = result[1]
                        int32_t edx_3 = 0
                        uint32_t i_2 = eax_9 - edi_1
                        
                        if (eax_9 != edi_1)
                            do
                                edx_3 += 1
                                i_2 u>>= 1
                            while (i_2 != 0)
                        
                        void* i_4 = sub_6b2ec0(ebp, edx_3)
                        
                        if (i_4 == 0xffffffff)
                            break
                        
                        if (var_4 s> 0x1f)
                            break
                        
                        if (i_4 s> result[1] - edi_1)
                            break
                        
                        if (i_4 s> 0)
                            if ((i_4 - 1) s>> var_4.b s> 1)
                                break
                            
                            if (i_4 s> 0)
                                void* i_3
                                
                                do
                                    *(result[2] + (edi_1 << 2)) = ebx_2
                                    edi_1 += 1
                                    i_3 = i_4
                                    i_4 -= 1
                                while (i_3 != 1)
                        
                        ebx_2 += 1
                        var_4 += 1
                        
                        if (edi_1 s>= result[1])
                            goto label_6b412b

if (result[9] != 0)
    int32_t eax_58 = result[8]
    
    if (eax_58 != 0)
        _free(eax_58)
    
    int32_t eax_59 = result[2]
    
    if (eax_59 != 0)
        _free(eax_59)
    
    __builtin_memset(result, 0, 0x28)
    _free(result)

return 0
