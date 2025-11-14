// 函数: sub_69c846
// 地址: 0x69c846
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0

if (arg1 != 0)
    _memset(arg1, 0xff, 0x24)
    
    if (arg2 != 0)
        int32_t ebx_1 = *arg2
        uint32_t eax_4 = arg2[1]
        
        if (eax_4 s<= 0xffffffff && (eax_4 s< 0xffffffff || ebx_1 u< 0xffff5740))
            *__errno() = 0x16
            return 0x16
        
        if (eax_4 s>= 7 && (eax_4 s> 7 || ebx_1 u> 0x934126cf))
            *__errno() = 0x16
            return 0x16
        
        int32_t eax_7 = __alldiv(ebx_1, eax_4, 0x1e13380, 0) + 0x46
        int32_t eax_15
        int32_t edx_3
        edx_3:eax_15 = sx.q(eax_7 - 1)
        int32_t eax_20
        int32_t edx_5
        edx_5:eax_20 = sx.q(((eax_15 + (edx_3 & 3)) s>> 2) - 0x11
            + divs.dp.d(sx.q(eax_7 + 0x12b), 0x190) - divs.dp.d(sx.q(eax_7 - 1), 0x64))
        int32_t eax_23
        int32_t edx_6
        edx_6:eax_23 = sx.q(eax_7 - 0x46)
        int32_t eax_24
        int32_t edx_7
        eax_24, edx_7 = __allmul(eax_23, edx_6, 0xfffffe93, 0xffffffff)
        int32_t eax_26
        int32_t edx_9
        eax_26, edx_9 = __allmul(eax_24 - eax_20, sbb.d(edx_7, edx_5, eax_24 u< eax_20), 0x15180, 0)
        int32_t ebx_2 = ebx_1 + eax_26
        uint32_t esi_4 = adc.d(eax_4, edx_9, ebx_1 + eax_26 u< ebx_1)
        int32_t ecx_3
        
        if (esi_4 s> 0 || (esi_4 s>= 0 && ebx_2 u>= 0))
            ecx_3 = eax_7
            int32_t eax_39 = ecx_3 & 0x80000003
            bool cond:3_1 = eax_39 != 0
            
            if (eax_39 s< 0)
                cond:3_1 = ((eax_39 - 1) | 0xfffffffc) != 0xffffffff
            
            int32_t eax_44
            int32_t edx_14
            
            if (not(cond:3_1))
                edx_14:eax_44 = sx.q(ecx_3)
            
            if (not(cond:3_1) && mods.dp.d(edx_14:eax_44, 0x64) != 0)
                var_8 = 1
            else if (mods.dp.d(sx.q(ecx_3 + 0x76c), 0x190) == 0)
                var_8 = 1
        else
            ecx_3 = eax_7 - 1
            int32_t temp6_1 = ebx_2
            ebx_2 += 0x1e13380
            esi_4 = adc.d(esi_4, 0, temp6_1 u>= 0xfe1ecc80)
            int32_t eax_28 = ecx_3 & 0x80000003
            bool cond:4_1 = eax_28 != 0
            
            if (eax_28 s< 0)
                cond:4_1 = ((eax_28 - 1) | 0xfffffffc) != 0xffffffff
            
            int32_t eax_33
            int32_t edx_10
            
            if (not(cond:4_1))
                edx_10:eax_33 = sx.q(ecx_3)
            
            int32_t eax_36
            int32_t edx_12
            
            if (cond:4_1 || mods.dp.d(edx_10:eax_33, 0x64) == 0)
                edx_12:eax_36 = sx.q(ecx_3 + 0x76c)
            
            if ((not(cond:4_1) && mods.dp.d(edx_10:eax_33, 0x64) != 0)
                    || mods.dp.d(edx_12:eax_36, 0x190) == 0)
                int32_t temp9_1 = ebx_2
                ebx_2 += 0x15180
                esi_4 = adc.d(esi_4, 0, temp9_1 u>= 0xfffeae80)
                var_8 = 1
        
        *(arg1 + 0x14) = ecx_3
        uint32_t eax_49 = __alldiv(ebx_2, esi_4, 0x15180, 0)
        *(arg1 + 0x1c) = eax_49
        int32_t eax_50
        int32_t edx_18
        edx_18:eax_50 = sx.q(eax_49)
        int32_t eax_51
        int32_t edx_19
        eax_51, edx_19 = __allmul(eax_50, edx_18, 0xfffeae80, 0xffffffff)
        int32_t ebx_3 = ebx_2 + eax_51
        void* ecx_4 = &data_74b034
        uint32_t esi_5 = adc.d(esi_4, edx_19, ebx_2 + eax_51 u< ebx_2)
        
        if (var_8 == 0)
            ecx_4 = &data_74b000
        
        int32_t i = *(arg1 + 0x1c)
        int32_t eax_52 = 1
        
        if (*(ecx_4 + 4) s< i)
            do
                eax_52 += 1
            while (*(ecx_4 + (eax_52 << 2)) s< i)
        
        *(arg1 + 0x10) = eax_52 - 1
        *(arg1 + 0xc) = i - *(ecx_4 + ((eax_52 - 1) << 2))
        *(arg1 + 0x18) = mods.dp.d(sx.q(__alldiv(*arg2, arg2[1], 0x15180, 0) + 4), 7)
        uint32_t eax_59 = __alldiv(ebx_3, esi_5, 0xe10, 0)
        *(arg1 + 8) = eax_59
        int32_t eax_60
        int32_t edx_23
        edx_23:eax_60 = sx.q(eax_59)
        int32_t eax_61
        int32_t edx_24
        eax_61, edx_24 = __allmul(eax_60, edx_23, 0xfffff1f0, 0xffffffff)
        int32_t ebx_4 = ebx_3 + eax_61
        uint32_t eax_62 = __alldiv(ebx_4, adc.d(esi_5, edx_24, ebx_3 + eax_61 u< ebx_3), 0x3c, 0)
        *(arg1 + 0x20) = 0
        *(arg1 + 4) = eax_62
        *arg1 = ebx_4 - eax_62 * 0x3c
        return 0

*__errno() = 0x16
__invalid_parameter_noinfo()
return 0x16
