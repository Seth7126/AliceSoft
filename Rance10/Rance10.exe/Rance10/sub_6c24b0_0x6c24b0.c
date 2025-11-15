// 函数: sub_6c24b0
// 地址: 0x6c24b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i_1 = arg11
int32_t var_50 = arg8
int32_t var_64 = arg8
int32_t i = i_1
int32_t var_38 = 0xffffffff
int32_t var_34 = 0xffffffff
uint32_t var_5c = arg7
uint32_t result_1 = arg7
int32_t* ecx_1 = arg10
uint32_t result_5 = arg3[0x72]
uint32_t result_2 = result_1
int32_t arg_1c

if (arg10 != 0 && i_1 != 0)
    do
        i -= 1
        result_1 = result_2
        
        if (*ecx_1 == arg2)
            if (arg2 != result_5)
                uint32_t result_6
                
                do
                    result_6 = result_5
                    int32_t eax_3
                    int32_t edx_1
                    eax_3, edx_1 = sub_6c1cf0(&result_6, arg10, arg3, i_1, &result_6, &arg_1c)
                    arg3[3] = edx_1
                    i_1 = arg11
                    arg3[2] = eax_3
                while (result_6 != result_5)
            
            arg3[0xd] = arg12 + 1
            int32_t eax_5 = arg3[0xe]
            
            if (eax_5 != 0)
                _free(eax_5)
            
            int32_t eax_6 = arg3[0x10]
            
            if (eax_6 != 0)
                _free(eax_6)
            
            int32_t eax_7 = arg3[0xf]
            
            if (eax_7 != 0)
                _free(eax_7)
            
            void* var_7c_5 = (arg3[0xd] << 3) + 8
            arg3[0xe] = sub_705e22()
            int32_t var_7c_6 = arg3[0xd] << 5
            int32_t var_80_2 = arg3[0x12]
            arg3[0x12] = _realloc()
            int32_t var_84_2 = arg3[0xd] << 4
            int32_t var_88_1 = arg3[0x13]
            arg3[0x13] = _realloc()
            int32_t var_8c_1 = arg3[0xd] << 2
            arg3[0x10] = sub_705e22()
            int32_t var_7c_7 = arg3[0xd] << 3
            arg3[0xf] = sub_705e22()
            int32_t var_7c_8 = arg3[0xd] << 4
            int32_t edx_2 = arg9
            arg3[0x11] = sub_705e22()
            int32_t eax_26 = arg3[0xe]
            *(eax_26 + (arg12 << 3) + 8) = arg7
            *(eax_26 + (arg12 << 3) + 0xc) = arg8
            int32_t ecx_7 = arg3[0xe]
            *(ecx_7 + (arg12 << 3)) = arg4
            *(ecx_7 + (arg12 << 3) + 4) = arg5
            int32_t ecx_8 = arg_1c
            
            if (edx_2 s<= 0 && (edx_2 s< 0 || ecx_8 u< 0))
                arg7.q = 0
                edx_2 = arg8
                ecx_8 = 0
            
            int32_t eax_29 = arg3[0x11]
            int32_t edi_2 = arg12 * 2
            *(eax_29 + (edi_2 << 3) + 8) = ecx_8
            *(eax_29 + (edi_2 << 3) + 0xc) = edx_2
            return 0
        
        ecx_1 = &ecx_1[1]
    while (i != 0)

int32_t ebx_1 = arg6
int32_t* var_40 = nullptr
int32_t var_44 = 0
int32_t var_60 = ebx_1
int128_t var_30
uint32_t result_4
uint32_t result

if (ebx_1 s<= arg8)
    uint32_t result_3 = result_4
    result_4 = result_3
    
    if (ebx_1 s< arg8 || result_3 u< arg7)
        while (true)
            result = sbb.d(var_50, ebx_1, result_1 u< result_3)
            
            if (result s> 0 || (result s>= 0 && result_1 - result_3 u>= 0x10000))
                int32_t edx_3
                result, edx_3 = __alldiv(result_1 + result_3, 
                    adc.d(var_50, ebx_1, result_1 + result_3 u< result_1), 2, 0)
                result_1 = result
                ebx_1 = edx_3
            else
                result_1 = result_3
            
            if (result_1 != arg3[2] || ebx_1 != arg3[3])
                int32_t ecx_9 = *arg3
                int32_t eax_35
                
                if (ecx_9 == 0)
                    eax_35 = 0xffffff7f
                else
                    int32_t eax_33 = arg3[0xb1]
                    int32_t eax_34
                    
                    if (eax_33 != 0)
                        eax_34 = eax_33(ecx_9, result_1, ebx_1, 0)
                    
                    if (eax_33 == 0 || eax_34 == 0xffffffff)
                        eax_35 = 0xffffff80
                    else
                        arg3[2] = result_1
                        arg3[3] = ebx_1
                        sub_6b80a0(&arg3[6])
                        eax_35 = 0
                
                int32_t edx_4
                edx_4:result = sx.q(eax_35)
                
                if ((result | edx_4) != 0)
                    return result
            
            uint32_t eax_36
            int32_t edx_6
            eax_36, edx_6 = sub_6c1ab0(result, &var_30, arg3, 0xffffffff, 0xffffffff)
            
            if (eax_36 == 0xffffff80 && edx_6 == 0xffffffff)
                return 0xffffff80
            
            int32_t eax_40
            void* ecx_14
            int32_t* ecx_15
            
            if (edx_6 s>= 0 && (edx_6 s> 0 || eax_36 u>= 0))
                ecx_14 = var_30.d
                ecx_15 = arg10
                eax_40 = arg11
            
            int32_t ecx_16
            
            if (edx_6 s< 0 || (edx_6 s<= 0 && eax_36 u< 0) || ecx_15 == 0 || eax_40 == 0)
            label_6c27d9:
                result_2 = result_1
                ecx_16 = ebx_1
                var_50 = ecx_16
                
                if (edx_6 s>= 0 && (edx_6 s> 0 || eax_36 u>= 0))
                    var_5c = eax_36
                    var_64 = edx_6
                
                result_3 = result_4
                ebx_1 = var_60
            else
                while (true)
                    eax_40 -= 1
                    
                    if (*ecx_15 == (((zx.d(*(ecx_14 + 0x11)) << 8 | zx.d(*(ecx_14 + 0x10))) << 8
                            | zx.d(*(ecx_14 + 0xf))) << 8 | zx.d(*(ecx_14 + 0xe))))
                        result_3 = arg3[2]
                        ebx_1 = arg3[3]
                        result_1 = result_2
                        ecx_16 = var_50
                        result_4 = result_3
                        var_60 = ebx_1
                        break
                    
                    ecx_15 = &ecx_15[1]
                    
                    if (eax_40 == 0)
                        goto label_6c27d9
            
            if (ebx_1 s> ecx_16)
                break
            
            if (ebx_1 s>= ecx_16)
                if (result_3 u>= result_1)
                    break
    
    i_1 = arg11

