// 函数: sub_654990
// 地址: 0x654990
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cf0f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_464
int32_t eax_2 = __security_cookie ^ &var_464
int32_t __saved_edi
int32_t var_478 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_438 = 0
int32_t var_408 = 0xf
int32_t var_40c = 0
char var_41c = 0
sub_402110(&var_41c, 0x6da81b, nullptr)
int32_t var_4 = 0

switch (arg1[1])
    case 0
        sub_402670(&var_41c, 0x700c30)
    case 1
        sub_402670(&var_41c, 0x700c28)
    case 2
        sub_402670(&var_41c, 0x700bf0)
    case 3
        sub_402670(&var_41c, 0x700be8)
    case 4
        sub_402670(&var_41c, 0x700c00)
    case 5
        sub_402670(&var_41c, 0x700bf8)
    case 6
        sub_402670(&var_41c, 0x700c10)
    case 7
        sub_402670(&var_41c, 0x700c08)
    case 8
        sub_402670(&var_41c, 0x700c20)
    case 9
        sub_402670(&var_41c, 0x700c18)
    case 0xb
        sub_402670(&var_41c, "CG")
    case 0xc
        sub_402670(&var_41c, 0x700bb0)
    case 0xd
        sub_402670(&var_41c, 0x700bc0)
    case 0xe
        sub_402670(&var_41c, &data_700bbc)
    case 0xf
        sub_402670(&var_41c, 0x700bd0)
    case 0x10
        sub_402670(&var_41c, 0x700bc8)
    case 0x11
        sub_402670(&var_41c, 0x700bdc)
    case 0x12
        sub_402670(&var_41c, 0x700bd4)
    case 0x13
        sub_402670(&var_41c, 0x700ca0)
    case 0x14
        sub_402670(&var_41c, 0x700c98)
    case 0x15
        sub_402670(&var_41c, "3D")
    case 0x16
        sub_402670(&var_41c, 0x700ca8)
    default
        sub_402110(&var_41c, 0x700cb8, 3)

int32_t var_3c0 = 0xf
int32_t var_3c4 = 0
char var_3d4 = 0
sub_402110(&var_3d4, 0x6da851, nullptr)
var_4.b = 1
int32_t eax_7 = arg1[0x10]

if (eax_7 u> 3)
    sub_402110(&var_3d4, 0x700c74, 3)
else
    switch (eax_7)
        case 0
            sub_402670(&var_3d4, 0x700cc4)
        case 1
            sub_402670(&var_3d4, 0x700cbc)
        case 2
            sub_402670(&var_3d4, 0x700c6c)
        case 3
            sub_402670(&var_3d4, 0x700c64)

int32_t var_3f0 = 0xf
int32_t var_3f4 = 0
char var_404 = 0
sub_402110(&var_404, 0x6da84b, nullptr)
var_4.b = 2
int32_t eax_9 = arg1[0x12] - 1

if (eax_9 u> 8)
    sub_402110(&var_404, 0x700c58, 3)
else
    switch (eax_9)
        case 0
            sub_402670(&var_404, 0x700c80)
        case 1
            sub_402670(&var_404, 0x700c78)
        case 2
            sub_402670(&var_404, 0x700c90)
        case 3
            sub_402670(&var_404, 0x700c88)
        case 4
            sub_402670(&var_404, 0x700c40)
        case 5
            sub_402670(&var_404, 0x700c38)
        case 6
            sub_402670(&var_404, 0x700c50)
        case 7
            sub_402670(&var_404, 0x700c48)
        case 8
            sub_402670(&var_404, 0x700c5c)

