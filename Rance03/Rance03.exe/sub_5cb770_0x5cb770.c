// 函数: sub_5cb770
// 地址: 0x5cb770
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2a68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_esi
int32_t var_34 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
int32_t var_4 = 0
int32_t* eax_5 = arg1[0x82]
int32_t ecx = *eax_5
arg1[0x82] = &eax_5[1]
int32_t eax_7
int32_t* ecx_2
int32_t edx
eax_7, ecx_2, edx = sub_5bd860(&arg1[0x12], ecx, &var_28)
int32_t* result

if (eax_7.b != 0)
    char* eax_8 = &var_28
    
    if (var_14 u>= 0x10)
        eax_8 = var_28.d
    
    char* var_38_1 = eax_8
    result = sub_5c24e0(eax_8, edx, ecx_2, arg1, 0x6e8f34)
else
    result = sub_5c24e0(eax_7, edx, ecx_2, arg1, 0x6e9378)

if (var_14 u>= 0x10)
    result = j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
