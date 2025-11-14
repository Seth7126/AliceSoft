// 函数: sub_4301f0
// 地址: 0x4301f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b5548
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_5 = arg1
void* var_38 = eax_5
int32_t result = 0
int32_t esi = 0
int32_t result_1 = 0

if (arg2 s> 0)
    do
        int32_t var_20_1 = 0xf
        int32_t var_24_1 = 0
        char var_34 = 0
        int32_t var_c_1 = 0
        sub_42d9c0(eax_5, esi, &var_34)
        int32_t var_3c
        int32_t* ecx_1 = &var_3c
        var_3c = var_24_1
        
        if (result s>= var_24_1)
            ecx_1 = &result_1
        
        result = *ecx_1
        int32_t var_c_2 = 0xffffffff
        result_1 = result
        
        if (var_20_1 u>= 0x10)
            j__free(var_34.d)
        
        eax_5 = var_38
        esi += 1
    while (esi s< arg2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
