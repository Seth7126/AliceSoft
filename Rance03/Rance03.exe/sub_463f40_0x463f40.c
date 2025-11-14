// 函数: sub_463f40
// 地址: 0x463f40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b6e30
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_38 = 0xf
int32_t var_3c = 0
bool cond:0 = *arg2 != 0
var_4c = 0
void* ecx

if (cond:0)
    int32_t* ecx_1 = arg2
    void* esi_1 = ecx_1 + 1
    char i
    
    do
        i = *ecx_1
        ecx_1 += 1
    while (i != 0)
    ecx = ecx_1 - esi_1
else
    ecx = nullptr

sub_402110(&var_4c, arg2, ecx)
int32_t var_c_1 = 0
void* esi_2 = sub_4612f0(arg1 + 8, &var_4c)

if (esi_2 == 0)
    esi_2 = arg1 + 0x94

int32_t var_c_2 = 0xffffffff

if (var_38 u>= 0x10)
    j__free(var_4c.d)

bool cond:1 = *arg4 != 0
int32_t var_38_1 = 0xf
int32_t var_3c_1 = 0
var_4c = 0
int32_t var_20 = 0xf
int32_t var_24 = 0
char var_34 = 0
void* ecx_4

if (cond:1)
    int32_t* ecx_5 = arg4
    void* edx_1 = ecx_5 + 1
    void* eax_5
    
    do
        eax_5.b = *ecx_5
        ecx_5 += 1
    while (eax_5.b != 0)
    ecx_4 = ecx_5 - edx_1
else
    ecx_4 = nullptr

sub_402110(&var_34, arg4, ecx_4)
int32_t var_c_3 = 1
int32_t eax_6 = sub_45eea0(esi_2 + 0x30, &var_34)

if (var_20 u>= 0x10)
    j__free(var_34.d)

int32_t result

if (*(esi_2 + 4) == 4)
    result = sub_457060(esi_2 + 0x2c, arg3, eax_6)
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return result
