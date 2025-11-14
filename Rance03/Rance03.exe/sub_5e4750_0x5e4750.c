// 函数: sub_5e4750
// 地址: 0x5e4750
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cb198
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_64
int32_t eax_2 = __security_cookie ^ &var_64
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_60 = 0
int32_t __saved_edi
char* edx = (**(arg1 + 0x3c8))(__security_cookie ^ &__saved_edi)
int32_t var_48 = 0xf
int32_t var_4c = 0
char var_5c = 0
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

sub_402110(&var_5c, edx, ecx_1)
int32_t var_4 = 0
char var_44
char* eax_7 = sub_4028a0(&var_44, &var_5c)
var_4.b = 1
int32_t var_2c
sub_410a80(eax_7.b, eax_7, &var_2c, "Version.txt")
int32_t var_30

if (var_30 u>= 0x10)
    j__free(var_44.d)

int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44 = 0

if (var_48 u>= 0x10)
    j__free(var_5c.d)

var_5c.d = &filesystem::CFile::`vftable'
HANDLE hObject = 0xffffffff
int32_t var_54 = 0
uint32_t var_50 = 0
var_4.b = 5

if (sub_6049e0(&var_5c, &var_2c) == 0 || var_50 == 0 || var_50 u>= 0x100)
    *(arg2 + 0x14) = 0xf
    *(arg2 + 0x10) = 0
    *arg2 = 0
    
    if (hObject != 0xffffffff)
        CloseHandle(hObject)
    
    int32_t var_18
    
    if (var_18 u>= 0x10)
        j__free(var_2c)
else
    sub_448e90(&var_44, var_50)
    var_4.b = 6
    char eax_9 = sub_604e90(&var_5c, var_44.d, var_50)
    char* ecx_9 = &var_44
    
    if (eax_9 != 0)
        char var_61 = 0
        sub_414b60(ecx_9, &var_61)
        sub_401f60(arg2, var_44.d)
        ecx_9 = &var_44
    else
        *(arg2 + 0x14) = 0xf
        *(arg2 + 0x10) = 0
        *arg2 = eax_9
    
    sub_403510(ecx_9)
    sub_604940(&var_5c)
    sub_401fb0(&var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_64)
return arg2
