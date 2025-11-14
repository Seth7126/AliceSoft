// 函数: sub_46b180
// 地址: 0x46b180
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9328
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
int32_t result = (*(*arg1 + 0x18))(__security_cookie ^ &__saved_edi)

if (result == 0x20)
    int32_t* edi_1 = arg6
    result = (*(*edi_1 + 0x18))()
    
    if (result == 0x20)
        arg6 = (*(*arg1 + 8))(arg2, arg3)
        int32_t eax_7 = (*(*edi_1 + 8))(arg7, arg8)
        int32_t eax_9 = (*(*arg1 + 0x1c))() - (arg4 << 2)
        int32_t eax_10 = (*(*edi_1 + 0x1c))()
        int32_t eax_12 = arg9 * arg10
        int32_t result_1
        sub_42f420(&result_1, arg4)
        int32_t var_4 = 0
        int32_t ecx_7 = 0
        int32_t var_14
        int32_t edi_4 = (var_14 - result_1) s>> 2
        
        if (edi_4 s> 0)
            int32_t esi_1 = 0
            
            do
                int32_t eax_13 = esi_1
                esi_1 += arg9
                *(result_1 + (ecx_7 << 2)) = divs.dp.d(sx.q(eax_13), arg4)
                ecx_7 += 1
            while (ecx_7 s< edi_4)
        
        int32_t* var_24
        sub_42f420(&var_24, arg4)
        int32_t ecx_9 = 0
        int32_t var_20
        int32_t edi_7 = (var_20 - var_24) s>> 2
        
        if (edi_7 s> 0)
            int32_t esi_2 = arg9
            
            do
                int32_t eax_16 = esi_2
                esi_2 += arg9
                var_24[ecx_9] = divs.dp.d(sx.q(eax_16), arg4) + 1
                ecx_9 += 1
            while (ecx_9 s< edi_7)
        
        int32_t i_2 = arg5
        
        if (i_2 s> 0)
            int32_t esi_3 = arg10
            int32_t ecx_10 = 0
            int32_t var_74_1 = 0
            int32_t eax_21 = neg.d(esi_3)
            int32_t i_1 = i_2
            int32_t i_3 = i_2
            int32_t i_4 = i_3
            int32_t i
            
            do
                int32_t temp0_3 = divs.dp.d(sx.q(ecx_10), i_2)
                int32_t eax_25 = ecx_10 + esi_3
                int32_t eax_26
                int32_t edx_10
                edx_10:eax_26 = sx.q(eax_25)
                
                if (arg4 s> 0)
                    int32_t ebx_2 = arg9
                    int32_t edi_9 = 0
                    int32_t* ecx_11 = var_24
                    int32_t eax_35 = neg.d(ebx_2)
                    arg1 = ecx_11
                    int32_t* eax_37 = result_1 - ecx_11
                    int32_t var_78_1 = arg4
                    int32_t j_1 = arg4
                    int32_t j
                    
                    do
                        int32_t var_68_1 = temp0_3 * i_2
                        int32_t eax_38 = 0
                        int32_t ecx_12 = 0
                        arg2 = temp0_3 * eax_10 + eax_7
                        arg3 = 0
                        int32_t esi_4 = 0
                        arg8 = 0
                        arg7 = 0
                        
                        if (temp0_3 s< divs.dp.d(edx_10:eax_26, i_2) + 1)
                            int32_t ebx_3 = var_74_1
                            int32_t k_1 = divs.dp.d(edx_10:eax_26, i_2) + 1 - temp0_3
                            int32_t k
                            
                            do
                                int32_t ecx_14 = var_68_1
                                int32_t ebp_5 = arg5
                                var_68_1 += ebp_5
                                
                                if (ecx_14 s< ebx_3)
                                    ebp_5 = i_4 + ecx_14
                                    ecx_14 = ebx_3
                                
                                if (ecx_14 + ebp_5 s<= eax_25)
                                label_46b3ed:
                                    int32_t ecx_15 = *(eax_37 + arg1)
                                    int32_t edx_13 = arg4
                                    int32_t ebx_6 = ecx_15 * edx_13
                                    int32_t var_60_1 = ecx_15
                                    void* var_64_1 = arg2 + (ecx_15 << 2)
                                    
                                    if (ecx_15 s< *arg1)
                                        int32_t ecx_24
                                        
                                        do
                                            int32_t esi_5 = ebx_6
                                            int32_t eax_47 = edx_13
                                            ebx_6 += edx_13
                                            
                                            if (esi_5 s< edi_9)
                                                eax_47 = var_78_1 + esi_5
                                                esi_5 = edi_9
                                            
                                            if (eax_47 + esi_5 s> arg9 + edi_9)
                                                eax_47 = edi_9 - esi_5 + arg9
                                                
                                                if (eax_47 s<= 0)
                                                    esi_4 = arg3
                                                    break
                                            
                                            char* edx_16 = var_64_1
                                            int32_t eax_51 = eax_47 * ebp_5
                                            arg7 += zx.d(*edx_16) * eax_51
                                            arg8 += zx.d(edx_16[1]) * eax_51
                                            var_64_1 = &edx_16[4]
                                            edx_13 = arg4
                                            esi_4 = arg3 + zx.d(edx_16[2]) * eax_51
                                            ecx_24 = var_60_1 + 1
                                            arg3 = esi_4
                                            var_60_1 = ecx_24
                                        while (ecx_24 s< *arg1)
                                    
                                    arg2 += eax_10
                                    ebx_3 = var_74_1
                                else
                                    ebp_5 = ebx_3 - ecx_14 + arg10
                                    
                                    if (ebp_5 s> 0)
                                        goto label_46b3ed
                                
                                k = k_1
                                k_1 -= 1
                            while (k != 1)
                            ebx_2 = arg9
                            ecx_12 = arg8
                            eax_38 = arg7
                        
                        edi_9 += ebx_2
                        arg1 = &arg1[1]
                        *arg6 = (divs.dp.d(sx.q(eax_38), eax_12)).b
                        *(arg6 + 1) = (divs.dp.d(sx.q(ecx_12), eax_12)).b
                        *(arg6 + 2) = (divs.dp.d(sx.q(esi_4), eax_12)).b
                        var_78_1 += eax_35
                        j = j_1
                        j_1 -= 1
                        arg6 = &arg6[1]
                    while (j != 1)
                    i_2 = arg5
                    i_3 = i_4
                    esi_3 = arg10
                
                i_3 += eax_21
                arg6 += eax_9
                i = i_1
                i_1 -= 1
                ecx_10 = eax_25
                var_74_1 = ecx_10
                i_4 = i_3
            while (i != 1)
        
        int32_t* eax_63 = var_24
        
        if (eax_63 != 0)
            j__free(eax_63)
        
        result = result_1
        
        if (result != 0)
            result = j__free(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
