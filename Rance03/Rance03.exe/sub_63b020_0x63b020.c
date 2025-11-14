// 函数: sub_63b020
// 地址: 0x63b020
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = arg5
int32_t ebx_1 = arg4 - arg2
int32_t edi_1 = arg6 - esi
int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(edi_1)
int32_t temp0 = divs.dp.d(sx.q(edi_1), ebx_1)
int32_t edi_2 = temp0 - 1

if (edi_1 s>= 0)
    edi_2 = temp0 + 1

int32_t ecx = 0
int32_t eax_9
int32_t edx_3
edx_3:eax_9 = sx.q(temp0 * ebx_1)
int32_t edx_4 = arg3
int32_t eax_12 = arg2

if (edx_4 s> arg4)
    edx_4 = arg4

int32_t var_8_1 = edx_4

if (eax_12 s< edx_4)
    *(arg7 + (arg2 << 2)) = esi
    edx_4 = var_8_1
    eax_12 = arg2

int32_t result = eax_12 + 1

if (result s< edx_4)
    do
        ecx += (eax_2 ^ edx) - edx - ((eax_9 ^ edx_3) - edx_3)
        
        if (ecx s< ebx_1)
            esi += temp0
        else
            ecx -= ebx_1
            esi += edi_2
        
        *(arg7 + (result << 2)) = esi
        result += 1
    while (result s< var_8_1)

return result
