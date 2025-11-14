// 函数: sub_41eef0
// 地址: 0x41eef0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4770
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = arg2
int32_t var_44 = 0xf
int32_t var_48 = 0
char var_58 = 0
sub_401ff0(&var_58, arg1, 0, 0xffffffff)
int32_t var_4 = 0
void* result_1 = result
char var_40
sub_402c80(&var_40, &var_58)
var_4.b = 1
int32_t var_30
int32_t var_2c

if (var_30 == 0)
label_41f055:
    result = result_1
else
    while (true)
        result_1 = sub_421bc0(result_1, &var_40)
        
        if (result_1 == 0)
            break
        
        int32_t var_28
        char* eax_6 = sub_402b00(&var_28, &var_58)
        
        if (&var_58 != eax_6)
            if (var_44 u>= 0x10)
                j__free(var_58.d)
            
            int32_t var_44_1 = 0xf
            int32_t var_48_1 = 0
            var_58 = 0
            
            if (*(eax_6 + 0x14) u>= 0x10)
                var_58.d = *eax_6
                *eax_6 = 0
            else
                void* eax_7 = *(eax_6 + 0x10)
                
                if (eax_7 != 0xffffffff)
                    _memcpy(&var_58, eax_6, eax_7 + 1, eax_4)
            
            int32_t var_48_2 = *(eax_6 + 0x10)
            var_44 = *(eax_6 + 0x14)
            *(eax_6 + 0x14) = 0xf
            *(eax_6 + 0x10) = 0
            *eax_6 = 0
        
        int32_t var_14
        
        if (var_14 u>= 0x10)
            j__free(var_28)
        
        var_4.b = 0
        
        if (var_2c u>= 0x10)
            j__free(var_40.d)
        
        sub_402c80(&var_40, &var_58)
        var_4.b = 1
        
        if (var_30 == 0)
            goto label_41f055

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_2c_1 = 0xf
int32_t var_30_1 = 0
var_40 = 0

if (var_44 u>= 0x10)
    j__free(var_58.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_5c)
return result
