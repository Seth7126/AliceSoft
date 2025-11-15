// 函数: sub_5c3f70
// 地址: 0x5c3f70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 4) == 0)
    return 

sub_58e6e0(arg1 + 0x60, arg4)
void* eax_1 = sub_5b7570(arg1 + 0x70)
*(arg1 + 0x14) = *eax_1
*(arg1 + 0x24) = *(eax_1 + 0x10)
*(arg1 + 0x34) = *(eax_1 + 0x20)
*(arg1 + 0x44) = *(eax_1 + 0x30)
float var_44[0x4][0x4]
sub_6cb020(eax_1, eax_1, &var_44, arg3)
float xmm1_1 = *(arg1 + 0xcc)
float xmm3 = *(arg1 + 0xd0)
float xmm2_1 = *(arg1 + 0xd4)
float xmm4_5 =
    *(arg3 + 8) * xmm1_1 + *(arg3 + 0x18) * xmm3 + *(arg3 + 0x28) * xmm2_1 f+ *(arg3 + 0x38)
float xmm5_5 =
    *(arg3 + 0xc) * xmm1_1 + *(arg3 + 0x1c) * xmm3 + *(arg3 + 0x2c) * xmm2_1 f+ *(arg3 + 0x3c)
xmm5_5 - 1f
float (* eax_2)[0x4]
eax_2:1.b =
    (xmm5_5 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm5_5, 1f) ? 1 : 0) << 2 | (xmm5_5 < 1f ? 1 : 0)
bool p_2 = unimplemented  {test ah, 0x44}

if (p_2)
    xmm5_5 f- 0
    eax_2:1.b = (xmm5_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm5_5, 0f) ? 1 : 0) << 2
        | (xmm5_5 < 0f ? 1 : 0)
    bool p_4 = unimplemented  {test ah, 0x44}
    
    if (p_4)
        xmm4_5 = xmm4_5 * 1f / xmm5_5

*(arg1 + 0x21c) = xmm4_5
sub_58e620(arg1 + 0x60, &var_44)

if (*(arg1 + 0x11) != 0)
    __Smtx_lock_shared(arg1 + 0xc)
    void* esi_2 = *(arg1 + 8)
    __Smtx_unlock_shared(arg1 + 0xc)
    void* edx_2 = arg1 + 0x80
    
    if (*(arg1 + 0x84) f> *(arg1 + 0x80))
        edx_2 = arg1 + 0x84
    
    if (*(arg1 + 0x88) f> *edx_2)
        edx_2 = arg1 + 0x88
    
    float xmm0_17 = *edx_2 f* *(esi_2 + 0x30)
    __Smtx_lock_shared(arg1 + 0xc)
    void* esi_3 = *(arg1 + 8)
    __Smtx_unlock_shared(arg1 + 0xc)
    int32_t xmm0_18 = *(eax_1 + 0x38)
    float xmm0_20 = *(esi_3 + 0xe0) + arg2
    *(arg1 + 0x224) = _mm_unpacklo_ps(*(eax_1 + 0x30), *(eax_1 + 0x34))
    *(arg1 + 0x22c) = xmm0_18
    *(arg1 + 0x230) = xmm0_20 * xmm0_17
    return 

*(arg1 + 0x224) = 0
*(arg1 + 0x228) = 0
*(arg1 + 0x22c) = 0
*(arg1 + 0x230) = 0
