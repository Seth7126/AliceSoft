// 函数: sub_520b40
// 地址: 0x520b40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float ebp = arg3
float edi = arg2
sub_4cbd50(arg1 + 0x10, ebp, edi)
float result_1 = *(arg1 + 0x110) - *(arg1 + 0x114)
float result = 0f

if (result_1 s> 0)
    result = result_1

if (result != 0 && *(ebp i+ 4) == 1)
    int32_t ecx_2 = *(arg1 + 0xb0)
    int32_t ecx_3 = neg.d(ecx_2)
    int32_t ecx_6
    int32_t ecx_7
    
    if (edi != (sbb.d(ecx_3, ecx_3, ecx_2 != 0) & (ecx_2 + 0xc)))
        ecx_6 = *(arg1 + 0xa4)
        result = ecx_6 + 0xc
        ecx_7 = neg.d(ecx_6)
    
    if (edi == (sbb.d(ecx_3, ecx_3, ecx_2 != 0) & (ecx_2 + 0xc))
            || edi == (sbb.d(ecx_7, ecx_7, ecx_6 != 0) & result))
        arg2 = 0f
        arg3 = 0f
        sub_522c20(&arg2, &arg3)
        float eax_1 = arg2
        
        if (*(arg1 + 0xc) != 0)
            eax_1 = arg3
        
        return sub_4f7cb0(arg1 + 0xcc, 
            _mm_cvtepi32_ps(zx.o(eax_1 i- *(arg1 + 0xb8))) / _mm_cvtepi32_ps(zx.o(*(arg1 + 0x100)
                - *(arg1 + 0x228) - *(arg1 + 0x10c) - *(arg1 + 0x108))) f+ *(arg1 + 0xc0))

return result
