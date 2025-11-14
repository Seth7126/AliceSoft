// 函数: sub_53a8d0
// 地址: 0x53a8d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9358
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
int32_t result

if ((*(*arg4 + 0x18))(__security_cookie ^ &__saved_edi) == 0x20)
    char* var_94_1 = (*(*arg1 + 8))(0, 0)
    int32_t eax_6 = (*(*arg4 + 8))(0, 0)
    int32_t eax_9
    int32_t edx_3
    edx_3:eax_9 = sx.q((*(*arg1 + 0x18))() * arg2)
    int32_t eax_10 = (*(*arg1 + 0x1c))()
    int32_t eax_12 = (*(*arg4 + 0x1c))()
    int32_t ebx_1 = arg5
    int32_t eax_14 = ebx_1 * arg6
    int32_t result_1
    sub_42f420(&result_1, arg2)
    int32_t var_4 = 0
    int32_t ecx_7 = 0
    int32_t var_14
    int32_t edi_3 = (var_14 - result_1) s>> 2
    
    if (edi_3 s> 0)
        int32_t esi_3 = 0
        
        do
            int32_t eax_15 = esi_3
            esi_3 += ebx_1
            *(result_1 + (ecx_7 << 2)) = divs.dp.d(sx.q(eax_15), arg2)
            ecx_7 += 1
        while (ecx_7 s< edi_3)
    
    int32_t* var_28
    sub_42f420(&var_28, arg2)
    int32_t ecx_9 = 0
    int32_t var_24
    int32_t edi_6 = (var_24 - var_28) s>> 2
    
    if (edi_6 s> 0)
        int32_t esi_4 = ebx_1
        
        do
            int32_t eax_18 = esi_4
            esi_4 += ebx_1
            var_28[ecx_9] = divs.dp.d(sx.q(eax_18), arg2) + 1
            ecx_9 += 1
        while (ecx_9 s< edi_6)
    
    int32_t i_2 = arg3
    
    if (i_2 s> 0)
        int32_t edi_7 = arg6
        int32_t ecx_10 = 0
        int32_t var_70_1 = 0
        int32_t eax_23 = neg.d(edi_7)
        int32_t i_1 = i_2
        int32_t i_3 = i_2
        int32_t i_4 = i_3
        int32_t i
        
        do
            int32_t temp0_3 = divs.dp.d(sx.q(ecx_10), i_2)
            int32_t eax_27 = ecx_10 + edi_7
            int32_t eax_28
            int32_t edx_12
            edx_12:eax_28 = sx.q(eax_27)
            void* ecx_30
            
            if (arg2 s<= 0)
                ecx_30 = var_94_1
            else
                int32_t* ecx_13 = var_28
                int32_t eax_35 = neg.d(ebx_1)
                int32_t* var_90_1 = ecx_13
                int32_t edi_8 = 0
                int32_t var_78_1 = arg2
                int32_t* var_1c_1 = result_1 - ecx_13
                int32_t j_1 = arg2
                int32_t j
                
                do
                    int32_t var_8c_1 = 0
                    int32_t eax_38 = 0
                    int32_t ecx_14 = 0
                    int32_t var_74_1 = temp0_3 * eax_12 + eax_6
                    int32_t ebp_2 = 0
                    int32_t esi_7 = 0
                    int32_t var_50_1 = temp0_3 * i_2
                    int32_t edx_15 = arg2
                    int32_t var_88_1 = 0
                    int32_t var_6c_1 = 0
                    int32_t var_84_1 = 0
                    
                    if (temp0_3 s< divs.dp.d(edx_12:eax_28, i_2) + 1)
                        int32_t ebx_2 = var_70_1
                        int32_t k_1 = divs.dp.d(edx_12:eax_28, i_2) + 1 - temp0_3
                        int32_t k
                        
                        do
                            int32_t ecx_15 = var_50_1
                            int32_t ebp_3 = arg3
                            var_50_1 += ebp_3
                            
                            if (ecx_15 s< ebx_2)
                                ebp_3 = i_4 + ecx_15
                                ecx_15 = ebx_2
                            
                            if (ecx_15 + ebp_3 s<= eax_27)
                            label_53ab3c:
                                int32_t ecx_16 = *(var_1c_1 + var_90_1)
                                esi_7 = var_8c_1
                                int32_t ebx_5 = ecx_16 * edx_15
                                int32_t var_48_1 = ecx_16
                                void* var_64_1 = var_74_1 + (ecx_16 << 2)
                                
                                if (ecx_16 s< *var_90_1)
                                    int32_t ecx_27
                                    
                                    do
                                        int32_t esi_9 = ebx_5
                                        int32_t eax_47 = edx_15
                                        ebx_5 += edx_15
                                        
                                        if (esi_9 s< edi_8)
                                            eax_47 = var_78_1 + esi_9
                                            esi_9 = edi_8
                                        
                                        if (eax_47 + esi_9 s> arg5 + edi_8)
                                            eax_47 = edi_8 - esi_9 + arg5
                                            
                                            if (eax_47 s<= 0)
                                                esi_7 = var_8c_1
                                                break
                                        
                                        char* edx_18 = var_64_1
                                        int32_t eax_51 = eax_47 * ebp_3
                                        var_6c_1 += zx.d(*edx_18) * eax_51
                                        var_88_1 += zx.d(edx_18[1]) * eax_51
                                        esi_7 = var_8c_1 + zx.d(edx_18[2]) * eax_51
                                        var_64_1 = &edx_18[4]
                                        edx_15 = arg2
                                        var_8c_1 = esi_7
                                        var_84_1 += zx.d(edx_18[3]) * eax_51
                                        ecx_27 = var_48_1 + 1
                                        var_48_1 = ecx_27
                                    while (ecx_27 s< *var_90_1)
                                    edx_15 = arg2
                                
                                var_74_1 += eax_12
                                ebx_2 = var_70_1
                            else
                                ebp_3 = ebx_2 - ecx_15 + arg6
                                
                                if (ebp_3 s> 0)
                                    goto label_53ab3c
                            
                            k = k_1
                            k_1 -= 1
                        while (k != 1)
                        ebx_1 = arg5
                        ecx_14 = var_88_1
                        eax_38 = var_6c_1
                        ebp_2 = var_84_1
                    
                    edi_8 += ebx_1
                    var_90_1 = &var_90_1[1]
                    *var_94_1 = (divs.dp.d(sx.q(eax_38), eax_14)).b
                    var_94_1[1] = (divs.dp.d(sx.q(ecx_14), eax_14)).b
                    var_94_1[2] = (divs.dp.d(sx.q(esi_7), eax_14)).b
                    var_94_1[3] = (divs.dp.d(sx.q(ebp_2), eax_14)).b
                    ecx_30 = &var_94_1[4]
                    var_78_1 += eax_35
                    j = j_1
                    j_1 -= 1
                    var_94_1 = ecx_30
                while (j != 1)
                i_2 = arg3
                i_3 = i_4
                edi_7 = arg6
            
            i_3 += eax_23
            i = i_1
            i_1 -= 1
            var_94_1 = ecx_30 + eax_10 - (((edx_3 & 7) + eax_9) s>> 3)
            ecx_10 = eax_27
            var_70_1 = ecx_10
            i_4 = i_3
        while (i != 1)
    
    int32_t* eax_65 = var_28
    
    if (eax_65 != 0)
        j__free(eax_65)
    
    result = result_1
    
    if (result != 0)
        j__free(result)
    
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
