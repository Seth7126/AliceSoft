// 函数: sub_10013b0c
// 地址: 0x10013b0c
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t ecx
int32_t var_8 = ecx
uint32_t eax = zx.d(*(arg2 + 6))
int32_t edi
int32_t var_14 = edi
int16_t edi_3 = (eax u>> 4).w & 0x7ff
int32_t* eax_1 = eax & 0x8000
int32_t ecx_2 = *arg2
uint32_t edi_4 = zx.d(edi_3)
int32_t eax_3 = arg2[1] & 0xfffff
int32_t var_8_1 = 0x80000000
int32_t* result
int16_t ebx_1

if (edi_4 == 0)
    if (eax_3 != 0 || ecx_2 != 0)
        ebx_1 = edi_3 + 0x3c01
        var_8_1 = 0
        goto label_10013b7f
    
    result = arg1
    ecx_2.w = eax_1.w
    result[1] = 0
    *result = 0
else
    uint32_t edi_5
    
    if (edi_4 == 0x7ff)
        edi_5 = 0x7fff
    else
        ebx_1 = edi_3 + 0x3c00
    label_10013b7f:
        edi_5 = zx.d(ebx_1)
    
    int32_t edx_4 = ecx_2 u>> 0x15 | eax_3 << 0xb | var_8_1
    result = arg1
    int32_t ecx_3 = ecx_2 << 0xb
    
    while (true)
        *result = ecx_3
        result[1] = edx_4
        
        if ((0x80000000 & edx_4) != 0)
            break
        
        int32_t ecx_4 = *result
        edx_4 = (result[1] * 2) | ecx_4 u>> 0x1f
        ecx_3 = ecx_4 * 2
        edi_5 += 0xffff
    
    ecx_2 = eax_1 | edi_5
result[2].w = ecx_2.w
return result
