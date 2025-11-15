// 函数: sub_5be670
// 地址: 0x5be670
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
int32_t edi_1 = arg4 - arg3
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x88888889, edi_1)
int32_t edx_2 = (edx + edi_1) s>> 6
int32_t ebp_2 = edi_1 s/ 0x78

if (edx_2 u>> 0x1f != neg.d(edx_2))
    int32_t eax_4 = (arg1[2] - arg1[1]) s/ 0x78
    
    if (eax_4 u< ebp_2)
        int32_t esi_1 = *arg1
        int32_t ecx_5 = (arg1[1] - esi_1) s/ 0x78
        
        if (0x2222222 - ecx_5 u< ebp_2)
            sub_6d0927("vector<T> too long")
            noreturn
        
        int32_t edi_4 = ecx_5 + ebp_2
        int32_t ecx_8 = 0
        int32_t esi_4 = (arg1[2] - esi_1) s/ 0x78
        uint32_t eax_9 = esi_4 u>> 1
        int32_t eax_10 = eax_9 + esi_4
        
        if (0x2222222 - eax_9 u>= esi_4)
            ecx_8 = eax_10
        
        if (ecx_8 u>= edi_4)
            edi_4 = ecx_8
        
        int32_t esi_5
        
        if (edi_4 != 0)
            if (edi_4 u> 0x2222222)
                sub_6d08ed()
                noreturn
            
            int32_t eax_14 = edi_4 * 0x78
            
            if (eax_14 u< 0x1000)
                eax_10, ecx_8 = sub_6e810c(eax_14)
                esi_5 = eax_10
            else
                if (eax_14 + 0x23 u<= eax_14)
                    sub_6d08ed()
                    noreturn
                
                eax_10, ecx_8 = sub_6e810c(eax_14 + 0x23)
                esi_5 = (eax_10 + 0x23) & 0xffffffe0
                *(esi_5 - 4) = eax_10
        else
            esi_5 = nullptr
        
        int32_t var_18_3 = ecx_8
        int32_t var_1c_1 = arg2
        int32_t var_20_1 = ecx_8
        int32_t eax_15
        int32_t ecx_11
        eax_15, ecx_11 = sub_5bf640(eax_10, arg2, *arg1, esi_5)
        int32_t var_1c_2 = arg2
        int32_t var_20_2 = ecx_11
        int32_t eax_16
        int32_t ecx_13
        eax_16, ecx_13 = sub_5bf640(eax_15, arg4, arg3, eax_15)
        int32_t var_1c_3 = arg2
        int32_t var_20_3 = ecx_13
        sub_5bf640(eax_16, arg1[1], arg2, eax_16)
        int32_t ecx_16 = arg1[1] - *arg1
        int32_t eax_18 = *arg1
        
        if (eax_18 != 0)
            sub_403160(*arg1, (arg1[2] - eax_18) s/ 0x78, 0x78)
        
        arg1[2] = esi_5 + edi_4 * 0x78
        void* eax_30 = esi_5 + (ebp_2 + ecx_16 s/ 0x78) * 0x78
        arg1[1] = eax_30
        *arg1 = esi_5
        return eax_30
    
    int32_t var_18_4 = arg3
    int32_t var_1c_5 = arg2
    int32_t var_20_5 = arg3
    sub_5bf640(eax_4, arg4, arg3, arg1[1])
    int32_t edx_23 = arg1[1]
    int32_t esi_10 = ebp_2 * 0x78
    eax = esi_10 + edx_23
    
    if (arg2 != edx_23 && edx_23 != eax)
        var_4.b = 0
        int32_t* var_18_5 = var_4
        eax = sub_5bfee0(eax, edx_23, arg2, eax)
    
    arg1[1] += esi_10

return eax
