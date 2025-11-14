// 函数: sub_478a30
// 地址: 0x478a30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b3db8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_34
int32_t eax_2 = __security_cookie ^ &var_34
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_esi
char* edx = (**arg1)(__security_cookie ^ &__saved_esi)
int32_t var_20 = 0xf
int32_t var_24 = 0
var_34 = 0
void* ecx

if (*edx != 0)
    char* ecx_1 = edx
    char* eax_6
    
    do
        eax_6.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_6.b != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

sub_402110(&var_34, edx, ecx)
int32_t var_c_1 = 0
void* const result = *(data_75d4e4 + 0x93c)

if (result != 0)
    void* eax_8 = sub_470740(result + 0x3c, &var_34)
    
    if (eax_8 != 0)
        result = *(eax_8 + 8)
    else
        eax_8 = sub_473460(result + 8, &var_34)
        
        if (eax_8 != 0)
            result = *(eax_8 + 8)
        else
            eax_8 = sub_470740(result + 0x20, &var_34)
            
            if (eax_8 != 0)
                result = *(eax_8 + 8)
            else
                result = 0xffffffff

if (var_20 u>= 0x10)
    j__free(var_34.d)

if (result == 0xffffffff)
    result = 2

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return result
