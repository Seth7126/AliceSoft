// 函数: sub_47a5e0
// 地址: 0x47a5e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_58 = 0xffffffff
int32_t (* var_5c)(void* arg1) = sub_72e438
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_b4 = ebx
int32_t esi
int32_t var_b8 = esi
int32_t edi
int32_t var_bc = edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi_1 = arg1
int32_t var_54
int32_t result = (*(*esi_1 + 0x18))(__security_cookie ^ &var_54)

if (result == 0x20)
    result = (*(*arg6 + 0x18))()
    
    if (result == 0x20)
        arg1 = (*(*esi_1 + 8))(arg2, arg3)
        int32_t eax_7 = (*(*arg6 + 8))(arg7, arg8)
        uint32_t j_2 = arg4
        int32_t eax_9 = (*(*esi_1 + 0x1c))() - (j_2 << 2)
        int32_t ebx_1 = arg9
        var_54 = (*(*arg6 + 0x1c))()
        int32_t eax_12 = ebx_1 * arg10
        void* var_88
        sub_422370(&var_88, j_2)
        int32_t var_58_1 = 0
        int32_t ecx_7 = 0
        int32_t var_84
        int32_t eax_15 = (var_84 - var_88) s>> 2
        
        if (eax_15 s> 0)
            int32_t edi_2 = 0
            
            do
                int32_t eax_16 = edi_2
                edi_2 += ebx_1
                *(var_88 + (ecx_7 << 2)) = divs.dp.d(sx.q(eax_16), j_2)
                ecx_7 += 1
            while (ecx_7 s< eax_15)
        
        void* var_7c
        sub_422370(&var_7c, j_2)
        int32_t ecx_9 = 0
        int32_t var_78
        result = (var_78 - var_7c) s>> 2
        arg6 = result
        
        if (result s> 0)
            int32_t edi_3 = ebx_1
            
            do
                int32_t eax_21 = edi_3
                edi_3 += ebx_1
                result = divs.dp.d(sx.q(eax_21), j_2) + 1
                *(var_7c + (ecx_9 << 2)) = result
                ecx_9 += 1
            while (ecx_9 s< arg6)
        
        uint32_t i_2 = arg5
        
        if (i_2 s> 0)
            int32_t ecx_10 = 0
            int32_t var_34_1 = 0
            uint32_t i_3 = i_2
            uint32_t i_1 = i_2
            uint32_t i
            
            do
                int32_t temp0_3 = divs.dp.d(sx.q(ecx_10), i_2)
                int32_t eax_30 = arg10 + ecx_10
                int32_t ecx_11 = temp0_3
                int32_t eax_31
                int32_t edx_10
                edx_10:eax_31 = sx.q(eax_30)
                int32_t eax_35 = ecx_11 * i_2
                int32_t eax_38 = ecx_11 * var_54 + eax_7
                
                if (j_2 s> 0)
                    int32_t edi_4 = 0
                    int32_t eax_40
                    uint32_t edx_12
                    edx_12:eax_40 = sx.q(eax_12)
                    int32_t edx_14 = neg.d(ebx_1)
                    void* eax_41 = var_7c
                    void* edx_16 = var_88 - eax_41
                    int32_t* var_10 = eax_41
                    uint32_t j_3 = j_2
                    void* var_a8_1 = edx_16
                    uint32_t j_1 = j_2
                    uint32_t j
                    
                    do
                        int32_t esi_2 = *(edx_16 + eax_41)
                        int32_t eax_42 = eax_35
                        int32_t var_1c_3 = eax_38
                        int64_t var_50_1
                        __builtin_memset(&var_50_1, 0, 0x18)
                        uint32_t var_18_4
                        var_18_4.q = 0
                        int32_t var_a0_1 = esi_2
                        int32_t var_c
                        int32_t eax_63
                        uint32_t ecx_23
                        uint32_t esi_6
                        uint32_t var_14
                        
                        if (ecx_11 s>= divs.dp.d(edx_10:eax_31, i_2) + 1)
                            ecx_23 = 0
                            esi_6 = var_14
                            arg2 = 0
                            arg8 = 0
                            arg6 = nullptr
                            arg3 = 0
                            eax_63 = 0
                            var_c = 0
                        else
                            int32_t ebx_2 = var_34_1
                            int32_t k_1 = divs.dp.d(edx_10:eax_31, i_2) + 1 - temp0_3
                            arg2 = 0
                            arg8 = 0
                            arg6 = nullptr
                            arg3 = 0
                            uint32_t var_20_1 = 0
                            int32_t var_24_1 = 0
                            uint32_t var_28_1 = var_14
                            var_c = 0
                            int32_t k
                            
                            do
                                uint32_t edx_20 = arg5
                                int32_t ecx_15 = eax_42
                                var_14 = edx_20
                                var_50_1:4.d = eax_42 + edx_20
                                
                                if (ecx_15 s< ebx_2)
                                    edx_20 = i_3 + ecx_15
                                    ecx_15 = ebx_2
                                    var_14 = edx_20
                                
                                uint32_t edx_23
                                
                                if (edx_20 + ecx_15 s> eax_30)
                                    edx_23 = ebx_2 - ecx_15 + arg10
                                    var_14 = edx_23
                                
                                if (edx_20 + ecx_15 s<= eax_30 || edx_23 s> 0)
                                    int64_t var_48_1
                                    var_48_1:4.d = esi_2
                                    int64_t var_40_1
                                    var_40_1:4.d = var_1c_3 + (esi_2 << 2)
                                    uint32_t eax_47 = arg4
                                    int32_t ebx_4 = esi_2 * eax_47
                                    
                                    if (esi_2 s< *var_10)
                                        bool cond:3_1
                                        
                                        do
                                            int32_t esi_3 = ebx_4
                                            uint32_t ecx_17 = eax_47
                                            ebx_4 += eax_47
                                            
                                            if (esi_3 s< edi_4)
                                                ecx_17 = j_3 + esi_3
                                                esi_3 = edi_4
                                            
                                            if (ecx_17 + esi_3 s> arg9 + edi_4)
                                                ecx_17 = edi_4 - esi_3 + arg9
                                                
                                                if (ecx_17 s<= 0)
                                                    break
                                            
                                            int32_t ecx_21 = ecx_17 * var_14
                                            char* esi_4 = var_40_1:4.d
                                            int32_t eax_52
                                            int32_t edx_25
                                            edx_25:eax_52 = sx.q(zx.d(*esi_4) * ecx_21)
                                            int32_t temp5_1 = var_24_1
                                            var_24_1 += eax_52
                                            var_20_1 =
                                                adc.d(var_20_1, edx_25, temp5_1 + eax_52 u< temp5_1)
                                            int32_t eax_55
                                            int32_t edx_26
                                            edx_26:eax_55 = sx.q(zx.d(esi_4[1]) * ecx_21)
                                            int32_t temp6_1 = arg3
                                            arg3 += eax_55
                                            arg6 = adc.d(arg6, edx_26, temp6_1 + eax_55 u< temp6_1)
                                            int32_t eax_58
                                            int32_t edx_27
                                            edx_27:eax_58 = sx.q(zx.d(esi_4[2]) * ecx_21)
                                            int32_t temp7_1 = arg8
                                            arg8 += eax_58
                                            arg2 = adc.d(arg2, edx_27, temp7_1 + eax_58 u< temp7_1)
                                            int32_t eax_61
                                            int32_t edx_28
                                            edx_28:eax_61 = sx.q(zx.d(esi_4[3]) * ecx_21)
                                            int32_t temp8_1 = var_c
                                            var_c += eax_61
                                            var_28_1 =
                                                adc.d(var_28_1, edx_28, temp8_1 + eax_61 u< temp8_1)
                                            var_40_1:4.d = &esi_4[4]
                                            cond:3_1 = var_48_1:4.d + 1 s< *var_10
                                            eax_47 = arg4
                                            var_48_1:4.d += 1
                                        while (cond:3_1)
                                        esi_2 = var_a0_1
                                    
                                    var_1c_3 += var_54
                                    ebx_2 = var_34_1
                                
                                k = k_1
                                k_1 -= 1
                                eax_42 = var_50_1:4.d
                            while (k != 1)
                            ebx_1 = arg9
                            ecx_23 = var_20_1
                            eax_63 = var_24_1
                            esi_6 = var_28_1
                        *arg1 = __alldiv(eax_63, ecx_23, eax_40, edx_12)
                        arg1[1] = __alldiv(arg3, arg6, eax_40, edx_12)
                        arg1[2] = __alldiv(arg8, arg2, eax_40, edx_12)
                        edi_4 += ebx_1
                        edx_16 = var_a8_1
                        arg1[3] = __alldiv(var_c, esi_6, eax_40, edx_12)
                        j_3 += edx_14
                        eax_41 = &var_10[1]
                        arg1 = &arg1[4]
                        j = j_1
                        j_1 -= 1
                        ecx_11 = temp0_3
                        var_10 = eax_41
                    while (j != 1)
                    j_2 = arg4
                    i_2 = arg5
                
                arg1 = &arg1[eax_9]
                result = neg.d(arg10)
                i_3 += result
                i = i_1
                i_1 -= 1
                ecx_10 = eax_30
                var_34_1 = ecx_10
            while (i != 1)
        
        void* ecx_31 = var_7c
        int32_t var_74
        
        if (ecx_31 != 0)
            result = sub_403160(ecx_31, (var_74 - ecx_31) s>> 2, 4)
        void* ecx_32 = var_88
        int32_t var_80
        
        if (ecx_32 != 0)
            result = sub_403160(ecx_32, (var_80 - ecx_32) s>> 2, 4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
