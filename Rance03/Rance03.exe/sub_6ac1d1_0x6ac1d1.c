// 函数: sub_6ac1d1
// 地址: 0x6ac1d1
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
uint32_t edi = zx.d(*(arg2 + 6))
int32_t ebx = 0x80000000
int32_t eax_1 = *arg2
int32_t edi_1 = edi & 0x8000
int32_t edx_1 = arg2[1] & 0xfffff
int32_t ecx_3 = edi u>> 4 & 0x7ff
int32_t* result
int16_t result_1

if (ecx_3 == 0)
    if (edx_1 != 0 || eax_1 != 0)
        result_1 = ecx_3.w + 0x3c01
        ebx = 0
        goto label_6ac242
    
    result = arg1
    result[1] &= edx_1
    *result &= edx_1
    result[2].w = edi_1.w
else
    if (ecx_3 == 0x7ff)
        result = 0x7fff
    else
        result_1 = ecx_3.w + 0x3c00
    label_6ac242:
        result = zx.d(result_1)
    
    int32_t i = eax_1 u>> 0x15 | edx_1 << 0xb | ebx
    arg2 = result
    arg1[1] = i
    *arg1 = eax_1 << 0xb
    
    if (i s>= 0)
        int32_t* result_2 = result
        
        do
            int32_t edx_3 = *arg1
            result_2 += 0xffff
            i = (i * 2) | edx_3 u>> 0x1f
            *arg1 = edx_3 * 2
        while (i s>= 0)
        
        result = result_2
        arg1[1] = i
    
    arg1[2].w = edi_1.w | result.w
return result
