// 函数: sub_712294
// 地址: 0x712294
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ebx = arg2
int32_t edi
int32_t var_2f4 = edi
int32_t var_2e8 = ebx
int32_t* eax_3 = sub_714cce() + 0x278
int32_t var_2c4
int16_t var_2bc[0x56]
int16_t var_110
int16_t* result

if (sub_7119de(arg3, &var_110, 0x83, &var_2bc, 0x55, &var_2c4) != 0)
    int32_t esi_2 = (ebx + 2) << 4
    int16_t* eax_5 = &var_110
    int32_t var_2cc_1 = esi_2
    int16_t* result_1 = *(esi_2 + arg1)
    int16_t* result_2 = result_1
    int32_t* i_2
    int32_t eax_7
    
    while (true)
        esi_2.w = *eax_5
        i_2 = nullptr
        int16_t temp1_1 = *result_2
        bool c_1 = esi_2.w u< temp1_1
        bool z_1 = esi_2.w == temp1_1
        esi_2 = var_2cc_1
        
        if (z_1)
            if (*eax_5 == 0)
                eax_7 = 0
                break
            
            esi_2.w = eax_5[1]
            int16_t temp2_1 = result_2[1]
            c_1 = esi_2.w u< temp2_1
            bool z_2 = esi_2.w == temp2_1
            int16_t var_2c6_1 = esi_2.w
            esi_2 = var_2cc_1
            
            if (z_2)
                eax_5 = &eax_5[2]
                result_2 = &result_2[2]
                
                if (var_2c6_1 != 0)
                    continue
                
                eax_7 = 0
                break
        
        eax_7 = sbb.d(eax_5, eax_5, c_1) | 1
        break
    
    if (eax_7 != 0)
        int16_t* ecx_3 = &var_110
        
        do
            eax_7.w = *ecx_3
            ecx_3 = &ecx_3[1]
        while (eax_7.w != 0)
        
        int16_t var_10e
        int32_t* eax_10 = __malloc_base(((((ecx_3 - &var_10e) s>> 1) + 1) << 1) + 4)
        
        if (eax_10 == 0)
            result = nullptr
        else
            int32_t ecx_7 = *(esi_2 + arg1)
            int32_t ecx_8 = *(arg1 + (ebx << 2) + 0xa0)
            int32_t ecx_9 = *(arg1 + 8)
            
            if (_wcscpy_s(&eax_10[1], ((ecx_3 - &var_10e) s>> 1) + 1, &var_110) != 0)
                int32_t var_308_1
                __builtin_memset(&var_308_1, 0, 0x14)
                __invoke_watson()
                noreturn
            
            bool cond:0_1 = var_110 != 0x43
            *(esi_2 + arg1) = &eax_10[1]
            int32_t* i_3
            
            if (cond:0_1 || var_10e != 0)
                i_3 = i_2
                *(arg1 + (ebx << 2) + 0xa0) = sub_7116eb(&var_2bc)
            else
                i_3 = i_2
                *(arg1 + (ebx << 2) + 0xa0) = i_3
            
            if (ebx == 2)
                int32_t* esi_3 = eax_3
                int32_t* i = i_3
                int32_t* ecx_10 = esi_3
                *(arg1 + 8) = var_2c4
                int32_t* var_2c8_2 = esi_3
                int32_t var_2d0_2 = esi_3[8]
                var_2c4 = esi_3[9]
                
                do
                    if (*(arg1 + 8) == *ecx_10)
                        if (i != 0)
                            *esi_3 = esi_3[i * 2]
                            esi_3[1] = esi_3[i * 2 + 1]
                            esi_3[i * 2] = var_2d0_2
                            esi_3[i * 2 + 1] = var_2c4
                        
                        break
                    
                    int32_t* esi_4 = var_2c8_2
                    i += 1
                    int32_t eax_19 = *ecx_10
                    int32_t ecx_11 = ecx_10[1]
                    *esi_4 = var_2d0_2
                    int32_t ebx_2 = var_2c4
                    var_2c4 = ecx_11
                    ecx_10 = &esi_4[2]
                    esi_4[1] = ebx_2
                    ebx = var_2e8
                    esi_3 = eax_3
                    var_2d0_2 = eax_19
                    var_2c8_2 = ecx_10
                while (i s< 5)
                
                if (i == 5)
                    int32_t* i_1 = i_2
                    int16_t var_210[0x80]
                    
                    if (___acrt_GetStringTypeA(i_2, 1, 0x7559a8, 0x7f, &var_210, *(arg1 + 8), 1)
                            == 0)
                        esi_3[1] = i_1
                    else
                        do
                            var_210[i_1] &= 0x1ff
                            i_1 += 1
                        while (i_1 u< 0x7f)
                        
                        int32_t ecx_13
                        ecx_13.b = sub_700d3a(&var_210, data_7e1558, 0xfe) == 0
                        esi_3[1] = ecx_13
                    
                    *esi_3 = *(arg1 + 8)
                
                *(arg1 + 0x18) = esi_3[1]
            else if (ebx == 1)
                *(arg1 + 0x10) = var_2c4
            else if (ebx == 5)
                *(arg1 + 0x14) = var_2c4
            
            if ((&data_7558e8)[ebx * 3](arg1) == 0)
                int32_t esi_7
                bool cond:2_1
                
                if (ecx_7 != &data_7e1800)
                    esi_7 = ebx * 2
                    int32_t* eax_35 = *(arg1 + (esi_7 << 3) + 0x28)
                    cond:2_1 = *eax_35 != 1
                    *eax_35
                    *eax_35 -= 1
                
                int32_t eax_36
                
                if (ecx_7 == &data_7e1800 || cond:2_1)
                    eax_36 = var_2cc_1
                else
                    __free_base(*(arg1 + (esi_7 << 3) + 0x28))
                    __free_base(*(arg1 + (esi_7 << 3) + 0x24))
                    __free_base(*(arg1 + (ebx << 2) + 0xa0))
                    eax_36 = var_2cc_1
                    *(eax_36 + arg1) = i_2
                    *(arg1 + (ebx << 2) + 0xa0) = i_2
                
                *eax_10 = 1
                result = *(eax_36 + arg1)
                *(arg1 + ebx * 0x10 + 0x28) = eax_10
            else
                *(var_2cc_1 + arg1) = ecx_7
                __free_base(*(arg1 + (ebx << 2) + 0xa0))
                *(arg1 + (ebx << 2) + 0xa0) = ecx_8
                __free_base(eax_10)
                *(arg1 + 8) = ecx_9
                result = nullptr
    else
        result = result_1
else
    result = nullptr

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
