// 函数: sub_639900
// 地址: 0x639900
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1[2] s> 0)
    int32_t esi_1 = 0
    
    if (*arg1 s<= 8)
        if (arg4 s> 0)
            while (true)
                int32_t eax_5 = sub_6394e0(arg1, arg3)
                
                if (eax_5 == 0xffffffff)
                    return 0xffffffff
                
                int32_t edx_4 = *arg1
                int32_t* ecx_8 = arg1[4] + ((edx_4 * eax_5) << 2)
                int32_t eax_7 = 0
                
                if (edx_4 - 1 u<= 7)
                    switch (edx_4)
                        case 2
                            goto label_639a29
                        case 3
                            goto label_639a18
                        case 4
                            goto label_639a07
                        case 5
                            goto label_6399f6
                        case 6
                            goto label_6399e5
                        case 7
                            goto label_6399d4
                        case 8
                            eax_7 = 1
                            *(arg2 + (esi_1 << 2)) = *ecx_8 f+ *(arg2 + (esi_1 << 2))
                            esi_1 += 1
                        label_6399d4:
                            float xmm0_5 = ecx_8[eax_7]
                            eax_7 += 1
                            *(arg2 + (esi_1 << 2)) = xmm0_5 f+ *(arg2 + (esi_1 << 2))
                            esi_1 += 1
                        label_6399e5:
                            float xmm0_7 = ecx_8[eax_7]
                            eax_7 += 1
                            *(arg2 + (esi_1 << 2)) = xmm0_7 f+ *(arg2 + (esi_1 << 2))
                            esi_1 += 1
                        label_6399f6:
                            float xmm0_9 = ecx_8[eax_7]
                            eax_7 += 1
                            *(arg2 + (esi_1 << 2)) = xmm0_9 f+ *(arg2 + (esi_1 << 2))
                            esi_1 += 1
                        label_639a07:
                            float xmm0_11 = ecx_8[eax_7]
                            eax_7 += 1
                            *(arg2 + (esi_1 << 2)) = xmm0_11 f+ *(arg2 + (esi_1 << 2))
                            esi_1 += 1
                        label_639a18:
                            float xmm0_13 = ecx_8[eax_7]
                            eax_7 += 1
                            *(arg2 + (esi_1 << 2)) = xmm0_13 f+ *(arg2 + (esi_1 << 2))
                            esi_1 += 1
                        label_639a29:
                            float xmm0_15 = ecx_8[eax_7]
                            eax_7 += 1
                            *(arg2 + (esi_1 << 2)) = xmm0_15 f+ *(arg2 + (esi_1 << 2))
                            esi_1 += 1
                    
                    *(arg2 + (esi_1 << 2)) = ecx_8[eax_7] f+ *(arg2 + (esi_1 << 2))
                    esi_1 += 1
                
                if (esi_1 s>= arg4)
                    return 0
    else if (arg4 s> 0)
        do
            int32_t eax_1 = sub_6394e0(arg1, arg3)
            
            if (eax_1 == 0xffffffff)
                return 0xffffffff
            
            int32_t edx_2 = *arg1
            int32_t ecx_4 = arg1[4] + ((edx_2 * eax_1) << 2)
            int32_t i = 0
            
            if (edx_2 s> 0)
                do
                    float xmm0_1 = *(ecx_4 + (i << 2))
                    i += 1
                    *(arg2 + (esi_1 << 2)) = xmm0_1 f+ *(arg2 + (esi_1 << 2))
                    esi_1 += 1
                while (i s< *arg1)
        while (esi_1 s< arg4)

return 0
