// 函数: sub_45c700
// 地址: 0x45c700
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_9 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8431
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_98
int32_t eax_2 = __security_cookie ^ &var_98
int32_t __saved_edi
int32_t var_ac = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_98 = arg1
int32_t ecx = arg3
int32_t var_94 = ecx
void* eax_5

if (*(arg2 + 0x20) != 0)
    eax_5 = *(arg2 + 0x24)

int32_t* result
int32_t var_b0_15
void* var_b0_16
char var_88
int32_t var_74_1
void* ecx_28

if (*(arg2 + 0x20) == 0 || eax_5 == *(arg2 + 0x1c) || eax_5 == 0xfffffff8)
    var_74_1 = 0xf
    int32_t var_78_4 = 0
    var_88 = 0
    sub_402110(&var_88, 0x6dc33c, 0x22)
    int32_t var_4_8 = 0
    ecx_28 = *(arg1 + 4)
    var_b0_16 = nullptr
label_45cca4:
    sub_456ab0(ecx_28, &var_88, var_b0_16)
label_45cca9:
    
    if (var_74_1 u< 0x10)
    label_45ccbc:
        result.b = 0
    else
        var_b0_15 = var_88.d
    label_45ccb4:
        j__free(var_b0_15)
    label_45ccbc_1:
        result.b = 0
