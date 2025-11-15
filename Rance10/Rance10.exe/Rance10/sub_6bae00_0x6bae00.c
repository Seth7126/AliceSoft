// 函数: sub_6bae00
// 地址: 0x6bae00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result = *(arg3 + 8)
int32_t ebx_1 = *(arg3 + 4) - 6
int32_t* result_2 = result
void* ebp = arg2
void* var_4 = ebp
int32_t esi = arg4

if (ebx_1 s> 0)
    result = sub_6baa70(result, arg2, result, esi)

int32_t i = ebx_1 - 1
int32_t ecx_1 = 1
int32_t var_1c = 1
int32_t i_2 = i

if (i s> 0)
    int32_t j_2 = 2
    int32_t j_3 = 2
    
    do
        if (j_2 s> 0)
            int32_t j_1 = j_2
            void* esi_1 = ebp
            result = esi s>> ecx_1.b
            int32_t* result_1 = result
            int32_t* result_3 = result
            int32_t j
            
            do
                sub_6bac20(result, esi_1, result_2, result_3, 4 << ecx_1.b)
                result = result_3 << 2
                esi_1 += result
                j = j_1
                j_1 -= 1
            while (j != 1)
            j_2 = j_3
            ebp = var_4
            i = i_2
            ecx_1 = var_1c
        
        esi = arg4
        i -= 1
        ecx_1 += 1
        j_2 = rol.d(j_2, 1)
        var_1c = ecx_1
        j_3 = j_2
        i_2 = i
    while (i s> 0)

if (arg4 s> 0)
    int32_t i_3 = ((arg4 - 1) u>> 5) + 1
    int32_t i_1
    
    do
        result = sub_6ba7c0(ebp)
        ebp -= 0xffffff80
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return result
