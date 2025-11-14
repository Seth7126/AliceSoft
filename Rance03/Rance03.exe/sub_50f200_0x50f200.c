// 函数: sub_50f200
// 地址: 0x50f200
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c1d0f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_10c
int32_t eax_2 = __security_cookie ^ &var_10c
int32_t __saved_edi
int32_t var_11c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_c_1 = 0
var_c_1.b = 1
void* var_94
char var_4c
char var_34
char* eax_8 = sub_401c90(arg2, &var_4c, sub_410930(sub_410930(&ExceptionList, arg3, &var_94, ."), 
    &var_94, &var_34, 0x6e275c))
var_c_1.b = 3
int32_t var_20

if (var_20 u>= 0x10)
    eax_8 = j__free(var_34.d)

int32_t var_20_1 = 0xf
int32_t var_24 = 0
var_34 = 0
int32_t var_c4
int32_t* eax_9 = sub_410930(eax_8, &var_94, &var_c4, 0x6e2764)
int32_t* ecx_4 = eax_9
var_c_1.b = 4
int32_t* edx_3 = *(arg2 + 4)
int32_t* edi

if (edx_3 != 0)
    if (ecx_4[5] u>= 0x10)
        ecx_4 = *ecx_4
    
    eax_9 = (*(*edx_3 + 0x44))(ecx_4)
    edi = eax_9
else
    edi = nullptr

var_c_1.b = 3
int32_t var_b0

if (var_b0 u>= 0x10)
    eax_9 = j__free(var_c4)

int32_t var_ac
int32_t var_98
char var_7c
int32_t var_68
int32_t* var_64

if (edi == 0)
    eax_9 = sub_50d170(arg1, &var_4c)
else if (edi == 1)
    int32_t* eax_11 = sub_410930(eax_9, &var_94, &var_c4, 0x6e2864)
    int32_t* ecx_8 = eax_11
    var_c_1.b = 5
    int32_t edx_5 = *(arg2 + 4)
    
    if (edx_5 != 0)
        if (ecx_8[5] u>= 0x10)
            ecx_8 = *ecx_8
        
        eax_11 = (*(*edx_5 + 0x10))(ecx_8)
        var_10c = eax_11
    else
        var_10c = edx_5
    
    if (var_b0 u>= 0x10)
        eax_11 = j__free(var_c4)
    
    var_64 = nullptr
    int32_t var_60_1 = 0
    int32_t var_5c_1 = 0
    int32_t edi_1 = 0
    var_c_1.b = 6
    
    if (var_10c s> 0)
        int32_t esi_1 = var_10c
        
        do
            int32_t* ecx_11 = sub_410930(eax_11, &var_94, &var_c4, 0x6e2870)
            var_c_1.b = 7
            int32_t* edx_7 = *(arg2 + 4)
            int32_t eax_14
            
            if (edx_7 != 0)
                if (ecx_11[5] u>= 0x10)
                    ecx_11 = *ecx_11
                
                eax_14 = (*(*edx_7 + 0x50))(ecx_11, edi_1)
            else
                eax_14 = 0
            
            var_10c = eax_14
            eax_11 = sub_4158d0(&var_64, &var_10c)
            var_c_1.b = 6
            
            if (var_b0 u>= 0x10)
                eax_11 = j__free(var_c4)
            
            edi_1 += 1
        while (edi_1 s< esi_1)
    
    sub_50d240(arg1, &var_4c, &var_64)
    var_c_1.b = 3
    eax_9 = var_64
    
    if (eax_9 != 0)
        eax_9 = j__free(eax_9)
else if (edi == 2)
    var_c_1.b = 8
    struct partsengine::CCharSpriteProperty::VTable* var_f8
    int32_t* ecx_17 = sub_410930(sub_4ff2c0(&var_f8), &var_94, &var_c4, 0x6e287c)
    var_c_1.b = 9
    int32_t* edx_9 = *(arg2 + 4)
    int32_t eax_18
    
    if (edx_9 != 0)
        if (ecx_17[5] u>= 0x10)
            ecx_17 = *ecx_17
        
        eax_18 = (*(*edx_9 + 0x44))(ecx_17)
    else
        eax_18 = 0
    
    var_c_1.b = 8
    int32_t var_f4_1 = eax_18
    
    if (var_b0 u>= 0x10)
        eax_18 = j__free(var_c4)
    
    int32_t* ecx_20 = sub_410930(eax_18, &var_94, &var_c4, 0x6e288c)
    var_c_1.b = 0xa
    int32_t* edx_11 = *(arg2 + 4)
    int32_t eax_21
    
    if (edx_11 != 0)
        if (ecx_20[5] u>= 0x10)
            ecx_20 = *ecx_20
        
        eax_21 = (*(*edx_11 + 0x44))(ecx_20)
    else
        eax_21 = 0
    
    var_c_1.b = 8
    int32_t var_f0_1 = eax_21
    
    if (var_b0 u>= 0x10)
        eax_21 = j__free(var_c4)
    
    int32_t* eax_23 = sub_410930(eax_21, &var_94, &var_ac, 0x6e2830)
    int32_t* edi_2 = eax_23
    var_c_1.b = 0xb
    int32_t* eax_24 = sub_410930(eax_23, &var_94, &var_c4, 0x6e283c)
    var_c_1.b = 0xc
    int32_t* eax_25 = sub_410930(eax_24, &var_94, &var_7c, 0x6e2848)
    var_c_1.b = 0xd
    int32_t ecx_25 = *(arg2 + 4)
    
    if (ecx_25 != 0)
        if (edi_2[5] u>= 0x10)
            edi_2 = *edi_2
        
        var_10c = (*(*ecx_25 + 0x50))(edi_2, 2)
    else
        var_10c = ecx_25
    
    int32_t* edx_15 = *(arg2 + 4)
    int32_t edi_3
    
    if (edx_15 != 0)
        int32_t* ecx_26 = eax_24
        
        if (ecx_26[5] u>= 0x10)
            ecx_26 = *ecx_26
        
        edi_3 = (*(*edx_15 + 0x50))(ecx_26, 1)
    else
        edi_3 = 0
    
    int32_t* ecx_28 = *(arg2 + 4)
    int32_t eax_30
    
    if (ecx_28 != 0)
        int32_t* edx_16 = eax_25
        
        if (edx_16[5] u>= 0x10)
            edx_16 = *edx_16
        
        eax_30, ecx_28 = (*(*ecx_28 + 0x50))(edx_16, 0)
    else
        eax_30 = 0
    
    int32_t* var_120_16 = ecx_28
    int32_t* eax_32 = sub_47f000(&var_64, eax_30, edi_3, var_10c)
    int128_t var_ec_1 = *eax_32
    
    if (var_68 u>= 0x10)
        eax_32 = j__free(var_7c.d)
    
    int32_t var_68_1 = 0xf
    int32_t var_6c_1 = 0
    var_7c = 0
    
    if (var_b0 u>= 0x10)
        eax_32 = j__free(var_c4)
    
    var_c_1.b = 8
    int32_t var_b0_1 = 0xf
    int32_t var_b4_1 = 0
    var_c4.b = 0
    
    if (var_98 u>= 0x10)
        eax_32 = j__free(var_ac)
    
    var_c_1.b = 0xe
    int32_t eax_34
    int32_t xmm0_2
    long double x87_r0
    eax_34, xmm0_2 = sub_401c60(arg2, x87_r0, sub_410930(eax_32, &var_94, &var_ac, 0x6e2854))
    var_c_1.b = 8
    int32_t var_dc_1 = xmm0_2
    
    if (var_98 u>= 0x10)
        eax_34 = j__free(var_ac)
    
    var_c_1.b = 0xf
    int32_t eax_36
    int32_t xmm0_3
    long double x87_r1
    eax_36, xmm0_3 = sub_401c60(arg2, x87_r1, sub_410930(eax_34, &var_94, &var_ac, 0x6e27e4))
    var_c_1.b = 8
    int32_t var_d8_1 = xmm0_3
    
    if (var_98 u>= 0x10)
        eax_36 = j__free(var_ac)
    
    int32_t* eax_37 = sub_410930(eax_36, &var_94, &var_ac, 0x6e27f4)
    int32_t* edi_4 = eax_37
    var_c_1.b = 0x10
    int32_t* eax_38 = sub_410930(eax_37, &var_94, &var_7c, 0x6e2808)
    var_c_1.b = 0x11
    int32_t* eax_39 = sub_410930(eax_38, &var_94, &var_c4, 0x6e281c)
    var_c_1.b = 0x12
    int32_t ecx_37 = *(arg2 + 4)
    
    if (ecx_37 != 0)
        if (edi_4[5] u>= 0x10)
            edi_4 = *edi_4
        
        int32_t eax_41
        eax_41, ecx_37 = (*(*ecx_37 + 0x50))(edi_4, 2)
        var_10c = eax_41
    else
        var_10c = ecx_37
    
    int32_t* edx_22 = *(arg2 + 4)
    int32_t edi_5
    
    if (edx_22 != 0)
        int32_t* ecx_38 = eax_38
        
        if (ecx_38[5] u>= 0x10)
            ecx_38 = *ecx_38
        
        int32_t eax_43
        eax_43, ecx_37 = (*(*edx_22 + 0x50))(ecx_38, 1)
        edi_5 = eax_43
    else
        edi_5 = 0
    
    int32_t* edx_23 = *(arg2 + 4)
    int32_t eax_44
    
    if (edx_23 != 0)
        int32_t* ecx_40 = eax_39
        
        if (ecx_40[5] u>= 0x10)
            ecx_40 = *ecx_40
        
        eax_44, ecx_37 = (*(*edx_23 + 0x50))(ecx_40, 0)
    else
        eax_44 = 0
    
    int32_t var_120_24 = ecx_37
    int128_t var_d4_1 = *sub_47f000(&var_64, eax_44, edi_5, var_10c)
    
    if (var_b0_1 u>= 0x10)
        j__free(var_c4)
    
    var_b0 = 0xf
    int32_t var_b4_2 = 0
    var_c4.b = 0
    
    if (var_68_1 u>= 0x10)
        j__free(var_7c.d)
    
    var_c_1.b = 8
    var_68 = 0xf
    int32_t var_6c_2 = 0
    var_7c = 0
    
    if (var_98 u>= 0x10)
        j__free(var_ac)
    
    int32_t* ecx_45 = sub_410930(sub_50d300(arg1, &var_f8), &var_94, &var_ac, 0x6e27a0)
    var_c_1.b = 0x13
    int32_t* edx_25 = *(arg2 + 4)
    
    if (edx_25 != 0)
        if (ecx_45[5] u>= 0x10)
            ecx_45 = *ecx_45
        
        eax_9 = (*(*edx_25 + 0x44))(ecx_45)
    else
        eax_9 = nullptr
    
    eax_9.b = eax_9 == 1
    
    if (*(arg1 + 0x2ac) != eax_9.b)
        *(arg1 + 0x2ac) = eax_9.b
        eax_9 = sub_50d490(arg1)
    
    if (var_98 u>= 0x10)
        eax_9 = j__free(var_ac)
    
    var_c_1.b = 3

int32_t* eax_50 = sub_410930(eax_9, &var_94, &var_ac, 0x6e27a8)
int32_t* edi_6 = eax_50
var_c_1.b = 0x14
int32_t* eax_51 = sub_410930(eax_50, &var_94, &var_64, 0x6e27bc)
var_c_1.b = 0x15
int32_t* eax_52 = sub_410930(eax_51, &var_94, &var_7c, 0x6e27d0)
int32_t* var_100 = eax_52
var_c_1.b = 0x16
int32_t* var_fc = sub_410930(eax_52, &var_94, &var_c4, 0x6e28b4)
var_c_1.b = 0x17
int32_t* ecx_52 = *(arg2 + 4)
int32_t* var_108_3

if (ecx_52 != 0)
    if (edi_6[5] u>= 0x10)
        edi_6 = *edi_6
    
    var_108_3 = (*(*ecx_52 + 0x50))(edi_6, 3)
else
    var_108_3 = ecx_52

int32_t edx_30 = *(arg2 + 4)

if (edx_30 != 0)
    int32_t* ecx_53 = eax_51
    
    if (ecx_53[5] u>= 0x10)
        ecx_53 = *ecx_53
    
    var_10c = (*(*edx_30 + 0x50))(ecx_53, 2)
else
    var_10c = edx_30

int32_t* ecx_55 = *(arg2 + 4)
int32_t edi_7

if (ecx_55 != 0)
    int32_t* edx_31 = var_100
    
    if (edx_31[5] u>= 0x10)
        edx_31 = *edx_31
    
    edi_7 = (*(*ecx_55 + 0x50))(edx_31, 1)
else
    edi_7 = 0

int32_t* ecx_56 = *(arg2 + 4)
int32_t eax_60

if (ecx_56 != 0)
    int32_t* edx_32 = var_fc
    
    if (edx_32[5] u>= 0x10)
        edx_32 = *edx_32
    
    eax_60 = (*(*ecx_56 + 0x50))(edx_32, 0)
else
    eax_60 = 0

int32_t ecx_57 = var_10c

if (*(arg1 + 0x2e0) != eax_60 || *(arg1 + 0x2e4) != edi_7 || *(arg1 + 0x2e8) != ecx_57
        || *(arg1 + 0x2ec) != var_108_3)
    *(arg1 + 0x2e0) = eax_60
    *(arg1 + 0x2e4) = edi_7
    *(arg1 + 0x2e8) = ecx_57
    *(arg1 + 0x2ec) = var_108_3
    *(arg1 + 0x2f0) = 1

if (var_b0 u>= 0x10)
    eax_60 = j__free(var_c4)

int32_t var_b0_2 = 0xf
int32_t var_b4_3 = 0
var_c4.b = 0

if (var_68 u>= 0x10)
    eax_60 = j__free(var_7c.d)

int32_t var_68_2 = 0xf
int32_t var_6c_3 = 0
var_7c = 0
int32_t var_50

if (var_50 u>= 0x10)
    eax_60 = j__free(var_64)

var_c_1.b = 3
int32_t var_50_1 = 0xf
int32_t var_54 = 0
var_64.b = 0

if (var_98 u>= 0x10)
    eax_60 = j__free(var_ac)

int32_t* ecx_59 = sub_410930(eax_60, &var_94, &var_ac, 0x6e28c8)
var_c_1.b = 0x18
int32_t* edx_35 = *(arg2 + 4)
int32_t eax_63

if (edx_35 != 0)
    if (ecx_59[5] u>= 0x10)
        ecx_59 = *ecx_59
    
    eax_63 = (*(*edx_35 + 0x44))(ecx_59)
else
    eax_63 = 0

*(arg1 + 0x2b0) = eax_63
int32_t eax_65 = sub_50d490(arg1)
var_c_1.b = 3

if (var_98 u>= 0x10)
    eax_65 = j__free(var_ac)

int32_t* ecx_63 = sub_410930(eax_65, &var_94, &var_ac, 0x6e28d0)
var_c_1.b = 0x19
int32_t* edx_37 = *(arg2 + 4)
int32_t eax_67

if (edx_37 != 0)
    if (ecx_63[5] u>= 0x10)
        ecx_63 = *ecx_63
    
    eax_67 = (*(*edx_37 + 0x44))(ecx_63)
else
    eax_67 = 0

eax_67.b = eax_67 == 1

if (*(arg1 + 0x2b4) != eax_67.b)
    *(arg1 + 0x2b4) = eax_67.b
    eax_67 = sub_50d490(arg1)

var_c_1.b = 3

if (var_98 u>= 0x10)
    eax_67 = j__free(var_ac)

int32_t* ecx_67 = sub_410930(eax_67, &var_94, &var_ac, 0x6e28dc)
var_c_1.b = 0x1a
int32_t* edx_39 = *(arg2 + 4)
int32_t eax_70

if (edx_39 != 0)
    if (ecx_67[5] u>= 0x10)
        ecx_67 = *ecx_67
    
    eax_70 = (*(*edx_39 + 0x44))(ecx_67)
else
    eax_70 = 0

if (*(arg1 + 0x2b8) != eax_70)
    *(arg1 + 0x2b8) = eax_70
    eax_70 = sub_50d490(arg1)

var_c_1.b = 3

if (var_98 u>= 0x10)
    eax_70 = j__free(var_ac)

int32_t* eax_72 = sub_410930(eax_70, &var_94, &var_ac, 0x6e289c)
int32_t* ecx_71 = eax_72
var_c_1.b = 0x1b
int32_t* edx_41 = *(arg2 + 4)
int32_t* ecx_72

if (edx_41 != 0)
    if (ecx_71[5] u>= 0x10)
        ecx_71 = *ecx_71
    
    eax_72 = (*(*edx_41 + 0x44))(ecx_71)
    ecx_72 = eax_72
else
    ecx_72 = nullptr

var_fc = ecx_72

if (*(arg1 + 0x2bc) != ecx_72)
    var_100 = nullptr
    int32_t** eax_74 = &var_fc
    
    if (ecx_72 s<= 0)
        eax_74 = &var_100
    
    *(arg1 + 0x2bc) = *eax_74
    eax_72 = sub_50d490(arg1)

var_c_1.b = 3

if (var_98 u>= 0x10)
    eax_72 = j__free(var_ac)

int32_t* ecx_76 = sub_410930(eax_72, &var_94, &var_ac, 0x6e28a4)
var_c_1.b = 0x1c
int32_t* edx_43 = *(arg2 + 4)
int32_t result

if (edx_43 != 0)
    if (ecx_76[5] u>= 0x10)
        ecx_76 = *ecx_76
    
    result = (*(*edx_43 + 0x44))(ecx_76)
else
    result = 0

result.b = result == 1

if (*(arg1 + 0x2c0) != result.b)
    *(arg1 + 0x2c0) = result.b
    *(arg1 + 0x2f0) = 1

if (var_98 u>= 0x10)
    j__free(var_ac)

int32_t var_38

if (var_38 u>= 0x10)
    j__free(var_4c.d)

int32_t var_38_1 = 0xf
int32_t var_3c = 0
var_4c = 0
int32_t var_80

if (var_80 u>= 0x10)
    j__free(var_94)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_10c)
return result