float xmm6 = arg1[0x23]
int32_t ebp = int.d(xmm6)
var_464 = 0x64
int32_t var_3d8 = 0xf
int32_t var_3dc = 0
char var_3ec = 0
float xmm5 = arg1[0x24]
float xmm4 = arg1[0x25]
int32_t ebx = int.d(xmm5)
int32_t edi = int.d(xmm4)
float xmm3 = arg1[0x26]
int32_t esi_1 = int.d(xmm3)
float xmm0_1 = _mm_cvtepi32_ps(zx.o(ebp))
float xmm2 = arg1[0x27]
int32_t ecx_41 = int.d(xmm2)
int32_t temp1_4 = mods.dp.d(sx.q(ecx_41), var_464)
float xmm5_1 = xmm5 - _mm_cvtepi32_ps(zx.o(ebx))
float xmm4_1 = xmm4 - _mm_cvtepi32_ps(zx.o(edi))
float xmm3_1 = xmm3 - _mm_cvtepi32_ps(zx.o(esi_1))
var_464 = int.d(xmm5_1 * 10000f)
int32_t eax_23 = int.d((xmm2 - _mm_cvtepi32_ps(zx.o(ecx_41))) * 10000f)
sub_402110(&var_3ec, 0x6da84a, nullptr)
var_4.b = 3
int32_t var_3a8 = 0xf
int32_t var_3ac = 0
char var_3bc = 0
sub_402110(&var_3bc, 0x6da843, nullptr)
var_4.b = 4
int32_t var_390 = 0xf
int32_t var_394 = 0
char var_3a4 = 0
sub_402110(&var_3a4, 0x6da825, nullptr)
var_4.b = 5
int32_t var_378 = 0xf
int32_t var_37c = 0
char var_38c = 0
sub_402110(&var_38c, 0x6da81f, nullptr)
var_4.b = 6
int32_t var_210 = 0xf
int32_t var_214 = 0
char var_224 = 0
sub_402110(&var_224, 0x6da827, nullptr)
var_4.b = 7
int32_t var_240 = 0xf
int32_t var_244 = 0
char var_254 = 0
sub_402110(&var_254, 0x6da826, nullptr)
var_4.b = 8
int32_t var_270 = 0xf
int32_t var_274 = 0
char var_284 = 0
sub_402110(&var_284, 0x6da835, nullptr)
var_4.b = 9
int32_t var_2a0 = 0xf
int32_t var_2a4 = 0
char var_2b4 = 0
sub_402110(&var_2b4, 0x6da82f, nullptr)
var_4.b = 0xa
int32_t var_2d0 = 0xf
int32_t var_2d4 = 0
char var_2e4 = 0
sub_402110(&var_2e4, 0x6da837, nullptr)
var_4.b = 0xb
int32_t var_300 = 0xf
int32_t var_304 = 0
char var_314 = 0
sub_402110(&var_314, 0x6da836, nullptr)
var_4.b = 0xc
int32_t var_330 = 0xf
int32_t var_334 = 0
char var_344 = 0
sub_402110(&var_344, 0x6da867, nullptr)
var_4.b = 0xd
int32_t var_288 = 0xf
int32_t var_28c = 0
char var_29c = 0
sub_402110(&var_29c, 0x6da866, nullptr)
var_4.b = 0xe
int32_t var_348 = 0xf
int32_t var_34c = 0
char var_35c = 0
sub_402110(&var_35c, 0x6da87e, nullptr)
var_4.b = 0xf
int32_t var_2b8 = 0xf
int32_t var_2bc = 0
char var_2cc = 0
sub_402110(&var_2cc, 0x6da873, nullptr)
var_4.b = 0x10
int32_t var_258 = 0xf
int32_t var_25c = 0
char var_26c = 0
sub_402110(&var_26c, 0x6da88d, nullptr)
var_4.b = 0x11
int32_t var_2e8 = 0xf
int32_t var_2ec = 0
char var_2fc = 0
sub_402110(&var_2fc, 0x6da87f, nullptr)
var_4.b = 0x12
int32_t var_228 = 0xf
int32_t var_22c = 0
char var_23c = 0
sub_402110(&var_23c, 0x6da88f, nullptr)
var_4.b = 0x13
int32_t var_1e0 = 0xf
int32_t var_1e4 = 0
char var_1f4 = 0
sub_402110(&var_1f4, 0x6da88e, nullptr)
var_4.b = 0x14
int32_t var_318 = 0xf
int32_t var_31c = 0
char var_32c = 0
sub_402110(&var_32c, 0x6da853, nullptr)
var_4.b = 0x15
int32_t var_1f8 = 0xf
int32_t var_1fc = 0
char var_20c = 0
sub_402110(&var_20c, 0x6da852, nullptr)
var_4.b = 0x16
int32_t var_360 = 0xf
int32_t var_364 = 0
char var_374 = 0
sub_402110(&var_374, 0x6da85f, nullptr)
var_4.b = 0x17
int32_t var_434
int32_t var_420

