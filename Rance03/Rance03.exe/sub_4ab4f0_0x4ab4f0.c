// 函数: sub_4ab4f0
// 地址: 0x4ab4f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_44 = 0xffffffff
int32_t (* var_48)(void* arg1) = sub_6bcef9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_fc
int32_t eax_2 = __security_cookie ^ &var_fc
int32_t __saved_esi
int32_t var_104 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_108 = *(arg1 + 0x34)
void** var_ec = arg2
int32_t var_e8 = arg3
int32_t var_44_1 = 0
int32_t var_e4
sub_4ab910(&var_ec, sub_4691f0(&var_e4, 0x6e0818))
int32_t var_44_2 = 0xffffffff
int32_t var_d0

if (var_d0 u>= 0x10)
    j__free(var_e4)

int32_t var_108_3 = *(arg1 + 0x38)
int32_t var_44_3 = 1
sub_4ab910(&var_ec, sub_4691f0(&var_e4, 0x6e078c))
int32_t var_44_4 = 0xffffffff

if (var_d0 u>= 0x10)
    j__free(var_e4)

int32_t var_108_6 = *(arg1 + 0x3c)
int32_t var_44_5 = 2
sub_4ab910(&var_ec, sub_4691f0(&var_e4, 0x6e0794))
int32_t var_44_6 = 0xffffffff

if (var_d0 u>= 0x10)
    j__free(var_e4)

int32_t var_108_9 = *(arg1 + 0x40)
int32_t var_44_7 = 3
sub_4ab910(&var_ec, sub_4691f0(&var_e4, 0x6e0764))
int32_t var_44_8 = 0xffffffff

if (var_d0 u>= 0x10)
    j__free(var_e4)

int32_t var_108_12 = *(arg1 + 0x44)
int32_t var_44_9 = 4
sub_4ab910(&var_ec, sub_4691f0(&var_e4, 0x6e0774))
int32_t var_44_10 = 0xffffffff

if (var_d0 u>= 0x10)
    j__free(var_e4)

int32_t var_108_15 = *(arg1 + 0x48)
int32_t var_44_11 = 5
sub_4ab910(&var_ec, sub_4691f0(&var_e4, 0x6e07d8))
int32_t var_44_12 = 0xffffffff

if (var_d0 u>= 0x10)
    j__free(var_e4)

int32_t var_108_18 = *(arg1 + 0x4c)
int32_t var_10c = 0x6e07e4
int32_t var_44_13 = 6
sub_4ab910(&var_ec, sub_4691f0(&var_e4, 0x6e07e4))
int32_t var_44_14 = 0xffffffff

if (var_d0 u>= 0x10)
    j__free(var_e4)

var_10c.q = _mm_cvtps_pd(*(arg1 + 0x50))
int32_t var_44_15 = 7
sub_4ab910(&var_ec, sub_4691f0(&var_e4, 0x6e07a4))
int32_t var_44_16 = 0xffffffff

if (var_d0 u>= 0x10)
    j__free(var_e4)

int32_t var_108_23 = *(arg1 + 0x54)
int32_t var_44_17 = 8
sub_4ab910(&var_ec, sub_4691f0(&var_e4, 0x6e07bc))
int32_t var_44_18 = 0xffffffff

if (var_d0 u>= 0x10)
    j__free(var_e4)

int32_t var_b4
char* eax_17 = sub_4ab9e0(&var_b4, arg1 + 0x58)
int32_t var_44_19 = 9

if (*(eax_17 + 0x14) u>= 0x10)
    eax_17 = *eax_17

char* var_108_27 = eax_17
var_44_19.b = 0xa
sub_4ab910(&var_ec, sub_4691f0(&var_e4, 0x6e0858))

if (var_d0 u>= 0x10)
    j__free(var_e4)

int32_t var_44_20 = 0xffffffff
int32_t var_d0_1 = 0xf
int32_t var_d4 = 0
var_e4.b = 0
int32_t var_a0

if (var_a0 u>= 0x10)
    j__free(var_b4)

int32_t var_9c
char* eax_20 = sub_4ab9e0(&var_9c, arg1 + 0xd0)
int32_t var_44_21 = 0xb

if (*(eax_20 + 0x14) u>= 0x10)
    eax_20 = *eax_20

char* var_108_32 = eax_20
var_44_21.b = 0xc
char var_cc
sub_4ab910(&var_ec, sub_4691f0(&var_cc, 0x6e0868))
int32_t var_b8

if (var_b8 u>= 0x10)
    j__free(var_cc.d)

int32_t var_b8_1 = 0xf
int32_t var_bc = 0
var_cc = 0
int32_t var_88

if (var_88 u>= 0x10)
    j__free(var_9c)

int32_t* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_fc)
return result
