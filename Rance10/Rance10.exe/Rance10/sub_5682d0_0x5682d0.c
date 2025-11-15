// 函数: sub_5682d0
// 地址: 0x5682d0
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
    int32_t eax_7 = (eax_1 - ebp_1) s/ 0x1c
    int32_t eax_11 = (result[1] - esi_1) s/ 0x1c
    
    if (eax_7 u<= eax_11)
        sub_6feca0(esi_1, ebp_1, ebx[1] - ebp_1)
        result[1] = *result + (ebx[1] - *ebx) s/ 0x1c * 0x1c
        return result
    
    int32_t eax_22 = (result[2] - esi_1) s/ 0x1c
    char* eax_27
    
    if (eax_7 u> eax_22)
        if (esi_1 != 0)
            sub_403160(esi_1, eax_22, 0x1c)
        
        int32_t ecx_20
        eax_27, ecx_20 = sub_5685e0(result, (ebx[1] - *ebx) s/ 0x1c)
        
        if (eax_27.b != 0)
            int32_t var_18_4 = ecx_20
            int32_t var_1c_5 = eax_7
            int32_t var_20_5 = ecx_20
            result[1] = sub_568a80(eax_27, ebx[1], *ebx, *result)
    else
        void* esi_3 = &ebp_1[eax_11 * 0x1c]
        int32_t ecx_15
        eax_27, ecx_15 = sub_6feca0(*result, ebp_1, esi_3 - ebp_1)
        int32_t var_1c_3 = eax_7
        int32_t var_20_3 = ecx_15
        result[1] = sub_568a80(eax_27, ebx[1], esi_3, result[1])

return result