if (arg1[0x2a].b != 0)
    int32_t var_47c_1 = *arg1
    int32_t* eax_25 = sub_4691f0(&var_434, " %10d")
    
    if (&var_3ec != eax_25)
        if (var_3d8 u>= 0x10)
            j__free(var_3ec.d)
        
        int32_t var_3d8_1 = 0xf
        int32_t var_3dc_1 = 0
        var_3ec = 0
        sub_4030b0(&var_3ec, eax_25)
    
    if (var_420 u>= 0x10)
        j__free(var_434)

if (*(arg1 + 0xa9) != 0)
    char* eax_26 = &var_41c
    
    if (var_408 u>= 0x10)
        eax_26 = var_41c.d
    
    char* var_47c_5 = eax_26
    int32_t* eax_27 = sub_4691f0(&var_434, 0x700d68)
    
    if (&var_3bc != eax_27)
        if (var_3a8 u>= 0x10)
            j__free(var_3bc.d)
        
        int32_t var_3a8_1 = 0xf
        int32_t var_3ac_1 = 0
        var_3bc = 0
        sub_4030b0(&var_3bc, eax_27)
    
    if (var_420 u>= 0x10)
        j__free(var_434)

if (*(arg1 + 0xaa) != 0)
    int32_t var_47c_9 = arg1[3]
    int32_t var_480_1 = arg1[2]
    int32_t* eax_28 = sub_4691f0(&var_434, "   (%5d,%5d)")
    
    if (&var_3a4 != eax_28)
        if (var_390 u>= 0x10)
            j__free(var_3a4.d)
        
        int32_t var_390_1 = 0xf
        int32_t var_394_1 = 0
        var_3a4 = 0
        sub_4030b0(&var_3a4, eax_28)
    
    if (var_420 u>= 0x10)
        j__free(var_434)

if (*(arg1 + 0xab) != 0)
    int32_t edx_10 = arg1[4]
    int32_t ecx_66 = arg1[5]
    int32_t var_47c_13 = edx_10 * ecx_66
    int32_t var_480_2 = ecx_66
    int32_t var_484_3 = edx_10
    int32_t* eax_31 = sub_4691f0(&var_434, "   [%5d,%5d]%8d")
    
    if (&var_38c != eax_31)
        if (var_378 u>= 0x10)
            j__free(var_38c.d)
        
        int32_t var_378_1 = 0xf
        int32_t var_37c_1 = 0
        var_38c = 0
        sub_4030b0(&var_38c, eax_31)
    
    if (var_420 u>= 0x10)
        j__free(var_434)

if (arg1[0x2b].b != 0)
    int32_t var_47c_17 = arg1[7]
    sub_408340(&var_224, sub_4691f0(&var_434, "     %3d"))
    
    if (var_420 u>= 0x10)
        j__free(var_434)

if (*(arg1 + 0xad) != 0)
    int32_t var_47c_20 = arg1[8]
    sub_408340(&var_254, sub_4691f0(&var_434, " %10d"))
    
    if (var_420 u>= 0x10)
        j__free(var_434)

if (*(arg1 + 0xae) != 0)
    int32_t var_47c_23 = arg1[0xb]
    int32_t var_480_3 = arg1[0xa]
    int32_t var_484_6 = arg1[9]
    sub_408340(&var_284, sub_4691f0(&var_434, "   [%3d,%3d,%3d]"))
    
    if (var_420 u>= 0x10)
        j__free(var_434)

if (*(arg1 + 0xaf) != 0)
    int32_t var_47c_26 = arg1[0xe]
    int32_t var_480_4 = arg1[0xd]
    int32_t var_484_7 = arg1[0xc]
    sub_408340(&var_2b4, sub_4691f0(&var_434, "   [%3d,%3d,%3d]"))
    
    if (var_420 u>= 0x10)
        j__free(var_434)

if (arg1[0x2c].b != 0)
    char* eax_36 = &var_3d4
    
    if (var_3c0 u>= 0x10)
        eax_36 = var_3d4.d
    
    char* var_47c_29 = eax_36
    sub_408340(&var_2e4, sub_4691f0(&var_434, " %5s"))
    
    if (var_420 u>= 0x10)
        j__free(var_434)

