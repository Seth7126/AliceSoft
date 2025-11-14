// 函数: sub_4dfe60
// 地址: 0x4dfe60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5750
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_44 = 0
int32_t ebx = arg2[4]

if (ebx != 0)
    int32_t* var_40
    sub_403070(arg2, &var_40, 0, 1)
    int32_t var_4 = 0
    sub_402210(arg2, 0, 1)
    int32_t* eax_5 = &var_40
    int32_t* edx_1 = var_40
    int32_t var_2c
    
    if (var_2c u>= 0x10)
        eax_5 = edx_1
    
    int32_t* eax_6
    
    if (*eax_5 u>= 0x81)
        eax_6 = &var_40
        
        if (var_2c u>= 0x10)
            eax_6 = edx_1
    
    if (*eax_5 u>= 0x81 && *eax_6 u<= 0x9f)
    label_4dff20:
        
        if (ebx s>= 2)
            var_4.b = 1
            int32_t var_28
            sub_403110(&var_40, sub_403070(arg2, &var_28, 0, 1), nullptr, 0xffffffff)
            var_4.b = 0
            int32_t var_14
            
            if (var_14 u>= 0x10)
                j__free(var_28)
            
            sub_402210(arg2, 0, 1)
            sub_403000(arg1, &var_40)
        else
            sub_401f60(arg1, 0x6da592)
    else
        int32_t* eax_7 = &var_40
        
        if (var_2c u>= 0x10)
            eax_7 = edx_1
        
        if (*eax_7 u< 0xe0)
            sub_403000(arg1, &var_40)
        else
            int32_t* eax_8 = &var_40
            
            if (var_2c u>= 0x10)
                eax_8 = edx_1
            
            if (*eax_8 u<= 0xef)
                goto label_4dff20
            
            sub_403000(arg1, &var_40)
    
    if (var_2c u>= 0x10)
        j__free(var_40)
else
    sub_401f60(arg1, 0x6da593)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return arg1
