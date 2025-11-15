// 函数: sub_479b10
// 地址: 0x479b10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_1 = (*(*arg6 + 0x10))()
int32_t edi = (*(*arg6 + 0x14))()
int32_t eax_3 = int.d(fconvert.t(arg7))
int32_t var_4 = edi

if (eax_3 == 0 && int.d(fconvert.t(arg8)) == 0)
    float xmm0_2 = _mm_cvtepi32_ps(zx.o(eax_1))
    arg9 - xmm0_2
    int32_t eax_4
    eax_4:1.b = (arg9 == xmm0_2 ? 1 : 0) << 6 | (is_unordered.d(arg9, xmm0_2) ? 1 : 0) << 2
        | (arg9 < xmm0_2 ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (not(p_2))
        float xmm0_4 = _mm_cvtepi32_ps(zx.o(edi))
        arg10 - xmm0_4
        eax_4:1.b = (arg10 == xmm0_4 ? 1 : 0) << 6 | (is_unordered.d(arg10, xmm0_4) ? 1 : 0) << 2
            | (arg10 < xmm0_4 ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (not(p_4) && arg4 s> eax_1 && arg5 s> edi && mods.dp.d(sx.q(arg4), eax_1) == 0
                && mods.dp.d(sx.q(arg5), edi) == 0)
            int32_t var_20 = edi
            int32_t var_24 = eax_1
            return sub_479d50(arg1, arg2, arg3, arg4, arg5, arg6)

int32_t* ebx_1 = (*(*arg1 + 8))(arg2, arg3)
int32_t eax_15
int32_t edx_6
edx_6:eax_15 = sx.q((*(*arg1 + 0x1c))())
int32_t eax_19 = (*(*arg6 + 8))(0, 0)
int32_t eax_22
int32_t edx_10
edx_10:eax_22 = sx.q((*(*arg6 + 0x1c))())
int32_t edx_12 = int.d(arg8)
float xmm1_4 = arg8 - _mm_cvtepi32_ps(zx.o(edx_12))
float xmm1_7 = arg9 / _mm_cvtepi32_ps(zx.o(arg4))
int32_t edx_14 = (edx_12 << 0x10) - int.d(xmm1_4 * -65536f)
arg1 = edx_14
int32_t ecx_7 = int.d(xmm1_7)
float xmm1_8 = xmm1_7 - _mm_cvtepi32_ps(zx.o(ecx_7))
float xmm1_11 = arg10 / _mm_cvtepi32_ps(zx.o(arg5))
int32_t esi_3 = int.d(xmm1_11)
int32_t result = int.d((xmm1_11 - _mm_cvtepi32_ps(zx.o(esi_3))) * -65536f)
arg6 = (esi_3 << 0x10) - result

if (arg5 s> 0)
    int32_t var_c_2 = (eax_3 << 0x10) - int.d((arg7 - _mm_cvtepi32_ps(zx.o(eax_3))) * -65536f)
    int32_t i
    
    do
        int32_t eax_29 = edx_14 s>> 0x10
        
        if (eax_29 s>= edi)
            eax_29 = edi - 1
        
        int32_t* esi_7 = arg6
        int32_t eax_32 = var_c_2
        
        if (arg4 s> 0)
            int32_t j_1 = arg4
            int32_t j
            
            do
                int32_t edi_2 = eax_32 s>> 0x10
                
                if (edi_2 s>= eax_1)
                    edi_2 = eax_1 - 1
                
                eax_32 += (ecx_7 << 0x10) - int.d(xmm1_8 * -65536f)
                *ebx_1 =
                    *(eax_19 + ((eax_29 * ((eax_22 + (edx_10 & 3)) s>> 2)) << 2) i+ (edi_2 << 2))
                ebx_1 = &ebx_1[1]
                j = j_1
                j_1 -= 1
            while (j != 1)
            edx_14 = arg1
            esi_7 = arg6
        
        edx_14 += esi_7
        arg1 = edx_14
        result = (((eax_15 + (edx_6 & 3)) s>> 2) - arg4) << 2
        edi = var_4
        ebx_1 += result
        i = arg5
        arg5 -= 1
    while (i != 1)

return result
