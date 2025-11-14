// 函数: sub_504d80
// 地址: 0x504d80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_44 = 0xffffffff
int32_t (* var_48)(void* arg1) = sub_6c1391
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_fc
int32_t eax_2 = __security_cookie ^ &var_fc
int32_t __saved_esi
int32_t var_104 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_d4 = arg2
int32_t var_d0 = arg3
int32_t var_cc
char* eax_8 = sub_505040(&var_cc, arg1 + 8)
int32_t var_44_1 = 0

if (*(eax_8 + 0x14) u>= 0x10)
    eax_8 = *eax_8

char* var_108_1 = eax_8
int32_t var_10c_1 = 0x6e2394
var_44_1.b = 1
char var_b4
sub_504f70(&var_d4, sub_4691f0(&var_b4, 0x6e2394))
int32_t var_a0

if (var_a0 u>= 0x10)
    j__free(var_b4.d)

int32_t var_44_2 = 0xffffffff
int32_t var_a0_1 = 0xf
int32_t var_a4 = 0
var_b4 = 0
int32_t var_b8

if (var_b8 u>= 0x10)
    j__free(var_cc)

var_10c_1.q = _mm_cvtps_pd(*(arg1 + 0x24))
int32_t var_44_3 = 2
sub_504f70(&var_d4, sub_4691f0(&var_cc, 0x6e2378))
int32_t var_44_4 = 0xffffffff

if (var_b8 u>= 0x10)
    j__free(var_cc)

var_10c_1.q = _mm_cvtps_pd(*(arg1 + 0x20))
int32_t var_44_5 = 3
sub_504f70(&var_d4, sub_4691f0(&var_cc, 0x6e236c))
int32_t var_44_6 = 0xffffffff

if (var_b8 u>= 0x10)
    j__free(var_cc)

int32_t var_108_9 = *(arg1 + 0x54)
int32_t var_10c_2 = *(arg1 + 0x50)
int32_t var_110_1 = *(arg1 + 0x4c)
int32_t var_114_2 = *(arg1 + 0x48)
int32_t var_44_7 = 4
int32_t var_9c
sub_504f70(&var_d4, sub_4691f0(&var_9c, 0x6e2344))
int32_t var_88

if (var_88 u>= 0x10)
    j__free(var_9c)

int32_t* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_fc)
return result
