// 函数: sub_4bb130
// 地址: 0x4bb130
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_59 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bdda0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_7c
int32_t eax_2 = __security_cookie ^ &var_7c
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_2
int32_t __saved_edi_1 = __saved_edi_2
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8c = *(arg1 + 0x18)
int64_t xmm0_1 = _mm_cvtps_pd(*(arg1 + 0x14))
var_7c = arg2
int32_t var_78 = arg3
int64_t var_94_1 = xmm0_1
int64_t var_9c = _mm_cvtps_pd(*(arg1 + 0x10))
int32_t var_a0 = 0x6e0d24
int32_t var_4 = 0
int32_t var_74
sub_4bbdd0(&var_7c, sub_4691f0(&var_74, 0x6e0d24))
int32_t var_4_1 = 0xffffffff
int32_t var_60

if (var_60 u>= 0x10)
    j__free(var_74)

var_94_1:4.d = 0x6e0d6c
var_94_1.d = &var_74
int32_t var_4_2 = 1
sub_4bbdd0(&var_7c, sub_4691f0(var_94_1, *(arg1 + 0x1c), eax_4))
int32_t var_4_3 = 0xffffffff

if (var_60 u>= 0x10)
    j__free(var_74)

int32_t eax_9
eax_9.b = *(arg1 + 0x20) != 0
var_94_1:4.d = 0x6e0d80
var_94_1.d = &var_74
int32_t var_4_4 = 2
sub_4bbdd0(&var_7c, sub_4691f0(var_94_1, eax_9))
int32_t var_4_5 = 0xffffffff

if (var_60 u>= 0x10)
    j__free(var_74)

int32_t eax_11
eax_11.b = *(arg1 + 0x21) != 0
var_94_1:4.d = 0x6e0d38
var_94_1.d = &var_74
int32_t var_4_6 = 3
sub_4bbdd0(&var_7c, sub_4691f0(var_94_1, eax_11))
int32_t var_4_7 = 0xffffffff

if (var_60 u>= 0x10)
    j__free(var_74)

var_94_1:4.d = 0x6e0d5c
var_94_1.d = &var_74
int32_t var_4_8 = 4
sub_4bbdd0(&var_7c, sub_4691f0(var_94_1, *(arg1 + 0x24)))
int32_t var_4_9 = 0xffffffff

if (var_60 u>= 0x10)
    j__free(var_74)

var_94_1:4.d = *(arg1 + 0x30)
var_94_1.d = *(arg1 + 0x2c)
var_9c:4.d = 0x6e0e78
var_9c.d = &var_74
int32_t var_4_10 = 5
sub_4bbdd0(&var_7c, sub_4691f0(var_9c, var_94_1, *(arg1 + 0x34)))
int32_t var_4_11 = 0xffffffff

if (var_60 u>= 0x10)
    j__free(var_74)

var_94_1:4.d = *(arg1 + 0x3c)
var_94_1.d = *(arg1 + 0x38)
var_9c:4.d = 0x6e0e90
var_9c.d = &var_74
int32_t var_4_12 = 6
sub_4bbdd0(&var_7c, sub_4691f0(var_9c, var_94_1, *(arg1 + 0x40)))
int32_t var_4_13 = 0xffffffff

if (var_60 u>= 0x10)
    j__free(var_74)

var_94_1:4.d = 0x6e0e50
var_94_1.d = &var_74
int32_t var_4_14 = 7
sub_4bbdd0(&var_7c, sub_4691f0(var_94_1, *(arg1 + 0x44)))
int32_t var_4_15 = 0xffffffff

if (var_60 u>= 0x10)
    j__free(var_74)

var_94_1 = _mm_cvtps_pd(*(arg1 + 0x4c))
var_9c = _mm_cvtps_pd(*(arg1 + 0x48))
var_9c.d = 0x6e0e64
int32_t var_4_16 = 8
sub_4bbdd0(&var_7c, sub_4691f0(&var_74, 0x6e0e64))
int32_t var_4_17 = 0xffffffff

