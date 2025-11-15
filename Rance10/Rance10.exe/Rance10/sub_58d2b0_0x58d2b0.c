// 函数: sub_58d2b0
// 地址: 0x58d2b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result

if (arg2 u> 6)
label_58d2f0:
    
    if (*(*(arg1 + 4) + 0x75) != 0)
        result.b = 0
        return result
else
    switch (arg2)
        case nullptr
            if (*(*(arg1 + 4) + 0x75) != 0)
                result.b = 0
                return result
        case 1
            if (*(*(arg1 + 0xc) + 2) != 0)
                goto label_58d2f0
            
            result.b = 0
            return result
        case 2
            if (*(*(arg1 + 4) + 0x75) != 0)
                if (0 f>= *(arg1 + 0x5c) || *(*(arg1 + 0xc) + 3) == 0)
                    result.b = 0
                    return result
                
                result.b = 1
                return result
            
            float xmm0_4 = *(arg1 + 0x5c)
            xmm0_4 - 1f
            result:1.b = (xmm0_4 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_4, 1f) ? 1 : 0) << 2
                | (xmm0_4 < 1f ? 1 : 0)
            bool p_8 = unimplemented  {test ah, 0x44}
            
            if (not(p_8) || 0 f>= *(arg1 + 0x5c) || *(*(arg1 + 0xc) + 3) == 0)
                result.b = 0
                return result
            
            result.b = 1
            return result
        case 3
            goto label_58d2f0
        case 4
            void* edx_1 = *(arg1 + 4)
            
            if (*(edx_1 + 0x75) == 0)
                float xmm0_2 = *(arg1 + 0x5c)
                xmm0_2 - 1f
                result:1.b = (xmm0_2 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, 1f) ? 1 : 0) << 2
                    | (xmm0_2 < 1f ? 1 : 0)
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (not(p_4) || 0 f>= *(arg1 + 0x5c))
                    result.b = 0
                    return result
            else if (0 f>= *(arg1 + 0x5c))
                result.b = 0
                return result
            
            if (edx_1 != 0 && *(edx_1 + 0x70) == 1)
                result.b = 0
                return result
            
            result.b = 1
            return result
        case 5
            void* edx_2 = *(arg1 + 4)
            
            if (*(edx_2 + 0x75) == 0)
                float xmm0_3 = *(arg1 + 0x5c)
                xmm0_3 - 1f
                result:1.b = (xmm0_3 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, 1f) ? 1 : 0) << 2
                    | (xmm0_3 < 1f ? 1 : 0)
                bool p_6 = unimplemented  {test ah, 0x44}
                
                if (not(p_6) || 0 f>= *(arg1 + 0x5c))
                    result.b = 0
                    return result
            else if (0 f>= *(arg1 + 0x5c))
                result.b = 0
                return result
            
            if (edx_2 != 0 && *(edx_2 + 0x70) != 1)
                result.b = 0
                return result
            
            result.b = 1
            return result
        case 6
            result.b = 0
            return result

float xmm0_1 = *(arg1 + 0x5c)
xmm0_1 - 1f
result:1.b =
    (xmm0_1 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 1f) ? 1 : 0) << 2 | (xmm0_1 < 1f ? 1 : 0)
bool p_2 = unimplemented  {test ah, 0x44}

if (not(p_2))
    result.b = 1
    return result

result.b = 0
return result
