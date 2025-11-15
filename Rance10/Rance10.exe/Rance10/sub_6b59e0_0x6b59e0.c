// 函数: sub_6b59e0
// 地址: 0x6b59e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t (* esi)[0x4] = arg6
uint32_t result = 0
uint32_t var_30_1
__builtin_memset(&var_30_1, 0, 0x2c)
_memset(esi, 0, 0x38)
uint32_t ebp = arg5
int32_t edx = arg4
*esi = edx
(*esi)[1] = ebp

if (ebp s>= arg7)
    ebp = arg7 - 1

uint32_t var_2c_1
uint32_t var_28_1
uint32_t var_24_1
uint32_t var_20_1
uint32_t var_1c_1
uint32_t var_18_1
uint32_t var_14_1
uint32_t var_10_1
uint32_t var_c_1
uint32_t var_8_1

if (edx s<= ebp)
    int32_t* edi = arg3 + (edx << 2)
    int32_t* eax_2 = arg2 - arg3
    uint32_t result_1 = 0
    int32_t* var_34_1 = eax_2
    
    do
        float xmm1_1 = *edi
        int32_t ecx = int.d(xmm1_1 * 7.31428576f + 1023.5f)
        
        if (ecx s> 0x3ff)
            ecx = 0x3ff
        label_6b5abb:
            int32_t eax_5 = edx * edx
            
            if (*(eax_2 + edi) f+ *(arg8 + 0x458) < xmm1_1)
                var_14_1 += eax_5
                var_18_1 += ecx
                var_1c_1 += edx
                var_10_1 += ecx * ecx
                var_c_1 += ecx * edx
                var_8_1 += 1
            else
                var_28_1 += eax_5
                var_2c_1 += ecx
                var_30_1 += edx
                var_24_1 += ecx * ecx
                var_20_1 += ecx * edx
                result_1 += 1
            
            eax_2 = var_34_1
        else if (ecx s>= 0 && ecx != 0)
            goto label_6b5abb
        
        edx += 1
        edi = &edi[1]
    while (edx s<= ebp)
    
    esi = arg6
    result = result_1

(*esi)[2] = var_30_1
(*esi)[3] = var_2c_1
esi[1][0] = var_28_1
(*esi)[5] = var_24_1
(*esi)[6] = var_20_1
esi[2][0] = var_1c_1
(*esi)[9] = var_18_1
(*esi)[0xa] = var_14_1
(*esi)[0xb] = var_10_1
esi[3][0] = var_c_1
(*esi)[0xd] = var_8_1
(*esi)[7] = result
return result
