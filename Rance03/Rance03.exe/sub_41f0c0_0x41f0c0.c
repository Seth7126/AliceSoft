// 函数: sub_41f0c0
// 地址: 0x41f0c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b47b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_402b00(&var_5c, arg3)
int32_t var_4 = 0
void* result_1 = arg4
char var_44
sub_402c80(&var_44, &var_5c)
var_4.b = 1
int32_t var_48
int32_t var_34
int32_t var_30
void* result

if (var_34 == 0)
label_41f215:
    
    if (arg2[4] != 0)
        result = sub_421bc0(result_1, arg2)
    else
        result = result_1
else
    result = arg4
    
    while (true)
        result_1 = sub_421bc0(result_1, &var_44)
        
        if (result_1 == 0)
            break
        
        int32_t var_2c
        char* eax_6 = sub_402b00(&var_2c, &var_5c)
        
        if (&var_5c != eax_6)
            if (var_48 u>= 0x10)
                j__free(var_5c)
            
            int32_t var_48_1 = 0xf
            int32_t var_4c_1 = 0
            var_5c.b = 0
            
            if (*(eax_6 + 0x14) u>= 0x10)
                var_5c = *eax_6
                *eax_6 = 0
            else
                void* eax_7 = *(eax_6 + 0x10)
                
                if (eax_7 != 0xffffffff)
                    _memcpy(&var_5c, eax_6, eax_7 + 1, eax_4)
            
            int32_t var_4c_2 = *(eax_6 + 0x10)
            var_48 = *(eax_6 + 0x14)
            *(eax_6 + 0x14) = 0xf
            *(eax_6 + 0x10) = 0
            *eax_6 = 0
        
        int32_t var_18
        
        if (var_18 u>= 0x10)
            j__free(var_2c)
        
        var_4.b = 0
        
        if (var_30 u>= 0x10)
            j__free(var_44.d)
        
        sub_402c80(&var_44, &var_5c)
        var_4.b = 1
        
        if (var_34 == 0)
            goto label_41f215

if (var_30 u>= 0x10)
    j__free(var_44.d)

int32_t var_30_1 = 0xf
int32_t var_34_1 = 0
var_44 = 0

if (var_48 u>= 0x10)
    j__free(var_5c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_5c)
return result
