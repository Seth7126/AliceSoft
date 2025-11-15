// 函数: sub_574f40
// 地址: 0x574f40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi_1 = arg4 - arg3
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0xb21642c9, edi_1)
int32_t edx_2 = (edx + edi_1) s>> 6
int32_t ebp_2 = edi_1 s/ 0x5c

if (edx_2 u>> 0x1f != neg.d(edx_2))
    int32_t eax_4 = (arg1[2] - arg1[1]) s/ 0x5c
    
    if (eax_4 u< ebp_2)
        int32_t esi_1 = *arg1
        int32_t ecx_5 = (arg1[1] - esi_1) s/ 0x5c
        
        if (0x2c8590b - ecx_5 u< ebp_2)
            sub_6d0927("vector<T> too long")
            noreturn
        
        int32_t ecx_8 = 0
        int32_t esi_4 = (arg1[2] - esi_1) s/ 0x5c
        uint32_t eax_10 = esi_4 u>> 1
        
        if (0x2c8590b - eax_10 u>= esi_4)
            ecx_8 = eax_10 + esi_4
        
        int32_t eax_12 = ecx_5 + ebp_2
        
        if (ecx_8 u>= eax_12)
            eax_12 = ecx_8
        
        void* eax_13
        int32_t ecx_9
        eax_13, ecx_9 = sub_5729c0(eax_12)
        int32_t var_1c_2 = ecx_9
        int32_t var_20_1 = arg2
        int32_t var_24_1 = ecx_9
        int32_t eax_14
        int32_t ecx_11
        eax_14, ecx_11 = sub_572a20(eax_13, arg2, *arg1, eax_13)
        int32_t var_20_2 = arg2
        int32_t var_24_2 = ecx_11
        int32_t eax_15
        int32_t ecx_13
        eax_15, ecx_13 = sub_572a20(eax_14, arg4, arg3, eax_14)
        int32_t var_20_3 = arg2
        int32_t var_24_3 = ecx_13
        sub_572a20(eax_15, arg1[1], arg2, eax_15)
        void* edi_5 = *arg1
        void* ecx_16 = arg1[1] - edi_5
        
        if (edi_5 != 0)
            sub_403160(edi_5, (arg1[2] - edi_5) s/ 0x5c, 0x5c)
        
        arg1[2] = eax_12 * 0x5c + eax_13
        void* eax_24 = (ebp_2 + ecx_16 s/ 0x5c) * 0x5c + eax_13
        arg1[1] = eax_24
        *arg1 = eax_13
        return eax_24
    
    int32_t var_1c_3 = arg3
    int32_t var_20_5 = arg2
    int32_t var_24_5 = arg3
    sub_572a20(eax_4, arg4, arg3, arg1[1])
    int32_t esi_6 = arg1[1]
    eax = ebp_2 * 0x5c
    int32_t edi_6 = eax + esi_6
    
    if (arg2 != esi_6 && esi_6 != edi_6)
        sub_5756d0(arg2, esi_6)
        sub_5756d0(esi_6, edi_6)
        sub_5756d0(arg2, edi_6)
    
    arg1[1] += eax

return eax
