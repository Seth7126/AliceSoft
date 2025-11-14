// 函数: sub_51d2d0
// 地址: 0x51d2d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c2bfd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_10c
int32_t eax_2 = __security_cookie ^ &var_10c
int32_t __saved_edi
int32_t var_11c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_ec = ebx
int32_t var_c_1 = 0
int32_t var_e0
void* var_ac
int32_t* ecx_2 =
    sub_410930(sub_410930(sub_518020(arg1), arg3, &var_ac, ."), &var_ac, &var_e0, 0x6e2fc4)
var_c_1.b = 1
int32_t* edx_2 = *(arg2 + 4)
int32_t eax_8

if (edx_2 != 0)
    if (ecx_2[5] u>= 0x10)
        ecx_2 = *ecx_2
    
    eax_8 = (*(*edx_2 + 0x44))(ecx_2)
else
    eax_8 = 0

eax_8.b = eax_8 == 1

if (*(ebx + 0xc8) != eax_8.b)
    *(ebx + 0xc8) = eax_8.b
    eax_8 = sub_519640(ebx)
    *(ebx + 0xd8) = 1

var_c_1.b = 0
int32_t var_cc

if (var_cc u>= 0x10)
    eax_8 = j__free(var_e0)

int32_t* ecx_6 = sub_410930(eax_8, &var_ac, &var_e0, 0x6e2fd4)
var_c_1.b = 2
int32_t* edx_4 = *(arg2 + 4)
int32_t eax_11

if (edx_4 != 0)
    if (ecx_6[5] u>= 0x10)
        ecx_6 = *ecx_6
    
    eax_11 = (*(*edx_4 + 0x44))(ecx_6)
else
    eax_11 = 0

var_c_1.b = 0
*(ebx + 0xd0) = eax_11

if (var_cc u>= 0x10)
    eax_11 = j__free(var_e0)

int32_t* ecx_9 = sub_410930(eax_11, &var_ac, &var_e0, 0x6e2fec)
var_c_1.b = 3
int32_t* edx_6 = *(arg2 + 4)
int32_t eax_14

if (edx_6 != 0)
    if (ecx_9[5] u>= 0x10)
        ecx_9 = *ecx_9
    
    eax_14 = (*(*edx_6 + 0x44))(ecx_9)
else
    eax_14 = 0

var_c_1.b = 0
*(ebx + 0xd4) = eax_14

if (var_cc u>= 0x10)
    eax_14 = j__free(var_e0)

int32_t* eax_16 = sub_410930(eax_14, &var_ac, &var_e0, 0x6e2f70)
int32_t* esi_1 = eax_16
var_c_1.b = 4
char var_c8
int32_t* eax_17 = sub_410930(eax_16, &var_ac, &var_c8, 0x6e2f84)
var_c_1.b = 5
char var_7c
int32_t* eax_18 = sub_410930(eax_17, &var_ac, &var_7c, 0x6e2f98)
var_c_1.b = 6
char var_94
int32_t* eax_19 = sub_410930(eax_18, &var_ac, &var_94, 0x6e2fac)
var_c_1.b = 7
int32_t* ecx_15 = *(arg2 + 4)
int32_t* var_104

if (ecx_15 != 0)
    if (esi_1[5] u>= 0x10)
        esi_1 = *esi_1
    
    var_104 = (*(*ecx_15 + 0x50))(esi_1, 3)
else
    var_104 = ecx_15

int32_t* edx_11 = *(arg2 + 4)
int32_t* var_100

if (edx_11 != 0)
    int32_t* ecx_16 = eax_17
    
    if (ecx_16[5] u>= 0x10)
        ecx_16 = *ecx_16
    
    var_100 = (*(*edx_11 + 0x50))(ecx_16, 2)
else
    var_100 = edx_11

int32_t* edx_12 = *(arg2 + 4)
int32_t esi_2

if (edx_12 != 0)
    int32_t* ecx_18 = eax_18
    
    if (ecx_18[5] u>= 0x10)
        ecx_18 = *ecx_18
    
    esi_2 = (*(*edx_12 + 0x50))(ecx_18, 1)
else
    esi_2 = 0

int32_t* ecx_20 = *(arg2 + 4)
int32_t eax_26

if (ecx_20 != 0)
    int32_t* edx_13 = eax_19
    
    if (edx_13[5] u>= 0x10)
        edx_13 = *edx_13
    
    eax_26 = (*(*ecx_20 + 0x50))(edx_13, 0)
else
    eax_26 = 0

void* eax_28 = sub_51bb30(ebx, eax_26, esi_2, var_100, var_104)
int32_t var_80

if (var_80 u>= 0x10)
    eax_28 = j__free(var_94.d)

int32_t var_80_1 = 0xf
int32_t var_84 = 0
var_94 = 0
int32_t var_68

if (var_68 u>= 0x10)
    eax_28 = j__free(var_7c.d)

int32_t var_68_1 = 0xf
int32_t var_6c = 0
var_7c = 0
int32_t var_b4

if (var_b4 u>= 0x10)
    eax_28 = j__free(var_c8.d)

var_c_1.b = 0
int32_t var_b4_1 = 0xf
int32_t var_b8 = 0
var_c8 = 0

if (var_cc u>= 0x10)
    eax_28 = j__free(var_e0)

var_c_1.b = 8
char* eax_30 = sub_401c90(arg2, &var_c8, sub_410930(eax_28, &var_ac, &var_e0, 0x6e2f34))

if (ebx + 0xdc != eax_30)
    if (*(ebx + 0xf0) u>= 0x10)
        j__free(*(ebx + 0xdc))
    
    *(ebx + 0xf0) = 0xf
    *(ebx + 0xec) = 0
    *(ebx + 0xdc) = 0
    eax_30 = sub_4030b0(ebx + 0xdc, eax_30)

if (var_b4_1 u>= 0x10)
    eax_30 = j__free(var_c8.d)

var_c_1.b = 0
int32_t* var_b4_2 = 0xf
int32_t var_b8_1 = 0
var_c8 = 0

if (var_cc u>= 0x10)
    eax_30 = j__free(var_e0)

int32_t* ecx_26 = sub_410930(eax_30, &var_ac, &var_e0, 0x6e2f40)
var_c_1.b = 9
int32_t* edx_16 = *(arg2 + 4)
int32_t eax_32

if (edx_16 != 0)
    if (ecx_26[5] u>= 0x10)
        ecx_26 = *ecx_26
    
    eax_32 = (*(*edx_16 + 0x44))(ecx_26)
else
    eax_32 = 0

var_c_1.b = 0
eax_32.b = eax_32 == 1
*(ebx + 0xf4) = eax_32.b

if (var_cc u>= 0x10)
    eax_32 = j__free(var_e0)

int32_t* ecx_29 = sub_410930(eax_32, &var_ac, &var_e0, 0x6e2f50)
var_c_1.b = 0xa
int32_t* edx_18 = *(arg2 + 4)
int32_t eax_35

if (edx_18 != 0)
    if (ecx_29[5] u>= 0x10)
        ecx_29 = *ecx_29
    
    eax_35 = (*(*edx_18 + 0x44))(ecx_29)
else
    eax_35 = 0

var_c_1.b = 0
eax_35.b = eax_35 == 1
*(ebx + 0xf5) = eax_35.b

if (var_cc u>= 0x10)
    j__free(var_e0)

int32_t* eax_38 = sub_410930(sub_51c520(ebx), &var_ac, &var_e0, 0x6e2f64)
int32_t* ecx_33 = eax_38
var_c_1.b = 0xb
int32_t* edx_20 = *(arg2 + 4)
int32_t* var_104_1

if (edx_20 != 0)
    if (ecx_33[5] u>= 0x10)
        ecx_33 = *ecx_33
    
    eax_38 = (*(*edx_20 + 0x94))(ecx_33)
    var_104_1 = eax_38
else
    var_104_1 = edx_20

var_c_1.b = 0

if (var_cc u>= 0x10)
    eax_38 = j__free(var_e0)

int32_t esi_4 = 0
int32_t var_f8_1 = 0
int32_t var_64
int32_t var_50

if (var_104_1 s> 0)
    eax_38 = ebx + 0x88
    int32_t* var_f0_1 = eax_38
    
    do
        int32_t* eax_40 = sub_410930(eax_38, &var_ac, &var_c8, 0x6e2f14)
        var_c_1.b = 0xc
        
        if (eax_40[5] u>= 0x10)
            eax_40 = *eax_40
        
        int32_t var_120_23 = esi_4
        int32_t eax_41 = sub_4691f0(&var_94, eax_40)
        var_c_1.b = 0xe
        
        if (var_b4_2 u>= 0x10)
            eax_41 = j__free(var_c8.d)
        
        int32_t var_b4_3 = 0xf
        int32_t var_b8_2 = 0
        var_c8 = 0
        int32_t* eax_42 = sub_410930(eax_41, &var_94, &var_64, 0x6e2f28)
        int32_t* esi_5 = eax_42
        var_c_1.b = 0xf
        int32_t* eax_43 = sub_410930(eax_42, &var_94, &var_e0, 0x6e2f2c)
        int32_t* ebx_1 = eax_43
        var_c_1.b = 0x10
        char var_34
        int32_t* eax_44 = sub_410930(eax_43, &var_94, &var_34, 0x6e2f30)
        var_c_1.b = 0x11
        char var_4c
        int32_t* eax_45 = sub_410930(eax_44, &var_94, &var_4c, 0x6e2ffc)
        var_c_1.b = 0x12
        int32_t* eax_46 = sub_410930(eax_45, &var_94, &var_7c, 0x6e3004)
        var_c_1.b = 0x13
        int32_t* ecx_41 = *(arg2 + 4)
        int32_t* var_f4_1
        
        if (ecx_41 != 0)
            if (esi_5[5] u>= 0x10)
                esi_5 = *esi_5
            
            var_f4_1 = (*(*ecx_41 + 0x50))(esi_5, 2)
        else
            var_f4_1 = ecx_41
        
        int32_t* ecx_42 = *(arg2 + 4)
        int32_t* var_100_1
        
        if (ecx_42 != 0)
            if (ebx_1[5] u>= 0x10)
                ebx_1 = *ebx_1
            
            var_100_1 = (*(*ecx_42 + 0x50))(ebx_1, 1)
        else
            var_100_1 = ecx_42
        
        int32_t* ecx_43 = *(arg2 + 4)
        int32_t ebx_2
        
        if (ecx_43 != 0)
            int32_t* edx_27 = eax_44
            
            if (edx_27[5] u>= 0x10)
                edx_27 = *edx_27
            
            ebx_2 = (*(*ecx_43 + 0x50))(edx_27, 0)
        else
            ebx_2 = 0
        
        int32_t* ecx_44 = *(arg2 + 4)
        int32_t esi_6
        
        if (ecx_44 != 0)
            int32_t* edx_28 = eax_45
            
            if (edx_28[5] u>= 0x10)
                edx_28 = *edx_28
            
            esi_6 = (*(*ecx_44 + 0x44))(edx_28)
        else
            esi_6 = 0
        
        int32_t* ecx_45 = *(arg2 + 4)
        int32_t eax_55
        
        if (ecx_45 != 0)
            int32_t* edx_29 = eax_46
            
            if (edx_29[5] u>= 0x10)
                edx_29 = *edx_29
            
            eax_55 = (*(*ecx_45 + 0x44))(edx_29)
        else
            eax_55 = 0
        
        int32_t var_c4_1 = eax_55
        var_c8.d = &partsengine::CTextHighlightModel::`vftable'
        int32_t var_bc_1 = eax_55 - 1 + esi_6
        var_b4_2 = var_100_1
        int32_t var_c0_1 = esi_6
        int32_t var_b8_3 = ebx_2
        int32_t* var_b0_1 = var_f4_1
        var_c_1.b = 0x14
        eax_38 = sub_5178c0(var_f0_1, &var_c8)
        ebx = var_ec
        *(ebx + 0xd8) = 1
        
        if (var_68_1 u>= 0x10)
            eax_38 = j__free(var_7c.d)
        
        var_68_1 = 0xf
        int32_t var_6c_1 = 0
        var_7c = 0
        int32_t var_38
        
        if (var_38 u>= 0x10)
            eax_38 = j__free(var_4c.d)
        
        var_38 = 0xf
        int32_t var_3c_1 = 0
        var_4c = 0
        int32_t var_20
        
        if (var_20 u>= 0x10)
            eax_38 = j__free(var_34.d)
        
        var_20 = 0xf
        int32_t var_24_1 = 0
        var_34 = 0
        
        if (var_cc u>= 0x10)
            eax_38 = j__free(var_e0)
        
        var_cc = 0xf
        int32_t var_d0_1 = 0
        var_e0.b = 0
        
        if (var_50 u>= 0x10)
            eax_38 = j__free(var_64)
        
        var_c_1.b = 0
        
        if (var_80_1 u>= 0x10)
            eax_38 = j__free(var_94.d)
        
        esi_4 = var_f8_1 + 1
        var_f8_1 = esi_4
    while (esi_4 s< var_104_1)

var_c_1.b = 0x15
var_c_1.b = 0
int32_t result
result.b = sub_514f70(ebx + 8, arg2, sub_410930(eax_38, &var_ac, &var_64, 0x6e3010)).b == 0
char var_105 = result.b

if (var_50 u>= 0x10)
    j__free(var_64)
    result.b = var_105

if (result.b != 0)
    ebx.b = 0
else
    var_c_1.b = 0x16
    var_c_1.b = 0
    result.b = sub_514f70(ebx + 0x48, arg2, sub_410930(result, &var_ac, &var_64, 0x6e3020)).b == 0
    char var_105_1 = result.b
    
    if (var_50 u>= 0x10)
        j__free(var_64)
        result.b = var_105_1
    
    if (result.b != 0)
        ebx.b = 0
    else
        sub_519640(ebx)
        *(ebx + 0xd8) = 1
        ebx.b = 1

int32_t var_98

if (var_98 u>= 0x10)
    j__free(var_ac)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_10c)
return result
