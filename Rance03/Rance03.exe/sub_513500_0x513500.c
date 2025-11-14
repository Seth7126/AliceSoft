// 函数: sub_513500
// 地址: 0x513500
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t var_44 = 0xffffffff
int32_t (* var_48)(void* arg1) = sub_6bd100
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_bc
int32_t eax_2 = __security_cookie ^ &var_bc
int32_t __saved_esi_2
int32_t __saved_esi_1 = __saved_esi_2
int32_t __saved_esi
int32_t var_c4 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
var_bc = arg2
int32_t var_b8 = arg3
int32_t eax_7
eax_7.b = *(arg1 + 0x3c) != 0
int32_t var_c8 = eax_7
int32_t var_cc = 0x6e2a0c
int32_t var_b4
int32_t* var_d0 = &var_b4
int32_t var_44_1 = 0
sub_513790(&var_bc, sub_4691f0())
int32_t var_44_2 = 0xffffffff
int32_t var_a0

if (var_a0 u>= 0x10)
    j__free(var_b4)

var_cc.q = _mm_cvtps_pd(*(arg1 + 0xc))
int64_t var_d4_1 = _mm_cvtps_pd(*(arg1 + 8))
int32_t var_d8 = 0x6e2a1c
int32_t var_44_3 = 1
sub_513790(&var_bc, sub_4691f0(&var_b4, 0x6e2a1c))
int32_t var_44_4 = 0xffffffff

if (var_a0 u>= 0x10)
    j__free(var_b4)

var_cc.q = _mm_cvtps_pd(*(arg1 + 0x14))
int64_t var_d4_2 = _mm_cvtps_pd(*(arg1 + 0x10))
int32_t var_d8_1 = 0x6e2a2c
int32_t var_44_5 = 2
sub_513790(&var_bc, sub_4691f0(&var_b4, 0x6e2a2c))
int32_t var_44_6 = 0xffffffff

if (var_a0 u>= 0x10)
    j__free(var_b4)

var_cc.q = _mm_cvtps_pd(*(arg1 + 0x1c))
int64_t var_d4_3 = _mm_cvtps_pd(*(arg1 + 0x18))
int32_t var_d8_2 = 0x6e2a3c
int32_t var_44_7 = 3
sub_513790(&var_bc, sub_4691f0(&var_b4, 0x6e2a3c))
int32_t var_44_8 = 0xffffffff

if (var_a0 u>= 0x10)
    j__free(var_b4)

var_cc.q = _mm_cvtps_pd(*(arg1 + 0x24))
int64_t var_d4_4 = _mm_cvtps_pd(*(arg1 + 0x20))
int32_t var_d8_3 = 0x6e2ad4
int32_t var_44_9 = 4
sub_513790(&var_bc, sub_4691f0(&var_b4, 0x6e2ad4))
int32_t var_44_10 = 0xffffffff

if (var_a0 u>= 0x10)
    j__free(var_b4)

int32_t var_c8_11 = *(arg1 + 0x38)
int32_t var_cc_1 = *(arg1 + 0x34)
int32_t var_d0_1 = *(arg1 + 0x30)
var_d4_4.d = *(arg1 + 0x2c)
int32_t var_d8_4 = 0x6e2ae4
int32_t var_44_11 = 5
int32_t var_9c
sub_513790(&var_bc, sub_4691f0(&var_9c, 0x6e2ae4))
int32_t var_88

if (var_88 u>= 0x10)
    j__free(var_9c)

int32_t* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_bc)
return result
