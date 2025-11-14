// 函数: sub_528700
// 地址: 0x528700
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (sub_528920(arg1, arg2, arg5) != 0 && sub_528f40(arg1, arg2, arg3, arg4, arg5) != 0)
    *(arg1 + 0x50) = *arg4
    *(arg1 + 0x58) = arg4[2]
    
    if ((*(arg1 + 0x44) - *(arg1 + 0x40)) s/ 0x1c != (*(arg2 i+ 8) - *(arg2 i+ 4)) s/ 0x38)
        sub_5294a0(arg1 + 0x40, (*(arg2 i+ 8) - *(arg2 i+ 4)) s/ 0x38)
    
    int32_t i = 0
    
    if ((*(arg1 + 0x44) - *(arg1 + 0x40)) s/ 0x1c s> 0)
        int32_t ebp_1 = 0
        arg5 = 0f
        
        do
            void var_c
            int64_t* eax_14 = sub_527330(arg2, &var_c, i)
            float ecx_12 = *(arg1 + 0x40) + ebp_1
            *ecx_12 = *eax_14
            *(ecx_12 i+ 8) = eax_14[1].d
            int32_t edx_14
            
            if (i s>= 0)
                ecx_12 = *(arg2 i+ 8) - *(arg2 i+ 4)
                int32_t eax_16
                int32_t edx_12
                edx_12:eax_16 = muls.dp.d(0x92492493, ecx_12)
                edx_14 = (edx_12 i+ ecx_12) s>> 5
            
            int32_t xmm0_2
            
            if (i s< 0 || i s>= (edx_14 u>> 0x1f) + edx_14)
                xmm0_2 = 0x3f800000
            else
                xmm0_2 = *(*(arg2 i+ 4) i+ arg5 + 0x2c)
            
            *(*(arg1 + 0x40) + ebp_1 + 0xc) = xmm0_2
            int32_t edx_17
            
            if (i s>= 0)
                ecx_12 = *(arg2 i+ 8) - *(arg2 i+ 4)
                int32_t eax_22
                int32_t edx_15
                edx_15:eax_22 = muls.dp.d(0x92492493, ecx_12)
                edx_17 = (edx_15 i+ ecx_12) s>> 5
            
            int32_t xmm0_3
            
            if (i s< 0 || i s>= (edx_17 u>> 0x1f) + edx_17)
                xmm0_3 = 0x3f800000
            else
                xmm0_3 = *(*(arg2 i+ 4) i+ arg5 + 0x30)
            
            *(*(arg1 + 0x40) + ebp_1 + 0x10) = xmm0_3
            int32_t edx_20
            
            if (i s>= 0)
                ecx_12 = *(arg2 i+ 8) - *(arg2 i+ 4)
                int32_t eax_28
                int32_t edx_18
                edx_18:eax_28 = muls.dp.d(0x92492493, ecx_12)
                edx_20 = (edx_18 i+ ecx_12) s>> 5
            
            int32_t xmm0_4
            
            if (i s< 0 || i s>= (edx_20 u>> 0x1f) + edx_20)
                xmm0_4 = 0x3f800000
            else
                xmm0_4 = *(*(arg2 i+ 4) i+ arg5 + 0x1c)
            
            *(*(arg1 + 0x40) + ebp_1 + 0x14) = xmm0_4
            int32_t edx_23
            
            if (i s>= 0)
                ecx_12 = *(arg2 i+ 8) - *(arg2 i+ 4)
                int32_t eax_34
                int32_t edx_21
                edx_21:eax_34 = muls.dp.d(0x92492493, ecx_12)
                edx_23 = (edx_21 i+ ecx_12) s>> 5
            
            if (i s< 0 || i s>= (edx_23 u>> 0x1f) + edx_23)
                ecx_12.b = 0
            else
                ecx_12.b = *(*(arg2 i+ 4) i+ arg5 + 0x34)
            
            i += 1
            arg5 += 0x38
            *(*(arg1 + 0x40) + ebp_1 + 0x18) = ecx_12.b
            ebp_1 += 0x1c
        while (i s< (*(arg1 + 0x44) - *(arg1 + 0x40)) s/ 0x1c)
    
    int32_t result
    result.b = 1
    return result

return false
