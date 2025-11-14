// 函数: sub_514c10
// 地址: 0x514c10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_15 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c2300
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_esi
int32_t var_54 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_58 = *(arg1 + 8)
void** var_48 = arg2
int32_t var_44 = arg3
int32_t var_4 = 0
int32_t var_40
sub_514ea0(&var_48, sub_4691f0(&var_40, 0x6e2bb0))
int32_t var_4_1 = 0xffffffff
int32_t var_2c

if (var_2c u>= 0x10)
    j__free(var_40)

int32_t var_58_3 = *(arg1 + 0xc)
int32_t var_4_2 = 1
sub_514ea0(&var_48, sub_4691f0(&var_40, 0x6e2bc4))
int32_t var_4_3 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40)

int32_t var_58_6 = *(arg1 + 0x18)
int32_t var_5c = *(arg1 + 0x14)
int32_t var_60_2 = *(arg1 + 0x10)
int32_t var_4_4 = 2
sub_514ea0(&var_48, sub_4691f0(&var_40, 0x6e2bd8))
int32_t var_4_5 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40)

var_5c.q = _mm_cvtps_pd(*(arg1 + 0x20))
int32_t var_4_6 = 3
sub_514ea0(&var_48, sub_4691f0(&var_40, 0x6e2b5c))
int32_t var_4_7 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40)

var_5c.q = _mm_cvtps_pd(*(arg1 + 0x24))
int32_t var_4_8 = 4
sub_514ea0(&var_48, sub_4691f0(&var_40, 0x6e2b70))
int32_t var_4_9 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40)

int32_t var_58_13 = *(arg1 + 0x30)
int32_t var_5c_1 = *(arg1 + 0x2c)
int32_t var_60_3 = *(arg1 + 0x28)
int32_t var_4_10 = 5
sub_514ea0(&var_48, sub_4691f0(&var_40, 0x6e2b84))
int32_t var_4_11 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40)

int32_t var_58_16 = *(arg1 + 0x38)
int32_t var_4_12 = 6
sub_514ea0(&var_48, sub_4691f0(&var_40, 0x6e2ba4))
int32_t var_4_13 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40)

int32_t var_58_19 = *(arg1 + 0x3c)
int32_t var_4_14 = 7
int32_t var_28
sub_514ea0(&var_48, sub_4691f0(&var_28, 0x6e2b38))
int32_t var_14

if (var_14 u>= 0x10)
    j__free(var_28)

int32_t* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return result
