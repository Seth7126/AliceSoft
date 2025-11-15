// 函数: sub_4b7570
// 地址: 0x4b7570
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float var_4 = arg1
void* esi = *(arg1 i+ 0xa0)
sub_4eec50(esi, 4, 1)
void** eax_1 = *(esi + 0x74) + 0x150

if (eax_1[5] u>= 0x10)
    eax_1 = *eax_1

int32_t* var_10 = &var_4
int32_t result = sub_6ca310(eax_1, 0x79394c)

if (result == 1)
    float xmm0_1 = *(arg1 i+ 0xf4)
    float xmm1_1 = var_4
    xmm0_1 - xmm1_1
    result:1.b = (xmm0_1 == xmm1_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, xmm1_1) ? 1 : 0) << 2
        | (xmm0_1 < xmm1_1 ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        int32_t xmm0_2 = *(arg1 i+ 0x100)
        
        if (not(xmm0_2 f> xmm1_1))
            xmm0_2 = _mm_min_ss(*(arg1 i+ 0xfc), xmm1_1)
        
        *(arg1 i+ 0xf4) = xmm0_2
        *(arg1 i+ 0x158) = 1

return result
