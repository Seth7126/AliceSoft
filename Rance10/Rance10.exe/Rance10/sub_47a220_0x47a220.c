// 函数: sub_47a220
// 地址: 0x47a220
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_58 = 0xffffffff
int32_t (* var_5c)(void* arg1) = sub_72e408
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_a8 = ebx
int32_t esi
int32_t var_ac = esi
int32_t edi
int32_t var_b0 = edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi_1 = arg1
int32_t var_54
int32_t* result = (*(*esi_1 + 0x18))(__security_cookie ^ &var_54)

if (result == 0x20)
    result = (*(*arg6 + 0x18))()
    
    if (result == 0x20)
        void* var_8 = (*(*esi_1 + 8))(arg2, arg3)
        int32_t eax_7 = (*(*arg6 + 8))(arg7, arg8)
        int32_t j_2 = arg4
        int32_t* result_1 = (*(*esi_1 + 0x1c))() - (j_2 << 2)
        int32_t eax_9 = (*(*arg6 + 0x1c))()
        int32_t edi_2 = arg9
        int32_t eax_11 = edi_2 * arg10
        void* var_7c
        sub_422370(&var_7c, j_2)
        int32_t var_58_1 = 0
        int32_t ecx_7 = 0
        int32_t var_78
        int32_t ebx_3 = (var_78 - var_7c) s>> 2
        
        if (ebx_3 s> 0)
            int32_t edi_3 = 0
            
            do
                int32_t eax_12 = edi_3
                edi_3 += arg9
                *(var_7c + (ecx_7 << 2)) = divs.dp.d(sx.q(eax_12), j_2)
                ecx_7 += 1
            while (ecx_7 s< ebx_3)
            
            edi_2 = arg9
        
        void* var_70
        result = sub_422370(&var_70, j_2)
        int32_t ecx_9 = 0
        int32_t var_6c
        int32_t ebx_6 = (var_6c - var_70) s>> 2
        
        if (ebx_6 s> 0)
            do
                int32_t eax_15 = edi_2
                edi_2 += arg9
                result = divs.dp.d(sx.q(eax_15), j_2) + 1
                *(var_70 + (ecx_9 << 2)) = result
                ecx_9 += 1
            while (ecx_9 s< ebx_6)
        
        int32_t i_2 = arg5
        
        if (i_2 s> 0)
            int32_t ecx_10 = 0
            int32_t var_28_1 = 0
            int32_t i_3 = i_2
            int32_t i_4 = i_3
            int32_t i_1 = i_2
            int32_t i
            
            do
                int32_t var_24_1 = divs.dp.d(sx.q(ecx_10), i_2)
                int32_t eax_24 = arg10 + ecx_10
                int32_t ecx_11 = var_24_1
                var_54 = eax_24
                int32_t eax_25
                int32_t edx_10
                edx_10:eax_25 = sx.q(eax_24)
                int32_t eax_29 = ecx_11 * i_2
                int32_t eax_32 = ecx_11 * eax_9 + eax_7
                
                if (j_2 s> 0)
                    int32_t edi_4 = 0
                    int32_t ebx_7 = arg9
                    int32_t eax_34
                    uint32_t edx_12
                    edx_12:eax_34 = sx.q(eax_11)
                    int32_t edx_14 = neg.d(ebx_7)
                    void* eax_35 = var_70
                    void* edx_16 = var_7c - eax_35
                    arg8 = eax_35
                    int32_t j_3 = j_2
                    void* var_9c_1 = edx_16
                    int32_t j_1 = j_2
                    int32_t j
                    
                    do
                        int32_t esi_2 = *(edx_16 + eax_35)
                        int32_t eax_36 = eax_29
                        int32_t var_c = eax_32
                        int64_t var_44_1
                        __builtin_memset(&var_44_1, 0, 0x18)
                        int32_t var_94_1 = esi_2
                        int32_t eax_54
                        uint32_t ecx_22
                        
                        if (ecx_11 s>= divs.dp.d(edx_10:eax_25, i_2) + 1)
                            ecx_22 = 0
                            arg3 = 0
                            arg2 = 0
                            arg1 = 0
                            arg6 = nullptr
                            eax_54 = 0
                        else
                            int32_t ebx_8 = var_28_1
                            int32_t k_1 = divs.dp.d(edx_10:eax_25, i_2) + 1 - var_24_1
                            arg3 = 0
                            arg2 = 0
                            arg1 = 0
                            arg6 = nullptr
                            uint32_t var_10 = 0
                            int32_t var_14 = 0
                            int32_t k
                            
                            do
                                int32_t edx_20 = arg5
                                int32_t ecx_14 = eax_36
                                arg7 = edx_20
                                var_44_1:4.d = eax_36 + edx_20
                                
                                if (ecx_14 s< ebx_8)
                                    edx_20 = i_4 + ecx_14
                                    ecx_14 = ebx_8
                                    arg7 = edx_20
                                
                                int32_t edx_23
                                
                                if (edx_20 + ecx_14 s> var_54)
                                    edx_23 = ebx_8 - ecx_14 + arg10
                                    arg7 = edx_23
                                
                                if (edx_20 + ecx_14 s<= var_54 || edx_23 s> 0)
                                    int64_t var_3c_1
                                    var_3c_1:4.d = esi_2
                                    int64_t var_34_1
                                    var_34_1:4.d = var_c + (esi_2 << 2)
                                    int32_t eax_41 = arg4
                                    int32_t ebx_10 = esi_2 * eax_41
                                    
                                    if (esi_2 s< *arg8)
                                        bool cond:3_1
                                        
                                        do
                                            int32_t esi_3 = ebx_10
                                            int32_t ecx_16 = eax_41
                                            ebx_10 += eax_41
                                            
                                            if (esi_3 s< edi_4)
                                                ecx_16 = j_3 + esi_3
                                                esi_3 = edi_4
                                            
                                            if (ecx_16 + esi_3 s> arg9 + edi_4)
                                                ecx_16 = edi_4 - esi_3 + arg9
                                                
                                                if (ecx_16 s<= 0)
                                                    break
                                            
                                            int32_t ecx_20 = ecx_16 * arg7
                                            char* esi_4 = var_34_1:4.d
                                            int32_t eax_46
                                            int32_t edx_25
                                            edx_25:eax_46 = sx.q(zx.d(*esi_4) * ecx_20)
                                            int32_t temp5_1 = var_14
                                            var_14 += eax_46
                                            var_10 =
                                                adc.d(var_10, edx_25, temp5_1 + eax_46 u< temp5_1)
                                            int32_t eax_49
                                            int32_t edx_26
                                            edx_26:eax_49 = sx.q(zx.d(esi_4[1]) * ecx_20)
                                            int32_t* temp6_1 = arg6
                                            arg6 += eax_49
                                            arg1 = adc.d(arg1, edx_26, temp6_1 + eax_49 u< temp6_1)
                                            int32_t eax_52
                                            int32_t edx_27
                                            edx_27:eax_52 = sx.q(zx.d(esi_4[2]) * ecx_20)
                                            int32_t temp7_1 = arg2
                                            arg2 += eax_52
                                            arg3 = adc.d(arg3, edx_27, temp7_1 + eax_52 u< temp7_1)
                                            var_34_1:4.d = &esi_4[4]
                                            cond:3_1 = var_3c_1:4.d + 1 s< *arg8
                                            eax_41 = arg4
                                            var_3c_1:4.d += 1
                                        while (cond:3_1)
                                        esi_2 = var_94_1
                                    
                                    var_c += eax_9
                                    ebx_8 = var_28_1
                                
                                k = k_1
                                k_1 -= 1
                                eax_36 = var_44_1:4.d
                            while (k != 1)
                            ebx_7 = arg9
                            ecx_22 = var_10
                            eax_54 = var_14
                        
                        int32_t var_24_3 = arg6
                        *var_8 = __alldiv(eax_54, ecx_22, eax_34, edx_12)
                        *(var_8 + 1) = __alldiv(var_24_3, arg1, eax_34, edx_12)
                        var_24_1 = arg2
                        ecx_11 = var_24_1
                        edi_4 += ebx_7
                        edx_16 = var_9c_1
                        *(var_8 + 2) = __alldiv(var_24_1, arg3, eax_34, edx_12)
                        j_3 = arg3 + edx_14
                        eax_35 = &arg8[1]
                        var_8 += 4
                        j = j_1
                        j_1 -= 1
                        arg8 = eax_35
                    while (j != 1)
                    j_2 = arg4
                    i_2 = arg5
                    i_3 = i_4
                
                result = result_1
                i_3 += neg.d(arg10)
                var_8 += result
                i = i_1
                i_1 -= 1
                ecx_10 = var_54
                var_28_1 = ecx_10
                i_4 = i_3
            while (i != 1)
        
        void* ecx_26 = var_70
        int32_t var_68
        
        if (ecx_26 != 0)
            result = sub_403160(ecx_26, (var_68 - ecx_26) s>> 2, 4)
        void* ecx_27 = var_7c
        int32_t var_74
        
        if (ecx_27 != 0)
            result = sub_403160(ecx_27, (var_74 - ecx_27) s>> 2, 4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
