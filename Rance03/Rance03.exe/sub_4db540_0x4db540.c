// 函数: sub_4db540
// 地址: 0x4db540
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_44 = 0xffffffff
int32_t (* var_48)(void* arg1) = sub_6bfcd6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_fc
int32_t eax_2 = __security_cookie ^ &var_fc
int32_t __saved_esi
int32_t var_104 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_108 = *(arg1 + 0xc)
int32_t var_10c = *(arg1 + 8)
void** var_d4 = arg2
int32_t var_d0 = arg3
int32_t var_44_1 = 0
int32_t var_cc
sub_4dbb60(&var_d4, sub_4691f0(&var_cc, 0x6e1a30))
int32_t var_44_2 = 0xffffffff
int32_t var_b8

if (var_b8 u>= 0x10)
    j__free(var_cc)

int32_t var_108_3 = *(arg1 + 0x14)
int32_t var_44_3 = 1
sub_4dbb60(&var_d4, sub_4691f0(&var_cc, 0x6e1a1c))
int32_t var_44_4 = 0xffffffff

if (var_b8 u>= 0x10)
    j__free(var_cc)

int32_t var_108_6 = *(arg1 + 0x18)
int32_t var_44_5 = 2
sub_4dbb60(&var_d4, sub_4691f0(&var_cc, 0x6e1a08))
int32_t var_44_6 = 0xffffffff

if (var_b8 u>= 0x10)
    j__free(var_cc)

int32_t var_108_9 = *(arg1 + 0x24)
int32_t var_10c_1 = *(arg1 + 0x20)
int32_t var_110_2 = *(arg1 + 0x1c)
int32_t var_44_7 = 3
sub_4dbb60(&var_d4, sub_4691f0(&var_cc, 0x6e1a8c))
int32_t var_44_8 = 0xffffffff

if (var_b8 u>= 0x10)
    j__free(var_cc)

var_10c_1.q = _mm_cvtps_pd(*(arg1 + 0x2c))
int32_t var_44_9 = 4
sub_4dbb60(&var_d4, sub_4691f0(&var_cc, 0x6e1a78))
int32_t var_44_10 = 0xffffffff

if (var_b8 u>= 0x10)
    j__free(var_cc)

var_10c_1.q = _mm_cvtps_pd(*(arg1 + 0x30))
int32_t var_44_11 = 5
sub_4dbb60(&var_d4, sub_4691f0(&var_cc, 0x6e1a64))
int32_t var_44_12 = 0xffffffff

if (var_b8 u>= 0x10)
    j__free(var_cc)

int32_t var_108_16 = *(arg1 + 0x3c)
int32_t var_10c_2 = *(arg1 + 0x38)
int32_t var_110_3 = *(arg1 + 0x34)
int32_t var_44_13 = 6
sub_4dbb60(&var_d4, sub_4691f0(&var_cc, 0x6e1a44))
int32_t var_44_14 = 0xffffffff

if (var_b8 u>= 0x10)
    j__free(var_cc)

int32_t eax_14
eax_14.b = *(arg1 + 0x44) != 0
int32_t var_108_19 = eax_14
int32_t var_44_15 = 7
sub_4dbb60(&var_d4, sub_4691f0(&var_cc, 0x6e1994))
int32_t var_44_16 = 0xffffffff

if (var_b8 u>= 0x10)
    j__free(var_cc)

int32_t var_b4
char* eax_17 = sub_4dbc30(&var_b4, arg1 + 0x48)
int32_t var_44_17 = 8

if (*(eax_17 + 0x14) u>= 0x10)
    eax_17 = *eax_17

char* var_108_23 = eax_17
var_44_17.b = 9
sub_4dbb60(&var_d4, sub_4691f0(&var_cc, 0x6e1984))

if (var_b8 u>= 0x10)
    j__free(var_cc)

int32_t var_44_18 = 0xffffffff
int32_t var_b8_1 = 0xf
int32_t var_bc = 0
var_cc.b = 0
int32_t var_a0

if (var_a0 u>= 0x10)
    j__free(var_b4)

int32_t var_108_27 = *(arg1 + 0x60)
int32_t var_44_19 = 0xa
sub_4dbb60(&var_d4, sub_4691f0(&var_b4, 0x6e1974))
int32_t var_44_20 = 0xffffffff

if (var_a0 u>= 0x10)
    j__free(var_b4)

int32_t var_108_30 = *(arg1 + 0x6c)
int32_t var_10c_4 = *(arg1 + 0x68)
int32_t var_110_7 = *(arg1 + 0x64)
int32_t var_44_21 = 0xb
sub_4dbb60(&var_d4, sub_4691f0(&var_b4, 0x6e195c))
int32_t var_44_22 = 0xffffffff

if (var_a0 u>= 0x10)
    j__free(var_b4)

int32_t var_108_33 = *(arg1 + 0x78)
int32_t var_10c_5 = *(arg1 + 0x74)
int32_t var_110_8 = *(arg1 + 0x70)
int32_t var_44_23 = 0xc
sub_4dbb60(&var_d4, sub_4691f0(&var_b4, 0x6e19e4))
int32_t var_44_24 = 0xffffffff

if (var_a0 u>= 0x10)
    j__free(var_b4)

int32_t var_108_36 = *(arg1 + 0x84)
int32_t var_10c_6 = *(arg1 + 0x80)
int32_t var_110_9 = *(arg1 + 0x7c)
int32_t var_44_25 = 0xd
sub_4dbb60(&var_d4, sub_4691f0(&var_b4, 0x6e19d0))
int32_t var_44_26 = 0xffffffff

if (var_a0 u>= 0x10)
    j__free(var_b4)

int32_t var_108_39 = *(arg1 + 0x90)
int32_t var_10c_7 = *(arg1 + 0x8c)
int32_t var_110_10 = *(arg1 + 0x88)
int32_t var_44_27 = 0xe
sub_4dbb60(&var_d4, sub_4691f0(&var_b4, 0x6e19b8))
int32_t var_44_28 = 0xffffffff

if (var_a0 u>= 0x10)
    j__free(var_b4)

char* eax_25 = sub_4dbc30(&var_b4, arg1 + 0x94)
int32_t var_44_29 = 0xf

if (*(eax_25 + 0x14) u>= 0x10)
    eax_25 = *eax_25

char* var_108_43 = eax_25
var_44_29.b = 0x10
sub_4dbb60(&var_d4, sub_4691f0(&var_cc, 0x6e19a8))

if (var_b8_1 u>= 0x10)
    j__free(var_cc)

int32_t var_44_30 = 0xffffffff
int32_t var_b8_2 = 0xf
int32_t var_bc_1 = 0
var_cc.b = 0

if (var_a0 u>= 0x10)
    j__free(var_b4)

int32_t var_108_47 = *(arg1 + 0xac)
int32_t var_44_31 = 0x11
sub_4dbb60(&var_d4, sub_4691f0(&var_b4, 0x6e1ae0))
int32_t var_44_32 = 0xffffffff

if (var_a0 u>= 0x10)
    j__free(var_b4)

int32_t eax_28
eax_28.b = *(arg1 + 0xb0) != 0
int32_t var_108_50 = eax_28
int32_t var_44_33 = 0x12
int32_t var_9c
sub_4dbb60(&var_d4, sub_4691f0(&var_9c, 0x6e1ad0))
int32_t var_88

if (var_88 u>= 0x10)
    j__free(var_9c)

int32_t* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_fc)
return result
