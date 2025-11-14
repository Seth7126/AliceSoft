// 函数: sub_40e380
// 地址: 0x40e380
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b36f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_5c
int32_t var_1c = __security_cookie ^ &var_5c
int32_t ebx
int32_t var_60 = ebx
int32_t esi
int32_t var_64 = esi
int32_t* edi
int32_t* var_68 = edi
int32_t var_6c = __security_cookie ^ &var_68
fsbase->NtTib.ExceptionList = &ExceptionList
sub_40ddd0(arg1)
char* edx = (*(*arg2 + 8))(var_6c)
void* ecx_1

if (*edx != 0)
    char* ecx_2 = edx
    char* eax_7
    
    do
        eax_7.b = *ecx_2
        ecx_2 = &ecx_2[1]
    while (eax_7.b != 0)
    ecx_1 = ecx_2 - &ecx_2[1]
else
    ecx_1 = nullptr

sub_402110(&arg1[9], edx, ecx_1)
*arg1 = (**arg2)()
char* edx_1 = (*(*arg2 + 0x28))()
int32_t var_20 = 0xf
int32_t var_24 = 0
char var_34 = 0
void* ecx_6

if (*edx_1 != 0)
    char* ecx_7 = edx_1
    char* eax_11
    
    do
        eax_11.b = *ecx_7
        ecx_7 = &ecx_7[1]
    while (eax_11.b != 0)
    ecx_6 = ecx_7 - &ecx_7[1]
else
    ecx_6 = nullptr

sub_402110(&var_34, edx_1, ecx_6)
int32_t var_c_1 = 0
int32_t eax_13 = (*(*arg2 + 0x24))()
int32_t eax_15 = (*(*arg2 + 4))()
int32_t var_38 = 0xf
int32_t var_3c = 0
char var_4c = 0
sub_401ff0(&var_4c, &var_34, 0, 0xffffffff)
int32_t* esp = &var_6c
var_c_1.b = 1
arg1[1] = eax_15
arg1[2] = eax_13

if (&arg1[3] != &var_4c)
    sub_401ff0(&arg1[3], &var_4c, 0, 0xffffffff)
    esp = &var_6c

if (var_38 u>= 0x10)
    j__free(var_4c.d)
    esp = &var_6c

int32_t var_c_2 = 0xffffffff
int32_t var_38_1 = 0xf
int32_t var_3c_1 = 0
var_4c = 0

if (var_20 u>= 0x10)
    j__free(var_34.d)
    esp = &var_6c

int32_t var_20_1 = 0xf
int32_t var_24_1 = 0
var_34 = 0
int32_t* result

if (arg3 != 0)
    switch ((**arg2)())
        case nullptr
            sub_40e690(arg1, (*(*arg2 + 0x1c))(arg3))
            esp = &var_6c
        case 1
            sub_40e8b0(arg1, (*(*arg2 + 0x20))((*(*arg2 + 0x1c))(arg3, 0)), var_6c, var_68)
            esp = &var_60
        case 2
            long double x87_r0
            sub_40e5a0(arg1, x87_r0, arg2)
            esp = &var_6c
        case 3
            sub_40e8b0(arg1, (*(*arg2 + 0x20))((*(*arg2 + 0x1c))(arg3, 1)), var_6c, var_68)
            esp = &var_60
    
    result.b = arg1[0x1c].b
else
    result.b = 0

fsbase->NtTib.ExceptionList = esp[0x16]
esp[1]
esp[2]
esp[3]
sub_69a5bc(esp[0x14] ^ &esp[4])
return result