if (*(arg1 + 0xb1) != 0)
    int32_t eax_38 = 0x700d40
    
    if (arg1[0x11].b == 0)
        eax_38 = 0x700d3c
    
    int32_t var_47c_32 = eax_38
    sub_408340(&var_314, sub_4691f0(&var_434, " %4s"))
    
    if (var_420 u>= 0x10)
        j__free(var_434)

if (*(arg1 + 0xb2) != 0)
    int32_t eax_40 = 0x700d44
    
    if (*(arg1 + 0x45) == 0)
        eax_40 = 0x700cd4
    
    int32_t var_47c_35 = eax_40
    sub_408340(&var_344, sub_4691f0(&var_434, " %4s"))
    
    if (var_420 u>= 0x10)
        j__free(var_434)

if (*(arg1 + 0xb3) != 0)
    char* eax_42 = &var_404
    
    if (var_3f0 u>= 0x10)
        eax_42 = var_404.d
    
    char* var_47c_38 = eax_42
    sub_408340(&var_29c, sub_4691f0(&var_434, " %4s"))
    
    if (var_420 u>= 0x10)
        j__free(var_434)

if (arg1[0x2d].b != 0)
    int32_t var_47c_41 = arg1[0x13]
    sub_408340(&var_35c, sub_4691f0(&var_434, " %13d"))
    
    if (var_420 u>= 0x10)
        j__free(var_434)

if (*(arg1 + 0xb5) != 0)
    int32_t eax_45 = 0x700cec
    
    if (arg1[0x14].b == 0)
        eax_45 = 0x700ce8
    
    int32_t var_47c_44 = eax_45
    sub_408340(&var_2cc, sub_4691f0(&var_434, " %7s"))
    
    if (var_420 u>= 0x10)
        j__free(var_434)

if (*(arg1 + 0xb6) != 0)
    void* eax_47 = &arg1[0x15]
    
    if (arg1[0x1a] u>= 0x10)
        eax_47 = *eax_47
    
    void* var_47c_47 = eax_47
    sub_408340(&var_26c, sub_4691f0(&var_434, " %11.11s"))
    
    if (var_420 u>= 0x10)
        j__free(var_434)

if (*(arg1 + 0xb7) != 0)
    void* eax_49 = &arg1[0x1b]
    
    if (arg1[0x20] u>= 0x10)
        eax_49 = *eax_49
    
    void* var_47c_50 = eax_49
    sub_408340(&var_2fc, sub_4691f0(&var_434, " %11.11s"))
    
    if (var_420 u>= 0x10)
        j__free(var_434)

if (arg1[0x2e].b != 0)
    int32_t var_47c_53 = arg1[0x21]
    sub_408340(&var_23c, sub_4691f0(&var_434, " %10d"))
    
    if (var_420 u>= 0x10)
        j__free(var_434)

if (*(arg1 + 0xb9) != 0)
    int32_t eax_52 = 0x700eb8
    
    if (arg1[0x22].b == 0)
        eax_52 = 0x700eb4
    
    int32_t var_47c_56 = eax_52
    sub_408340(&var_1f4, sub_4691f0(&var_434, " %9s"))
    
    if (var_420 u>= 0x10)
        j__free(var_434)

if (*(arg1 + 0xba) != 0)
    int32_t var_47c_59 = var_464
    int32_t var_480_5 = mods.dp.d(sx.q(ebx), 0x64)
    int32_t var_484_18 = int.d((xmm6 - xmm0_1) * 10000f)
    int32_t var_488_2 = mods.dp.d(sx.q(ebp), 0x64)
    sub_408340(&var_32c, sub_4691f0(&var_434, "     [%2d.%04d,%2d.%04d]"))
    
    if (var_420 u>= 0x10)
        j__free(var_434)

