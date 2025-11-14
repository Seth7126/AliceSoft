// 函数: sub_462d20
// 地址: 0x462d20
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
void* ecx_4 = sub_4612f0(arg1 + 8, &var_34)

if (ecx_4 == 0)
    ecx_4 = arg1 + 0x94

void* esi_1

if (*(ecx_4 + 4) == 5 && arg3 s>= 0 && (*(ecx_4 + 0x54) - *(ecx_4 + 0x50)) s>> 2 s> arg3)
    esi_1 = *(*(ecx_4 + 0x50) + (arg3 << 2))

int32_t result

if (*(ecx_4 + 4) != 5 || arg3 s< 0 || (*(ecx_4 + 0x54) - *(ecx_4 + 0x50)) s>> 2 s<= arg3
        || esi_1 == 0)
    result = 0
else
    result = *(esi_1 + 0xc) ^ 0x65656565

if (var_20 u>= 0x10)
    j__free(var_34.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return result
