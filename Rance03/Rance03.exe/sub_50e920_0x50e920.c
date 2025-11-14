// 函数: sub_50e920
// 地址: 0x50e920
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_44 = 0xffffffff
int32_t (* var_48)(void* arg1) = sub_6c1bbb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_f4
int32_t eax_2 = __security_cookie ^ &var_f4
int32_t __saved_edi
int32_t var_104 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_d4 = arg2
int32_t var_d0 = arg3
int32_t var_cc
char* eax_8 = sub_50efe0(&var_cc, arg1 + 0x10)
int32_t var_44_1 = 0

if (*(eax_8 + 0x14) u>= 0x10)
    eax_8 = *eax_8

char* var_108_1 = eax_8
var_44_1.b = 1
char var_9c
sub_50ef10(&var_d4, sub_4691f0(&var_9c, 0x6e265c))
int32_t var_88

if (var_88 u>= 0x10)
    j__free(var_9c.d)

int32_t var_44_2 = 0xffffffff
int32_t var_88_1 = 0xf
int32_t var_8c = 0
var_9c = 0
int32_t var_b8

if (var_b8 u>= 0x10)
    j__free(var_cc)

int32_t var_108_5 = *(arg1 + 0x28)
int32_t var_44_3 = 2
sub_50ef10(&var_d4, sub_4691f0(&var_cc, 0x6e261c))

if (var_b8 u>= 0x10)
    j__free(var_cc)

int32_t ecx_3 = 0xf
int32_t var_a4 = 0
int32_t var_a0 = 0xf
char var_b4 = 0
int32_t var_44_4 = 3
int32_t* esi = *(arg1 + 0x2c)
int32_t edi = *(arg1 + 0x30)

if (esi != edi)
    do
        int32_t var_108_8 = *esi
        var_44_4.b = 4
        sub_403110(&var_b4, sub_4691f0(&var_cc, "%d, "), nullptr, 0xffffffff)
        var_44_4.b = 3
        
        if (var_b8 u>= 0x10)
            j__free(var_cc)
        
        esi = &esi[1]
    while (esi != edi)
    
    ecx_3 = var_a0

if (*(arg1 + 0x2c) != *(arg1 + 0x30))
    char* eax_13 = &var_b4
    
    if (ecx_3 u>= 0x10)
        eax_13 = var_b4.d
    
    char* var_108_10 = eax_13
    var_44_4.b = 5
    sub_50ef10(&var_d4, sub_4691f0(&var_cc, 0x6e2634))
    var_44_4.b = 3
    
    if (var_b8 u>= 0x10)
        j__free(var_cc)

int32_t var_108_13 = *(arg1 + 0x2b0)
var_44_4.b = 6
sub_50ef10(&var_d4, sub_4691f0(&var_cc, 0x6e2644))
var_44_4.b = 3

if (var_b8 u>= 0x10)
    j__free(var_cc)

int32_t eax_16
eax_16.b = *(arg1 + 0x2b4) != 0
int32_t var_108_16 = eax_16
var_44_4.b = 7
sub_50ef10(&var_d4, sub_4691f0(&var_cc, 0x6e25d8))
var_44_4.b = 3

if (var_b8 u>= 0x10)
    j__free(var_cc)

int32_t var_108_19 = *(arg1 + 0x2b8)
var_44_4.b = 8
sub_50ef10(&var_d4, sub_4691f0(&var_cc, 0x6e25e8))
var_44_4.b = 3

if (var_b8 u>= 0x10)
    j__free(var_cc)

int32_t var_108_22 = *(arg1 + 0x27c)
var_44_4.b = 9
sub_50ef10(&var_d4, sub_4691f0(&var_cc, 0x6e25f4))
var_44_4.b = 3

if (var_b8 u>= 0x10)
    j__free(var_cc)

int32_t var_108_25 = *(arg1 + 0x280)
var_44_4.b = 0xa
sub_50ef10(&var_d4, sub_4691f0(&var_cc, 0x6e2608))
var_44_4.b = 3

if (var_b8 u>= 0x10)
    j__free(var_cc)

int32_t var_108_28 = *(arg1 + 0x28c)
int32_t var_10c_1 = *(arg1 + 0x288)
int32_t var_110_10 = *(arg1 + 0x284)
var_44_4.b = 0xb
sub_50ef10(&var_d4, sub_4691f0(&var_cc, 0x6e26f0))
var_44_4.b = 3

if (var_b8 u>= 0x10)
    j__free(var_cc)

var_10c_1.q = _mm_cvtps_pd(*(arg1 + 0x294))
var_44_4.b = 0xc
sub_50ef10(&var_d4, sub_4691f0(&var_cc, 0x6e270c))
var_44_4.b = 3

if (var_b8 u>= 0x10)
    j__free(var_cc)

var_10c_1.q = _mm_cvtps_pd(*(arg1 + 0x298))
var_44_4.b = 0xd
sub_50ef10(&var_d4, sub_4691f0(&var_cc, 0x6e2720))
var_44_4.b = 3

if (var_b8 u>= 0x10)
    j__free(var_cc)

int32_t var_108_35 = *(arg1 + 0x2a4)
int32_t var_10c_2 = *(arg1 + 0x2a0)
int32_t var_110_11 = *(arg1 + 0x29c)
var_44_4.b = 0xe
sub_50ef10(&var_d4, sub_4691f0(&var_cc, 0x6e2734))
var_44_4.b = 3

if (var_b8 u>= 0x10)
    j__free(var_cc)

int32_t eax_25
eax_25.b = *(arg1 + 0x2ac) != 0
int32_t var_108_38 = eax_25
var_44_4.b = 0xf
sub_50ef10(&var_d4, sub_4691f0(&var_cc, 0x6e269c))
var_44_4.b = 3

if (var_b8 u>= 0x10)
    j__free(var_cc)

int32_t var_108_41 = *(arg1 + 0x2bc)
var_44_4.b = 0x10
sub_50ef10(&var_d4, sub_4691f0(&var_cc, 0x6e26a8))
var_44_4.b = 3

if (var_b8 u>= 0x10)
    j__free(var_cc)

int32_t eax_28
eax_28.b = *(arg1 + 0x2c0) != 0
int32_t var_108_44 = eax_28
var_44_4.b = 0x11
sub_50ef10(&var_d4, sub_4691f0(&var_cc, 0x6e26b4))
var_44_4.b = 3

if (var_b8 u>= 0x10)
    j__free(var_cc)

int32_t var_108_47 = *(arg1 + 0x2ec)
int32_t var_10c_3 = *(arg1 + 0x2e8)
int32_t var_110_15 = *(arg1 + 0x2e4)
int32_t var_114_2 = *(arg1 + 0x2e0)
var_44_4.b = 0x12
sub_50ef10(&var_d4, sub_4691f0(&var_cc, 0x6e26c8))

if (var_b8 u>= 0x10)
    j__free(var_cc)

if (var_a0 u>= 0x10)
    j__free(var_b4.d)

int32_t* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_f4)
return result
