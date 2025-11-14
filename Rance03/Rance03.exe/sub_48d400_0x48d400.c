// 函数: sub_48d400
// 地址: 0x48d400
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6bb030
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg2
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 8) == 0)
label_48d4ec:
    int32_t* ecx_2 = *(arg1 + 4)
    
    if (ecx_2 != 0)
        result = (*(*ecx_2 + 0x10))(3)
    
    if (ecx_2 == 0 || result == 0)
        result.b = 0
    else
        if (esi[5] u>= 0x10)
            esi = *esi
        
        result.b = (*result)->__offset(0xc).d(esi).b != 0
else
    int32_t var_34
    result = sub_48c5b0(&var_34, esi)
    int32_t var_c_1 = 0
    int32_t ebx
    
    if (*(arg1 + 8) != 0)
        ebx.b = sub_48d540(result).b
    else
        ebx.b = 0
    
    int32_t var_c_2 = 0xffffffff
    int32_t var_20
    
    if (var_20 u>= 0x10)
        j__free(var_34)
    
    if (ebx.b == 0)
        result = sub_48c450(&var_4c, esi)
        int32_t var_c_3 = 1
        
        if (*(arg1 + 8) != 0)
            ebx.b = sub_48d540(result).b
        else
            ebx.b = 0
        
        int32_t var_c_4 = 0xffffffff
        int32_t var_38
        
        if (var_38 u>= 0x10)
            j__free(var_4c.d)
        
        int32_t var_38_1 = 0xf
        int32_t var_3c_1 = 0
        var_4c = 0
        
        if (ebx.b == 0)
            goto label_48d4ec
        
        result.b = 1
    else
        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return result
