// 函数: sub_463110
// 地址: 0x463110
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b8c60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0xf
int32_t var_24 = 0
bool cond:0 = *arg3 != 0
int32_t var_34[0x4]
__builtin_memset(&var_34, 0, 1)
void* ecx

if (cond:0)
    int32_t* ecx_1 = arg3
    void* ebx_1 = ecx_1 + 1
    char i
    
    do
        i = *ecx_1
        ecx_1 += 1
    while (i != 0)
    ecx = ecx_1 - ebx_1
else
    ecx = nullptr

sub_402110(&var_34, arg3, ecx)
int32_t var_c_1 = 0
bool cond:1 = *arg2 != 0
int32_t var_38 = 0xf
int32_t var_3c = 0
var_4c = 0
void* ecx_3

if (cond:1)
    int32_t* ecx_4 = arg2
    void* edx_1 = ecx_4 + 1
    char i_1
    
    do
        i_1 = *ecx_4
        ecx_4 += 1
    while (i_1 != 0)
    ecx_3 = ecx_4 - edx_1
else
    ecx_3 = nullptr

sub_402110(&var_4c, arg2, ecx_3)
var_c_1.b = 1
void* eax_5 = sub_4612f0(arg1 + 8, &var_4c)

if (eax_5 == 0)
    eax_5 = arg1 + 0x94

int32_t result = sub_457b90(eax_5 + 0x2c, &var_34)

if (var_38 u>= 0x10)
    j__free(var_4c.d)

int32_t var_38_1 = 0xf
int32_t var_3c_1 = 0
var_4c = 0

if (var_20 u>= 0x10)
    j__free(var_34[0])

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return result
