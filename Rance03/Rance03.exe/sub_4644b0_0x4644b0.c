// 函数: sub_4644b0
// 地址: 0x4644b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b8d70
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = 0
int32_t* esi = nullptr
int32_t var_40 = 0
var_44 = nullptr
int32_t var_3c = 0
int32_t var_c_1 = 0
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
var_c_1.b = 1
void* eax_5 = sub_460d20(arg1 + 8, &var_34)

if (eax_5 != 0)
    sub_468410(eax_5, &var_44)
    ebx = var_40
    esi = var_44

if (var_20 u>= 0x10)
    j__free(var_34.d)

if (esi != 0)
    sub_4107c0(esi, ebx)
    j__free(esi)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return (ebx - esi) s/ 0x18