if (var_60 u>= 0x10)
    j__free(var_74)

var_94_1 = _mm_cvtps_pd(*(arg1 + 0x58))
var_9c = _mm_cvtps_pd(*(arg1 + 0x54))
int32_t* var_a0_1
var_a0_1.q = _mm_cvtps_pd(*(arg1 + 0x50))
int32_t var_a4_1 = 0x6e0ed8
int32_t var_4_18 = 9
sub_4bbdd0(&var_7c, sub_4691f0(&var_74, 0x6e0ed8))
int32_t var_4_19 = 0xffffffff

if (var_60 u>= 0x10)
    j__free(var_74)

int32_t var_8c_28 = *(arg1 + 0x68)
var_94_1:4.d = *(arg1 + 0x64)
var_94_1.d = *(arg1 + 0x60)
var_9c:4.d = *(arg1 + 0x5c)
var_9c.d = 0x6e0eec
int32_t var_4_20 = 0xa
sub_4bbdd0(&var_7c, sub_4691f0(&var_74, 0x6e0eec))
int32_t var_4_21 = 0xffffffff

if (var_60 u>= 0x10)
    j__free(var_74)

int32_t var_8c_31 = *(arg1 + 0x6c)
int32_t var_5c
var_94_1:4.d = &var_5c
int32_t var_8c_32 = sub_4bd060(arg4)
int32_t var_4_22 = 0xb
var_94_1:4.d = &var_74
int32_t* eax_21 = sub_4bbea0()
var_4_22.b = 0xc
var_4_22.b = 0xd
char var_44
sub_4bbdd0(&var_7c, sub_421670(eax_21.b, 0x6e0ea8, &var_44, eax_21))
int32_t var_30

if (var_30 u>= 0x10)
    j__free(var_44.d)

int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44 = 0

if (var_60 u>= 0x10)
    j__free(var_74)

int32_t var_4_23 = 0xffffffff
int32_t var_60_1 = 0xf
int32_t var_64 = 0
var_74.b = 0
int32_t var_48

if (var_48 u>= 0x10)
    j__free(var_5c)

int32_t var_8c_38 = *(arg1 + 0x70)
var_94_1:4.d = &var_5c
int32_t var_8c_39 = sub_4bd060(arg4)
int32_t var_4_24 = 0xe
var_94_1:4.d = &var_44
int32_t* eax_24 = sub_4bbea0()
var_4_24.b = 0xf
var_4_24.b = 0x10
sub_4bbdd0(&var_7c, sub_421670(eax_24.b, 0x6e0ec0, &var_74, eax_24))

if (var_60_1 u>= 0x10)
    j__free(var_74)

int32_t var_60_2 = 0xf
int32_t var_64_1 = 0
var_74.b = 0

if (var_30_1 u>= 0x10)
    j__free(var_44.d)

int32_t var_4_25 = 0xffffffff
int32_t var_30_2 = 0xf
int32_t var_34_1 = 0
var_44 = 0

if (var_48 u>= 0x10)
    j__free(var_5c)

int32_t var_8c_45 = *(arg1 + 0x74)
var_94_1:4.d = &var_5c
int32_t var_8c_46 = sub_4bd060(arg4)
int32_t var_4_26 = 0x11
var_94_1:4.d = &var_44
int32_t* eax_27 = sub_4bbea0()
var_4_26.b = 0x12
var_4_26.b = 0x13
sub_4bbdd0(&var_7c, sub_421670(eax_27.b, 0x6e0dc4, &var_74, eax_27))

if (var_60_2 u>= 0x10)
    j__free(var_74)

int32_t var_60_3 = 0xf
int32_t var_64_2 = 0
var_74.b = 0

if (var_30_2 u>= 0x10)
    j__free(var_44.d)

int32_t var_4_27 = 0xffffffff
int32_t var_30_3 = 0xf
int32_t var_34_2 = 0
var_44 = 0

if (var_48 u>= 0x10)
    j__free(var_5c)

