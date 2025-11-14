// 函数: sub_459cd0
// 地址: 0x459cd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b7fd8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char result
int32_t ebx

if (*(arg1 + 0x14) == 0)
    if (*(arg1 + 0x2c) != 0)
        char* eax_6 = arg1 + 0x1c
        
        if (*(arg1 + 0x30) u>= 0x10)
            eax_6 = *eax_6
        
        sub_401f60(&var_4c, eax_6)
        int32_t var_c_2 = 1
        result = sub_459830(arg1, arg2, &var_4c)
        goto label_459d41
    
    if (*(arg1 + 0x44) == 0)
        result = 0
    else
        void* eax_7 = arg1 + 0x34
        
        if (*(arg1 + 0x48) u>= 0x10)
            eax_7 = *eax_7
        
        int32_t var_34
        sub_401f60(&var_34, eax_7)
        int32_t var_c_3 = 2
        ebx.b = sub_459a00(arg1, arg2, &var_34)
        int32_t var_20
        
        if (var_20 u< 0x10)
            result = ebx.b
        else
            j__free(var_34)
            result = ebx.b
else
    int32_t* eax_5 = arg1 + 4
    
    if (*(arg1 + 0x18) u>= 0x10)
        eax_5 = *eax_5
    
    sub_401f60(&var_4c, eax_5)
    int32_t var_c_1 = 0
    result = sub_4594f0(arg1, arg2, &var_4c)
label_459d41:
    ebx.b = result
    int32_t var_38
    
    if (var_38 u>= 0x10)
        j__free(var_4c)
    
    result = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return result
