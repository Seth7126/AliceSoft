// 函数: sub_6666e0
// 地址: 0x6666e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cfca8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_64
int32_t eax_2 = __security_cookie ^ &var_64
int32_t __saved_edi
int32_t var_78 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_60 = 0
int32_t var_48 = 0xf
int32_t var_4c = 0
char var_5c = 0
sub_402110(&var_5c, &data_704170, nullptr)
int32_t var_4 = 0
int32_t eax_5 = arg1[8]

if (eax_5 u> 3)
    sub_402110(&var_5c, 0x708a4c, 3)
else
    switch (eax_5)
        case 0
            sub_402670(&var_5c, 0x7089f8)
        case 1
            sub_402670(&var_5c, 0x708a00)
        case 2
            sub_402670(&var_5c, 0x708a08)
        case 3
            sub_402670(&var_5c, 0x708a44)

void* const esi = &data_708a50
void* const edx = &data_708a50
int32_t var_18 = 0xf
int32_t var_1c = 0

if (arg1[9].b == 0)
    edx = &data_708a54

char var_2c = 0
void* ecx_6

if (*edx != 0)
    void* const ecx_7 = edx
    void* ebp_1 = ecx_7 + 1
    char i
    
    do
        i = *ecx_7
        ecx_7 += 1
    while (i != 0)
    ecx_6 = ecx_7 - ebp_1
else
    ecx_6 = nullptr

sub_402110(&var_2c, edx, ecx_6)
var_4.b = 1
int32_t var_30 = 0xf

if (*(arg1 + 0x25) == 0)
    esi = &data_708a54

int32_t var_34 = 0
char var_44 = 0
void* ecx_9

if (*esi != 0)
    void* const ecx_10 = esi
    void* edx_1 = ecx_10 + 1
    char i_1
    
    do
        i_1 = *ecx_10
        ecx_10 += 1
    while (i_1 != 0)
    ecx_9 = ecx_10 - edx_1
else
    ecx_9 = nullptr

sub_402110(&var_44, esi, ecx_9)
var_4.b = 2
char* edx_2 = &var_44
int32_t var_7c_2 = arg1[7]
char* ecx_12 = &var_2c
char* eax_6 = &var_5c

if (var_30 u>= 0x10)
    edx_2 = var_44.d

char* var_80_2 = edx_2

if (var_18 u>= 0x10)
    ecx_12 = var_2c.d

char* var_84 = ecx_12

if (var_48 u>= 0x10)
    eax_6 = var_5c.d

char* var_88 = eax_6
int32_t var_8c = arg1[6]
int32_t var_90 = arg1[5]
int32_t var_94 = arg1[4]
int32_t var_98 = arg1[3]
int32_t var_9c = arg1[2]
int32_t var_a0 = arg1[1]
int32_t var_a4 = *arg1
sub_4691f0(arg2, "  %10d (%5d,%5d) [%5dx%5d] %3d %10d %5s %4s %4s%d")

if (var_30 u>= 0x10)
    j__free(var_44.d)

int32_t var_30_1 = 0xf
int32_t var_34_1 = 0
var_44 = 0

if (var_18 u>= 0x10)
    j__free(var_2c.d)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0

if (var_48 u>= 0x10)
    j__free(var_5c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_64)
return arg2
