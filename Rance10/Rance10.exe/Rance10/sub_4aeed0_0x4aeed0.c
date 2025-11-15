// 函数: sub_4aeed0
// 地址: 0x4aeed0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Getffldx@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABAHPADAAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AAVios_base@2@PAH@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_bc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_403490(&var_44, 0x76182c, 6)
int32_t var_8_1 = 0
int32_t* ecx_1 = *(arg2 + 4)
int32_t* eax_3

if (ecx_1 != 0)
    char* edx_1 = &var_44
    
    if (var_30 u>= 0x10)
        edx_1 = var_44.d
    
    eax_3 = (*(*ecx_1 + 0x2c))(edx_1)
else
    eax_3 = nullptr

struct common::CEXArrayReader::VTable* const var_8c = &common::CEXArrayReader::`vftable'
int32_t* var_88 = eax_3
var_8_1.b = 2

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34_1 = 0
var_44 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x761834, 0xa)
var_8_1.b = 3
int32_t* ecx_3 = *(arg2 + 4)
int32_t* eax_7

if (ecx_3 != 0)
    char* edx_2 = &var_2c
    
    if (var_18 u>= 0x10)
        edx_2 = var_2c.d
    
    eax_7 = (*(*ecx_3 + 0x2c))(edx_2)
else
    eax_7 = nullptr

struct common::CEXArrayReader::VTable* const var_94 = &common::CEXArrayReader::`vftable'
int32_t* var_90 = eax_7
var_8_1.b = 5

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
int32_t var_30_2 = 0xf
int32_t var_34_2 = 0
var_44 = 0
sub_403490(&var_44, 0x761810, 0xa)
var_8_1.b = 6
int32_t* ecx_5 = *(arg2 + 4)
int32_t* edi

if (ecx_5 != 0)
    char* edx_3 = &var_44
    
    if (var_30_2 u>= 0x10)
        edx_3 = var_44.d
    
    edi = (*(*ecx_5 + 0x2c))(edx_3)
else
    edi = nullptr

struct common::CEXArrayReader::VTable* const var_9c = &common::CEXArrayReader::`vftable'
int32_t* var_98 = edi
var_8_1.b = 8

if (var_30_2 u>= 0x10)
    sub_403160(var_44.d, var_30_2 + 1, 1)

int32_t var_30_3 = 0xf
int32_t var_34_3 = 0
var_44 = 0
int32_t var_18_2 = 0xf
int32_t var_1c_2 = 0
var_2c = 0
sub_403490(&var_2c, 0x76181c, 0xe)
var_8_1.b = 9
int32_t* ecx_7 = *(arg2 + 4)
int32_t* eax_15

if (ecx_7 != 0)
    char* edx_4 = &var_2c
    
    if (var_18_2 u>= 0x10)
        edx_4 = var_2c.d
    
    eax_15 = (*(*ecx_7 + 0x2c))(edx_4)
else
    eax_15 = nullptr

struct common::CEXArrayReader::VTable* const var_a4 = &common::CEXArrayReader::`vftable'
int32_t* var_a0 = eax_15
var_8_1.b = 0xb

if (var_18_2 u>= 0x10)
    sub_403160(var_2c.d, var_18_2 + 1, 1)

int32_t var_18_3 = 0xf
int32_t var_1c_3 = 0
var_2c = 0
int32_t var_30_4 = 0xf
int32_t var_34_4 = 0
var_44 = 0
sub_403490(&var_44, 0x761864, 0xe)
var_8_1.b = 0xc
int32_t* ecx_9 = *(arg2 + 4)
int32_t* eax_19

if (ecx_9 != 0)
    char* edx_5 = &var_44
    
    if (var_30_4 u>= 0x10)
        edx_5 = var_44.d
    
    eax_19 = (*(*ecx_9 + 0x2c))(edx_5)
else
    eax_19 = nullptr

