// 函数: sub_677bc0
// 地址: 0x677bc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_23 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d0568
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_7c
int32_t eax_2 = __security_cookie ^ &var_7c
int32_t __saved_edi
int32_t var_90 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_7c = arg11
int32_t var_5c
char* eax_6 = sub_677b20(&var_5c, arg2)
int32_t var_4 = 0

if (*(eax_6 + 0x14) u>= 0x10)
    eax_6 = *eax_6

char* var_94_1 = eax_6
var_4.b = 1
char var_44
sub_412d60(arg1, sub_4691f0(&var_44, 0x7021e0))
int32_t var_30

if (var_30 u>= 0x10)
    j__free(var_44.d)

int32_t var_4_1 = 0xffffffff
int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44 = 0
int32_t var_48

if (var_48 u>= 0x10)
    j__free(var_5c)

int32_t var_94_5 = arg3
int32_t var_4_2 = 2
sub_412d60(arg1, sub_4691f0(&var_5c, 0x7021cc))
int32_t var_4_3 = 0xffffffff

if (var_48 u>= 0x10)
    j__free(var_5c)

int32_t var_94_8 = arg4
int32_t var_4_4 = 3
sub_412d60(arg1, sub_4691f0(&var_5c, 0x7020ec))
int32_t var_4_5 = 0xffffffff

if (var_48 u>= 0x10)
    j__free(var_5c)

int32_t var_94_11 = arg5
int32_t var_4_6 = 4
sub_412d60(arg1, sub_4691f0(&var_5c, 0x7020d8))
int32_t var_4_7 = 0xffffffff

if (var_48 u>= 0x10)
    j__free(var_5c)

int32_t var_94_14 = arg6
int32_t var_98_1 = 0x702114
int32_t var_4_8 = 5
sub_412d60(arg1, sub_4691f0(&var_5c, 0x702114))
int32_t var_4_9 = 0xffffffff

if (var_48 u>= 0x10)
    j__free(var_5c)

var_98_1.q = _mm_cvtps_pd(arg7)
int32_t var_4_10 = 6
sub_412d60(arg1, sub_4691f0(&var_5c, 0x702100))
int32_t var_4_11 = 0xffffffff

if (var_48 u>= 0x10)
    j__free(var_5c)

var_98_1.q = _mm_cvtps_pd(arg8)
int32_t var_4_12 = 7
sub_412d60(arg1, sub_4691f0(&var_5c, 0x70213c))
int32_t var_4_13 = 0xffffffff

if (var_48 u>= 0x10)
    j__free(var_5c)

int32_t var_94_21 = arg9
int32_t var_4_14 = 8
sub_412d60(arg1, sub_4691f0(&var_5c, 0x702128))
int32_t var_4_15 = 0xffffffff

if (var_48 u>= 0x10)
    j__free(var_5c)

int32_t var_94_24 = arg10
int32_t var_4_16 = 9
sub_412d60(arg1, sub_4691f0(&var_5c, 0x702164))
int32_t var_4_17 = 0xffffffff

if (var_48 u>= 0x10)
    j__free(var_5c)

int32_t var_94_27 = var_7c
int32_t var_4_18 = 0xa
sub_412d60(arg1, sub_4691f0(&var_5c, 0x702150))
int32_t var_4_19 = 0xffffffff

if (var_48 u>= 0x10)
    j__free(var_5c)

int32_t var_94_30 = arg12
int32_t var_4_20 = 0xb
sub_412d60(arg1, sub_4691f0(&var_5c, 0x702040))
int32_t var_4_21 = 0xffffffff

if (var_48 u>= 0x10)
    j__free(var_5c)

int32_t var_94_33 = arg13
int32_t var_4_22 = 0xc
int32_t var_2c
int32_t result = sub_412d60(arg1, sub_4691f0(&var_2c, 0x70202c))
int32_t var_18

if (var_18 u>= 0x10)
    result = j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_7c)
return result
