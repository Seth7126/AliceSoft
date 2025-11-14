// 函数: sub_533500
// 地址: 0x533500
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1
int32_t* ebx = arg2
int32_t* result = arg1

if (result != ebx)
    int32_t eax_1 = ebx[1]
    int64_t* esi_1 = *ebx
    
    if (esi_1 == eax_1)
        result[1] = *result
        return result
    
    int32_t eax_7 = (eax_1 - esi_1) s/ 0xc
    int64_t* ebp_1 = *result
    int32_t eax_8
    int32_t edx_3
    edx_3:eax_8 = muls.dp.d(0x2aaaaaab, result[1] - ebp_1)
    int32_t edx_4 = edx_3 s>> 1
    int32_t eax_11 = (edx_4 u>> 0x1f) + edx_4
    
    if (eax_7 u<= eax_11)
        sub_533ad0(eax_11, ebx[1], esi_1, ebp_1)
        int32_t eax_12
        int32_t edx_6
        edx_6:eax_12 = muls.dp.d(0x2aaaaaab, ebx[1] - *ebx)
        int32_t edx_7 = edx_6 s>> 1
        result[1] = *result + ((edx_7 u>> 0x1f) + edx_7) * 0xc
        return result
    
    int32_t eax_19
    int32_t edx_8
    edx_8:eax_19 = muls.dp.d(0x2aaaaaab, result[2] - ebp_1)
    int32_t edx_9 = edx_8 s>> 1
    int64_t* eax_25
    
    if (eax_7 u> (edx_9 u>> 0x1f) + edx_9)
        if (ebp_1 != 0)
            j__free(ebp_1)
        
        int32_t eax_26
        int32_t edx_11
        edx_11:eax_26 = muls.dp.d(0x2aaaaaab, ebx[1] - *ebx)
        int32_t edx_12 = edx_11 s>> 1
        int32_t ecx_18
        eax_25, ecx_18 = sub_524ea0(result, (edx_12 u>> 0x1f) + edx_12)
        
        if (eax_25.b != 0)
            int32_t var_18_6 = eax_7
            int32_t var_1c_2 = ecx_18
            result[1] = sub_524f10(eax_25, ebx[1], *ebx, *result)
    else
        int32_t eax_24 = eax_11 * 3
        void* esi_2 = esi_1 + (eax_24 << 2)
        int32_t ecx_13
        eax_25, ecx_13 = sub_533ad0(eax_24, esi_2, *ebx, ebp_1)
        int32_t var_18_3 = eax_7
        int32_t var_1c_1 = ecx_13
        result[1] = sub_524f10(eax_25, ebx[1], esi_2, result[1])

return result
