// 函数: sub_46b5a0
// 地址: 0x46b5a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9358
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
int32_t result = (*(*arg1 + 0x18))(__security_cookie ^ &__saved_edi)

if (result == 0x20)
    result = (*(*arg6 + 0x18))()
    
    if (result == 0x20)
        char* var_94_1 = (*(*arg1 + 8))(arg2, arg3)
        int32_t eax_7 = (*(*arg6 + 8))(arg7, arg8)
        int32_t eax_9 = (*(*arg1 + 0x1c))() - (arg4 << 2)
        int32_t eax_10 = (*(*arg6 + 0x1c))()
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
        
        int32_t* var_28
        sub_42f420(&var_28, arg4)
        int32_t ecx_9 = 0
        int32_t var_24
        int32_t edi_7 = (var_24 - var_28) s>> 2
        
        if (edi_7 s> 0)
            int32_t esi_2 = arg9
            
            do
                int32_t eax_16 = esi_2
                esi_2 += arg9
                var_28[ecx_9] = divs.dp.d(sx.q(eax_16), arg4) + 1
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
                void* ecx_29
                
                if (arg4 s<= 0)
                    ecx_29 = var_94_1
                else
                    int32_t edi_9 = 0
                    int32_t* ecx_11 = var_28
                    int32_t* var_90_1 = ecx_11
                    int32_t var_7c_1 = arg4
                    int32_t* var_1c_1 = result_1 - ecx_11
                    int32_t j_1 = arg4
                    int32_t ebx_3 = arg9
                    int32_t j
                    
                    do
                        int32_t var_8c_1 = 0
                        int32_t eax_38 = 0
                        int32_t ecx_12 = 0
                        int32_t var_70_1 = temp0_3 * eax_10 + eax_7
                        int32_t ebp_2 = 0
                        int32_t esi_6 = 0
                        int32_t var_50_1 = temp0_3 * i_2
                        int32_t edx_13 = arg4
                        int32_t var_80_1 = 0
                        int32_t var_88_1 = 0
                        int32_t var_78_1 = 0
                        
                        if (temp0_3 s< divs.dp.d(edx_10:eax_26, i_2) + 1)
                            int32_t ebx_4 = var_74_1
                            int32_t k_1 = divs.dp.d(edx_10:eax_26, i_2) + 1 - temp0_3
                            int32_t k
                            
                            do
                                int32_t ecx_13 = var_50_1
                                int32_t ebp_3 = arg5
                                var_50_1 += ebp_3
                                
                                if (ecx_13 s< ebx_4)
                                    ebp_3 = i_4 + ecx_13
                                    ecx_13 = ebx_4
                                
                                if (ecx_13 + ebp_3 s<= eax_25)
                                label_46b83a:
                                    int32_t ecx_14 = *(var_1c_1 + var_90_1)
                                    esi_6 = var_8c_1
                                    int32_t ebx_7 = ecx_14 * edx_13
                                    int32_t var_48_1 = ecx_14
                                    void* var_68_1 = var_70_1 + (ecx_14 << 2)
                                    
                                    if (ecx_14 s< *var_90_1)
                                        int32_t ecx_26
                                        
                                        do
                                            int32_t esi_8 = ebx_7
                                            int32_t eax_47 = edx_13
                                            ebx_7 += edx_13
                                            
                                            if (esi_8 s< edi_9)
                                                eax_47 = var_7c_1 + esi_8
                                                esi_8 = edi_9
                                            
                                            if (eax_47 + esi_8 s> arg9 + edi_9)
                                                eax_47 = edi_9 - esi_8 + arg9
                                                
                                                if (eax_47 s<= 0)
                                                    esi_6 = var_8c_1
                                                    break
                                            
                                            char* edx_16 = var_68_1
                                            int32_t eax_51 = eax_47 * ebp_3
                                            var_88_1 += zx.d(*edx_16) * eax_51
                                            var_80_1 += zx.d(edx_16[1]) * eax_51
                                            esi_6 = var_8c_1 + zx.d(edx_16[2]) * eax_51
                                            var_68_1 = &edx_16[4]
                                            edx_13 = arg4
                                            var_8c_1 = esi_6
                                            var_78_1 += zx.d(edx_16[3]) * eax_51
                                            ecx_26 = var_48_1 + 1
                                            var_48_1 = ecx_26
                                        while (ecx_26 s< *var_90_1)
                                        edx_13 = arg4
                                    
                                    var_70_1 += eax_10
                                    ebx_4 = var_74_1
                                else
                                    ebp_3 = ebx_4 - ecx_13 + arg10
                                    
                                    if (ebp_3 s> 0)
                                        goto label_46b83a
                                
                                k = k_1
                                k_1 -= 1
                            while (k != 1)
                            ebx_3 = arg9
                            ecx_12 = var_80_1
                            eax_38 = var_88_1
                            ebp_2 = var_78_1
                        
                        edi_9 += ebx_3
                        var_90_1 = &var_90_1[1]
                        *var_94_1 = (divs.dp.d(sx.q(eax_38), eax_12)).b
                        var_94_1[1] = (divs.dp.d(sx.q(ecx_12), eax_12)).b
                        var_94_1[2] = (divs.dp.d(sx.q(esi_6), eax_12)).b
                        var_94_1[3] = (divs.dp.d(sx.q(ebp_2), eax_12)).b
                        ecx_29 = &var_94_1[4]
                        var_7c_1 += neg.d(arg9)
                        j = j_1
                        j_1 -= 1
                        var_94_1 = ecx_29
                    while (j != 1)
                    i_2 = arg5
                    i_3 = i_4
                    esi_3 = arg10
                
                i_3 += eax_21
                i = i_1
                i_1 -= 1
                var_94_1 = ecx_29 + eax_9
                ecx_10 = eax_25
                var_74_1 = ecx_10
                i_4 = i_3
            while (i != 1)
        
        int32_t* eax_65 = var_28
        
        if (eax_65 != 0)
            j__free(eax_65)
        
        result = result_1
        
        if (result != 0)
            result = j__free(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
