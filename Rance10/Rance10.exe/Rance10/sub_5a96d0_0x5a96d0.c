// 函数: sub_5a96d0
// 地址: 0x5a96d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x349) != 0 && *(arg1 + 0x32c) != 0)
    int32_t ecx_2 = *(arg1 + 0x29c) - *(arg1 + 0x298)
    int32_t ebp_1 = 0
    int64_t xmm0_1 = data_7fd4d8.q
    int32_t edi_1 = data_7fd4e0
    int64_t var_80 = xmm0_1
    int32_t var_84_1 = edi_1
    int32_t eax_3 = ecx_2 s/ 0x1c
    int32_t var_64_1 = eax_3
    int32_t var_70
    int64_t var_60
    int64_t var_50
    
    if (eax_3 s> 0)
        ecx_2 = 0
        int32_t var_88_1 = 0
        
        while (true)
            int32_t* edi_3 = *(arg1 + 0x298) + ecx_2
            int32_t var_9c_1 = ecx_2
            int32_t* eax_4 =
                sub_5a9a10(eax_3, arg1, &var_50, arg2, arg3, _mm_cvtepi32_ps(zx.o(*edi_3)))
            
            if (*(arg1 + 0x20) == 1)
                eax_4 = ebp_1 u/ 3 * 3
            
            int128_t xmm0_4
            
            if (*(arg1 + 0x20) != 1 || ebp_1 != eax_4)
                xmm0_4 = data_7e7128
            else
                xmm0_4 = data_79a9d0
            
            bool cond:0_1 = *(arg1 + 4) == 4
            int32_t* var_9c_3 = &var_50
            int128_t var_3c = xmm0_4
            int32_t* var_a0_2 = &var_3c
            
            if (cond:0_1)
                sub_5aaeb0(eax_4, &edi_3[2], arg4, 0.100000001f, var_a0_2, var_9c_3)
            else
                var_70 = 0x3dcccccd
                int32_t var_6c_1 = 0x3dcccccd
                int32_t var_68_1 = 0x3dcccccd
                sub_5aa770(eax_4, &edi_3[2], arg4, &var_70, var_a0_2, var_9c_3)
            
            if (ebp_1 s> 0)
                int32_t eax_6 = edi_3[4]
                var_60 = *(edi_3 + 8)
                int32_t var_58_1 = eax_6
                int32_t eax_7 = sub_6cab20(&data_7e7128)
                int64_t xmm0_6 = var_80
                int32_t var_54_1 = eax_7
                int32_t var_24_1 = var_84_1
                int32_t eax_9
                int32_t ecx_8
                eax_9, ecx_8 = sub_6cab20(&data_7e7128)
                int32_t var_20_1 = eax_9
                
                if (arg4[1] == arg4[2])
                    int32_t var_9c_4 = ecx_8
                    sub_571180(arg4)
                
                int128_t* eax_11 = arg4[1]
                
                if (eax_11 != 0)
                    *eax_11 = xmm0_6.o
                    eax_11[1] = var_60.o
                
                arg4[1] += 0x20
            
            ebp_1 += 1
            ecx_2 = var_88_1 + 0x1c
            var_88_1 = ecx_2
            
            if (ebp_1 s>= var_64_1)
                break
            
            eax_3 = (*(edi_3 + 0x10)).d
            var_84_1 = eax_3
            var_80 = (*edi_3):8.q
        
        edi_1 = data_7fd4e0
        xmm0_1 = data_7fd4d8.q
    
    int32_t* eax_12 = *(arg1 + 0x28c)
    
    if (*eax_12 != 0)
        eax_12, ecx_2 = sub_5795c0(&var_50, *(arg1 + 0x20))
        int32_t var_48
        edi_1 = var_48
        xmm0_1 = var_50
    
    int32_t var_9c_6 = ecx_2
    var_80 = xmm0_1
    int32_t var_78_1 = edi_1
    sub_5a9a10(eax_12, arg1, &var_60, arg2, arg3, arg5)
    int32_t* edi_4 = *(arg1 + 0x298)
    int32_t ecx_17 = (*(arg1 + 0x29c) - edi_4) s/ 0x1c
    
    if (ecx_17 u> 1 && not(_mm_cvtepi32_ps(zx.o(*edi_4)) f> arg5)
            && not(arg5 f> _mm_cvtepi32_ps(zx.o(edi_4[ecx_17 * 7 - 7]))))
        int32_t* var_9c_8 = &var_60
        int32_t* edx_12 = &var_80
        
        if (*(arg1 + 4) == 4)
            sub_5aaeb0(&var_60, edx_12, arg4, 0.200000003f, 0x7e7118, var_9c_8)
        else
            var_70 = 0x3e4ccccd
            int32_t var_6c_2 = 0x3e4ccccd
            int32_t var_68_2 = 0x3e4ccccd
            sub_5aa770(&var_70, edx_12, arg4, &var_70, 0x7e7118, var_9c_8)
    
    sub_5a9ce0(&var_80, arg4, arg1, arg5, &var_80)
    sub_5aa090(&var_80, arg4, arg1, &var_80, &var_60)

int128_t* result
result.b = 1
return result