if (*(arg1 + 0xbb) != 0)
    int32_t var_47c_62 = eax_23
    int32_t var_480_6 = temp1_4
    int32_t var_484_19 = int.d(xmm3_1 * 10000f)
    int32_t var_488_3 = mods.dp.d(sx.q(esi_1), 0x64)
    int32_t var_48c_4 = int.d(xmm4_1 * 10000f)
    int32_t var_490_2 = mods.dp.d(sx.q(edi), 0x64)
    sub_408340(&var_20c, sub_4691f0(&var_434, "     [%4d.%04d,%4d.%04d,%4d.%04d]"))
    
    if (var_420 u>= 0x10)
        j__free(var_434)

if (arg1[0x2f].b != 0)
    int32_t var_47c_65 = arg1[0x28]
    sub_408340(&var_374, sub_4691f0(&var_434, "     %4d"))
    
    if (var_420 u>= 0x10)
        j__free(var_434)

int32_t* eax_58 = sub_40d1c0(&var_3bc, &var_3ec, &var_434, &var_3bc)
var_4.b = 0x18
char var_5c
char* eax_59 = sub_410ad0(eax_58, eax_58, &var_5c, &var_3a4)
var_4.b = 0x19
char var_8c
char* eax_60 = sub_410ad0(eax_59, eax_59, &var_8c, &var_38c)
var_4.b = 0x1a
char var_bc
char* eax_61 = sub_410ad0(eax_60, eax_60, &var_bc, &var_224)
var_4.b = 0x1b
char var_ec
char* eax_62 = sub_410ad0(eax_61, eax_61, &var_ec, &var_254)
var_4.b = 0x1c
char var_11c
char* eax_63 = sub_410ad0(eax_62, eax_62, &var_11c, &var_284)
var_4.b = 0x1d
char var_14c
char* eax_64 = sub_410ad0(eax_63, eax_63, &var_14c, &var_2b4)
var_4.b = 0x1e
char var_17c
char* eax_65 = sub_410ad0(eax_64, eax_64, &var_17c, &var_2e4)
var_4.b = 0x1f
char var_1ac
char* eax_66 = sub_410ad0(eax_65, eax_65, &var_1ac, &var_314)
var_4.b = 0x20
char var_1c4
char* eax_67 = sub_410ad0(eax_66, eax_66, &var_1c4, &var_344)
var_4.b = 0x21
char var_104
char* eax_68 = sub_410ad0(eax_67, eax_67, &var_104, &var_29c)
var_4.b = 0x22
char var_a4
char* eax_69 = sub_410ad0(eax_68, eax_68, &var_a4, &var_35c)
var_4.b = 0x23
char var_134
char* eax_70 = sub_410ad0(eax_69, eax_69, &var_134, &var_2cc)
var_4.b = 0x24
char var_74
char* eax_71 = sub_410ad0(eax_70, eax_70, &var_74, &var_26c)
var_4.b = 0x25
char var_164
char* eax_72 = sub_410ad0(eax_71, eax_71, &var_164, &var_2fc)
var_4.b = 0x26
char var_d4
char* eax_73 = sub_410ad0(eax_72, eax_72, &var_d4, &var_23c)
var_4.b = 0x27
char var_194
char* eax_74 = sub_410ad0(eax_73, eax_73, &var_194, &var_1f4)
var_4.b = 0x28
char var_1dc
char* eax_75 = sub_410ad0(eax_74, eax_74, &var_1dc, &var_32c)
var_4.b = 0x29
char var_2c
char* eax_76 = sub_410ad0(eax_75, eax_75, &var_2c, &var_20c)
var_4.b = 0x2a
char var_44
char* eax_77 = sub_410ad0(eax_76, eax_76, &var_44, &var_374)
var_4.b = 0x2b
char* eax_78 = &data_700e5c

if (arg1[0xf] == 0)
    eax_78 = &data_700e58

sub_410a80(eax_78.b, eax_77, arg2, eax_78)
int32_t var_30

if (var_30 u>= 0x10)
    j__free(var_44.d)

int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44 = 0
int32_t var_18

if (var_18 u>= 0x10)
    j__free(var_2c.d)

int32_t var_18_1 = 0xf
int32_t var_1c = 0
var_2c = 0
int32_t var_1c8

if (var_1c8 u>= 0x10)
    j__free(var_1dc.d)

int32_t var_1c8_1 = 0xf
int32_t var_1cc = 0
var_1dc = 0
int32_t var_180

