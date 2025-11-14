// 函数: sub_49efa0
// 地址: 0x49efa0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_44 = 0xffffffff
int32_t (* var_48)(void* arg1) = sub_6bc1d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_fc
int32_t eax_2 = __security_cookie ^ &var_fc
int32_t __saved_esi
int32_t var_104 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_108 = *(arg1 + 0x54)
int32_t var_10c = *(arg1 + 0x50)
void** var_d4 = arg2
int32_t var_d0 = arg3
int32_t var_44_1 = 0
int32_t var_b4
sub_49f3f0(&var_d4, sub_4691f0(&var_b4, 0x6e044c))
int32_t var_44_2 = 0xffffffff
int32_t var_a0

if (var_a0 u>= 0x10)
    j__free(var_b4)

int32_t var_108_3 = *(arg1 + 0x5c)
int32_t var_10c_1 = *(arg1 + 0x58)
int32_t var_44_3 = 1
sub_49f3f0(&var_d4, sub_4691f0(&var_b4, 0x6e03bc))
int32_t var_44_4 = 0xffffffff

if (var_a0 u>= 0x10)
    j__free(var_b4)

int32_t var_cc
char* eax_10 = sub_49f4c0(&var_cc, arg1 + 0x60)
int32_t var_44_5 = 2

if (*(eax_10 + 0x14) u>= 0x10)
    eax_10 = *eax_10

char* var_108_7 = eax_10
var_44_5.b = 3
sub_49f3f0(&var_d4, sub_4691f0(&var_b4, 0x6e03ac))

if (var_a0 u>= 0x10)
    j__free(var_b4)

int32_t var_44_6 = 0xffffffff
int32_t var_a0_1 = 0xf
int32_t var_a4 = 0
var_b4.b = 0
int32_t var_b8

if (var_b8 u>= 0x10)
    j__free(var_cc)

char* eax_13 = sub_49f4c0(&var_cc, arg1 + 0x78)
int32_t var_44_7 = 4

if (*(eax_13 + 0x14) u>= 0x10)
    eax_13 = *eax_13

char* var_108_12 = eax_13
var_44_7.b = 5
sub_49f3f0(&var_d4, sub_4691f0(&var_b4, 0x6e03e4))

if (var_a0_1 u>= 0x10)
    j__free(var_b4)

int32_t var_44_8 = 0xffffffff
int32_t var_a0_2 = 0xf
int32_t var_a4_1 = 0
var_b4.b = 0

if (var_b8 u>= 0x10)
    j__free(var_cc)

int32_t var_108_16 = *(arg1 + 0x94)
int32_t var_44_9 = 6
sub_49f3f0(&var_d4, sub_4691f0(&var_cc, 0x6e03d0))
int32_t var_44_10 = 0xffffffff

if (var_b8 u>= 0x10)
    j__free(var_cc)

int32_t var_108_19 = *(arg1 + 0x98)
int32_t var_44_11 = 7
sub_49f3f0(&var_d4, sub_4691f0(&var_cc, 0x6e0410))
int32_t var_44_12 = 0xffffffff

if (var_b8 u>= 0x10)
    j__free(var_cc)

int32_t var_108_22 = *(arg1 + 0xa4)
int32_t var_10c_4 = *(arg1 + 0xa0)
int32_t var_110_4 = *(arg1 + 0x9c)
int32_t var_44_13 = 8
sub_49f3f0(&var_d4, sub_4691f0(&var_cc, 0x6e03f4))
int32_t var_44_14 = 0xffffffff

if (var_b8 u>= 0x10)
    j__free(var_cc)

var_10c_4.q = _mm_cvtps_pd(*(arg1 + 0xac))
int32_t var_44_15 = 9
sub_49f3f0(&var_d4, sub_4691f0(&var_cc, 0x6e0438))
int32_t var_44_16 = 0xffffffff

if (var_b8 u>= 0x10)
    j__free(var_cc)

var_10c_4.q = _mm_cvtps_pd(*(arg1 + 0xb0))
int32_t var_44_17 = 0xa
sub_49f3f0(&var_d4, sub_4691f0(&var_cc, 0x6e0424))
int32_t var_44_18 = 0xffffffff

if (var_b8 u>= 0x10)
    j__free(var_cc)

int32_t var_108_29 = *(arg1 + 0xbc)
int32_t var_10c_5 = *(arg1 + 0xb8)
int32_t var_110_5 = *(arg1 + 0xb4)
int32_t var_44_19 = 0xb
sub_49f3f0(&var_d4, sub_4691f0(&var_cc, 0x6e0490))
int32_t var_44_20 = 0xffffffff

if (var_b8 u>= 0x10)
    j__free(var_cc)

int32_t var_108_32 = *(arg1 + 0xc4)
int32_t var_44_21 = 0xc
int32_t var_9c
sub_49f3f0(&var_d4, sub_4691f0(&var_9c, 0x6e0480))
int32_t var_88

if (var_88 u>= 0x10)
    j__free(var_9c)

int32_t* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_fc)
return result
