// 函数: sub_474eb0
// 地址: 0x474eb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b8ca0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_54
int32_t eax_2 = __security_cookie ^ &var_54
int32_t __saved_edi
int32_t var_64 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_50 = ebx
int32_t* ecx = *(ebx + 4)
int32_t result

if (ecx == 0)
label_475010:
    
    if (data_75d534 == 0)
        result = 0
    else
        int32_t* var_68_5 = ecx
        int32_t* eax_14 = sub_6203f0()
        
        if (eax_14 == 0)
            result = 0
        else
            void* eax_15 = (**eax_14)(0x6dd7f4)
            
            if (eax_15 == 0)
                result = 0
            else
                result = (*(eax_15 + 0x98) - *(eax_15 + 0x94)) s>> 5
else
    char eax_7
    eax_7, ecx = (*(*ecx + 0x2c))(0x6dd638)
    
    if (eax_7 == 0)
        goto label_475010
    
    int32_t result_1 = 0
    
    while (true)
        int32_t var_20_1 = 0xf
        int32_t var_24_1 = 0
        char var_34 = 0
        sub_402110(&var_34, 0x6dd620, 0x14)
        int32_t var_c_1 = 0
        int32_t var_38_1 = 0xf
        int32_t var_3c_1 = 0
        char var_4c = 0
        sub_402110(&var_4c, 0x6dd604, 0x18)
        var_c_1.b = 1
        int32_t* ecx_3 = *(ebx + 4)
        
        if (ecx_3 != 0)
            char* edx_1 = &var_4c
            
            if (var_38_1 u>= 0x10)
                edx_1 = var_4c.d
            
            if ((*(*ecx_3 + 0x2c))(edx_1) != 0)
                char* esi_1 = &var_34
                char* edx_2 = &var_4c
                
                if (var_20_1 u>= 0x10)
                    esi_1 = var_34.d
                
                if (var_38_1 u>= 0x10)
                    edx_2 = var_4c.d
                
                ebx.b = (*(**(ebx + 4) + 0x3c))(edx_2, result_1, esi_1)
            else
                ebx.b = 0
        else
            ebx.b = 0
        
        if (var_38_1 u>= 0x10)
            j__free(var_4c.d)
        
        int32_t var_c_2 = 0xffffffff
        int32_t var_38_2 = 0xf
        int32_t var_3c_2 = 0
        var_4c = 0
        
        if (var_20_1 u>= 0x10)
            j__free(var_34.d)
        
        if (ebx.b == 0)
            break
        
        ebx = var_50
        result_1 += 1
    
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_54)
return result
