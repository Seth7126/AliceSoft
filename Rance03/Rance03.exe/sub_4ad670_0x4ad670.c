// 函数: sub_4ad670
// 地址: 0x4ad670
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_44 = 0xffffffff
int32_t (* var_48)(void* arg1) = sub_6bd100
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_bc
int32_t eax_2 = __security_cookie ^ &var_bc
int32_t __saved_esi
int32_t var_c4 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_c8 = *(arg1 + 4)
var_bc = arg2
int32_t var_b8 = arg3
int32_t var_44_1 = 0
int32_t var_b4
sub_4ad8a0(&var_bc, sub_4691f0(&var_b4, 0x6e093c))
int32_t var_44_2 = 0xffffffff
int32_t var_a0

if (var_a0 u>= 0x10)
    j__free(var_b4)

int32_t eax_8
eax_8.b = *(arg1 + 8) != 0
int32_t var_c8_3 = eax_8
int32_t var_cc = 0x6e098c
int32_t var_44_3 = 1
sub_4ad8a0(&var_bc, sub_4691f0(&var_b4, 0x6e098c))
int32_t var_44_4 = 0xffffffff

if (var_a0 u>= 0x10)
    j__free(var_b4)

var_cc.q = _mm_cvtps_pd(*(arg1 + 0xc))
int32_t var_44_5 = 2
sub_4ad8a0(&var_bc, sub_4691f0(&var_b4, 0x6e09a0))
int32_t var_44_6 = 0xffffffff

if (var_a0 u>= 0x10)
    j__free(var_b4)

int32_t eax_11
eax_11.b = *(arg1 + 8) != 0
int32_t var_c8_8 = eax_11
int32_t var_44_7 = 3
sub_4ad8a0(&var_bc, sub_4691f0(&var_b4, 0x6e0954))
int32_t var_44_8 = 0xffffffff

if (var_a0 u>= 0x10)
    j__free(var_b4)

int32_t var_c8_11 = *(arg1 + 0x14)
int32_t var_44_9 = 4
sub_4ad8a0(&var_bc, sub_4691f0(&var_b4, 0x6e0980))
int32_t var_44_10 = 0xffffffff

if (var_a0 u>= 0x10)
    j__free(var_b4)

int32_t var_c8_14 = *(arg1 + 0x24)
int32_t var_cc_1 = *(arg1 + 0x20)
int32_t var_d0_4 = *(arg1 + 0x1c)
int32_t var_d4_1 = *(arg1 + 0x18)
int32_t var_44_11 = 5
int32_t var_9c
sub_4ad8a0(&var_bc, sub_4691f0(&var_9c, 0x6e09fc))
int32_t var_88

if (var_88 u>= 0x10)
    j__free(var_9c)

int32_t* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_bc)
return result
