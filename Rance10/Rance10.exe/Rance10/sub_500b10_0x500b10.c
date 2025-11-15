// 函数: sub_500b10
// 地址: 0x500b10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Iput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AAVios_base@2@DPADI@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_403490(&var_44, 0x765cb8, 6)
int32_t var_8_1 = 0
int32_t* ecx_1 = *(arg3 + 4)
int32_t* esi

if (ecx_1 != 0)
    char* edx_1 = &var_44
    
    if (var_30 u>= 0x10)
        edx_1 = var_44.d
    
    esi = (*(*ecx_1 + 0x2c))(edx_1)
else
    esi = nullptr

struct common::CEXArrayReader::VTable* const var_98 = &common::CEXArrayReader::`vftable'
int32_t* var_94 = esi
var_8_1.b = 2

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34_1 = 0
var_44 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x765cdc, 8)
var_8_1.b = 3
int32_t* ecx_3 = *(arg3 + 4)
int32_t* eax_7

if (ecx_3 != 0)
    char* edx_2 = &var_2c
    
    if (var_18 u>= 0x10)
        edx_2 = var_2c.d
    
    eax_7 = (*(*ecx_3 + 0x2c))(edx_2)
else
    eax_7 = nullptr

struct common::CEXArrayReader::VTable* const var_a0 = &common::CEXArrayReader::`vftable'
int32_t* var_9c = eax_7
var_8_1.b = 5

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
int32_t var_30_2 = 0xf
int32_t var_34_2 = 0
var_44 = 0
sub_403490(&var_44, 0x765cd0, 0xa)
var_8_1.b = 6
int32_t* ecx_5 = *(arg3 + 4)
int32_t* eax_11

if (ecx_5 != 0)
    char* edx_3 = &var_44
    
    if (var_30_2 u>= 0x10)
        edx_3 = var_44.d
    
    eax_11 = (*(*ecx_5 + 0x2c))(edx_3)
else
    eax_11 = nullptr

struct common::CEXArrayReader::VTable* const var_a8 = &common::CEXArrayReader::`vftable'
int32_t* var_a4 = eax_11
var_8_1.b = 8

if (var_30_2 u>= 0x10)
    sub_403160(var_44.d, var_30_2 + 1, 1)

int32_t var_30_3 = 0xf
int32_t var_34_3 = 0
var_44 = 0
int32_t var_18_2 = 0xf
int32_t var_1c_2 = 0
var_2c = 0
sub_403490(&var_2c, 0x765c98, 0x10)
var_8_1.b = 9
int32_t* ecx_7 = *(arg3 + 4)
int32_t* eax_15

if (ecx_7 != 0)
    char* edx_4 = &var_2c
    
    if (var_18_2 u>= 0x10)
        edx_4 = var_2c.d
    
    eax_15 = (*(*ecx_7 + 0x2c))(edx_4)
else
    eax_15 = nullptr

struct common::CEXArrayReader::VTable* const var_b0 = &common::CEXArrayReader::`vftable'
int32_t* var_ac = eax_15
var_8_1.b = 0xb

if (var_18_2 u>= 0x10)
    sub_403160(var_2c.d, var_18_2 + 1, 1)

int32_t var_18_3 = 0xf
int32_t var_1c_3 = 0
var_2c = 0
int32_t var_48 = 0xf
int32_t var_4c = 0
char var_5c = 0
sub_403490(&var_5c, 0x765c8c, 0xa)
var_8_1.b = 0xc
int32_t* ecx_9 = *(arg3 + 4)
int32_t* eax_19

if (ecx_9 != 0)
    char* edx_5 = &var_5c
    
    if (var_48 u>= 0x10)
        edx_5 = var_5c.d
    
    eax_19 = (*(*ecx_9 + 0x2c))(edx_5)
else
    eax_19 = nullptr

