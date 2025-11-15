// 函数: sub_50ee10
// 地址: 0x50ee10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = *(arg1 + 0x128)
float eax = edi
float var_20 = eax

if ((eax.b & 1) != 0)
    var_20 = eax i+ 1

int32_t eax_2 = int.d(sub_4a78b0(*(arg1 + 0x140)))
int32_t esi = edi

if (eax_2 s< edi)
    esi = eax_2

int32_t eax_3 = int.d(sub_4a78b0(*(arg1 + 0x13c)))

if (eax_3 s< edi)
    edi = eax_3

if (edi s< esi)
    edi = esi

float* result = var_20 i+ (edi << 1)

if (result s>= 2)
    struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIScrollbarView::VTable
        ** eax_5 = sub_4ef140(*(arg1 + 0xac))
    int32_t* eax_6 = sub_4ef220(*(arg1 + 0xb0))
    float var_1c
    sub_50f4c0(arg1, &var_1c, &var_20)
    float xmm1_2 = sub_50f870(arg1) + var_1c
    float xmm0_6 = sub_50f8e0(arg1) + var_20
    float xmm1_3 = xmm1_2 + 1f
    float esi_1 = *(arg1 + 0x128)
    var_20 = esi_1
    var_1c = xmm0_6
    
    if ((esi_1.b & 1) != 0)
        var_20 = esi_1 i+ 1
    
    int32_t eax_9 = int.d(sub_4a78b0(*(arg1 + 0x140)))
    
    if (eax_9 s< esi_1)
        esi_1 = eax_9
    
    float xmm0_10 = sub_4a78b0(*(arg1 + 0x13c))
    float ecx_4 = *(arg1 + 0x128)
    int32_t eax_10 = int.d(xmm0_10)
    
    if (eax_10 s< ecx_4)
        ecx_4 = eax_10
    
    if (ecx_4 s< esi_1)
        ecx_4 = esi_1
    
    float xmm0_13 = _mm_cvtepi32_ps(zx.o(var_20 i+ (ecx_4 << 1))) + var_1c
    float var_14
    float var_c
    float var_8
    result = sub_50faf0(arg1, &var_c, &var_8, &var_20, &var_14)
    float xmm1_4 = var_20
    
    if (xmm1_4 <= xmm1_2)
        float xmm1_6 = var_14
        
        if (not(xmm1_3 <= xmm1_6))
            int32_t var_38_4 = int.d(xmm1_3 - xmm1_6) + eax_6[0x46]
            result = sub_4f7c10(&eax_6[0x33])
    else
        int32_t var_38_3 = eax_6[0x46] - int.d(xmm1_4 - xmm1_2)
        result = sub_4f7c10(&eax_6[0x33])
    
    float xmm0_17 = var_c
    float xmm1_7 = var_1c
    
    if (not(xmm0_17 <= xmm1_7))
        int32_t var_38_5 = eax_5[0x46] - int.d(xmm0_17 - xmm1_7)
        return sub_4f7c10(&eax_5[0x33])
    
    float xmm1_8 = var_8
    
    if (not(xmm0_13 <= xmm1_8))
        int32_t var_38_6 = int.d(xmm0_13 - xmm1_8) + eax_5[0x46]
        return sub_4f7c10(&eax_5[0x33])

return result
