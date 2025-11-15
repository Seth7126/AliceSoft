// 函数: sub_560580
// 地址: 0x560580
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_74 = 0xffffffff
int32_t (* var_78)(void* arg1) = sub_73b9be
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_70
int32_t eax_2 = __security_cookie ^ &var_70
fsbase->NtTib.ExceptionList = &ExceptionList
sub_55c8a0(arg1)
*(arg1 + 0xf2) = arg3
int32_t var_3c = 0xf
int32_t var_40 = 0
char var_50 = 0
sub_403490(&var_50, 0x767a78, 0x12)
int32_t var_74_1 = 0
int32_t* ecx_1 = *(arg2 + 4)
int32_t* esi

if (ecx_1 != 0)
    char* edx_1 = &var_50
    
    if (var_3c u>= 0x10)
        edx_1 = var_50.d
    
    esi = (*(*ecx_1 + 0x2c))(edx_1)
else
    esi = nullptr

struct common::CEXArrayReader::VTable* const var_a4 = &common::CEXArrayReader::`vftable'
int32_t* var_a0 = esi
var_74_1.b = 2

if (var_3c u>= 0x10)
    sub_403160(var_50.d, var_3c + 1, 1)

int32_t var_3c_1 = 0xf
int32_t var_40_1 = 0
var_50 = 0
char* eax_8
int32_t ecx_2
int32_t edx_2

if (esi != 0)
    char* eax_10 = (*(*esi + 0xc))(3, 0)
    int32_t edx_3 = *esi
    var_70 = eax_10
    int32_t eax_11 = (*(edx_3 + 0xc))(2, 0)
    int32_t eax_12 = (*(*esi + 0xc))(1, 0)
    ecx_2 = eax_11
    esi = (*(*esi + 0xc))(0, 0)
    eax_8 = var_70
    edx_2 = eax_12
else
    eax_8 = nullptr
    ecx_2 = 0
    edx_2 = 0

sub_55f2e0(arg1, esi, edx_2, ecx_2, eax_8)
int32_t var_c = 0xf
int32_t var_10 = 0
char var_20 = 0
sub_403490(&var_20, 0x767a8c, 0xe)
var_74_1.b = 3
int32_t* ecx_9 = *(arg2 + 4)
int32_t eax_14

if (ecx_9 != 0)
    char* edx_6 = &var_20
    
    if (var_c u>= 0x10)
        edx_6 = var_20.d
    
    eax_14 = (*(*ecx_9 + 8))(edx_6, 0)
else
    eax_14 = 0

eax_14.b = eax_14 == 1

if (*(arg1 + 0xc4) != eax_14.b)
    *(arg1 + 0xc4) = eax_14.b
    sub_55d550(arg1)
    *(arg1 + 0xd4) = 1

var_74_1.b = 2

if (var_c u>= 0x10)
    sub_403160(var_20.d, var_c + 1, 1)

int32_t var_c_1 = 0xf
int32_t var_10_1 = 0
var_20 = 0
sub_403490(&var_20, 0x767a9c, 0x14)
var_74_1.b = 4
int32_t* ecx_12 = *(arg2 + 4)
int32_t eax_18

if (ecx_12 != 0)
    char* edx_7 = &var_20
    
    if (var_c_1 u>= 0x10)
        edx_7 = var_20.d
    
    eax_18 = (*(*ecx_12 + 8))(edx_7, 0)
else
    eax_18 = 0

*(arg1 + 0xcc) = eax_18
var_74_1.b = 2

if (var_c_1 u>= 0x10)
    sub_403160(var_20.d, var_c_1 + 1, 1)

int32_t var_c_2 = 0xf
int32_t var_10_2 = 0
var_20 = 0
sub_403490(&var_20, 0x767ab4, 0xc)
var_74_1.b = 5
int32_t* ecx_14 = *(arg2 + 4)
int32_t eax_22

if (ecx_14 != 0)
    char* edx_8 = &var_20
    
    if (var_c_2 u>= 0x10)
        edx_8 = var_20.d
    
    eax_22 = (*(*ecx_14 + 8))(edx_8, 0)
else
    eax_22 = 0

*(arg1 + 0xd0) = eax_22
var_74_1.b = 2

if (var_c_2 u>= 0x10)
    sub_403160(var_20.d, var_c_2 + 1, 1)

int32_t var_24 = 0xf
int32_t var_28 = 0
char var_38 = 0
sub_403490(&var_38, 0x75d481, nullptr)
var_74_1.b = 6
int32_t var_c_3 = 0xf
int32_t var_10_3 = 0
var_20 = 0
sub_403490(&var_20, 0x767ac4, 8)
var_74_1.b = 7
char var_6c
char* ecx_18 = sub_403cd0(arg2, &var_6c, &var_20, &var_38)
void* esi_1 = arg1 + 0xd8
var_70 = ecx_18

if (esi_1 != ecx_18)
    if (*(esi_1 + 0x14) u>= 0x10)
        sub_403160(*esi_1, *(esi_1 + 0x14) + 1, 1)
        ecx_18 = var_70
    
    *(esi_1 + 0x14) = 0xf
    bool cond:4_1 = *(esi_1 + 0x14) u< 0x10
    *(esi_1 + 0x10) = 0
    void* eax_29
    
    if (cond:4_1)
        eax_29 = esi_1
    else
        eax_29 = *esi_1
    
    *eax_29 = 0
    sub_4056a0(esi_1, ecx_18)

int32_t var_58

if (var_58 u>= 0x10)
    sub_403160(var_6c.d, var_58 + 1, 1)

int32_t var_58_1 = 0xf
int32_t var_5c = 0
var_6c = 0

if (var_c_3 u>= 0x10)
    sub_403160(var_20.d, var_c_3 + 1, 1)

var_74_1.b = 2
int32_t var_c_4 = 0xf
int32_t var_10_4 = 0
var_20 = 0

if (var_24 u>= 0x10)
    sub_403160(var_38.d, var_24 + 1, 1)

int32_t var_c_5 = 0xf
int32_t var_10_5 = 0
var_20 = 0
sub_403490(&var_20, 0x767ad0, 0xc)
var_74_1.b = 9
int32_t* ecx_21 = *(arg2 + 4)
int32_t eax_36

if (ecx_21 != 0)
    char* edx_9 = &var_20
    
    if (var_c_5 u>= 0x10)
        edx_9 = var_20.d
    
    eax_36 = (*(*ecx_21 + 8))(edx_9, 0)
else
    eax_36 = 0

var_74_1.b = 2
eax_36.b = eax_36 == 1
*(arg1 + 0xf0) = eax_36.b

if (var_c_5 u>= 0x10)
    sub_403160(var_20.d, var_c_5 + 1, 1)

int32_t var_c_6 = 0xf
int32_t var_10_6 = 0
var_20 = 0
sub_403490(&var_20, 0x7679ac, 0x10)
var_74_1.b = 0xa
int32_t* ecx_23 = *(arg2 + 4)
int32_t eax_40

if (ecx_23 != 0)
    char* edx_10 = &var_20
    
    if (var_c_6 u>= 0x10)
        edx_10 = var_20.d
    
    eax_40 = (*(*ecx_23 + 8))(edx_10, 0)
else
    eax_40 = 0

var_74_1.b = 2
eax_40.b = eax_40 == 1
*(arg1 + 0xf1) = eax_40.b

if (var_c_6 u>= 0x10)
    sub_403160(var_20.d, var_c_6 + 1, 1)

sub_55f850(arg1)
int32_t var_58_2 = 0xf
int32_t var_5c_1 = 0
var_6c = 0
sub_403490(&var_6c, 0x7679c0, 0xa)
var_74_1.b = 0xb
int32_t* ecx_26 = *(arg2 + 4)
int32_t* edi_1

if (ecx_26 != 0)
    char* edx_11 = &var_6c
    
    if (var_58_2 u>= 0x10)
        edx_11 = var_6c.d
    
    edi_1 = (*(*ecx_26 + 0x24))(edx_11)
else
    edi_1 = nullptr

struct common::CEXTreeReader::VTable* const var_9c = &common::CEXTreeReader::`vftable'
var_74_1.b = 0xd