else
    int32_t esi_1 = 0
    
    if (*(eax_5 + 0x24) == 0xc)
        while (true)
            int32_t edx_1 = *(arg2 + 0x20)
            int32_t ebp_1 = 1
            int32_t var_70
            int32_t var_5c
            void* ebx_2
            
            while (true)
                if (edx_1 == 0 || *(arg2 + 0x24) == *(arg2 + 0x1c))
                    ebx_2 = nullptr
                else
                    void* eax_9 = **(arg2 + 0x24)
                    *(arg2 + 0x24) = eax_9
                    edx_1 = *(arg2 + 0x20)
                    
                    if (edx_1 == 0 || eax_9 == *(arg2 + 0x1c))
                        ebx_2 = nullptr
                    else
                        ebx_2 = eax_9 + 8
                
                if (ebx_2 == 0)
                    var_74_1 = 0xf
                    int32_t var_78_3 = 0
                    var_88 = 0
                    sub_402110(&var_88, 0x6dc318, 0x22)
                    char* eax_23 = &var_88
                    int32_t var_4_7 = 1
                    
                    if (var_74_1 u>= 0x10)
                        eax_23 = var_88.d
                    
                    var_4_7.b = 2
                    sub_403110(*(var_98 + 4) + 4, 
                        sub_410930(sub_455910(eax_23), &var_88, &var_70, \n"), nullptr, 0xffffffff)
                    
                    if (var_5c u>= 0x10)
                        j__free(var_70)
                    
                    goto label_45cca9
                
                if (*(ebx_2 + 0x1c) != 0xc)
                    break
                
                ebp_1 += 1
            
            if (ebp_1 == 0)
                var_74_1 = 0xf
                int32_t var_78_2 = 0
                var_88 = 0
                sub_402110(&var_88, 0x6dc230, 0x22)
                int32_t var_4_6 = 3
                var_b0_16 = ebx_2
                ecx_28 = *(var_98 + 4)
                goto label_45cca4
            
            int32_t var_58
            int32_t var_44
            
            if (esi_1 + 1 s< ebp_1)
                sub_401f60(&var_58, 0x6dc200)
                int32_t var_4_5 = 4
            else
                int32_t edx_2 = *(ebx_2 + 0x1c)
                
                if (edx_2 != 0x12 && edx_2 != 0x11)
                    sub_401f60(&var_70, 0x6dc290)
                    int32_t var_4_2 = 5
                label_45ca86:
                    sub_456ab0(*(var_98 + 4), &var_70, ebx_2)
                    sub_401fb0(&var_70)
                    goto label_45ccbc_1
                
                if (esi_1 + 1 == ebp_1 && *(ecx + 0x1c) != 0)
                    sub_401f60(&var_70, 0x6dc254)
                    int32_t var_4_3 = 6
                    goto label_45ca86
                
                if (esi_1 == ebp_1)
                    ecx = *(ecx + 0x2c)
                    var_94 = ecx
                else if (esi_1 + 1 != ebp_1)
                    ecx = *(ecx + 0x2c)
                    int32_t i_2 = esi_1 - ebp_1
                    var_94 = ecx
                    
                    if (i_2 s> 0)
                        int32_t i
                        
                        do
                            ecx = *(ecx + 0x2c)
                            i = i_2
                            i_2 -= 1
                        while (i != 1)
                        var_94 = ecx
                
                int32_t* eax_11 = sub_468810(esi_1 + 1, *(ecx + 0x24), *(ecx + 0x20), ebx_2 + 4)
                
                if (*(var_94 + 0x24) == eax_11)
                    int32_t eax_12 = sub_4682e0(var_94, ebx_2 + 4)
                    var_94 = eax_12
                    int32_t var_14_1 = 0xf
                    int32_t var_18_1 = 0
                    char var_28 = 0
                    sub_401ff0(&var_28, ebx_2 + 4, 0, 0xffffffff)
                    int32_t var_4 = 8
                    int32_t ebx_3
                    
                    if (*(arg2 + 0x20) == 0 || *(arg2 + 0x24) == *(arg2 + 0x1c))
                        ebx_3.b = 1
                    else
                        result = **(arg2 + 0x24)
                        *(arg2 + 0x24) = result
                        
                        if (*(arg2 + 0x20) == 0 || result == *(arg2 + 0x1c))
                            ebx_3.b = 1
                        else
                            void* ebp_2 = &result[2]
                            
                            if (ebp_2 == 0)
                                ebx_3.b = 1
                            else
                                int32_t eax_14 = *(ebp_2 + 0x1c)
                                
                                if (eax_14 != 0xb)
                                    if (eax_14 == 0xc)
                                        goto label_45ca39
                                    
                                    *(arg2 + 0x24) = *(*(arg2 + 0x24) + 4)
                                    sub_401fb0(&var_28)
                                    result.b = 1
                                    goto label_45ccc5
                                
                                char var_40
                                sub_401f60(&var_40, 0x6da17b)
                                var_4.b = 9
                                
                                for (void* i_1 = *(eax_12 + 0x2c); i_1 != 0; i_1 = *(i_1 + 0x2c))
                                    char* eax_15 = sub_468250(i_1, &var_70)
                                    var_4.b = 0xa
                                    char* eax_16 = sub_410a80(eax_15.b, eax_15, &var_58, U".")
                                    var_4.b = 0xb
                                    char* eax_17 = sub_410ad0(eax_16, eax_16, &var_88, &var_40)
                                    
                                    if (&var_40 != eax_17)
                                        int32_t var_2c
                                        
                                        if (var_2c u>= 0x10)
                                            j__free(var_40.d)
                                        
                                        var_2c = 0xf
                                        int32_t var_30_1 = 0
                                        var_40 = 0
                                        sub_4030b0(&var_40, eax_17)
                                    
                                    int32_t var_74
                                    
                                    if (var_74 u>= 0x10)
                                        j__free(var_88.d)
                                    
                                    var_74 = 0xf
                                    int32_t var_78_1 = 0
                                    var_88 = 0
                                    
                                    if (var_44 u>= 0x10)
                                        j__free(var_58)
                                    
                                    var_4.b = 9
                                    var_44 = 0xf
                                    int32_t var_48_1 = 0
                                    var_58.b = 0
                                    
                                    if (var_5c u>= 0x10)
                                        j__free(var_70)
                                
                                void* eax_18 = sub_468270(eax_12)
                                ebx_3 = var_98
                                
                                if (sub_45b850(ebx_3, arg2, eax_18) == 0)
                                    sub_401f60(&var_70, 0x6dc3dc)
                                    var_4.b = 0xc
                                    sub_456ab0(*(ebx_3 + 4), &var_70, ebp_2)
                                    sub_401fb0(&var_70)
                                    ebx_3.b = 0
                                    sub_401fb0(&var_40)
                                else
                                    ebp_2 = sub_4665e0(arg2)
                                    
                                    if (ebp_2 == 0)
                                        ebx_3.b = 1
                                        sub_401fb0(&var_40)
                                    else
                                        sub_401fb0(&var_40)
                                    label_45ca39:
                                        int32_t var_4_1 = 0xffffffff
                                        sub_401fb0(&var_28)
                                        
                                        if (*(ebp_2 + 0x1c) != 0xc)
                                            goto label_45cc63
                                        
                                        ecx = var_94
                                        esi_1 = ebp_1
                                        continue
                    
                    if (var_14_1 u>= 0x10)
                        j__free(var_28.d)
                    
                    result.b = ebx_3.b
                    goto label_45ccc5
                
                sub_401f60(&var_58, 0x6dc3f8)
                int32_t var_4_4 = 7
            
            sub_456ab0(*(var_98 + 4), &var_58, ebx_2)
            
            if (var_44 u< 0x10)
                goto label_45ccbc_1
            
            var_b0_15 = var_58
            break
        
        goto label_45ccb4
    
label_45cc63:
    *(arg2 + 0x24) = *(*(arg2 + 0x24) + 4)
    result.b = 1
label_45ccc5:
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_98)
return result
