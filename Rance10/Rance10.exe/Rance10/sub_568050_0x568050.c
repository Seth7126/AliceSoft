// 函数: sub_568050
// 地址: 0x568050
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4 = arg1
int32_t* ebx = arg2
int32_t* result = arg1

if (result != ebx)
    char* ebp_1 = *ebx
    int32_t eax_1 = ebx[1]
    
    if (ebp_1 == eax_1)
        result[1] = *result
        return result
    
    char* esi_1 = *result
    int32_t eax_7 = (eax_1 - ebp_1) s/ 0xc
    int32_t eax_8
    int32_t edx_3
    edx_3:eax_8 = muls.dp.d(0x2aaaaaab, result[1] - esi_1)
    int32_t edx_4 = edx_3 s>> 1
    int32_t eax_11 = (edx_4 u>> 0x1f) + edx_4
    
    if (eax_7 u<= eax_11)
        sub_6feca0(esi_1, ebp_1, ebx[1] - ebp_1)
        int32_t eax_12
        int32_t edx_5
        edx_5:eax_12 = muls.dp.d(0x2aaaaaab, ebx[1] - *ebx)
        int32_t edx_6 = edx_5 s>> 1
        result[1] = *result + ((edx_6 u>> 0x1f) + edx_6) * 0xc
        return result
    
    int32_t eax_19
    int32_t edx_7
    edx_7:eax_19 = muls.dp.d(0x2aaaaaab, result[2] - esi_1)
    int32_t edx_8 = edx_7 s>> 1
    int32_t eax_22 = (edx_8 u>> 0x1f) + edx_8
    char* eax_27
    
    if (eax_7 u> eax_22)
        if (esi_1 != 0)
            sub_403160(esi_1, eax_22, 0xc)
        
        int32_t eax_28
        int32_t edx_9
        edx_9:eax_28 = muls.dp.d(0x2aaaaaab, ebx[1] - *ebx)
        int32_t edx_10 = edx_9 s>> 1
        int32_t ecx_18
        eax_27, ecx_18 = sub_4ac840(result, (edx_10 u>> 0x1f) + edx_10)
        
        if (eax_27.b != 0)
            int32_t var_18_4 = ecx_18
            int32_t var_1c_5 = eax_7
            int32_t var_20_5 = ecx_18
            result[1] = sub_565580(eax_27, ebx[1], *ebx, *result)
    else
        void* esi_3 = &ebp_1[eax_11 * 0xc]
        int32_t ecx_13
        eax_27, ecx_13 = sub_6feca0(*result, ebp_1, esi_3 - ebp_1)
        int32_t var_1c_3 = eax_7
        int32_t var_20_3 = ecx_13
        result[1] = sub_565580(eax_27, ebx[1], esi_3, result[1])

return result