int32_t eax_41 = result_5 + 1
int32_t ecx_17 = var_64
arg3[2] = var_5c
arg3[3] = ecx_17

if (eax_41 != result_5)
    do
        result_4 = result_5
        int32_t edx_15
        eax_41, edx_15 = sub_6c1cf0(&result_4, arg10, arg3, i_1, &result_4, &var_38)
        arg3[3] = edx_15
        i_1 = arg11
        arg3[2] = eax_41
    while (result_4 != result_5)
    
    ecx_17 = var_64

if (arg3[2] != var_5c || arg3[3] != ecx_17)
    int32_t edx_16
    edx_16:result = sx.q(sub_6c1a50(eax_41, i_1, arg3, var_5c, ecx_17))
    
    if ((result | edx_16) == 0)
        goto label_6c28af
else
label_6c28af:
    int128_t var_20
    int32_t edx_18
    edx_18:result = sx.q(sub_6c2000(&var_30, &var_20, arg3, &var_30, &var_40, &var_44, nullptr))
    
    if ((result | edx_18) == 0)
        int32_t eax_46 = arg3[0x72]
        int32_t* eax_47 = arg3[2]
        result_4 = arg3[3]
        int32_t eax_49
        int32_t edx_20
        eax_49, edx_20 = sub_6c2360(arg3, &var_20)
        int32_t* edi_4 = var_40
        int32_t edx_22
        edx_22:result = sx.q(sub_6c24b0(var_5c, var_64, arg3[2], arg3[3], arg7, arg8, arg_1c, arg9, 
            edi_4, var_44, arg12 + 1))
        
        if ((result | edx_22) == 0)
            if (edi_4 != 0)
                _free(edi_4)
            
            int32_t eax_51 = arg3[0xe]
            *(eax_51 + (arg12 << 3) + 8) = var_5c
            *(eax_51 + (arg12 << 3) + 0xc) = var_64
            *(arg3[0x10] + (arg12 << 2) + 4) = eax_46
            int32_t eax_53 = arg3[0xf]
            *(eax_53 + (arg12 << 3) + 8) = eax_47
            *(eax_53 + (arg12 << 3) + 0xc) = result_4
            int32_t ecx_35 = var_38
            int128_t* eax_56 = ((arg12 + 1) << 5) + arg3[0x12]
            int32_t ebx_4 = arg12 << 4
            *eax_56 = var_20
            int128_t var_10
            eax_56[1] = var_10
            *(arg3[0x13] + ebx_4 + 0x10) = var_30
            int32_t eax_58 = arg3[0x11]
            *(ebx_4 + eax_58 + 8) = ecx_35
            *(ebx_4 + eax_58 + 0xc) = var_34
            int32_t eax_59 = arg3[0x11]
            *(ebx_4 + eax_59 + 0x10) = eax_49
            *(ebx_4 + eax_59 + 0x14) = edx_20
            int32_t eax_60 = arg3[0x11]
            int32_t temp5_1 = *(ebx_4 + eax_60 + 0x18)
            *(ebx_4 + eax_60 + 0x18) -= eax_49
            *(ebx_4 + eax_60 + 0x1c) = sbb.d(*(ebx_4 + eax_60 + 0x1c), edx_20, temp5_1 u< eax_49)
            int32_t eax_61 = arg3[0x11]
            int32_t temp6_1 = *(ebx_4 + eax_61 + 0x1c)
            
            if (temp6_1 s<= 0 && (temp6_1 s< 0 || *(ebx_4 + eax_61 + 0x18) u< 0))
                *(ebx_4 + eax_61 + 0x18) = 0
                *(ebx_4 + eax_61 + 0x1c) = 0
            
            return 0

return result
