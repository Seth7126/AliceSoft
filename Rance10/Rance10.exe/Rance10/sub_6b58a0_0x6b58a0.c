// 函数: sub_6b58a0
// 地址: 0x6b58a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4_1 = arg3
int32_t ebp_1 = arg4 - arg2
int32_t esi = arg5
int32_t ebx_1 = arg6 - esi
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ebx_1)
int32_t temp0 = divs.dp.d(sx.q(ebx_1), ebp_1)
int32_t edi = 0
int32_t eax_8
int32_t edx_2
edx_2:eax_8 = sx.q(temp0 * ebp_1)
int32_t result = arg4

if (arg3 s<= result)
    result = arg3

arg4 = result

if (arg2 s< result)
    *(arg7 + (arg2 << 2)) = *((esi << 2) + &data_774930) f* *(arg7 + (arg2 << 2))

for (int32_t i = arg2 + 1; i s< result; i += 1)
    edi += (eax_1 ^ edx) - edx - ((eax_8 ^ edx_2) - edx_2)
    
    if (edi s< ebp_1)
        esi += temp0
    else
        edi -= ebp_1
        int32_t eax_12 = temp0 + 1 + esi
        esi = esi - 1 + temp0
        
        if (ebx_1 s>= 0)
            esi = eax_12
        
        result = arg4
    
    *(arg7 + (i << 2)) = *((esi << 2) + &data_774930) f* *(arg7 + (i << 2))

return result
