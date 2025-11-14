// 函数: sub_5f3ed0
// 地址: 0x5f3ed0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

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
        
        if (sub_5f3e40(arg1 + 0xc, arg2 + 0xc) == 0)
            if (sub_5f3e80(arg1 + 0xc, arg2 + 0xc) != 0)
                return 0
            
            int32_t xmm1_1 = *(arg1 + 0x10)
            int32_t xmm0_1 = *(arg2 + 0x10)
            
            if (not(xmm0_1 f> xmm1_1))
                if (xmm1_1 f> xmm0_1)
                    return 0
                
                int32_t xmm1_2 = *(arg1 + 0x14)
                int32_t xmm0_2 = *(arg2 + 0x14)
                
                if (not(xmm0_2 f> xmm1_2))
                    if (xmm1_2 f> xmm0_2)
                        return 0
                    
                    if (sub_5f3e40(arg1 + 0x18, arg2 + 0x18) == 0)
                        return 0
        
        return 1

result.b = 1
return result
