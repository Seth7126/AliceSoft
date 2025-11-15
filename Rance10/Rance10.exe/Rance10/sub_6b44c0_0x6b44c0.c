// 函数: sub_6b44c0
// 地址: 0x6b44c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg1[2] s> 0)
    *arg1
    int32_t edi_1 = divs.dp.d(sx.q(arg4), *arg1)
    int32_t var_18_1 = edi_1
    int32_t ebx_1 = edi_1 << 2
    __alloca_probe_16(ebx_1)
    __alloca_probe_16(ebx_1)
    int32_t var_10_1 = 0
    int32_t __saved_edi
    int32_t* edx_4
    
    if (edi_1 s<= 0)
        edx_4 = arg1
    else
        int32_t* esi_1 = &__saved_edi
        int32_t eax_11
        
        do
            int32_t eax_7 = sub_6b4270(arg1, arg3)
            *esi_1 = eax_7
            
            if (eax_7 == 0xffffffff)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return 0xffffffff
            
            edx_4 = arg1
            *esi_1 = edx_4[4] + ((*edx_4 * eax_7) << 2)
            esi_1 = &esi_1[1]
            eax_11 = var_10_1 + 1
            var_10_1 = eax_11
        while (eax_11 s< edi_1)
    
    int32_t eax_13 = 0
    int32_t i = 0
    int32_t var_c_3 = 0
    
    if (*edx_4 s> 0)
        float* var_10_2 = arg2
        
        do
            int32_t ecx_8 = 0
            
            if (edi_1 s>= 4)
                float* edx_5 = var_10_2
                int32_t __saved_ebx
                int32_t* var_14_1 = &__saved_ebx
                int32_t* edi_2 = &__saved_ebx
                int32_t j_1 = ((edi_1 - 4) u>> 2) + 1
                ecx_8 = j_1 << 2
                int32_t j
                
                do
                    int32_t eax_15 = edi_2[-1]
                    *edx_5 = *(edi_2[-2] + (i << 2)) + *edx_5
                    int32_t eax_16 = *edi_2
                    edx_5[1] = *(eax_15 + (i << 2)) + edx_5[1]
                    int32_t eax_17 = edi_2[1]
                    edi_2 = &edi_2[4]
                    edx_5[2] = *(eax_16 + (i << 2)) + edx_5[2]
                    edx_5[3] = *(eax_17 + (i << 2)) + edx_5[3]
                    edx_5 = &edx_5[4]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                edi_1 = var_18_1
                edx_4 = arg1
                eax_13 = var_c_3
            
            if (ecx_8 s< edi_1)
                float* edx_7 = &arg2[eax_13 + ecx_8]
                
                do
                    int32_t eax_19 = (&__saved_edi)[ecx_8]
                    ecx_8 += 1
                    *edx_7 = *(eax_19 + (i << 2)) + *edx_7
                    edx_7 = &edx_7[1]
                while (ecx_8 s< edi_1)
                
                edx_4 = arg1
                eax_13 = var_c_3
            
            i += 1
            var_10_2 = &var_10_2[edi_1]
            eax_13 += edi_1
            var_c_3 = eax_13
        while (i s< *edx_4)

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return 0
