// 函数: sub_6b5950
// 地址: 0x6b5950
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4_1 = arg3
int32_t ebp_1 = arg4 - arg2
int32_t esi = arg5
int32_t ebx_1 = arg6 - esi
int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(ebx_1)
int32_t temp0 = divs.dp.d(sx.q(ebx_1), ebp_1)
int32_t edi = 0
int32_t eax_9
int32_t edx_2
edx_2:eax_9 = sx.q(temp0 * ebp_1)
int32_t edx_3 = arg4
int32_t result = arg7

if (arg3 s<= edx_3)
    edx_3 = arg3

if (arg2 s< edx_3)
    *(result + (arg2 << 2)) = esi

for (int32_t i = arg2 + 1; i s< edx_3; i += 1)
    edi += (eax_2 ^ edx) - edx - ((eax_9 ^ edx_2) - edx_2)
    
    if (edi s< ebp_1)
        esi += temp0
    else
        edi -= ebp_1
        int32_t eax_13 = temp0 + 1 + esi
        esi = esi - 1 + temp0
        
        if (ebx_1 s>= 0)
            esi = eax_13
        
        result = arg7
    
    *(result + (i << 2)) = esi

return result
