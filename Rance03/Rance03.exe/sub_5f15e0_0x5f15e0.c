// 函数: sub_5f15e0
// 地址: 0x5f15e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ebx = arg5
float edi = arg4
float ebx_1
int32_t ebp

if (*(edi i+ 4) s< 0x100)
    ebp = sub_5f1b30(edi, ebx)
    
    if (ebx[4] != 0)
        ebx_1 = *(edi i+ 8)
    else
        ebx_1 = 0f
    
    int32_t ecx_4 = *(arg1 + 0x44)
    int32_t* ecx_5 = ecx_4 * ebp
    int32_t var_20_4 = ecx_4 i* ebx_1
    
    if (sub_5f1950(arg1, ecx_5, ecx_5) != 0 && sub_5f1b90(arg1, edi) != 0
            && sub_5f1c80(arg1, arg5) != 0)
        goto label_5f16a9
else
    int32_t* var_20 = &arg4
    float var_2c = edi
    int32_t var_c
    
    if (sub_5f1810(arg1, var_2c, ebx, &var_c) != 0)
        ebx_1 = arg4
        ebp = var_c
    label_5f16a9:
        float xmm0_1 = *(edi i+ 0x10)
        arg4 = xmm0_1
        arg5 = xmm0_1
        int32_t* var_24
        var_24.q = fconvert.d(fconvert.t(arg4))
        int32_t mxcsr
        int16_t x87control
        int16_t x87control_1
        long double st0_1
        st0_1, x87control_1 = sub_6b1380(mxcsr, x87control, var_24)
        float ecx_9 = *(edi i+ 8)
        int32_t edx_1 = ecx_9
        float xmm0_2 = *(edi i+ 0x14)
        arg4 = fconvert.s(st0_1)
        int32_t eax_13 = int.d(fconvert.t(arg4))
        arg4 = ecx_9
        var_24.q = fconvert.d(fconvert.t(xmm0_2))
        
        if (eax_13 s< ecx_9)
            edx_1 = eax_13
        
        var_c = xmm0_2
        long double st0_2 = sub_6b1380(mxcsr, x87control_1, var_24)
        float ecx_10 = arg4
        int32_t eax_14 = int.d(fconvert.t(fconvert.s(st0_2)))
        float xmm0_4 = _mm_cvtepi32_ps(zx.o(edx_1))
        
        if (eax_14 s< ecx_10)
            ecx_10 = eax_14
        
        arg4 = ecx_10
        
        if (not(xmm0_4 > arg5))
            arg5 = xmm0_4
        
        int32_t xmm0_6 = _mm_cvtepi32_ps(zx.o(ecx_10))
        
        if (not(xmm0_6 f> var_c))
            var_c = xmm0_6
        
        if (edx_1 s<= 0)
            goto label_5f1786
        
        if (sub_5f0c50(arg1 + 0x4c, ebp, ebx_1, edx_1) != 0)
            float var_24_4 = arg5
            
            if (sub_5f0d20(arg1 + 0x4c, arg1 + 0xc, var_2c) != 0)
                ecx_10 = arg4
            label_5f1786:
                
                if (ecx_10 s<= 0)
                label_5f17cb:
                    int32_t* result
                    int32_t edx_3
                    result, edx_3 = sub_5f1e00(arg1, edi, ebp, ebx_1)
                    
                    if (result != 0)
                        if (sub_5f1e80(result, edx_3, arg1, result, edi, arg3, arg2) != 0)
                            return result
                        
                        (*(*result + 4))()
                else if (sub_5f0c50(arg1 + 0x94, ebp, ebx_1, ecx_10) != 0)
                    int32_t var_24_6 = var_c
                    
                    if (sub_5f0d20(arg1 + 0x94, arg1 + 0xc, var_2c) != 0)
                        goto label_5f17cb
    else
        ebp = sub_5f1b30(edi, ebx)
        
        if (ebx[4] != 0)
            ebx_1 = *(edi i+ 8)
        else
            ebx_1 = 0f
        
        int32_t ecx = *(arg1 + 0x44)
        int32_t* ecx_1 = ecx * ebp
        int32_t var_20_2 = ecx i* ebx_1
        
        if (sub_5f1950(arg1, ecx_1, ecx_1) != 0 && sub_5f1ad0(arg1) != 0)
            goto label_5f16a9
return 0
