// 函数: sub_61b9d0
// 地址: 0x61b9d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cdf7e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_ac
int32_t eax_2 = __security_cookie ^ &var_ac
int32_t __saved_edi
int32_t var_c0 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
void* var_1c = nullptr
char var_2c = 0
sub_402110(&var_2c, "http://", 7)
int32_t var_4 = 0
int32_t var_30 = 0xf
void* var_34 = nullptr
int32_t var_44[0x4]
__builtin_memset(&var_44, 0, 1)
sub_402110(&var_44, "https://", 8)
int32_t var_90 = 0xf
int32_t var_94 = 0
char var_a4 = 0
var_4.b = 2
int32_t* edx = &var_2c
int32_t var_74
char* ecx_3 = sub_403070(arg2, &var_74, 0, var_1c)

if (var_18 u>= 0x10)
    edx = var_2c.d

void* ebx = *(ecx_3 + 0x10)

if (*(ecx_3 + 0x14) u>= 0x10)
    ecx_3 = *ecx_3

void* esi = var_1c
void* eax_6 = esi

if (ebx u< esi)
    eax_6 = ebx

int32_t eax_7 = sub_405190(eax_6, edx, ecx_3, eax_6)
bool cond:3 = eax_7 == 0

if (eax_7 == 0)
    int32_t eax_8
    
    if (ebx u>= esi)
        eax_8.b = ebx != esi
    else
        eax_8 = 0xffffffff
    
    cond:3 = eax_8 == 0

ebx.b = cond:3
int32_t var_60

if (var_60 u>= 0x10)
    j__free(var_74)
    esi = var_1c

void** ecx_6 = arg2
int32_t ecx_5
void* var_c8_1

if (ebx.b == 0)
    char eax_10
    eax_10, ecx_5 = sub_4058a0(sub_403070(ecx_6, &var_74, 0, var_34), &var_44)
    ebx.b = eax_10
    
    if (var_60 u>= 0x10)
        ecx_5 = j__free(var_74)
    
    if (ebx.b != 0)
        int32_t var_c4_6 = 0xffffffff
        var_c8_1 = var_34
        ecx_6 = arg2
        goto label_61bb70
    
    if (&var_a4 != arg2)
        ecx_5 = sub_401ff0(&var_a4, arg2, 0, 0xffffffff)
else
    int32_t var_c4_3 = 0xffffffff
    var_c8_1 = esi
label_61bb70:
    char* eax_11
    eax_11, ecx_5 = sub_403070(ecx_6, &var_74, var_c8_1, 0xffffffff)
    
    if (&var_a4 != eax_11)
        if (var_90 u>= 0x10)
            j__free(var_a4.d)
        
        var_90 = 0xf
        int32_t var_94_1 = 0
        var_a4 = 0
        ecx_5 = sub_4030b0(&var_a4, eax_11)
    
    if (var_60 u>= 0x10)
        ecx_5 = j__free(var_74)
int32_t var_78 = 0xf
int32_t var_7c = 0
char var_8c = 0
int32_t var_48 = 0xf
int32_t var_4c = 0
char var_5c = 0
int32_t var_c4_10 = 1
var_4.b = 4
char var_a8 = 0x2f
void* eax_12 = sub_4294e0(&var_a4, &var_a8, ecx_5)

if (eax_12 == 0xffffffff)
    sub_401ff0(&var_8c, &var_a4, 0, 0xffffffff)
    sub_402110(&var_5c, 0x6da7df, nullptr)
else
    char* eax_13 = sub_403070(&var_a4, &var_74, 0, eax_12)
    
    if (&var_8c != eax_13)
        if (var_78 u>= 0x10)
            j__free(var_8c.d)
        
        var_78 = 0xf
        int32_t var_7c_1 = 0
        var_8c = 0
        sub_4030b0(&var_8c, eax_13)
    
    if (var_60 u>= 0x10)
        j__free(var_74)
    
    char* eax_15 = sub_403070(&var_a4, &var_74, eax_12 + 1, 0xffffffff)
    
    if (&var_5c != eax_15)
        if (var_48 u>= 0x10)
            j__free(var_5c.d)
        
        var_48 = 0xf
        int32_t var_4c_1 = 0
        var_5c = 0
        sub_4030b0(&var_5c, eax_15)
    
    if (var_60 u>= 0x10)
        j__free(var_74)

if (arg1 + 0x14 != &var_8c)
    sub_401ff0(arg1 + 0x14, &var_8c, 0, 0xffffffff)

int32_t* result = &var_5c

if (arg1 + 0x2c != &var_5c)
    result = sub_401ff0(arg1 + 0x2c, &var_5c, 0, 0xffffffff)

if (var_48 u>= 0x10)
    result = j__free(var_5c.d)

int32_t var_48_1 = 0xf
int32_t var_4c_2 = 0
var_5c = 0

if (var_78 u>= 0x10)
    result = j__free(var_8c.d)

int32_t var_78_1 = 0xf
int32_t var_7c_2 = 0
var_8c = 0

if (var_90 u>= 0x10)
    result = j__free(var_a4.d)

int32_t var_90_1 = 0xf
int32_t var_94_2 = 0
var_a4 = 0

if (var_30 u>= 0x10)
    result = j__free(var_44[0])

int32_t var_30_1 = 0xf
int32_t var_34_1 = 0
__builtin_memset(&var_44, 0, 1)

if (var_18 u>= 0x10)
    result = j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_ac)
return result
