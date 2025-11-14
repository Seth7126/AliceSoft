// 函数: sub_4edf40
// 地址: 0x4edf40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c0860
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c = 0xf
int32_t var_30 = 0
char var_40 = 0
int32_t var_4 = 0
char* edx = (**arg2)(eax_4)
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
void* ecx_1

if (*edx != 0)
    char* ecx_2 = edx
    char* eax_6
    
    do
        eax_6.b = *ecx_2
        ecx_2 = &ecx_2[1]
    while (eax_6.b != 0)
    ecx_1 = ecx_2 - &ecx_2[1]
else
    ecx_1 = nullptr

sub_402110(&var_28, edx, ecx_1)
var_4.b = 1
void* ebx_1 = data_75d4fc + 0x74
void** eax_7 = sub_417ed0(ebx_1 + 0xf4, &var_28)
char eax_9

if (eax_7 != *(ebx_1 + 0xf4))
    eax_9 = sub_40c3a0(&var_28, &eax_7[4])

void** var_44

if (eax_7 == *(ebx_1 + 0xf4) || eax_9 != 0)
    var_44 = *(ebx_1 + 0xf4)
else
    var_44 = eax_7

void** result

if (var_44 == *(ebx_1 + 0xf4) || var_44 == 0xffffffd8)
    result.b = 0
else
    void* var_60_3 = ebx_1
    result = sub_4cc7a0(&var_44[0xa], &var_40, &var_44[0xa])

var_4.b = 0
ebx_1.b = result.b == 0

if (var_14 u>= 0x10)
    j__free(var_28.d)

if (ebx_1.b == 0)
    char* edx_1 = &var_40
    
    if (var_2c u>= 0x10)
        edx_1 = var_40.d
    
    (*(*arg1 + 4))(edx_1)
    ebx_1.b = 1
else
    ebx_1.b = 0

if (var_2c u>= 0x10)
    j__free(var_40.d)

result.b = ebx_1.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
