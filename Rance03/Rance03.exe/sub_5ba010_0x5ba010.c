// 函数: sub_5ba010
// 地址: 0x5ba010
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c9448
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
int32_t ebx
int32_t var_60 = ebx
int32_t __saved_edi
int32_t var_70 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_54 = arg4
int32_t* var_74 = var_54
*arg4 = 0
*(arg1 + 0x80) = 0
void* var_78 = arg1
sub_5b9460(*(arg1 + 0x10), *(arg1 + 0x14))
*(arg1 + 0x14) = *(arg1 + 0x10)
int32_t ecx_1 = sub_4107c0(*(arg1 + 0x1c), *(arg1 + 0x20))
int32_t* var_74_2 = var_54
*(arg1 + 0x20) = *(arg1 + 0x1c)
int32_t var_78_2 = ecx_1
sub_5b94a0(*(arg1 + 0x28), *(arg1 + 0x2c))
*(arg1 + 0x2c) = *(arg1 + 0x28)
*(arg1 + 0x38) = *(arg1 + 0x34)
int32_t ecx_3 = *(arg6 + 0x14)
int32_t result

if (ecx_3 s< 0 || ecx_3 u>= (*(arg6 + 0xc) - *(arg6 + 8)) s>> 2)
labelid_2:
    result.b = 0
else
    result = *(*(arg6 + 8) + (ecx_3 << 2))
    int32_t result_1 = result
    
    if (result == 0 || arg5 == 0xffffff70)
    label_5ba2a6:
        result.b = 0
    else
        int32_t eax_14
        int32_t edx_2
        edx_2:eax_14 = muls.dp.d(0x66666667, *(arg5 + 0x94) - *(arg5 + 0x90))
        int32_t edx_3 = edx_2 s>> 4
        int32_t ebp_3 = (edx_3 u>> 0x1f) + edx_3
        int32_t eax_16 = sub_5bf240(arg5, arg1 + 0x4c)
        int32_t var_74_5 = sub_5bb9e0(arg1 + 0x10, ebp_3 + 1)
        sub_5bb8b0(arg1 + 4)
        int32_t edi_1 = 0
        **(arg1 + 4) = 0
        
        if (ebp_3 s> 0)
            int32_t ebp_4 = 0
            
            do
                result = *(arg5 + 0x90) + ebp_4
                
                if (*(arg1 + 0x64) == 0)
                label_5ba18c:
                    uint32_t ebx_2 = *(result + 0x18)
                    
                    if (edi_1 u>= *(result_1 + 0xc) u>> 2)
                        goto label_5ba2a6_1
                    
                    int32_t ecx_15
                    
                    if (*(result_1 + 0xc) != 0)
                        ecx_15 = *(result_1 + 8)
                    else
                        ecx_15 = 0
                    
                    int32_t ecx_17 = *(ecx_15 + (edi_1 << 2))
                    int32_t var_58 = ecx_17
                    int32_t var_18_1 = 0xf
                    int32_t var_1c_1 = 0
                    char var_2c = 0
                    int32_t var_4 = 0
                    uint32_t var_34 = ebx_2
                    
                    if (&var_2c != result)
                        sub_401ff0(&var_2c, result, 0, 0xffffffff)
                        ecx_17 = var_58
                    
                    uint32_t var_30
                    
                    if (sub_5bb240(ebx_2, ecx_17, &var_30, arg6).b == 0)
                        if (var_18_1 u>= 0x10)
                            j__free(var_2c.d)
                        
                        goto label_5ba2a6_1
                    
                    int32_t* ecx_20 = *(arg1 + 4) + 4
                    var_58 = (*(arg1 + 0x14) - *(arg1 + 0x10)) s>> 5
                    sub_4158d0(ecx_20, &var_58)
                    sub_5b8890(arg1 + 0x10, &var_34)
                    *(arg1 + 0x80) += 1
                    int32_t var_4_1 = 0xffffffff
                    
                    if (var_18_1 u>= 0x10)
                        j__free(var_2c.d)
                else
                    int32_t ecx_12 = *(result + 0x24)
                    
                    if (ecx_12 != 0xffffffff && ecx_12 == eax_16)
                        goto label_5ba18c
                
                edi_1 += 1
                ebp_4 += 0x28
            while (edi_1 s< ebp_3)
        
        sub_5ba2d0(arg1)
        
        if (sub_5ba4e0(arg1, ebp_3, arg2, arg3).b == 0)
        label_5ba2a6_1:
            result.b = 0
        else
            sub_5b9fc0(arg1)
            *var_54 = *(arg1 + 0x80)
            result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_5c)
return result
