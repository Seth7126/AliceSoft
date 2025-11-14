// 函数: sub_569550
// 地址: 0x569550
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1
int32_t* ebx = arg2
int32_t* result = arg1

if (result != ebx)
    int32_t eax_1 = ebx[1]
    void* esi_1 = *ebx
    
    if (esi_1 == eax_1)
        int32_t ecx = result[1]
        
        for (void* i = *result; i != ecx; i += 0x14)
            *(i + 8) = &sealengine::CFrameMulAlpha::`vftable'
        
        result[1] = *result
        return result
    
    int32_t eax_7 = (eax_1 - esi_1) s/ 0x14
    int32_t* ebp_1 = *result
    int32_t eax_8
    int32_t edx_3
    edx_3:eax_8 = muls.dp.d(0x66666667, result[1] - ebp_1)
    int32_t edx_4 = edx_3 s>> 3
    int32_t eax_11 = (edx_4 u>> 0x1f) + edx_4
    
    if (eax_7 u<= eax_11)
        int32_t var_18_1 = eax_7
        sub_537d60(sub_569d70(eax_11, ebx[1], esi_1, ebp_1), result[1])
        int32_t eax_13
        int32_t edx_6
        edx_6:eax_13 = muls.dp.d(0x66666667, ebx[1] - *ebx)
        int32_t edx_7 = edx_6 s>> 3
        result[1] = *result + ((edx_7 u>> 0x1f) + edx_7) * 0x14
        return result
    
    int32_t eax_20
    int32_t edx_8
    edx_8:eax_20 = muls.dp.d(0x66666667, result[2] - ebp_1)
    int32_t edx_9 = edx_8 s>> 3
    int32_t* eax_26
    
    if (eax_7 u> (edx_9 u>> 0x1f) + edx_9)
        if (ebp_1 != 0)
            sub_537d60(ebp_1, result[1])
            j__free(*result)
        
        int32_t eax_27
        int32_t edx_11
        edx_11:eax_27 = muls.dp.d(0x66666667, ebx[1] - *ebx)
        int32_t edx_12 = edx_11 s>> 3
        int32_t ecx_19
        eax_26, ecx_19 = sub_567050(result, (edx_12 u>> 0x1f) + edx_12)
        
        if (eax_26.b != 0)
            int32_t var_18_8 = eax_7
            int32_t var_1c_6 = ecx_19
            result[1] = sub_552100(eax_26, ebx[1], *ebx, *result)
    else
        int32_t var_18_3 = eax_7
        int32_t eax_25 = eax_11 * 5
        void* esi_2 = esi_1 + (eax_25 << 2)
        int32_t ecx_14
        eax_26, ecx_14 = sub_569d70(eax_25, esi_2, *ebx, ebp_1)
        int32_t var_18_4 = eax_7
        int32_t var_1c_4 = ecx_14
        result[1] = sub_552100(eax_26, ebx[1], esi_2, result[1])

return result