if (var_180 u>= 0x10)
    j__free(var_194.d)

int32_t var_180_1 = 0xf
int32_t var_184 = 0
var_194 = 0
int32_t var_c0

if (var_c0 u>= 0x10)
    j__free(var_d4.d)

int32_t var_c0_1 = 0xf
int32_t var_c4 = 0
var_d4 = 0
int32_t var_150

if (var_150 u>= 0x10)
    j__free(var_164.d)

int32_t var_150_1 = 0xf
int32_t var_154 = 0
var_164 = 0
int32_t var_60

if (var_60 u>= 0x10)
    j__free(var_74.d)

int32_t var_60_1 = 0xf
int32_t var_64 = 0
var_74 = 0
int32_t var_120

if (var_120 u>= 0x10)
    j__free(var_134.d)

int32_t var_120_1 = 0xf
int32_t var_124 = 0
var_134 = 0
int32_t var_90

if (var_90 u>= 0x10)
    j__free(var_a4.d)

int32_t var_90_1 = 0xf
int32_t var_94 = 0
var_a4 = 0
int32_t var_f0

if (var_f0 u>= 0x10)
    j__free(var_104.d)

int32_t var_f0_1 = 0xf
int32_t var_f4 = 0
var_104 = 0
int32_t var_1b0

if (var_1b0 u>= 0x10)
    j__free(var_1c4.d)

int32_t var_1b0_1 = 0xf
int32_t var_1b4 = 0
var_1c4 = 0
int32_t var_198

if (var_198 u>= 0x10)
    j__free(var_1ac.d)

int32_t var_198_1 = 0xf
int32_t var_19c = 0
var_1ac = 0
int32_t var_168

if (var_168 u>= 0x10)
    j__free(var_17c.d)

int32_t var_168_1 = 0xf
int32_t var_16c = 0
var_17c = 0
int32_t var_138

if (var_138 u>= 0x10)
    j__free(var_14c.d)

int32_t var_138_1 = 0xf
int32_t var_13c = 0
var_14c = 0
int32_t var_108

if (var_108 u>= 0x10)
    j__free(var_11c.d)

int32_t var_108_1 = 0xf
int32_t var_10c = 0
var_11c = 0
int32_t var_d8

if (var_d8 u>= 0x10)
    j__free(var_ec.d)

int32_t var_d8_1 = 0xf
int32_t var_dc = 0
var_ec = 0
int32_t var_a8

if (var_a8 u>= 0x10)
    j__free(var_bc.d)

int32_t var_a8_1 = 0xf
int32_t var_ac = 0
var_bc = 0
int32_t var_78

if (var_78 u>= 0x10)
    j__free(var_8c.d)

int32_t var_78_1 = 0xf
int32_t var_7c = 0
var_8c = 0
int32_t var_48

if (var_48 u>= 0x10)
    j__free(var_5c.d)

int32_t var_48_1 = 0xf
int32_t var_4c = 0
var_5c = 0

if (var_420 u>= 0x10)
    j__free(var_434)

int32_t var_420_1 = 0xf
int32_t var_424 = 0
var_434.b = 0

if (var_360 u>= 0x10)
    int32_t var_47c_90 = var_360 + 1
    sub_402390(var_374.d)

int32_t var_360_1 = 0xf
sub_4022b0(&var_374, 0)
sub_401fb0(&var_20c)
sub_401fb0(&var_32c)
sub_401fb0(&var_1f4)
sub_401fb0(&var_23c)
sub_401fb0(&var_2fc)
sub_401fb0(&var_26c)
sub_401fb0(&var_2cc)
sub_401fb0(&var_35c)
sub_401fb0(&var_29c)
sub_401fb0(&var_344)
sub_401fb0(&var_314)
sub_401fb0(&var_2e4)
sub_401fb0(&var_2b4)
sub_401fb0(&var_284)
sub_401fb0(&var_254)
sub_401fb0(&var_224)
sub_401fb0(&var_38c)
sub_401fb0(&var_3a4)
sub_401fb0(&var_3bc)
sub_401fb0(&var_3ec)
sub_401fb0(&var_404)
sub_401fb0(&var_3d4)
sub_401fb0(&var_41c)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_464)
return arg2
