// 函数: sub_643940
// 地址: 0x643940
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = *(arg1 + 4)
int32_t ecx = *(arg2 + 4)

if (result s>= ecx)
    if (result s> ecx)
        result.b = 0
        return result
    
    result = *(arg1 + 8)
    int32_t ecx_1 = *(arg2 + 8)
    
    if (result s>= ecx_1)
        if (result s> ecx_1)
            result.b = 0
            return result
        
        if (sub_403010(arg1 + 0xc, arg2 + 0xc) == 0)
            if (sub_403050(arg1 + 0xc, arg2 + 0xc) != 0)
                return 0
            
            int32_t xmm1_1 = *(arg1 + 0x1c)
            int32_t xmm0_1 = *(arg2 + 0x1c)
            
            if (not(xmm0_1 f> xmm1_1))
                if (xmm1_1 f> xmm0_1)
                    return 0
                
                int32_t xmm1_2 = *(arg1 + 0x20)
                int32_t xmm0_2 = *(arg2 + 0x20)
                
                if (not(xmm0_2 f> xmm1_2))
                    if (xmm1_2 f> xmm0_2)
                        return 0
                    
                    if (sub_403010(arg1 + 0x24, arg2 + 0x24) == 0)
                        return 0
        
        return 1

result.b = 1
return result