int32_t var_8c_52 = *(arg1 + 0x78)
var_94_1:4.d = &var_5c
int32_t var_8c_53 = sub_4bd060(arg4)
int32_t var_4_28 = 0x14
var_94_1:4.d = &var_44
int32_t* eax_30 = sub_4bbea0()
var_4_28.b = 0x15
var_4_28.b = 0x16
sub_4bbdd0(&var_7c, sub_421670(eax_30.b, 0x6e0ddc, &var_74, eax_30))

if (var_60_3 u>= 0x10)
    j__free(var_74)

int32_t var_60_4 = 0xf
int32_t var_64_3 = 0
var_74.b = 0

if (var_30_3 u>= 0x10)
    j__free(var_44.d)

int32_t var_4_29 = 0xffffffff
int32_t var_30_4 = 0xf
int32_t var_34_3 = 0
var_44 = 0

if (var_48 u>= 0x10)
    j__free(var_5c)

int32_t var_8c_59 = *(arg1 + 0x7c)
var_94_1:4.d = &var_5c
int32_t var_8c_60 = sub_4bd060(arg4)
int32_t var_4_30 = 0x17
var_94_1:4.d = &var_44
int32_t* eax_33 = sub_4bbea0()
var_4_30.b = 0x18
var_4_30.b = 0x19
sub_4bbdd0(&var_7c, sub_421670(eax_33.b, 0x6e0d8c, &var_74, eax_33))

if (var_60_4 u>= 0x10)
    j__free(var_74)

int32_t var_60_5 = 0xf
int32_t var_64_4 = 0
var_74.b = 0

if (var_30_4 u>= 0x10)
    j__free(var_44.d)

int32_t var_4_31 = 0xffffffff
int32_t var_30_5 = 0xf
int32_t var_34_4 = 0
var_44 = 0

if (var_48 u>= 0x10)
    j__free(var_5c)

int32_t var_8c_66 = *(arg1 + 0x80)
var_94_1:4.d = &var_5c
int32_t var_8c_67 = sub_4bd060(arg4)
int32_t var_4_32 = 0x1a
var_94_1:4.d = &var_44
int32_t* eax_36 = sub_4bbea0()
var_4_32.b = 0x1b
var_4_32.b = 0x1c
sub_4bbdd0(&var_7c, sub_421670(eax_36.b, 0x6e0da8, &var_74, eax_36))

if (var_60_5 u>= 0x10)
    j__free(var_74)

int32_t var_60_6 = 0xf
int32_t var_64_5 = 0
var_74.b = 0

if (var_30_5 u>= 0x10)
    j__free(var_44.d)

int32_t var_4_33 = 0xffffffff
int32_t var_30_6 = 0xf
int32_t var_34_5 = 0
var_44 = 0

if (var_48 u>= 0x10)
    j__free(var_5c)

var_94_1:4.d = 0x6e0e1c
var_94_1.d = &var_5c
int32_t var_4_34 = 0x1d
sub_4bbdd0(&var_7c, sub_4691f0(var_94_1, *(arg1 + 0x84)))
int32_t var_4_35 = 0xffffffff

if (var_48 u>= 0x10)
    j__free(var_5c)

int32_t eax_39
eax_39.b = *(arg1 + 0x88) != 0
var_94_1:4.d = 0x6e0e3c
var_94_1.d = &var_5c
int32_t var_4_36 = 0x1e
sub_4bbdd0(&var_7c, sub_4691f0(var_94_1, eax_39))
int32_t var_4_37 = 0xffffffff

if (var_48 u>= 0x10)
    j__free(var_5c)

var_94_1:4.d = 0x6e0df4
var_94_1.d = &var_5c
int32_t var_4_38 = 0x1f
sub_4bbdd0(&var_7c, sub_4691f0(var_94_1, *(arg1 + 0x8c)))
int32_t var_4_39 = 0xffffffff

if (var_48 u>= 0x10)
    j__free(var_5c)

