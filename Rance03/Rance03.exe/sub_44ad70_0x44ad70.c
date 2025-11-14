// 函数: sub_44ad70
// 地址: 0x44ad70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6fce
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_b4
int32_t eax_2 = __security_cookie ^ &var_b4
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result

if (*(arg1 + 4) != 0)
    int32_t var_4 = 0
    struct filesystem::CFile::VTable* const var_78
    int32_t var_2c
    sub_402d30(&var_2c, sub_402a20(&var_78, arg2))
    var_4.b = 2
    int32_t var_64
    
    if (var_64 u>= 0x10)
        j__free(var_78)
    
    void** eax_7 = sub_417ed0(arg1 + 8, &var_2c)
    char eax_9
    
    if (eax_7 != *(arg1 + 8))
        eax_9 = sub_40c3a0(&var_2c, &eax_7[4])
    
    void** var_ac_1
    
    if (eax_7 == *(arg1 + 8) || eax_9 != 0)
        var_ac_1 = *(arg1 + 8)
    else
        var_ac_1 = eax_7
    
    int32_t* result_1
    
    if (var_ac_1 != *(arg1 + 8))
        struct filesystem::CFilePath::VTable* const var_60 = &filesystem::CFilePath::`vftable'
        int32_t var_48_1 = 0xf
        int32_t var_4c_1 = 0
        char var_5c = 0
        var_4.b = 3
        char* eax_12 = sub_402960(&var_78, &var_ac_1[0xa])
        var_4.b = 4
        sub_604730(&var_60)
        sub_403110(&var_5c, eax_12, nullptr, 0xffffffff)
        var_4.b = 3
        
        if (var_64 u>= 0x10)
            j__free(var_78)
        
        sub_401f60(&var_78, "SP")
        var_4.b = 5
        sub_604730(&var_60)
        int32_t* eax_13 = sub_403110(&var_5c, &var_78, nullptr, 0xffffffff)
        var_4.b = 3
        
        if (var_64 u>= 0x10)
            eax_13 = j__free(var_78)
        
        var_4.b = 6
        struct filesystem::CFile::VTable* const var_44
        char* eax_15 = sub_402d30(&var_78, sub_410930(eax_13, arg2, &var_44, ".bmp"))
        var_4.b = 7
        sub_604730(&var_60)
        sub_403110(&var_5c, eax_15, nullptr, 0xffffffff)
        
        if (var_64 u>= 0x10)
            j__free(var_78)
        
        int32_t var_64_1 = 0xf
        int32_t var_68_1 = 0
        var_78.b = 0
        int32_t var_30
        
        if (var_30 u>= 0x10)
            j__free(var_44)
        
        int32_t var_a0 = 0
        int32_t var_9c_1 = 0
        int32_t var_98_1 = 0
        var_78 = &filesystem::CFile::`vftable'
        int32_t var_74_1 = 0xffffffff
        int32_t var_70_1 = 0
        int32_t var_6c_1 = 0
        var_4.b = 9
        char eax_16 = sub_604a80(&var_ac_1[0xa], &var_a0)
        int32_t esi_4 = var_a0
        int32_t* result_2
        
        if (eax_16 == 0 || esi_4 == var_9c_1)
            result_2 = nullptr
        else
            int32_t* result_3 = (*(*arg3 + 8))(esi_4, var_9c_1 - esi_4)
            
            if (result_3 == 0)
                result_2 = nullptr
            else if (sub_605500(&var_5c) != 0)
                int32_t var_94 = 0
                int32_t var_90_1 = 0
                int32_t var_8c_1 = 0
                var_44 = &filesystem::CFile::`vftable'
                int32_t var_40_1 = 0xffffffff
                int32_t var_3c_1 = 0
                int32_t var_38_1 = 0
                var_4.b = 0xb
                
                if (sub_604a80(&var_5c, &var_94) == 0)
                    goto label_44b236
                
                int32_t ecx_17 = var_94
                
                if (ecx_17 == var_90_1)
                    goto label_44b236
                
                int32_t* eax_21 = (*(*arg3 + 8))(ecx_17, var_90_1 - ecx_17)
                int32_t eax_22 = *result_3
                
                if (eax_21 == 0)
                    (*(eax_22 + 4))(eax_4)
                    result_2 = nullptr
                else if ((*(eax_22 + 0x18))(eax_4) != 0x20)
                label_44b233:
                    (*(*eax_21 + 4))()
                label_44b236:
                    (*(*result_3 + 4))(eax_4)
                    result_2 = nullptr
                else
                    if ((*(*eax_21 + 0x18))() != 0x20)
                        goto label_44b233
                    
                    if ((*(*result_3 + 0x24))() == 0)
                        goto label_44b233
                    
                    if ((*(*eax_21 + 0x28))() == 0)
                        goto label_44b233
                    
                    if ((*(*result_3 + 0x10))() != (*(*eax_21 + 0x10))())
                        goto label_44b233
                    
                    if ((*(*result_3 + 0x14))() != (*(*eax_21 + 0x14))())
                        goto label_44b233
                    
                    int32_t j_3 = (*(*result_3 + 0x10))()
                    int32_t i_2 = (*(*result_3 + 0x14))()
                    int32_t* result_4 = (*(*arg4 + 8))(j_3, i_2, 0x20)
                    result_2 = result_4
                    
                    if (result_4 == 0)
                        goto label_44b233
                    
                    char* esi_7 = (*(*result_4 + 8))(0, 0)
                    int32_t edi_3 = j_3 << 2
                    int32_t eax_42 = (*(*result_2 + 0x1c))()
                    char* ebx_2 = (*(*result_3 + 8))(0, 0)
                    int32_t eax_46 = (*(*result_3 + 0x1c))() - edi_3
                    void* ebp_2 = (*(*eax_21 + 8))(0, 0)
                    int32_t i_1 = i_2
                    int32_t eax_50 = (*(*eax_21 + 0x1c))() - edi_3
                    
                    if (i_1 s> 0)
                        int32_t j_2 = j_3
                        int32_t ecx_36 = eax_46
                        int32_t i
                        
                        do
                            if (j_2 s> 0)
                                int32_t j_1 = j_2
                                int32_t j
                                
                                do
                                    j_2.b = *ebx_2
                                    *esi_7 = j_2.b
                                    j_2.b = ebx_2[1]
                                    esi_7[1] = j_2.b
                                    j_2.b = ebx_2[2]
                                    ebx_2 = &ebx_2[4]
                                    esi_7[2] = j_2.b
                                    j_2.b = *(ebp_2 + 3)
                                    ebp_2 += 4
                                    esi_7[3] = j_2.b
                                    esi_7 = &esi_7[4]
                                    j = j_1
                                    j_1 -= 1
                                while (j != 1)
                                j_2 = j_3
                                ecx_36 = eax_46
                            
                            ebp_2 += eax_50
                            esi_7 = &esi_7[eax_42 - edi_3]
                            ebx_2 = &ebx_2[ecx_36]
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                    
                    (*(*eax_21 + 4))()
                    (*(*result_3 + 4))()
                
                sub_604940(&var_44)
                sub_403510(&var_94)
                esi_4 = var_a0
            else
                result_2 = result_3
        
        if (esi_4 != 0)
            j__free(esi_4)
        
        var_60 = &filesystem::CFilePath::`vftable'
        
        if (var_48_1 u>= 0x10)
            j__free(var_5c.d)
        
        result_1 = result_2
        int32_t var_48_2 = 0xf
        int32_t var_4c_2 = 0
        var_5c = 0
    else
        result_1 = nullptr
    
    int32_t var_18
    
    if (var_18 u>= 0x10)
        j__free(var_2c)
    
    result = result_1
else
    result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_b4)
return result
