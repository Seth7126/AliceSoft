// 函数: sub_5df310
// 地址: 0x5df310
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
int32_t* result = *arg2
int32_t* ecx = *arg1
int32_t edi = *result
int32_t esi = *ecx

if (esi s>= edi)
    if (esi s> edi)
        result.b = 0
        return result
    
    int32_t esi_1 = ecx[1]
    int32_t edi_1 = result[1]
    
    if (esi_1 s>= edi_1)
        if (esi_1 s> edi_1)
            result.b = 0
            return result
        
        int32_t esi_2 = ecx[2]
        int32_t edi_2 = result[2]
        
        if (esi_2 u>= edi_2)
            if (esi_2 u> edi_2)
                result.b = 0
                return result
            
            int32_t* ebx
            ebx.b = ecx[9].b
            ebx:1.b = result[9].b
            var_4:3.b = ebx.b
            
            if (ebx.b u>= ebx:1.b)
                if (ebx.b u> ebx:1.b)
                    result.b = 0
                    return result
                
                int32_t xmm1_1 = ecx[3]
                int32_t xmm0_1 = result[3]
                
                if (not(xmm0_1 f> xmm1_1) && (xmm1_1 f> xmm0_1 || not(result[4] f> ecx[4])))
                    int32_t xmm1_2 = result[3]
                    
                    if (xmm1_1 f> xmm1_2 || (not(xmm1_2 f> xmm1_1) && ecx[4] f> result[4]))
                        result.b = 0
                        return result
                    
                    int32_t xmm1_3 = ecx[5]
                    int32_t xmm0_5 = result[5]
                    
                    if (not(xmm0_5 f> xmm1_3) && (xmm1_3 f> xmm0_5 || not(result[6] f> ecx[6])))
                        int32_t xmm1_4 = result[5]
                        
                        if (xmm1_3 f> xmm1_4 || (not(xmm1_4 f> xmm1_3) && ecx[6] f> result[6]))
                            result.b = 0
                            return result
                        
                        int32_t xmm1_5 = ecx[7]
                        int32_t xmm0_9 = result[7]
                        
                        if (not(xmm0_9 f> xmm1_5) && (xmm1_5 f> xmm0_9 || not(result[8] f> ecx[8])))
                            int32_t xmm1_6 = result[7]
                            
                            if (xmm1_5 f> xmm1_6 || (not(xmm1_6 f> xmm1_5) && ecx[8] f> result[8]))
                                result.b = 0
                                return result
                            
                            if ((arg1[2] - arg1[1]) s>> 2 u>= (arg2[2] - arg2[1]) s>> 2)
                                if ((arg1[2] - arg1[1]) s>> 2 u<= (arg2[2] - arg2[1]) s>> 2)
                                    int32_t i = 0
                                    
                                    if (((arg1[2] - arg1[1]) & 0xfffffffc) s> 0)
                                        int32_t** ecx_7 = arg1[1]
                                        int32_t* ebx_3 = arg2[1] - ecx_7
                                        
                                        do
                                            result = *ecx_7
                                            int32_t edi_3 = *(ebx_3 + ecx_7)
                                            
                                            if (result s< edi_3)
                                                goto label_5df4bc
                                            
                                            if (result s> edi_3)
                                                break
                                            
                                            i += 1
                                            ecx_7 = &ecx_7[1]
                                        while (i s< (arg1[2] - arg1[1]) s>> 2)
                                
                                result.b = 0
                                return result

label_5df4bc:
result.b = 1
return result
