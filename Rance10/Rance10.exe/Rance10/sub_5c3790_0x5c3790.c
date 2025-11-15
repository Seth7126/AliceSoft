// 函数: sub_5c3790
// 地址: 0x5c3790
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm0 = *(arg1 + 0x50)
xmm0 f- 0
void* eax
eax:1.b = (xmm0 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 0f) ? 1 : 0) << 2 | (xmm0 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    float xmm0_1 = *(arg1 + 0x54)
    xmm0_1 f- 0
    eax:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
        | (xmm0_1 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (not(p_3))
        eax = sub_5c2090(arg2, *(arg1 + 0x18), *(arg1 + 0x1c))
        
        if (eax != 0 && ((*(eax + 0x2c) - *(eax + 0x28)) & 0xfffffff8) s<= 8)
            void* i
            
            for (i = *(arg1 + 0x24); i != *(arg1 + 0x28); i += 0x78)
                int32_t j = 0
                int32_t* edx_1 = i + 0xc
                
                do
                    int32_t xmm0_2 = *edx_1
                    int32_t xmm0_3
                    
                    if (not(0 f>= xmm0_2) && not(xmm0_2 f>= 1f))
                        xmm0_3 = edx_1[1]
                    
                    if (0 f>= xmm0_2 || xmm0_2 f>= 1f || 0 f>= xmm0_3 || xmm0_3 f>= 1f)
                        i.b = 0
                        return i
                    
                    j += 1
                    edx_1 = &edx_1[0xa]
                while (j s< 3)
            
            i.b = *(arg1 + 0x76) == 0
            return i

eax.b = 0
return eax
