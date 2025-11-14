// 函数: sub_4af180
// 地址: 0x4af180
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result = *(*(arg1 + 0x60) + 0x58)
int32_t ecx_2 = (result[0x26] - result[0x25]) s>> 2

if (ecx_2 != 0)
    int32_t ebx_1 = 0
    float var_28_1 = -2.14748365e+09f
    float var_20 = -2.14748365e+09f
    float var_24_1 = -2.14748365e+09f
    float var_1c = -2.14748365e+09f
    
    if (ecx_2 s> 0)
        do
            int32_t esi_1
            
            if (ebx_1 s>= 0)
                void* ecx_3 = *(*(arg1 + 0x60) + 0x58)
                
                if ((*(ecx_3 + 0x98) - *(ecx_3 + 0x94)) s>> 2 s> ebx_1)
                    esi_1 = *(*(ecx_3 + 0x94) + (ebx_1 << 2))
                else
                    esi_1 = 0
            else
                esi_1 = 0
            
            int32_t* edi_1 = *(arg1 + 0x64)
            int32_t var_40_1 = esi_1
            
            if (sub_4a55e0(edi_1) != 0)
                int32_t var_40_2 = esi_1
                struct partsengine::CPartsList::VTable** eax_7 = sub_4a52a0(edi_1)
                int32_t edi_2
                
                if (eax_7 != 0)
                    edi_2 = eax_7[2]
                
                struct IInterface::VTable** vFunc_0_1
                
                if (eax_7 == 0 || esi_1 s< edi_2 || eax_7[1] + edi_2 s<= esi_1)
                    vFunc_0_1 = nullptr
                else
                    vFunc_0_1 = eax_7[3][esi_1 - edi_2].vFunc_0
                    
                    if (vFunc_0_1 == 0)
                        vFunc_0_1 = sub_4e7720(eax_7, esi_1)
                
                if (sub_4a26a0(vFunc_0_1, 1) != 0)
                    int32_t xmm0_1 = vFunc_0_1[0x129]
                    int32_t* ecx_10 = vFunc_0_1[0x17]
                    int32_t xmm0_2 = vFunc_0_1[0x12a]
                    vFunc_0_1[0x129] = 0
                    vFunc_0_1[0x12a] = 0
                    (*(*ecx_10 + 0x30))(1)
                    int32_t* ecx_11 = vFunc_0_1[0x17]
                    float var_18 = fconvert.s(unimplemented  {fstp dword [esp+0x28], st0})
                    unimplemented  {fstp dword [esp+0x28], st0}
                    int32_t eax_16 = (*(*ecx_11 + 0x28))(1)
                    void* vFunc_0 = vFunc_0_1[0x17]->vFunc_0
                    float xmm0_4 = _mm_cvtepi32_ps(zx.o(eax_16))
                    int32_t eax_17 = *(vFunc_0 + 0x34)
                    float xmm0_5 = xmm0_4 + var_18
                    float var_c = xmm0_5
                    eax_17(1)
                    int32_t* ecx_13 = vFunc_0_1[0x17]
                    var_18 = fconvert.s(unimplemented  {fstp dword [esp+0x28], st0})
                    unimplemented  {fstp dword [esp+0x28], st0}
                    int16_t top = top + 2
                    int32_t eax_19 = (*(*ecx_13 + 0x2c))(1)
                    vFunc_0_1[0x129] = xmm0_1
                    float* eax_20 = &var_c
                    vFunc_0_1[0x12a] = xmm0_2
                    float xmm0_7 = _mm_cvtepi32_ps(zx.o(eax_19))
                    
                    if (xmm0_5 <= var_28_1)
                        eax_20 = &var_20
                    
                    float xmm0_8 = xmm0_7 + var_18
                    float xmm1_4 = *eax_20
                    float* eax_21 = &var_18
                    var_28_1 = xmm1_4
                    var_20 = xmm1_4
                    var_18 = xmm0_8
                    
                    if (xmm0_8 <= var_24_1)
                        eax_21 = &var_1c
                    
                    float xmm1_5 = *eax_21
                    var_24_1 = xmm1_5
                    var_1c = xmm1_5
            
            ebx_1 += 1
        while (ebx_1 s< ecx_2)
    
    float xmm2_2 = var_28_1 - sub_4a1c10(*(arg1 + 0x60))
    void* ecx_15 = *(arg1 + 0x60)
    *arg2 = xmm2_2
    result = arg3
    *result = var_24_1 - sub_4a1cf0(ecx_15)

return result
