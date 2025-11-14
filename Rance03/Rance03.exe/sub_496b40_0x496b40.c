// 函数: sub_496b40
// 地址: 0x496b40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_44 = 0xffffffff
int32_t (* var_48)(void* arg1) = sub_6bb964
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_fc
int32_t eax_2 = __security_cookie ^ &var_fc
int32_t __saved_esi
int32_t var_104 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_108 = *(arg1 + 8)
int32_t var_10c = *(arg1 + 4)
void** var_d4 = arg2
int32_t var_d0 = arg3
int32_t var_44_1 = 0
int32_t var_cc
sub_4970f0(&var_d4, sub_4691f0(&var_cc, 0x6dfd38))
int32_t var_44_2 = 0xffffffff
int32_t var_b8

if (var_b8 u>= 0x10)
    j__free(var_cc)

int32_t eax_8
eax_8.b = *(arg1 + 0xc) != 0
int32_t var_108_3 = eax_8
int32_t var_44_3 = 1
sub_4970f0(&var_d4, sub_4691f0(&var_cc, 0x6dfd70))
int32_t var_44_4 = 0xffffffff

if (var_b8 u>= 0x10)
    j__free(var_cc)

int32_t var_108_6 = *(arg1 + 0x18)
int32_t var_10c_1 = *(arg1 + 0x14)
int32_t var_110_1 = *(arg1 + 0x10)
int32_t var_44_5 = 2
sub_4970f0(&var_d4, sub_4691f0(&var_cc, 0x6dfd54))
int32_t var_44_6 = 0xffffffff

if (var_b8 u>= 0x10)
    j__free(var_cc)

int32_t var_108_9 = *(arg1 + 0x20)
int32_t var_44_7 = 3
sub_4970f0(&var_d4, sub_4691f0(&var_cc, 0x6dfd90))
int32_t var_44_8 = 0xffffffff

if (var_b8 u>= 0x10)
    j__free(var_cc)

int32_t var_108_12 = *(arg1 + 0x24)
int32_t var_44_9 = 4
sub_4970f0(&var_d4, sub_4691f0(&var_cc, 0x6dfd7c))
int32_t var_44_10 = 0xffffffff

if (var_b8 u>= 0x10)
    j__free(var_cc)

int32_t var_108_15 = *(arg1 + 0x30)
int32_t var_10c_2 = *(arg1 + 0x2c)
int32_t var_110_4 = *(arg1 + 0x28)
int32_t var_44_11 = 5
sub_4970f0(&var_d4, sub_4691f0(&var_cc, 0x6dfdb8))
int32_t var_44_12 = 0xffffffff

if (var_b8 u>= 0x10)
    j__free(var_cc)

var_10c_2.q = _mm_cvtps_pd(*(arg1 + 0x38))
int32_t var_44_13 = 6
sub_4970f0(&var_d4, sub_4691f0(&var_cc, 0x6dfda4))
int32_t var_44_14 = 0xffffffff

if (var_b8 u>= 0x10)
    j__free(var_cc)

var_10c_2.q = _mm_cvtps_pd(*(arg1 + 0x3c))
int32_t var_44_15 = 7
sub_4970f0(&var_d4, sub_4691f0(&var_cc, 0x6dfe54))
int32_t var_44_16 = 0xffffffff

if (var_b8 u>= 0x10)
    j__free(var_cc)

int32_t var_108_22 = *(arg1 + 0x48)
int32_t var_10c_3 = *(arg1 + 0x44)
int32_t var_110_5 = *(arg1 + 0x40)
int32_t var_44_17 = 8
sub_4970f0(&var_d4, sub_4691f0(&var_cc, 0x6dfe34))
int32_t var_44_18 = 0xffffffff

if (var_b8 u>= 0x10)
    j__free(var_cc)

int32_t var_b4
char* eax_18 = sub_4971c0(&var_b4, arg1 + 0x50)
int32_t var_44_19 = 9

if (*(eax_18 + 0x14) u>= 0x10)
    eax_18 = *eax_18

char* var_108_26 = eax_18
var_44_19.b = 0xa
sub_4970f0(&var_d4, sub_4691f0(&var_cc, 0x6dfe7c))

if (var_b8 u>= 0x10)
    j__free(var_cc)

int32_t var_44_20 = 0xffffffff
int32_t var_b8_1 = 0xf
int32_t var_bc = 0
var_cc.b = 0
int32_t var_a0

if (var_a0 u>= 0x10)
    j__free(var_b4)

char* eax_21 = sub_4971c0(&var_b4, arg1 + 0xc8)
int32_t var_44_21 = 0xb

if (*(eax_21 + 0x14) u>= 0x10)
    eax_21 = *eax_21

char* var_108_31 = eax_21
var_44_21.b = 0xc
sub_4970f0(&var_d4, sub_4691f0(&var_cc, 0x6dfe68))

if (var_b8_1 u>= 0x10)
    j__free(var_cc)

int32_t var_44_22 = 0xffffffff
int32_t var_b8_2 = 0xf
int32_t var_bc_1 = 0
var_cc.b = 0

if (var_a0 u>= 0x10)
    j__free(var_b4)

char* eax_24 = sub_4971c0(&var_b4, arg1 + 0x140)
int32_t var_44_23 = 0xd

if (*(eax_24 + 0x14) u>= 0x10)
    eax_24 = *eax_24

char* var_108_36 = eax_24
var_44_23.b = 0xe
sub_4970f0(&var_d4, sub_4691f0(&var_cc, 0x6dfea0))

if (var_b8_2 u>= 0x10)
    j__free(var_cc)

int32_t var_44_24 = 0xffffffff
int32_t var_b8_3 = 0xf
int32_t var_bc_2 = 0
var_cc.b = 0

if (var_a0 u>= 0x10)
    j__free(var_b4)

int32_t var_108_40 = *(arg1 + 0x158)
int32_t var_44_25 = 0xf
sub_4970f0(&var_d4, sub_4691f0(&var_b4, 0x6dfe8c))
int32_t var_44_26 = 0xffffffff

if (var_a0 u>= 0x10)
    j__free(var_b4)

int32_t var_108_43 = *(arg1 + 0x15c)
int32_t var_44_27 = 0x10
sub_4970f0(&var_d4, sub_4691f0(&var_b4, 0x6dfebc))
int32_t var_44_28 = 0xffffffff

if (var_a0 u>= 0x10)
    j__free(var_b4)

int32_t var_108_46 = *(arg1 + 0x160)
int32_t var_44_29 = 0x11
int32_t var_9c
sub_4970f0(&var_d4, sub_4691f0(&var_9c, 0x6dfeb0))
int32_t var_88

if (var_88 u>= 0x10)
    j__free(var_9c)

int32_t* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_fc)
return result