struct common::CEXArrayReader::VTable* const var_ac = &common::CEXArrayReader::`vftable'
int32_t* var_a8 = eax_19
var_8_1.b = 0xe

if (var_30_4 u>= 0x10)
    sub_403160(var_44.d, var_30_4 + 1, 1)

int32_t var_30_5 = 0xf
int32_t var_34_5 = 0
var_44 = 0
int32_t var_18_4 = 0xf
int32_t var_1c_4 = 0
var_2c = 0
sub_403490(&var_2c, 0x761874, 0xe)
var_8_1.b = 0xf
int32_t* ecx_11 = *(arg2 + 4)
int32_t eax_23

if (ecx_11 != 0)
    char* edx_6 = &var_2c
    
    if (var_18_4 u>= 0x10)
        edx_6 = var_2c.d
    
    eax_23 = (*(*ecx_11 + 8))(edx_6, 0)
else
    eax_23 = 0

*arg1 = eax_23
var_8_1.b = 0xe

if (var_18_4 u>= 0x10)
    sub_403160(var_2c.d, var_18_4 + 1, 1)

int32_t* ecx_12 = eax_3
int32_t eax_27

if (ecx_12 != 0)
    eax_27 = (*(*ecx_12 + 0xc))(0, 0)
    ecx_12 = eax_3
else
    eax_27 = 0

arg1[1] = eax_27
int32_t eax_29

if (ecx_12 != 0)
    eax_29 = (*(*ecx_12 + 0xc))(1, 0)
else
    eax_29 = 0

int32_t* ecx_13 = eax_7
arg1[2] = eax_29
void* eax_31

if (ecx_13 != 0)
    eax_31 = (*(*ecx_13 + 0xc))(0, 0x32)
    ecx_13 = eax_7
else
    eax_31 = ecx_13 + 0x32

arg1[4] = eax_31
void* eax_33

if (ecx_13 != 0)
    eax_33 = (*(*ecx_13 + 0xc))(1, 0x18)
else
    eax_33 = &ecx_13[6]

arg1[5] = eax_33
int32_t eax_35

if (edi != 0)
    eax_35 = (*(*edi + 0xc))(0, 0x7d0)
else
    eax_35 = 0x7d0

arg1[6] = eax_35
int32_t eax_37

if (edi != 0)
    eax_37 = (*(*edi + 0xc))(1, 0x7d0)
else
    eax_37 = 0x7d0

arg1[7] = eax_37
int32_t var_18_5 = 0xf
int32_t var_1c_5 = 0
var_2c = 0
sub_403490(&var_2c, 0x761840, 0xc)
var_8_1.b = 0x10
int32_t* ecx_17 = *(arg2 + 4)
int32_t eax_39

if (ecx_17 != 0)
    char* edx_7 = &var_2c
    
    if (var_18_5 u>= 0x10)
        edx_7 = var_2c.d
    
    eax_39 = (*(*ecx_17 + 8))(edx_7, 0)
else
    eax_39 = 0

var_8_1.b = 0xe
eax_39.b = eax_39 == 1
arg1[8].b = eax_39.b

if (var_18_5 u>= 0x10)
    sub_403160(var_2c.d, var_18_5 + 1, 1)

int32_t var_18_6 = 0xf
int32_t var_1c_6 = 0
var_2c = 0
sub_403490(&var_2c, 0x761850, 0x12)
var_8_1.b = 0x11
int32_t* ecx_19 = *(arg2 + 4)
int32_t eax_43

if (ecx_19 != 0)
    char* edx_8 = &var_2c
    
    if (var_18_6 u>= 0x10)
        edx_8 = var_2c.d
    
    eax_43 = (*(*ecx_19 + 8))(edx_8, 0)
else
    eax_43 = 0

arg1[9] = eax_43
var_8_1.b = 0xe

if (var_18_6 u>= 0x10)
    sub_403160(var_2c.d, var_18_6 + 1, 1)

int32_t var_48 = 0xf
int32_t var_4c = 0
char var_5c = 0
sub_403490(&var_5c, 0x75cf0b, nullptr)
var_8_1.b = 0x12
int32_t var_18_7 = 0xf
int32_t var_1c_7 = 0
var_2c = 0
sub_403490(&var_2c, 0x761948, 8)
var_8_1.b = 0x13
char var_74[0x10]
int32_t* ecx_23 = sub_403cd0(arg2, &var_74, &var_2c, &var_5c)

if (&arg1[0xa] != ecx_23)
    if (arg1[0xf] u>= 0x10)
        sub_403160(arg1[0xa], arg1[0xf] + 1, 1)
    
    arg1[0xf] = 0xf
    bool cond:9_1 = arg1[0xf] u< 0x10
    arg1[0xe] = 0
    void* eax_50
    
    if (cond:9_1)
        eax_50 = &arg1[0xa]
    else
        eax_50 = arg1[0xa]
    
    *eax_50 = 0
    sub_4056a0(&arg1[0xa], ecx_23)

int32_t var_60

if (var_60 u>= 0x10)
    sub_403160(var_74[0].d, var_60 + 1, 1)

int32_t var_60_1 = 0xf
int32_t var_64 = 0
var_74[0] = 0

if (var_18_7 u>= 0x10)
    sub_403160(var_2c.d, var_18_7 + 1, 1)

var_8_1.b = 0xe
int32_t var_18_8 = 0xf
int32_t var_1c_8 = 0
var_2c = 0

if (var_48 u>= 0x10)
    sub_403160(var_5c.d, var_48 + 1, 1)

int32_t var_48_1 = 0xf
int32_t var_4c_1 = 0
var_5c = 0
sub_403490(&var_5c, 0x75cf0a, nullptr)
var_8_1.b = 0x15
int32_t var_18_9 = 0xf
int32_t var_1c_9 = 0
var_2c = 0
sub_403490(&var_2c, 0x76193c, 8)
var_8_1.b = 0x16
char* ecx_28 = sub_403cd0(arg2, &var_74, &var_2c, &var_5c)

if (&arg1[0x10] != ecx_28)
    if (arg1[0x15] u>= 0x10)
        sub_403160(arg1[0x10], arg1[0x15] + 1, 1)
    
    arg1[0x15] = 0xf
    bool cond:10_1 = arg1[0x15] u< 0x10
    arg1[0x14] = 0
    char* eax_60
    
    if (cond:10_1)
        eax_60 = &arg1[0x10]
    else
        eax_60 = arg1[0x10]
    
    *eax_60 = 0
    sub_4056a0(&arg1[0x10], ecx_28)

if (var_60_1 u>= 0x10)
    sub_403160(var_74[0].d, var_60_1 + 1, 1)

int32_t var_60_2 = 0xf
int32_t var_64_1 = 0
var_74[0] = 0

if (var_18_9 u>= 0x10)
    sub_403160(var_2c.d, var_18_9 + 1, 1)

var_8_1.b = 0xe
int32_t var_18_10 = 0xf
int32_t var_1c_10 = 0
var_2c = 0

if (var_48_1 u>= 0x10)
    sub_403160(var_5c.d, var_48_1 + 1, 1)

int32_t ecx_30 = arg1[0x16]

if (eax_15 != 0)
    ecx_30 = (*(*eax_15 + 0xc))(0, ecx_30)

arg1[0x16] = ecx_30
int32_t ecx_32 = arg1[0x17]

if (eax_15 != 0)
    ecx_32 = (*(*eax_15 + 0xc))(1, ecx_32)

arg1[0x17] = ecx_32
int32_t ecx_34 = arg1[0x18]

if (eax_15 != 0)
    ecx_34 = (*(*eax_15 + 0xc))(2, ecx_34)

arg1[0x18] = ecx_34
int32_t ecx_36 = arg1[0x19]

if (eax_19 != 0)
    ecx_36 = (*(*eax_19 + 0xc))(0, ecx_36)

arg1[0x19] = ecx_36
int32_t ecx_38 = arg1[0x1a]

if (eax_19 != 0)
    ecx_38 = (*(*eax_19 + 0xc))(1, ecx_38)

arg1[0x1a] = ecx_38
int32_t ecx_40 = arg1[0x1b]

if (eax_19 != 0)
    ecx_40 = (*(*eax_19 + 0xc))(2, ecx_40)

arg1[0x1b] = ecx_40
int32_t var_18_11 = 0xf
int32_t var_1c_11 = 0
var_2c = 0
sub_403490(&var_2c, 0x761968, 0xa)
var_8_1.b = 0x18
int32_t* ecx_43 = *(arg2 + 4)
int32_t eax_79

if (ecx_43 != 0)
    char* edx_9 = &var_2c
    
    if (var_18_11 u>= 0x10)
        edx_9 = var_2c.d
    
    eax_79 = (*(*ecx_43 + 8))(edx_9, 0)
else
    eax_79 = 0

var_8_1.b = 0xe
eax_79.b = eax_79 == 1
arg1[0x1c].b = eax_79.b

if (var_18_11 u>= 0x10)
    sub_403160(var_2c.d, var_18_11 + 1, 1)

int32_t var_18_12 = 0xf
int32_t var_1c_12 = 0
var_2c = 0
sub_403490(&var_2c, 0x761974, 0x10)
var_8_1.b = 0x19
int32_t* ecx_45 = *(arg2 + 4)
int32_t eax_83

if (ecx_45 != 0)
    char* edx_10 = &var_2c
    
    if (var_18_12 u>= 0x10)
        edx_10 = var_2c.d
    
    eax_83 = (*(*ecx_45 + 8))(edx_10, 0)
else
    eax_83 = 0

arg1[3] = eax_83
var_8_1.b = 0xe

if (var_18_12 u>= 0x10)
    sub_403160(var_2c.d, var_18_12 + 1, 1)

int32_t var_18_13 = 0xf
int32_t var_1c_13 = 0
var_2c = 0
sub_403490(&var_2c, 0x761954, 0x10)
var_8_1.b = 0x1a
int32_t* ecx_47 = *(arg2 + 4)
void* eax_87

if (ecx_47 != 0)
    char* edx_11 = &var_2c
    
    if (var_18_13 u>= 0x10)
        edx_11 = var_2c.d
    
    eax_87 = (*(*ecx_47 + 8))(edx_11, 1)
else
    eax_87 = ecx_47 + 1

eax_87.b = eax_87 == 1
*(arg1 + 0x71) = eax_87.b

if (var_18_13 u>= 0x10)
    sub_403160(var_2c.d, var_18_13 + 1, 1)

int32_t result
result.b = 1
*(arg1 + 0x72) = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
