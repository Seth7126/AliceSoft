// 函数: sub_58d3c0
// 地址: 0x58d3c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = *(arg1 + 8)
int32_t ecx = *(arg2 + 8)

if (result u>= ecx)
    if (result u> ecx)
        result.b = 0
        return result
    
    int32_t xmm1_1 = *(arg1 + 0x3c)
    int32_t xmm0_1 = *(arg2 + 0x3c)
    
    if (not(xmm0_1 f> xmm1_1))
        if (xmm1_1 f> xmm0_1)
        label_58d434:
            int32_t xmm0_5 = *(arg1 + 0x3c)
            int32_t xmm1_4 = *(arg2 + 0x3c)
            
            if (xmm0_5 f> xmm1_4)
                result.b = 0
                return result
            
            if (not(xmm1_4 f> xmm0_5))
                int32_t xmm0_6 = *(arg1 + 0x40)
                int32_t xmm1_5 = *(arg2 + 0x40)
                
                if (xmm0_6 f> xmm1_5)
                    result.b = 0
                    return result
                
                if (not(xmm1_5 f> xmm0_6))
                    int32_t xmm0_7 = *(arg1 + 0x44)
                    int32_t xmm1_6 = *(arg2 + 0x44)
                    
                    if (xmm0_7 f> xmm1_6
                            || (not(xmm1_6 f> xmm0_7) && *(arg1 + 0x48) f> *(arg2 + 0x48)))
                        result.b = 0
                        return result
            
            int32_t xmm1_7 = *(arg1 + 0x4c)
            int32_t xmm0_9 = *(arg2 + 0x4c)
            
            if (not(xmm0_9 f> xmm1_7))
                if (xmm1_7 f> xmm0_9)
                label_58d4d8:
                    
                    if (sub_6caac0(arg1 + 0x4c, arg2 + 0x4c).b != 0)
                        result.b = 0
                        return result
                    
                    int32_t xmm1_10 = *(arg1 + 0x60)
                    int32_t xmm0_13 = *(arg2 + 0x60)
                    
                    if (not(xmm0_13 f> xmm1_10))
                        if (xmm1_10 f> xmm0_13)
                            result.b = 0
                            return result
                        
                        result = *(arg1 + 0x64)
                        int32_t ecx_2 = *(arg2 + 0x64)
                        
                        if (result s>= ecx_2)
                            if (result s> ecx_2)
                                result.b = 0
                                return result
                            
                            int32_t xmm1_11 = *(arg1 + 0x70)
                            int32_t xmm0_14 = *(arg2 + 0x70)
                            
                            if (not(xmm0_14 f> xmm1_11)
                                    && (xmm1_11 f> xmm0_14 || *(arg2 + 0x74) f<= *(arg1 + 0x74)))
                                result.b = 0
                                return result
                else
                    int32_t xmm1_8 = *(arg1 + 0x50)
                    int32_t xmm0_10 = *(arg2 + 0x50)
                    
                    if (not(xmm0_10 f> xmm1_8))
                        if (xmm1_8 f> xmm0_10)
                            goto label_58d4d8
                        
                        int32_t xmm1_9 = *(arg1 + 0x54)
                        int32_t xmm0_11 = *(arg2 + 0x54)
                        
                        if (not(xmm0_11 f> xmm1_9)
                                && (xmm1_9 f> xmm0_11 || not(*(arg2 + 0x58) f> *(arg1 + 0x58))))
                            goto label_58d4d8
        else
            int32_t xmm1_2 = *(arg1 + 0x40)
            int32_t xmm0_2 = *(arg2 + 0x40)
            
            if (not(xmm0_2 f> xmm1_2))
                if (xmm1_2 f> xmm0_2)
                    goto label_58d434
                
                int32_t xmm1_3 = *(arg1 + 0x44)
                int32_t xmm0_3 = *(arg2 + 0x44)
                
                if (not(xmm0_3 f> xmm1_3)
                        && (xmm1_3 f> xmm0_3 || not(*(arg2 + 0x48) f> *(arg1 + 0x48))))
                    goto label_58d434

result.b = 1
return result
