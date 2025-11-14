// 函数: sub_5491b0
// 地址: 0x5491b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result

if (arg2 u> 6)
label_5491ed:
    
    if (*(arg1 + 0x5c) != 0)
        result.b = 0
        return result
else
    switch (arg2)
        case nullptr
            if (*(arg1 + 0x5c) != 0)
                result.b = 0
                return result
        case 1
            if (*(arg1 + 0xbe) != 0)
                goto label_5491ed
            
            result.b = 0
            return result
        case 2
            if (*(arg1 + 0x5c) != 0)
                if (0 f>= *(arg1 + 0xb0) || *(arg1 + 0xe4) == 0)
                    result.b = 0
                    return result
                
                result.b = 1
                return result
            
            float xmm0_4 = *(arg1 + 0xb0)
            xmm0_4 - 1f
            result:1.b = (xmm0_4 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_4, 1f) ? 1 : 0) << 2
                | (xmm0_4 < 1f ? 1 : 0)
            bool p_8 = unimplemented  {test ah, 0x44}
            
            if (not(p_8) || 0 f>= *(arg1 + 0xb0) || *(arg1 + 0xe4) == 0)
                result.b = 0
                return result
            
            result.b = 1
            return result
        case 3
            goto label_5491ed
        case 4
            if (*(arg1 + 0x5c) == 0)
                float xmm0_2 = *(arg1 + 0xb0)
                xmm0_2 - 1f
                result:1.b = (xmm0_2 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, 1f) ? 1 : 0) << 2
                    | (xmm0_2 < 1f ? 1 : 0)
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (not(p_4) || 0 f>= *(arg1 + 0xb0))
                    result.b = 0
                    return result
            else if (0 f>= *(arg1 + 0xb0))
                result.b = 0
                return result
            
            result = *(arg1 + 4)
            
            if (result != 0 && *(result + 0x6c) == 1)
                result.b = 0
                return result
            
            result.b = 1
            return result
        case 5
            if (*(arg1 + 0x5c) == 0)
                float xmm0_3 = *(arg1 + 0xb0)
                xmm0_3 - 1f
                result:1.b = (xmm0_3 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, 1f) ? 1 : 0) << 2
                    | (xmm0_3 < 1f ? 1 : 0)
                bool p_6 = unimplemented  {test ah, 0x44}
                
                if (not(p_6) || 0 f>= *(arg1 + 0xb0))
                    result.b = 0
                    return result
            else if (0 f>= *(arg1 + 0xb0))
                result.b = 0
                return result
            
            result = *(arg1 + 4)
            
            if (result != 0 && *(result + 0x6c) != 1)
                result.b = 0
                return result
            
            result.b = 1
            return result
        case 6
            result.b = 0
            return result

float xmm0_1 = *(arg1 + 0xb0)
xmm0_1 - 1f
result:1.b =
    (xmm0_1 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 1f) ? 1 : 0) << 2 | (xmm0_1 < 1f ? 1 : 0)
bool p_2 = unimplemented  {test ah, 0x44}

if (not(p_2))
    result.b = 1
    return result

result.b = 0
return result
