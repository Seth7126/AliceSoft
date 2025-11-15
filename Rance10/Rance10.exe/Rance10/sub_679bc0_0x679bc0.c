// 函数: sub_679bc0
// 地址: 0x679bc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg2
int32_t result_3 = 1
int32_t* edx = arg1
int32_t var_10 = edi
int32_t* var_14 = edx
int32_t i_4 = edx[0x19]
int32_t ebx = edx[0x15]
int32_t i_5 = i_4
int32_t result_2
int32_t result_1
int32_t result_4

do
    result_1 = result_3
    result_3 += 1
    result_2 = result_1
    result_4 = result_3
    
    if (i_4 s> 1)
        int32_t i_2 = i_4 - 1
        int32_t i
        
        do
            result_4 *= result_3
            i = i_2
            i_2 -= 1
        while (i != 1)
        result_1 = result_2
while (result_4 s<= ebx)

if (result_1 s< 2)
    *(*edx + 0x14) = 0x3a
    *(*edx + 0x18) = result_4
    (**edx)(edx)
    edx = var_14
    result_1 = result_2

int32_t result = 1

if (i_4 s> 0)
    int32_t i_3 = i_4
    int32_t ecx_1
    int32_t edi_1
    edi_1, ecx_1 = __memfill_u32(edi, result_1, i_4)
    int32_t i_1
    
    do
        result *= result_1
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    edi = var_10

do
label_679c52:
    int32_t ecx_2 = 0
    char var_15_1 = 0
    
    if (i_4 s<= 0)
        break
    
    while (true)
        int32_t eax_5
        
        if (edx[0xb] != 2)
            eax_5 = ecx_2
        else
            eax_5 = *((ecx_2 << 2) + &data_76e33c)
        
        int32_t esi = *(edi + (eax_5 << 2))
        edx = var_14
        result_1 = divs.dp.d(sx.q(result), esi) * (esi + 1)
        
        if (result_1 s> ebx)
            break
        
        *(edi + (eax_5 << 2)) = esi + 1
        ecx_2 += 1
        i_4 = i_5
        result = result_1
        edi = var_10
        var_15_1 = 1
        
        if (ecx_2 s>= i_4)
            goto label_679c52
    
    result_1.b = var_15_1
    i_4 = i_5
    edi = var_10
while (result_1.b != 0)

return result
