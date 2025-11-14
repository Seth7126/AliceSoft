// 函数: sub_4cc240
// 地址: 0x4cc240
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bed00
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_edi
int32_t var_60 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result

if (arg4 != 0)
    sub_4cce00(&arg1[6], *(arg1[6] + 4))
    void* eax_6 = arg1[6]
    *(eax_6 + 4) = eax_6
    int32_t* eax_7 = arg1[6]
    *eax_7 = eax_7
    void* eax_8 = arg1[6]
    *(eax_8 + 8) = eax_8
    arg1[7] = 0
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    char var_44 = 0
    sub_402110(&var_44, 0x6e172c, 0xe)
    int32_t var_4 = 0
    int32_t* ecx_2 = arg3[1]
    void** ebx
    
    if (ecx_2 == 0)
        ebx.b = 0
    else
        char* edx_1 = &var_44
        
        if (var_30_1 u>= 0x10)
            edx_1 = var_44.d
        
        if ((*(*ecx_2 + 0x2c))(edx_1).b == 0)
            ebx.b = 0
        else
            int32_t* ecx_3 = arg3[1]
            
            if (ecx_3 == 0)
            label_4cc438:
                ebx.b = 1
            else
                char* edx_2 = &var_44
                
                if (var_30_1 u>= 0x10)
                    edx_2 = var_44.d
                
                int32_t* edi_1 = (*(*ecx_3 + 0x94))(edx_2)
                int32_t esi_2 = 0
                void* var_2c
                int32_t var_18
                
                if (edi_1 s> 0)
                    while (true)
                        sub_401e60(arg3, &var_2c, &var_44, esi_2)
                        var_4.b = 1
                        
                        if (sub_4cd980(arg1, &var_44, &var_2c, arg2, arg3, arg4).b == 0)
                            break
                        
                        var_4.b = 0
                        
                        if (var_18 u>= 0x10)
                            j__free(var_2c)
                        
                        esi_2 += 1
                        
                        if (esi_2 s>= edi_1)
                            goto label_4cc385
                    
                    goto label_4cc43c
                
            label_4cc385:
                int32_t esi_3 = 0
                
                if (edi_1 s> 0)
                    while (true)
                        sub_401e60(arg3, &var_2c, &var_44, esi_3)
                        var_4.b = 2
                        
                        if (sub_4cdc80(&var_44, &var_2c, arg2, arg3, arg4).b == 0)
                            break
                        
                        var_4.b = 0
                        
                        if (var_18 u>= 0x10)
                            j__free(var_2c)
                        
                        esi_3 += 1
                        
                        if (esi_3 s>= edi_1)
                            goto label_4cc3e1
                    
                    goto label_4cc43c
                
            label_4cc3e1:
                int32_t esi_4 = 0
                
                if (edi_1 s<= 0)
                label_4cc438_1:
                    ebx.b = 1
                else
                    while (true)
                        sub_401e60(arg3, &var_2c, &var_44, esi_4)
                        var_4.b = 3
                        
                        if (sub_4cdee0(&var_44, &var_2c, arg2, arg3, arg4).b == 0)
                            break
                        
                        var_4.b = 0
                        
                        if (var_18 u>= 0x10)
                            j__free(var_2c)
                        
                        esi_4 += 1
                        
                        if (esi_4 s>= edi_1)
                            goto label_4cc438_1
                    
                label_4cc43c:
                    
                    if (var_18 u< 0x10)
                        ebx.b = 0
                    else
                        j__free(var_2c)
                        ebx.b = 0
    
    if (var_30_1 u>= 0x10)
        j__free(var_44.d)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return result