if (var_58_2 u>= 0x10)
    sub_403160(var_6c.d, var_58_2 + 1, 1)

int32_t var_58_3 = 0xf
int32_t var_5c_2 = 0
var_6c = 0

if (edi_1 != 0)
    int32_t eax_49 = (*(*edi_1 + 0x14))(eax_2)
    void* eax_50 = nullptr
    var_70 = nullptr
    
    if (eax_49 s> 0)
        struct common::CEXArrayReader::VTable* const var_b4_1 = &common::CEXArrayReader::`vftable'
        struct common::CEXTreeReader::VTable* const var_ac_1 = &common::CEXTreeReader::`vftable'
        
        do
            char* ecx_30 = sub_403dc0(&var_9c, &var_38, eax_50)
            var_74_1.b = 0xe
            int32_t* esi_2
            
            if (edi_1 != 0)
                if (*(ecx_30 + 0x14) u>= 0x10)
                    ecx_30 = *ecx_30
                
                esi_2 = (*(*edi_1 + 0x24))(ecx_30)
            else
                esi_2 = nullptr
            
            if (var_24 u>= 0x10)
                sub_403160(var_38.d, var_24 + 1, 1)
            
            int32_t var_24_1 = 0xf
            int32_t var_28_1 = 0
            var_38 = 0
            int32_t* var_a8_1 = esi_2
            var_74_1.b = 0xf
            int32_t var_3c_2 = 0xf
            int32_t var_40_2 = 0
            var_50 = 0
            sub_403490(&var_50, 0x7679cc, 2)
            var_74_1.b = 0x10
            int32_t* edi_2
            
            if (esi_2 != 0)
                char* ecx_35 = &var_50
                
                if (var_3c_2 u>= 0x10)
                    ecx_35 = var_50.d
                
                edi_2 = (*(*esi_2 + 0x2c))(ecx_35)
            else
                edi_2 = nullptr
            
            int32_t* var_b0_1 = edi_2
            var_74_1.b = 0x12
            
            if (var_3c_2 u>= 0x10)
                sub_403160(var_50.d, var_3c_2 + 1, 1)
            
            int32_t var_3c_3 = 0xf
            int32_t var_40_3 = 0
            var_50 = 0
            var_24 = 0xf
            int32_t var_28_2 = 0
            var_38 = 0
            sub_403490(&var_38, 0x7679d0, 6)
            var_74_1.b = 0x13
            int32_t var_c_7 = 0xf
            int32_t var_10_7 = 0
            var_20 = 0
            sub_403490(&var_20, 0x7679d8, 8)
            var_74_1.b = 0x14
            int32_t* var_90_1
            int32_t* var_84_2
            int32_t* var_80_2
            
            if (edi_2 != 0)
                var_84_2 = (*(*edi_2 + 0xc))(2, 0)
                var_80_2 = (*(*edi_2 + 0xc))(1, 0)
                var_90_1 = (*(*edi_2 + 0xc))(0, 0)
            else
                var_84_2 = edi_2
                var_80_2 = edi_2
                var_90_1 = edi_2
            
            int32_t eax_62
            int32_t edi_3
            
            if (esi_2 != 0)
                char* ecx_42 = &var_38
                
                if (var_24 u>= 0x10)
                    ecx_42 = var_38.d
                
                char* ecx_44 = &var_20
                edi_3 = (*(*esi_2 + 8))(ecx_42, 0)
                
                if (var_c_7 u>= 0x10)
                    ecx_44 = var_20.d
                
                eax_62 = (*(*esi_2 + 8))(ecx_44, 0)
            else
                edi_3 = 0
                eax_62 = 0
            
            var_50.d = eax_62
            struct partsengine::CTextHighlightModel::VTable* const var_54 =
                &partsengine::CTextHighlightModel::`vftable'
            int32_t var_48_1 = eax_62 - 1 + edi_3
            int32_t* var_44_1 = var_90_1
            int32_t* var_40_4 = var_80_2
            int32_t var_4c_1 = edi_3
            int32_t* var_3c_4 = var_84_2
            var_74_1.b = 0x15
            sub_55be10(arg1 + 0x88, &var_54)
            *(arg1 + 0xd4) = 1
            
            if (var_c_7 u>= 0x10)
                sub_403160(var_20.d, var_c_7 + 1, 1)
            
            int32_t var_c_8 = 0xf
            int32_t var_10_8 = 0
            var_20 = 0
            
            if (var_24 u>= 0x10)
                sub_403160(var_38.d, var_24 + 1, 1)
            
            eax_50 = &var_70[1]
            var_74_1.b = 0xd
            var_70 = eax_50
        while (eax_50 s< eax_49)
        
        esi_1 = arg1 + 0xd8

int32_t var_24_2 = 0xf
int32_t var_28_3 = 0
var_38 = 0
sub_403490(&var_38, 0x7679e4, 0xc)
var_74_1.b = 0x16
int32_t* ecx_48 = *(arg2 + 4)
int32_t eax_75

if (ecx_48 != 0)
    char* edx_16 = &var_38
    
    if (var_24_2 u>= 0x10)
        edx_16 = var_38.d
    
    eax_75 = (*(*ecx_48 + 0x24))(edx_16)
else
    eax_75 = 0

struct common::CEXTreeReader::VTable* const var_8c = &common::CEXTreeReader::`vftable'
int32_t var_88_1 = eax_75
var_74_1.b = 0x17
long double x87_r0
sub_5591e0(arg1 + 8, x87_r0, &var_8c)
var_74_1.b = 0xd

