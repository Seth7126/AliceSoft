// 函数: sub_588dc0
// 地址: 0x588dc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result

if (*(arg1 + 0x28) != 0)
    result.b = *(arg1 + 0x2c)
    
    if (result.b == 0)
        void* edi_1 = *arg2
        EnterCriticalSection(*(edi_1 + 0x70) + 4)
        int64_t xmm0_1 = *(edi_1 + 0x60)
        int32_t esi_1 = *(edi_1 + 0x68)
        LeaveCriticalSection(*(edi_1 + 0x70) + 4)
        void* eax_5 = *(arg1 + 0x28)
        *(eax_5 + 8) = xmm0_1
        *(eax_5 + 0x10) = esi_1
        void* esi_2 = *arg2
        int32_t eax_6
        int32_t edx_1
        edx_1:eax_6 = muls.dp.d(0x2aaaaaab, *(esi_2 + 0xd0) - *(esi_2 + 0xcc))
        int32_t edx_2 = edx_1 s>> 1
        
        if ((edx_2 u>> 0x1f) + edx_2 s<= 0)
            result.b = 0
            return result
        
        int64_t* edi_2 = *(esi_2 + 0xcc)
        int32_t eax_9
        int32_t edx_3
        edx_3:eax_9 = muls.dp.d(0x2aaaaaab, *(esi_2 + 0xd0) - edi_2)
        int32_t edx_4 = edx_3 s>> 1
        
        if ((edx_4 u>> 0x1f) + edx_4 s<= 1)
            result.b = 0
            return result
        
        int64_t xmm3_1 = *(edi_2 + 0xc)
        int32_t eax_13 = *(edi_2 + 0x14)
        int32_t eax_14
        int32_t edx_5
        edx_5:eax_14 = muls.dp.d(0x2aaaaaab, *(esi_2 + 0xd0) - edi_2)
        int32_t edx_6 = edx_5 s>> 1
        
        if ((edx_6 u>> 0x1f) + edx_6 s<= 2)
            result.b = 0
            return result
        
        int32_t eax_17 = edi_2[4].d
        int64_t xmm2_1 = edi_2[3]
        int32_t eax_18
        int32_t edx_7
        edx_7:eax_18 = muls.dp.d(0x2aaaaaab, *(esi_2 + 0xd0) - edi_2)
        int32_t edx_8 = edx_7 s>> 1
        
        if ((edx_8 u>> 0x1f) + edx_8 s<= 3)
            result.b = 0
            return result
        
        void* edx_9 = *(arg1 + 0x28)
        int64_t xmm1_1 = *(edi_2 + 0x24)
        int32_t esi_3 = *(edi_2 + 0x2c)
        int64_t* ecx_9 = *(edx_9 + 0x14)
        *ecx_9 = *edi_2
        ecx_9[1].d = edi_2[1].d
        void* eax_23 = *(edx_9 + 0x14)
        *(eax_23 + 0xc) = xmm3_1
        *(eax_23 + 0x14) = eax_13
        void* eax_24 = *(edx_9 + 0x14)
        *(eax_24 + 0x18) = xmm2_1
        *(eax_24 + 0x20) = eax_17
        void* eax_25 = *(edx_9 + 0x14)
        *(eax_25 + 0x24) = xmm1_1
        *(eax_25 + 0x2c) = esi_3
        void* ecx_12 = *arg2
        
        if (((*(ecx_12 + 0xdc) - *(ecx_12 + 0xd8)) & 0xfffffff8) s<= 0)
            result.b = 0
            return result
        
        int32_t* eax_27 = *(ecx_12 + 0xd8)
        
        if (((*(ecx_12 + 0xdc) - *(ecx_12 + 0xd8)) & 0xfffffff8) s<= 8)
            result.b = 0
            return result
        
        void* eax_30 = *(ecx_12 + 0xd8)
        int32_t edx_10 = *(eax_30 + 8)
        int32_t eax_31 = *(eax_30 + 0xc)
        
        if (((*(ecx_12 + 0xdc) - *(ecx_12 + 0xd8)) & 0xfffffff8) s<= 0x10)
            result.b = 0
            return result
        
        void* eax_34 = *(ecx_12 + 0xd8)
        int32_t edx_11 = *(eax_34 + 0x10)
        int64_t var_14_1
        var_14_1.d = *(eax_34 + 0x14)
        
        if (((*(ecx_12 + 0xdc) - *(ecx_12 + 0xd8)) & 0xfffffff8) s<= 0x18)
            result.b = 0
            return result
        
        void* eax_38 = *(ecx_12 + 0xd8)
        void* edx_12 = *(arg1 + 0x28)
        int32_t esi_4 = *(eax_38 + 0x18)
        int32_t edi_3 = *(eax_38 + 0x1c)
        int32_t* ecx_13 = *(edx_12 + 0x20)
        *ecx_13 = *eax_27
        ecx_13[1] = eax_27[1]
        void* eax_43 = *(edx_12 + 0x20)
        *(eax_43 + 8) = edx_10
        *(eax_43 + 0xc) = eax_31
        void* eax_44 = *(edx_12 + 0x20)
        *(eax_44 + 0x10) = edx_11
        *(eax_44 + 0x14) = var_14_1.d
        void* eax_45 = *(edx_12 + 0x20)
        *(eax_45 + 0x18) = esi_4
        *(eax_45 + 0x1c) = edi_3
        void* edx_13 = *arg2
        void* ecx_18 = *(arg1 + 0x28)
        *(ecx_18 + 0x70) = *(edx_13 + 0x104)
        *(ecx_18 + 0x74) = *(edx_13 + 0x108)
        
        if (*(ecx_18 + 4) != 0)
            int32_t eax_47 = int.d(fconvert.t(*(edx_13 + 0x178)))
            *(ecx_18 + 0x2c) = 0
            *(ecx_18 + 0x6c) = eax_47
            float xmm4_5 = *(arg5 + 8) f* *(ecx_18 + 8) + *(arg5 + 0x18) f* *(ecx_18 + 0xc)
                + *(arg5 + 0x28) f* *(ecx_18 + 0x10) f+ *(arg5 + 0x38)
            float xmm5_5 = *(arg5 + 0xc) f* *(ecx_18 + 8) + *(arg5 + 0x1c) f* *(ecx_18 + 0xc)
                + *(arg5 + 0x2c) f* *(ecx_18 + 0x10) f+ *(arg5 + 0x3c)
            xmm5_5 - 1f
            void* eax_48
            eax_48:1.b = (xmm5_5 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm5_5, 1f) ? 1 : 0) << 2
                | (xmm5_5 < 1f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (p_2)
                xmm5_5 - 0f
                eax_48:1.b = (xmm5_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm5_5, 0f) ? 1 : 0) << 2
                    | (xmm5_5 < 0f ? 1 : 0)
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (p_4)
                    xmm4_5 = xmm4_5 * 1f / xmm5_5
            
            int32_t var_38_3 = arg4
            *(ecx_18 + 0x78) = xmm4_5
            
            if (sub_569d40(ecx_18, arg3).b == 0)
                result.b = 0
                return result

result.b = 1
return result
