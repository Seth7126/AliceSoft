// 函数: sub_647a80
// 地址: 0x647a80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i_1 = arg11
int32_t var_64 = arg8
int32_t var_38 = 0xffffffff
int32_t var_34 = 0xffffffff
uint32_t result_2 = arg7
uint32_t var_5c = arg7
int32_t* ecx_1 = arg10
uint32_t result_5 = arg3[0x72]
int32_t edi = arg8
int32_t var_50 = edi
int32_t i = i_1
int32_t arg_1c

if (arg10 != 0 && i_1 != 0)
    do
        i -= 1
        edi = var_50
        
        if (*ecx_1 == arg2)
            if (arg2 != result_5)
                uint32_t result_6
                
                do
                    result_6 = result_5
                    int32_t eax_3
                    int32_t edx_1
                    eax_3, edx_1 = sub_6472b0(&result_6, arg10, arg3, i_1, &result_6, &arg_1c)
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
            
            int32_t edi_3 = arg3[0xd]
            arg3[0xe] = _malloc((edi_3 << 3) + 8)
            arg3[0x12] = _realloc(arg3[0x12], edi_3 << 5)
            int32_t eax_13 = _realloc(arg3[0x13], arg3[0xd] << 4)
            int32_t edi_5 = arg3[0xd]
            arg3[0x13] = eax_13
            arg3[0x10] = _malloc(edi_5 << 2)
            arg3[0xf] = _malloc(edi_5 << 3)
            int32_t edx_2 = arg9
            arg3[0x11] = _malloc(edi_5 << 4)
            int32_t eax_19 = arg3[0xe]
            *(eax_19 + (arg12 << 3) + 8) = arg7
            *(eax_19 + (arg12 << 3) + 0xc) = arg8
            int32_t ecx_7 = arg3[0xe]
            *(ecx_7 + (arg12 << 3)) = arg4
            *(ecx_7 + (arg12 << 3) + 4) = arg5
            int32_t ecx_8 = arg_1c
            
            if (edx_2 s<= 0 && (edx_2 s< 0 || ecx_8 u< 0))
                arg7.q = 0
                edx_2 = arg8
                ecx_8 = 0
            
            int32_t eax_22 = arg3[0x11]
            int32_t ebx_1 = arg12 * 2
            *(eax_22 + (ebx_1 << 3) + 8) = ecx_8
            *(eax_22 + (ebx_1 << 3) + 0xc) = edx_2
            return 0
        
        ecx_1 = &ecx_1[1]
    while (i != 0)

int32_t ebp_1 = arg6
int32_t* var_40 = nullptr
int32_t var_44 = 0
int32_t var_60 = ebp_1
int128_t var_30
uint32_t result_4
uint32_t result

if (ebp_1 s<= arg8)
    uint32_t result_3 = result_4
    result_4 = result_3
    
    if (ebp_1 s< arg8 || result_3 u< arg7)
        uint32_t result_1 = result_2
        int32_t edi_2 = edi
        
        while (true)
            result = sbb.d(edi_2, ebp_1, result_1 u< result_3)
            
            if (result s> 0 || (result s>= 0 && result_1 - result_3 u>= 0x10000))
                int32_t edx_3
                result, edx_3 = __alldiv(result_1 + result_3, 
                    adc.d(edi_2, ebp_1, result_1 + result_3 u< result_1), 2, 0)
                result_1 = result
                ebp_1 = edx_3
            else
                result_1 = result_3
            
            if (result_1 != arg3[2] || ebp_1 != arg3[3])
                int32_t ecx_9 = *arg3
                int32_t eax_28
                
                if (ecx_9 == 0)
                    eax_28 = 0xffffff7f
                else
                    int32_t eax_26 = arg3[0xb1]
                    int32_t eax_27
                    
                    if (eax_26 != 0)
                        eax_27 = eax_26(ecx_9, result_1, ebp_1, 0)
                    
                    if (eax_26 == 0 || eax_27 == 0xffffffff)
                        eax_28 = 0xffffff80
                    else
                        arg3[2] = result_1
                        arg3[3] = ebp_1
                        
                        if (arg3[7] s>= 0)
                            __builtin_memset(&arg3[8], 0, 0x14)
                        
                        eax_28 = 0
                
                int32_t edx_4
                edx_4:result = sx.q(eax_28)
                
                if ((result | edx_4) != 0)
                    return result
            
            uint32_t eax_29
            int32_t edx_6
            eax_29, edx_6 = sub_647050(result, &var_30, arg3, 0xffffffff, 0xffffffff)
            
            if (eax_29 == 0xffffff80 && edx_6 == 0xffffffff)
                return 0xffffff80
            
            int32_t eax_33
            void* ecx_13
            int32_t* ecx_14
            
            if (edx_6 s>= 0 && (edx_6 s> 0 || eax_29 u>= 0))
                ecx_13 = var_30.d
                ecx_14 = arg10
                eax_33 = arg11
            
            if (edx_6 s< 0 || (edx_6 s<= 0 && eax_29 u< 0) || ecx_14 == 0 || eax_33 == 0)
            label_647dc9:
                result_2 = result_1
                var_50 = ebp_1
                
                if (edx_6 s>= 0 && (edx_6 s> 0 || eax_29 u>= 0))
                    var_5c = eax_29
                    var_64 = edx_6
                
                result_3 = result_4
                ebp_1 = var_60
            else
                while (true)
                    eax_33 -= 1
                    
                    if (*ecx_14 == (((zx.d(*(ecx_13 + 0x11)) << 8 | zx.d(*(ecx_13 + 0x10))) << 8
                            | zx.d(*(ecx_13 + 0xf))) << 8 | zx.d(*(ecx_13 + 0xe))))
                        result_3 = arg3[2]
                        ebp_1 = arg3[3]
                        result_1 = result_2
                        result_4 = result_3
                        var_60 = ebp_1
                        break
                    
                    ecx_14 = &ecx_14[1]
                    
                    if (eax_33 == 0)
                        goto label_647dc9
            
            edi_2 = var_50
            
            if (ebp_1 s> edi_2)
                break
            
            if (ebp_1 s>= edi_2)
                if (result_3 u>= result_1)
                    break
    
    i_1 = arg11

