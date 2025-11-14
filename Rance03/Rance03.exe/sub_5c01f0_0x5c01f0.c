// 函数: sub_5c01f0
// 地址: 0x5c01f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c99e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* result_1
int32_t eax_2 = __security_cookie ^ &result_1
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = (**arg2)(0x6ea704)

if (result != 0)
    struct filesystem::CFilePath::VTable* const var_48 = &filesystem::CFilePath::`vftable'
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    char var_44 = 0
    int32_t var_4 = 0
    sub_401ff0(&var_44, &data_74f9b4, 0, 0xffffffff)
    sub_6047d0(&var_48)
    int32_t var_2c
    sub_401f60(&var_2c, (*(*result + 0xc))(eax_4))
    var_4.b = 1
    sub_604730(&var_48)
    sub_403110(&var_44, &var_2c, nullptr, 0xffffffff)
    var_4.b = 0
    int32_t var_18
    
    if (var_18 u>= 0x10)
        j__free(var_2c)
    
    int32_t* ebx
    
    if (sub_5bda90(arg1 + 0x48, &var_44) != 0)
        result = (**arg2)(0x6ea714)
        result_1 = result
        
        if (result == 0)
            ebx.b = 0
        else
            int32_t* ecx_12 = *(arg1 + 0x2c)
            
            if (ecx_12 == 0)
            label_5c0393:
                result = (**arg2)(0x6ea7b0)
                
                if (result == 0)
                    ebx.b = 0
                else
                    (**result)(*(arg1 + 0x148))
                    int32_t* ecx_18 = *(arg1 + 0x2c)
                    
                    if (ecx_18 != 0 && (**ecx_18)() != 0)
                        sub_5b39e0(arg1 + 0x1278, arg1 + 0x48)
                    
                    int32_t ecx_20
                    
                    if (*(arg1 + 0x54) != 0)
                        ecx_20 = *(arg1 + 0x50)
                    else
                        ecx_20 = 0
                    
                    *(arg1 + 0x20c) = ecx_20
                    ebx.b = 1
                    result = *(arg1 + 0x54) + ecx_20
                    *(arg1 + 0x208) = ecx_20
                    *(arg1 + 0x210) = result
                    *(arg1 + 0x214) = 1
            else
                if ((**ecx_12)() == 0)
                    goto label_5c0393
                
                int32_t eax_14
                int32_t edx_1
                edx_1:eax_14 = muls.dp.d(0x38e38e39, *(arg1 + 0xa0) - *(arg1 + 0x9c))
                int32_t edx_2 = edx_1 s>> 4
                
                if ((*(*result_1 + 0x14))() == (edx_2 u>> 0x1f) + edx_2)
                    goto label_5c0393
                
                ebx.b = 0
    else
        char* eax_9 = &var_44
        
        if (var_30_1 u>= 0x10)
            eax_9 = var_44.d
        
        char* var_64_4 = eax_9
        sub_64b530(0x6e65a8)
        ebx.b = 0
    
    var_48 = &filesystem::CFilePath::`vftable'
    
    if (var_30_1 u>= 0x10)
        j__free(var_44.d)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &result_1)
return result