if (var_24_2 u>= 0x10)
    sub_403160(var_38.d, var_24_2 + 1, 1)

int32_t var_24_3 = 0xf
int32_t var_28_4 = 0
var_38 = 0
sub_403490(&var_38, 0x7679f4, 8)
var_74_1.b = 0x18
int32_t* ecx_51 = *(arg2 + 4)
int32_t eax_79

if (ecx_51 != 0)
    char* edx_17 = &var_38
    
    if (var_24_3 u>= 0x10)
        edx_17 = var_38.d
    
    eax_79 = (*(*ecx_51 + 0x24))(edx_17)
else
    eax_79 = 0

var_8c = &common::CEXTreeReader::`vftable'
int32_t var_88_2 = eax_79
var_74_1.b = 0x19
long double x87_r1
sub_5591e0(arg1 + 0x48, x87_r1, &var_8c)
var_74_1.b = 0xd

if (var_24_3 u>= 0x10)
    sub_403160(var_38.d, var_24_3 + 1, 1)

int32_t var_24_4 = 0xf
int32_t var_28_5 = 0
var_38 = 0
sub_403590(&var_38, esi_1, 0, 0xffffffff)
var_74_1.b = 0x1a
bool cond:12 = *(esi_1 + 0x14) u< 0x10
*(esi_1 + 0x10) = 0

if (not(cond:12))
    esi_1 = *esi_1

*esi_1 = 0
sub_55d600(arg1, &var_38)

if (var_24_4 u>= 0x10)
    sub_403160(var_38.d, var_24_4 + 1, 1)

int32_t result
result.b = 1
*(arg1 + 0xd4) = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_70)
return result