int32_t eax_34 = result_5 + 1
int32_t ecx_15 = var_64
arg3[2] = var_5c
arg3[3] = ecx_15

if (eax_34 != result_5)
    do
        result_4 = result_5
        int32_t edx_15
        eax_34, edx_15 = sub_6472b0(&result_4, arg10, arg3, i_1, &result_4, &var_38)
        arg3[3] = edx_15
        i_1 = arg11
        arg3[2] = eax_34
    while (result_4 != result_5)
    
    ecx_15 = var_64

if (arg3[2] != var_5c || arg3[3] != ecx_15)
    int32_t edx_16
    edx_16:result = sx.q(sub_646ff0(eax_34, i_1, arg3, var_5c, ecx_15))
    
    if ((result | edx_16) == 0)
        goto label_647ea1
else
label_647ea1:
    int128_t var_20
    int32_t edx_18
    edx_18:result = sx.q(sub_6475e0(&var_30, &var_20, arg3, &var_30, &var_40, &var_44, nullptr))
    
    if ((result | edx_18) == 0)
        int32_t eax_39 = arg3[0x72]
        int32_t* eax_40 = arg3[2]
        result_4 = arg3[3]
        int32_t eax_42
        int32_t edx_20
        eax_42, edx_20 = sub_647930(arg3, &var_20)
        int32_t* edi_8 = var_40
        int32_t edx_22
        edx_22:result = sx.q(sub_647a80(var_5c, var_64, arg3[2], arg3[3], arg7, arg8, arg_1c, arg9, 
            edi_8, var_44, arg12 + 1))
        
        if ((result | edx_22) == 0)
            if (edi_8 != 0)
                _free(edi_8)
            
            int32_t eax_44 = arg3[0xe]
            *(eax_44 + (arg12 << 3) + 8) = var_5c
            *(eax_44 + (arg12 << 3) + 0xc) = var_64
            *(arg3[0x10] + (arg12 << 2) + 4) = eax_39
            int32_t eax_46 = arg3[0xf]
            *(eax_46 + (arg12 << 3) + 8) = eax_40
            *(eax_46 + (arg12 << 3) + 0xc) = result_4
            int32_t ecx_33 = var_38
            int128_t* eax_49 = ((arg12 + 1) << 5) + arg3[0x12]
            int32_t ebx_4 = arg12 << 4
            *eax_49 = var_20
            int128_t var_10
            eax_49[1] = var_10
            *(arg3[0x13] + ebx_4 + 0x10) = var_30
            int32_t eax_51 = arg3[0x11]
            *(eax_51 + ebx_4 + 8) = ecx_33
            *(eax_51 + ebx_4 + 0xc) = var_34
            int32_t eax_52 = arg3[0x11]
            *(eax_52 + ebx_4 + 0x10) = eax_42
            *(eax_52 + ebx_4 + 0x14) = edx_20
            int32_t eax_53 = arg3[0x11]
            int32_t temp5_1 = *(eax_53 + ebx_4 + 0x18)
            *(eax_53 + ebx_4 + 0x18) -= eax_42
            *(eax_53 + ebx_4 + 0x1c) = sbb.d(*(eax_53 + ebx_4 + 0x1c), edx_20, temp5_1 u< eax_42)
            int32_t eax_54 = arg3[0x11]
            int32_t temp6_1 = *(eax_54 + ebx_4 + 0x1c)
            
            if (temp6_1 s<= 0 && (temp6_1 s< 0 || *(eax_54 + ebx_4 + 0x18) u< 0))
                *(eax_54 + ebx_4 + 0x18) = 0
                *(eax_54 + ebx_4 + 0x1c) = 0
            
            return 0

return result
