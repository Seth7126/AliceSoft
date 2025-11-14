// 函数: sub_461a70
// 地址: 0x461a70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b2e88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0xf
int32_t var_24 = 0
char var_34 = 0
void* ecx

if (*arg2 != 0)
    char* ecx_1 = arg2
    char i
    
    do
        i = *ecx_1
        ecx_1 = &ecx_1[1]
    while (i != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

sub_402110(&var_34, arg2, ecx)
int32_t var_c_1 = 0
void* eax_5 = sub_4612f0(arg1 + 8, &var_34)

if (eax_5 == 0)
    eax_5 = arg1 + 0x94

int32_t ecx_4 = *(eax_5 + 4)
int32_t result

if (ecx_4 == 4)
    result = (*(eax_5 + 0x38) - *(eax_5 + 0x34)) s>> 2
else if (ecx_4 != 5)
    result = 0
else
    result = (*(eax_5 + 0x54) - *(eax_5 + 0x50)) s>> 2

if (var_20 u>= 0x10)
    j__free(var_34.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return result