struct common::CEXArrayReader::VTable* const var_90 = &common::CEXArrayReader::`vftable'
int32_t* var_8c = eax_19
var_8_1.b = 0xe

if (var_48 u>= 0x10)
    sub_403160(var_5c.d, var_48 + 1, 1)

int32_t var_48_1 = 0xf
int32_t var_4c_1 = 0
var_5c = 0
int32_t eax_23

if (esi != 0)
    eax_23 = (*(*esi + 0xc))(0, 0)
else
    eax_23 = 0

*(arg1 + 0x4c) = eax_23
int32_t eax_25

if (esi != 0)
    eax_25 = (*(*esi + 0xc))(1, 0)
else
    eax_25 = 0

*(arg1 + 0x54) = eax_25
int32_t var_18_4 = 0xf
int32_t var_1c_4 = 0
var_2c = 0
sub_403490(&var_2c, 0x765cac, 8)
var_8_1.b = 0xf
int32_t* ecx_13 = *(arg3 + 4)
int32_t eax_27

if (ecx_13 != 0)
    char* edx_6 = &var_2c
    
    if (var_18_4 u>= 0x10)
        edx_6 = var_2c.d
    
    eax_27 = (*(*ecx_13 + 8))(edx_6, 0)
else
    eax_27 = 0

*(arg1 + 0x50) = eax_27
var_8_1.b = 0xe

if (var_18_4 u>= 0x10)
    sub_403160(var_2c.d, var_18_4 + 1, 1)

int32_t eax_31

if (eax_7 != 0)
    eax_31 = (*(*eax_7 + 0xc))(0, 0)
else
    eax_31 = 0

*(arg1 + 0x58) = eax_31
int32_t eax_33

if (eax_7 != 0)
    eax_33 = (*(*eax_7 + 0xc))(1, 0)
else
    eax_33 = 0

*(arg1 + 0x5c) = eax_33
int32_t var_30_4 = 0xf
int32_t var_34_4 = 0
var_44 = 0
sub_403490(&var_44, 0x75d213, nullptr)
var_8_1.b = 0x10
int32_t var_18_5 = 0xf
int32_t var_1c_5 = 0
var_2c = 0
sub_403490(&var_2c, 0x765c64, 6)
var_8_1.b = 0x11
char var_74[0x10]
char* ecx_19 = sub_403cd0(arg3, &var_74, &var_2c, &var_44)

if (arg1 + 0x60 != ecx_19)
    if (*(arg1 + 0x74) u>= 0x10)
        sub_403160(*(arg1 + 0x60), *(arg1 + 0x74) + 1, 1)
    
    *(arg1 + 0x74) = 0xf
    bool cond:6_1 = *(arg1 + 0x74) u< 0x10
    *(arg1 + 0x70) = 0
    char* eax_38
    
    if (cond:6_1)
        eax_38 = arg1 + 0x60
    else
        eax_38 = *(arg1 + 0x60)
    
    *eax_38 = 0
    sub_4056a0(arg1 + 0x60, ecx_19)

int32_t var_60

if (var_60 u>= 0x10)
    sub_403160(var_74[0].d, var_60 + 1, 1)

int32_t var_60_1 = 0xf
int32_t var_64 = 0
var_74[0] = 0

if (var_18_5 u>= 0x10)
    sub_403160(var_2c.d, var_18_5 + 1, 1)

var_8_1.b = 0xe
int32_t var_18_6 = 0xf
int32_t var_1c_6 = 0
var_2c = 0

if (var_30_4 u>= 0x10)
    sub_403160(var_44.d, var_30_4 + 1, 1)

int32_t var_18_7 = 0xf
int32_t var_1c_7 = 0
var_2c = 0
sub_403490(&var_2c, 0x765c54, 0xe)
var_8_1.b = 0x13
int32_t* ecx_22 = *(arg3 + 4)
int32_t eax_45

if (ecx_22 != 0)
    char* edx_7 = &var_2c
    
    if (var_18_7 u>= 0x10)
        edx_7 = var_2c.d
    
    eax_45 = (*(*ecx_22 + 8))(edx_7, 0)
else
    eax_45 = 0

*(arg1 + 0x78) = eax_45
var_8_1.b = 0xe

if (var_18_7 u>= 0x10)
    sub_403160(var_2c.d, var_18_7 + 1, 1)

int32_t var_18_8 = 0xf
int32_t var_1c_8 = 0
var_2c = 0
sub_403490(&var_2c, 0x765c7c, 0xe)
var_8_1.b = 0x14
int32_t* ecx_24 = *(arg3 + 4)
int32_t eax_49

if (ecx_24 != 0)
    char* edx_8 = &var_2c
    
    if (var_18_8 u>= 0x10)
        edx_8 = var_2c.d
    
    eax_49 = (*(*ecx_24 + 8))(edx_8, 0)
else
    eax_49 = 0

*(arg1 + 0x80) = eax_49
var_8_1.b = 0xe

if (var_18_8 u>= 0x10)
    sub_403160(var_2c.d, var_18_8 + 1, 1)

int32_t var_18_9 = 0xf
int32_t var_1c_9 = 0
var_2c = 0
sub_403490(&var_2c, 0x765c6c, 0xe)
var_8_1.b = 0x15
int32_t* ecx_26 = *(arg3 + 4)
int32_t eax_53

if (ecx_26 != 0)
    char* edx_9 = &var_2c
    
    if (var_18_9 u>= 0x10)
        edx_9 = var_2c.d
    
    eax_53 = (*(*ecx_26 + 8))(edx_9, 0)
else
    eax_53 = 0

*(arg1 + 0x84) = eax_53
var_8_1.b = 0xe

if (var_18_9 u>= 0x10)
    sub_403160(var_2c.d, var_18_9 + 1, 1)

int32_t var_7c_2
int32_t var_78_1
int32_t edx_10

if (eax_11 != 0)
    var_7c_2 = (*(*eax_11 + 0xc))(2, 0)
    var_78_1 = (*(*eax_11 + 0xc))(1, 0)
    edx_10 = (*(*eax_11 + 0xc))(0, 0)
else
    edx_10 = 0
    var_7c_2 = 0
    var_78_1 = 0

int32_t esi_4 = 0xff

if (edx_10 != zx.d(edx_10.b))
    int32_t eax_61 = 0xff
    
    if (edx_10 s< 0)
        eax_61 = 0
    
    edx_10 = eax_61

int32_t ecx_31 = var_78_1

if (ecx_31 != zx.d(ecx_31.b))
    int32_t eax_63 = 0xff
    
    if (ecx_31 s< 0)
        eax_63 = 0
    
    ecx_31 = eax_63

int32_t var_38 = ecx_31
int32_t ecx_32 = var_7c_2

if (ecx_32 != zx.d(ecx_32.b))
    int32_t eax_65 = 0xff
    
    if (ecx_32 s< 0)
        eax_65 = 0
    
    ecx_32 = eax_65

int32_t var_34_5 = ecx_32
int32_t var_30_5 = 0xff
*(arg1 + 0x88) = edx_10.o
int32_t var_18_10 = 0xf
int32_t var_1c_10 = 0
var_2c = 0
sub_403490(&var_2c, 0x765c24, 0xc)
var_8_1.b = 0x16
int32_t* ecx_34 = *(arg3 + 4)
int32_t xmm0_1

if (ecx_34 != 0)
    char* edx_13 = &var_2c
    
    if (var_18_10 u>= 0x10)
        edx_13 = var_2c.d
    
    int32_t* var_c8_8 = ecx_34
    (*(*ecx_34 + 0xc))(edx_13, 0)
    xmm0_1 = fconvert.s(arg2)
else
    xmm0_1 = (zx.o(0)).d

var_8_1.b = 0xe
*(arg1 + 0x98) = xmm0_1

if (var_18_10 u>= 0x10)
    sub_403160(var_2c.d, var_18_10 + 1, 1)

int32_t var_18_11 = 0xf
int32_t var_1c_11 = 0
var_2c = 0
sub_403490(&var_2c, 0x765c14, 0xe)
var_8_1.b = 0x17
int32_t* ecx_36 = *(arg3 + 4)
int32_t xmm0_2

if (ecx_36 != 0)
    char* edx_14 = &var_2c
    
    if (var_18_11 u>= 0x10)
        edx_14 = var_2c.d
    
    int32_t* var_c8_9 = ecx_36
    (*(*ecx_36 + 0xc))(edx_14, 0)
    int32_t var_78_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x74], st0})
    unimplemented  {fstp dword [ebp-0x74], st0}
    xmm0_2 = var_78_3
else
    xmm0_2 = (zx.o(0)).d

var_8_1.b = 0xe
*(arg1 + 0x9c) = xmm0_2

if (var_18_11 u>= 0x10)
    sub_403160(var_2c.d, var_18_11 + 1, 1)

int32_t var_7c_3
int32_t var_78_4
int32_t edx_15

if (eax_15 != 0)
    var_7c_3 = (*(*eax_15 + 0xc))(2, 0)
    var_78_4 = (*(*eax_15 + 0xc))(1, 0)
    edx_15 = (*(*eax_15 + 0xc))(0, 0)
else
    edx_15 = 0
    var_7c_3 = 0
    var_78_4 = 0

if (edx_15 != zx.d(edx_15.b))
    int32_t eax_79 = 0xff
    
    if (edx_15 s< 0)
        eax_79 = 0
    
    edx_15 = eax_79

int32_t ecx_41 = var_78_4

if (ecx_41 != zx.d(ecx_41.b))
    int32_t eax_81 = 0xff
    
    if (ecx_41 s< 0)
        eax_81 = 0
    
    ecx_41 = eax_81

int32_t var_38_1 = ecx_41
int32_t ecx_42 = var_7c_3

if (ecx_42 != zx.d(ecx_42.b))
    if (ecx_42 s< 0)
        esi_4 = 0
    
    ecx_42 = esi_4

int32_t var_34_6 = ecx_42
int32_t var_30_6 = 0xff
*(arg1 + 0xa0) = edx_15.o
int32_t var_18_12 = 0xf
int32_t var_1c_12 = 0
var_2c = 0
sub_403490(&var_2c, 0x765c40, 0x10)
var_8_1.b = 0x18
int32_t* ecx_44 = *(arg3 + 4)
int32_t eax_83

if (ecx_44 != 0)
    char* edx_18 = &var_2c
    
    if (var_18_12 u>= 0x10)
        edx_18 = var_2c.d
    
    eax_83 = (*(*ecx_44 + 8))(edx_18, 0)
else
    eax_83 = 0

*(arg1 + 0xbc) = eax_83
var_8_1.b = 0xe

if (var_18_12 u>= 0x10)
    sub_403160(var_2c.d, var_18_12 + 1, 1)

int32_t var_18_13 = 0xf
int32_t var_1c_13 = 0
var_2c = 0
sub_403490(&var_2c, 0x765c34, 8)
var_8_1.b = 0x19
int32_t* ecx_46 = *(arg3 + 4)
int32_t eax_87

if (ecx_46 != 0)
    char* edx_19 = &var_2c
    
    if (var_18_13 u>= 0x10)
        edx_19 = var_2c.d
    
    eax_87 = (*(*ecx_46 + 8))(edx_19, 0)
else
    eax_87 = 0

*(arg1 + 0xc0) = eax_87
var_8_1.b = 0xe

if (var_18_13 u>= 0x10)
    sub_403160(var_2c.d, var_18_13 + 1, 1)

int32_t var_80_1
int32_t esi_5

if (eax_19 != 0)
    int32_t eax_92 = (*(*eax_19 + 8))(eax_2)
    esi_5 = eax_92
    var_80_1 = eax_92
else
    esi_5 = 0
    var_80_1 = 0

sub_416ab0(arg1 + 0xb0, esi_5)
int32_t edi_1 = 0

if (esi_5 s<= 0)
    *(arg1 + 0xc4) = 1
else
    int32_t ebx_1 = 0
    
    do
        int32_t var_18_14 = 0xf
        int32_t var_1c_14 = 0
        var_2c = 0
        sub_403490(&var_2c, 0x75d216, nullptr)
        var_8_1.b = 0x1a
        char* ecx_51 = sub_403230(&var_90, &var_74, edi_1, &var_2c)
        char* esi_7 = *(arg1 + 0xb0) + ebx_1
        
        if (esi_7 != ecx_51)
            if (*(esi_7 + 0x14) u>= 0x10)
                sub_403160(*esi_7, *(esi_7 + 0x14) + 1, 1)
            
            *(esi_7 + 0x14) = 0xf
            bool cond:14_1 = *(esi_7 + 0x14) u< 0x10
            *(esi_7 + 0x10) = 0
            char* eax_98
            
            if (cond:14_1)
                eax_98 = esi_7
            else
                eax_98 = *esi_7
            
            *eax_98 = 0
            sub_4056a0(esi_7, ecx_51)
        
        if (var_60_1 u>= 0x10)
            sub_403160(var_74[0].d, var_60_1 + 1, 1)
        
        var_8_1.b = 0xe
        var_60_1 = 0xf
        int32_t var_64_1 = 0
        var_74[0] = 0
        
        if (var_18_14 u>= 0x10)
            sub_403160(var_2c.d, var_18_14 + 1, 1)
        
        edi_1 += 1
        ebx_1 += 0x18
    while (edi_1 s< var_80_1)
    
    *(arg1 + 0xc4) = 1

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