int32_t eax_42
eax_42.b = *(arg1 + 0x410) != 0
var_94_1:4.d = 0x6e0e08
var_94_1.d = &var_5c
int32_t var_4_40 = 0x20
sub_4bbdd0(&var_7c, sub_4691f0(var_94_1, eax_42))
int32_t var_4_41 = 0xffffffff

if (var_48 u>= 0x10)
    j__free(var_5c)

int32_t eax_44
eax_44.b = *(arg1 + 0x411) != 0
var_94_1:4.d = 0x6e0f80
var_94_1.d = &var_5c
int32_t var_4_42 = 0x21
sub_4bbdd0(&var_7c, sub_4691f0(var_94_1, eax_44))
int32_t var_4_43 = 0xffffffff

if (var_48 u>= 0x10)
    j__free(var_5c)

int32_t eax_46
eax_46.b = *(arg1 + 0x412) != 0
var_94_1:4.d = 0x6e0f98
var_94_1.d = &var_5c
int32_t var_4_44 = 0x22
sub_4bbdd0(&var_7c, sub_4691f0(var_94_1, eax_46))
int32_t var_4_45 = 0xffffffff

if (var_48 u>= 0x10)
    j__free(var_5c)

int32_t eax_48
eax_48.b = *(arg1 + 0x413) != 0
var_94_1:4.d = 0x6e0f40
var_94_1.d = &var_5c
int32_t var_4_46 = 0x23
sub_4bbdd0(&var_7c, sub_4691f0(var_94_1, eax_48))
int32_t var_4_47 = 0xffffffff

if (var_48 u>= 0x10)
    j__free(var_5c)

int32_t eax_50
eax_50.b = *(arg1 + 0x42c) != 0
var_94_1:4.d = 0x6e0f60
var_94_1.d = &var_5c
int32_t var_4_48 = 0x24
sub_4bbdd0(&var_7c, sub_4691f0(var_94_1, eax_50))
int32_t var_4_49 = 0xffffffff

if (var_48 u>= 0x10)
    j__free(var_5c)

void** eax_53 = *(arg1 + 0x414) + 0x30

if (eax_53[5] u>= 0x10)
    eax_53 = *eax_53

var_94_1:4.d = 0x6e0fe0
var_94_1.d = &var_5c
int32_t var_4_50 = 0x25
sub_4bbdd0(&var_7c, sub_4691f0(var_94_1, eax_53))
int32_t var_4_51 = 0xffffffff

if (var_48 u>= 0x10)
    j__free(var_5c)

void** eax_56 = *(arg1 + 0x414) + 0x48

if (eax_56[5] u>= 0x10)
    eax_56 = *eax_56

var_94_1:4.d = 0x6e0ffc
var_94_1.d = &var_5c
int32_t var_4_52 = 0x26
sub_4bbdd0(&var_7c, sub_4691f0(var_94_1, eax_56))
int32_t var_4_53 = 0xffffffff

if (var_48 u>= 0x10)
    j__free(var_5c)

var_94_1:4.d = 0x6e0fa8
var_94_1.d = &var_5c
int32_t var_4_54 = 0x27
sub_4bbdd0(&var_7c, sub_4691f0(var_94_1, *(*(arg1 + 0x420) + 4)))
int32_t var_4_55 = 0xffffffff

if (var_48 u>= 0x10)
    j__free(var_5c)

var_94_1:4.d = 0x6e0fc4
var_94_1.d = &var_5c
int32_t var_4_56 = 0x28
sub_4bbdd0(&var_7c, sub_4691f0(var_94_1, *(*(arg1 + 0x420) + 8)))
int32_t var_4_57 = 0xffffffff

if (var_48 u>= 0x10)
    j__free(var_5c)

var_94_1:4.d = 0x6e0f10
int32_t var_2c
var_94_1.d = &var_2c
int32_t var_4_58 = 0x29
sub_4bbdd0(&var_7c, sub_4691f0(var_94_1, *(*(arg1 + 0x420) + 0xc)))
int32_t var_18

if (var_18 u>= 0x10)
    j__free(var_2c)

int32_t* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_7c)
return result
