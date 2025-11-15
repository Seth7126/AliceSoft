// 函数: sub_4fa160
// 地址: 0x4fa160
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73697f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_a8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_ac = 4
char* var_b0 = &data_765834
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
sub_403490(&var_30, var_b0, var_ac)
int32_t var_8_1 = 0
int32_t* ecx_1 = *(arg3 + 4)
int32_t eax_3

if (ecx_1 != 0)
    char* edx_1 = &var_30
    
    if (var_1c u>= 0x10)
        edx_1 = var_30.d
    
    eax_3 = (*(*ecx_1 + 8))(edx_1, 0)
else
    eax_3 = 0

*(arg1 + 0x34) = eax_3
int32_t var_8_2 = 0xffffffff

if (var_1c u>= 0x10)
    sub_403160(var_30.d, var_1c + 1, 1)

void* var_ac_3 = 2
void* const var_b0_3 = &data_7657d0
int32_t var_1c_1 = 0xf
int32_t var_20_1 = 0
var_30 = 0
sub_403490(&var_30, var_b0_3, var_ac_3)
int32_t var_8_3 = 1
int32_t* ecx_3 = *(arg3 + 4)
int32_t eax_7

if (ecx_3 != 0)
    char* edx_2 = &var_30
    
    if (var_1c_1 u>= 0x10)
        edx_2 = var_30.d
    
    eax_7 = (*(*ecx_3 + 8))(edx_2, 0)
else
    eax_7 = 0

*(arg1 + 0x38) = eax_7
int32_t var_8_4 = 0xffffffff

if (var_1c_1 u>= 0x10)
    sub_403160(var_30.d, var_1c_1 + 1, 1)

void* var_ac_6 = 8
void* const var_b0_6 = &data_7657c4
int32_t var_1c_2 = 0xf
int32_t var_20_2 = 0
var_30 = 0
sub_403490(&var_30, var_b0_6, var_ac_6)
int32_t var_8_5 = 2
int32_t* ecx_5 = *(arg3 + 4)
int32_t eax_11

if (ecx_5 != 0)
    char* edx_3 = &var_30
    
    if (var_1c_2 u>= 0x10)
        edx_3 = var_30.d
    
    eax_11 = (*(*ecx_5 + 8))(edx_3, 0)
else
    eax_11 = 0

*(arg1 + 0x3c) = eax_11
int32_t var_8_6 = 0xffffffff

if (var_1c_2 u>= 0x10)
    sub_403160(var_30.d, var_1c_2 + 1, 1)

void* var_ac_9 = 8
void* const var_b0_9 = &data_7657e8
int32_t var_1c_3 = 0xf
int32_t var_20_3 = 0
var_30 = 0
sub_403490(&var_30, var_b0_9, var_ac_9)
int32_t var_8_7 = 3
int32_t* ecx_7 = *(arg3 + 4)
int32_t eax_15

if (ecx_7 != 0)
    char* edx_4 = &var_30
    
    if (var_1c_3 u>= 0x10)
        edx_4 = var_30.d
    
    eax_15 = (*(*ecx_7 + 8))(edx_4, 0)
else
    eax_15 = 0

*(arg1 + 0x40) = eax_15
int32_t var_8_8 = 0xffffffff

if (var_1c_3 u>= 0x10)
    sub_403160(var_30.d, var_1c_3 + 1, 1)

void* var_ac_12 = 0x10
void* const var_b0_12 = &data_7657d4
int32_t var_1c_4 = 0xf
int32_t var_20_4 = 0
var_30 = 0
sub_403490(&var_30, var_b0_12, var_ac_12)
int32_t var_8_9 = 4
int32_t* ecx_9 = *(arg3 + 4)
int32_t eax_19

if (ecx_9 != 0)
    char* edx_5 = &var_30
    
    if (var_1c_4 u>= 0x10)
        edx_5 = var_30.d
    
    eax_19 = (*(*ecx_9 + 8))(edx_5, 0)
else
    eax_19 = 0

*(arg1 + 0x44) = eax_19
int32_t var_8_10 = 0xffffffff

if (var_1c_4 u>= 0x10)
    sub_403160(var_30.d, var_1c_4 + 1, 1)

void* var_ac_15 = 6
void* const var_b0_15 = &data_765790
int32_t var_1c_5 = 0xf
int32_t var_20_5 = 0
var_30 = 0
sub_403490(&var_30, var_b0_15, var_ac_15)
int32_t var_8_11 = 5
int32_t* ecx_11 = *(arg3 + 4)
int32_t eax_23

if (ecx_11 != 0)
    char* edx_6 = &var_30
    
    if (var_1c_5 u>= 0x10)
        edx_6 = var_30.d
    
    eax_23 = (*(*ecx_11 + 8))(edx_6, 0)
else
    eax_23 = 0

*(arg1 + 0x48) = eax_23
int32_t var_8_12 = 0xffffffff

if (var_1c_5 u>= 0x10)
    sub_403160(var_30.d, var_1c_5 + 1, 1)

void* var_ac_18 = 0xe
void* const var_b0_18 = &data_765780
int32_t var_1c_6 = 0xf
int32_t var_20_6 = 0
var_30 = 0
sub_403490(&var_30, var_b0_18, var_ac_18)
int32_t var_8_13 = 6
int32_t* ecx_13 = *(arg3 + 4)
int32_t eax_27

if (ecx_13 != 0)
    char* edx_7 = &var_30
    
    if (var_1c_6 u>= 0x10)
        edx_7 = var_30.d
    
    eax_27 = (*(*ecx_13 + 8))(edx_7, 0)
else
    eax_27 = 0

*(arg1 + 0x4c) = eax_27
int32_t var_8_14 = 0xffffffff

if (var_1c_6 u>= 0x10)
    sub_403160(var_30.d, var_1c_6 + 1, 1)

void* var_ac_21 = 0x10
void* const var_b0_21 = &data_7657b0
int32_t var_1c_7 = 0xf
int32_t var_20_7 = 0
var_30 = 0
sub_403490(&var_30, var_b0_21, var_ac_21)
int32_t var_8_15 = 7
int32_t* ecx_15 = *(arg3 + 4)
int32_t xmm0

if (ecx_15 != 0)
    char* edx_8 = &var_30
    
    if (var_1c_7 u>= 0x10)
        edx_8 = var_30.d
    
    int32_t* var_ac_22 = ecx_15
    (*(*ecx_15 + 0xc))(edx_8, 0)
    xmm0 = fconvert.s(arg2)
else
    xmm0 = (zx.o(0)).d

int32_t var_8_16 = 0xffffffff
*(arg1 + 0x50) = xmm0

if (var_1c_7 u>= 0x10)
    sub_403160(var_30.d, var_1c_7 + 1, 1)

void* var_ac_25 = 0x14
void* const var_b0_24 = &data_765798
int32_t var_1c_8 = 0xf
int32_t var_20_8 = 0
var_30 = 0
sub_403490(&var_30, var_b0_24, var_ac_25)
int32_t var_8_17 = 8
int32_t* ecx_17 = *(arg3 + 4)
int32_t eax_35

if (ecx_17 != 0)
    char* edx_9 = &var_30
    
    if (var_1c_8 u>= 0x10)
        edx_9 = var_30.d
    
    eax_35 = (*(*ecx_17 + 8))(edx_9, 0)
else
    eax_35 = 0

*(arg1 + 0x54) = eax_35
int32_t var_8_18 = 0xffffffff

if (var_1c_8 u>= 0x10)
    sub_403160(var_30.d, var_1c_8 + 1, 1)

void* var_ac_28 = nullptr
void* const var_b0_27 = &data_75d1db
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
sub_403490(&var_48, var_b0_27, var_ac_28)
int32_t var_8_19 = 9
void* var_ac_29 = 6
char* var_b0_28 = &data_765928
int32_t var_1c_9 = 0xf
int32_t var_20_9 = 0
var_30 = 0
sub_403490(&var_30, var_b0_28, var_ac_29)
var_8_19.b = 0xa
char var_60
char* ecx_21 = sub_403cd0(arg3, &var_60, &var_30, &var_48)

if (arg1 + 0x58 != ecx_21)
    if (*(arg1 + 0x6c) u>= 0x10)
        sub_403160(*(arg1 + 0x58), *(arg1 + 0x6c) + 1, 1)
    
    *(arg1 + 0x6c) = 0xf
    bool cond:9_1 = *(arg1 + 0x6c) u< 0x10
    *(arg1 + 0x68) = 0
    void* eax_42
    
    if (cond:9_1)
        eax_42 = arg1 + 0x58
    else
        eax_42 = *(arg1 + 0x58)
    
    *eax_42 = 0
    sub_4056a0(arg1 + 0x58, ecx_21)

int32_t var_4c

if (var_4c u>= 0x10)
    sub_403160(var_60.d, var_4c + 1, 1)

int32_t var_4c_1 = 0xf
int32_t var_50 = 0
var_60 = 0

if (var_1c_9 u>= 0x10)
    sub_403160(var_30.d, var_1c_9 + 1, 1)

int32_t var_8_20 = 0xffffffff
int32_t var_1c_10 = 0xf
int32_t var_20_10 = 0
var_30 = 0

if (var_34 u>= 0x10)
    sub_403160(var_48.d, var_34 + 1, 1)

void* var_ac_36 = nullptr
void* const var_b0_34 = &data_75d1de
int32_t var_34_1 = 0xf
int32_t var_38_1 = 0
var_48 = 0
sub_403490(&var_48, var_b0_34, var_ac_36)
int32_t var_8_21 = 0xc
void* var_ac_37 = 0xe
char* var_b0_35 = &data_765930
int32_t var_1c_11 = 0xf
int32_t var_20_11 = 0
var_30 = 0
sub_403490(&var_30, var_b0_35, var_ac_37)
var_8_21.b = 0xd
char* ecx_26 = sub_403cd0(arg3, &var_60, &var_30, &var_48)

if (arg1 + 0x70 != ecx_26)
    if (*(arg1 + 0x84) u>= 0x10)
        sub_403160(*(arg1 + 0x70), *(arg1 + 0x84) + 1, 1)
    
    *(arg1 + 0x84) = 0xf
    bool cond:10_1 = *(arg1 + 0x84) u< 0x10
    *(arg1 + 0x80) = 0
    void* eax_52
    
    if (cond:10_1)
        eax_52 = arg1 + 0x70
    else
        eax_52 = *(arg1 + 0x70)
    
    *eax_52 = 0
    sub_4056a0(arg1 + 0x70, ecx_26)

if (var_4c_1 u>= 0x10)
    sub_403160(var_60.d, var_4c_1 + 1, 1)

int32_t var_4c_2 = 0xf
int32_t var_50_1 = 0
var_60 = 0

if (var_1c_11 u>= 0x10)
    sub_403160(var_30.d, var_1c_11 + 1, 1)

int32_t var_8_22 = 0xffffffff
int32_t var_1c_12 = 0xf
int32_t var_20_12 = 0
var_30 = 0

if (var_34_1 u>= 0x10)
    sub_403160(var_48.d, var_34_1 + 1, 1)

void* var_ac_44 = nullptr
void* const var_b0_41 = &data_75d1cb
int32_t var_34_2 = 0xf
int32_t var_38_2 = 0
var_48 = 0
sub_403490(&var_48, var_b0_41, var_ac_44)
int32_t var_8_23 = 0xf
void* var_ac_45 = 0xe
char* var_b0_42 = &data_765904
int32_t var_1c_13 = 0xf
int32_t var_20_13 = 0
var_30 = 0
sub_403490(&var_30, var_b0_42, var_ac_45)
var_8_23.b = 0x10
char* ecx_31 = sub_403cd0(arg3, &var_60, &var_30, &var_48)

if (arg1 + 0x88 != ecx_31)
    if (*(arg1 + 0x9c) u>= 0x10)
        sub_403160(*(arg1 + 0x88), *(arg1 + 0x9c) + 1, 1)
    
    *(arg1 + 0x9c) = 0xf
    bool cond:11_1 = *(arg1 + 0x9c) u< 0x10
    *(arg1 + 0x98) = 0
    void* eax_62
    
    if (cond:11_1)
        eax_62 = arg1 + 0x88
    else
        eax_62 = *(arg1 + 0x88)
    
    *eax_62 = 0
    sub_4056a0(arg1 + 0x88, ecx_31)

if (var_4c_2 u>= 0x10)
    sub_403160(var_60.d, var_4c_2 + 1, 1)

int32_t var_4c_3 = 0xf
int32_t var_50_2 = 0
var_60 = 0

if (var_1c_13 u>= 0x10)
    sub_403160(var_30.d, var_1c_13 + 1, 1)

int32_t var_8_24 = 0xffffffff
int32_t var_1c_14 = 0xf
int32_t var_20_14 = 0
var_30 = 0

if (var_34_2 u>= 0x10)
    sub_403160(var_48.d, var_34_2 + 1, 1)

void* var_ac_52 = nullptr
void* const var_b0_48 = &data_75d1d7
int32_t var_34_3 = 0xf
int32_t var_38_3 = 0
var_48 = 0
sub_403490(&var_48, var_b0_48, var_ac_52)
int32_t var_8_25 = 0x12
void* var_ac_53 = 0x10
char* var_b0_49 = &data_765914
int32_t var_1c_15 = 0xf
int32_t var_20_15 = 0
var_30 = 0
sub_403490(&var_30, var_b0_49, var_ac_53)
var_8_25.b = 0x13
char* ecx_36 = sub_403cd0(arg3, &var_60, &var_30, &var_48)

if (arg1 + 0xa0 != ecx_36)
    if (*(arg1 + 0xb4) u>= 0x10)
        sub_403160(*(arg1 + 0xa0), *(arg1 + 0xb4) + 1, 1)
    
    *(arg1 + 0xb4) = 0xf
    bool cond:12_1 = *(arg1 + 0xb4) u< 0x10
    *(arg1 + 0xb0) = 0
    char* eax_72
    
    if (cond:12_1)
        eax_72 = arg1 + 0xa0
    else
        eax_72 = *(arg1 + 0xa0)
    
    *eax_72 = 0
    sub_4056a0(arg1 + 0xa0, ecx_36)

if (var_4c_3 u>= 0x10)
    sub_403160(var_60.d, var_4c_3 + 1, 1)

int32_t var_4c_4 = 0xf
int32_t var_50_3 = 0
var_60 = 0

if (var_1c_15 u>= 0x10)
    sub_403160(var_30.d, var_1c_15 + 1, 1)

int32_t var_8_26 = 0xffffffff
int32_t var_1c_16 = 0xf
int32_t var_20_16 = 0
var_30 = 0

if (var_34_3 u>= 0x10)
    sub_403160(var_48.d, var_34_3 + 1, 1)

void* var_ac_60 = nullptr
void* const var_b0_55 = &data_75d1c7
int32_t var_34_4 = 0xf
int32_t var_38_4 = 0
var_48 = 0
sub_403490(&var_48, var_b0_55, var_ac_60)
int32_t var_8_27 = 0x15
void* var_ac_61 = 0x10
char* var_b0_56 = &data_7658e4
int32_t var_1c_17 = 0xf
int32_t var_20_17 = 0
var_30 = 0
sub_403490(&var_30, var_b0_56, var_ac_61)
var_8_27.b = 0x16
char* ecx_41 = sub_403cd0(arg3, &var_60, &var_30, &var_48)

if (arg1 + 0xb8 != ecx_41)
    if (*(arg1 + 0xcc) u>= 0x10)
        sub_403160(*(arg1 + 0xb8), *(arg1 + 0xcc) + 1, 1)
    
    *(arg1 + 0xcc) = 0xf
    bool cond:13_1 = *(arg1 + 0xcc) u< 0x10
    *(arg1 + 0xc8) = 0
    char* eax_82
    
    if (cond:13_1)
        eax_82 = arg1 + 0xb8
    else
        eax_82 = *(arg1 + 0xb8)
    
    *eax_82 = 0
    sub_4056a0(arg1 + 0xb8, ecx_41)

if (var_4c_4 u>= 0x10)
    sub_403160(var_60.d, var_4c_4 + 1, 1)

int32_t var_4c_5 = 0xf
int32_t var_50_4 = 0
var_60 = 0

if (var_1c_17 u>= 0x10)
    sub_403160(var_30.d, var_1c_17 + 1, 1)

int32_t var_8_28 = 0xffffffff
int32_t var_1c_18 = 0xf
int32_t var_20_18 = 0
var_30 = 0

if (var_34_4 u>= 0x10)
    sub_403160(var_48.d, var_34_4 + 1, 1)

void* var_ac_68 = nullptr
void* const var_b0_62 = &data_75d1ca
int32_t var_34_5 = 0xf
int32_t var_38_5 = 0
var_48 = 0
sub_403490(&var_48, var_b0_62, var_ac_68)
int32_t var_8_29 = 0x18
void* var_ac_69 = 0xa
char* var_b0_63 = &data_7658f8
int32_t var_1c_19 = 0xf
int32_t var_20_19 = 0
var_30 = 0
sub_403490(&var_30, var_b0_63, var_ac_69)
var_8_29.b = 0x19
char* ecx_46 = sub_403cd0(arg3, &var_60, &var_30, &var_48)

if (arg1 + 0xd0 != ecx_46)
    if (*(arg1 + 0xe4) u>= 0x10)
        sub_403160(*(arg1 + 0xd0), *(arg1 + 0xe4) + 1, 1)
    
    *(arg1 + 0xe4) = 0xf
    bool cond:14_1 = *(arg1 + 0xe4) u< 0x10
    *(arg1 + 0xe0) = 0
    char* eax_92
    
    if (cond:14_1)
        eax_92 = arg1 + 0xd0
    else
        eax_92 = *(arg1 + 0xd0)
    
    *eax_92 = 0
    sub_4056a0(arg1 + 0xd0, ecx_46)

if (var_4c_5 u>= 0x10)
    sub_403160(var_60.d, var_4c_5 + 1, 1)

int32_t var_4c_6 = 0xf
int32_t var_50_5 = 0
var_60 = 0

if (var_1c_19 u>= 0x10)
    sub_403160(var_30.d, var_1c_19 + 1, 1)

int32_t var_1c_20 = 0xf
int32_t var_20_20 = 0
var_30 = 0
int32_t var_8_30 = 0xffffffff
sub_403320(&var_48)
sub_403360(&var_48, &data_75d1b6)
int32_t var_8_31 = 0x1b
sub_403360(&var_60, &data_7658bc)
var_8_31.b = 0x1c
sub_409670(arg1 + 0xe8, sub_403cd0(arg3, &var_30, &var_60, &var_48))
sub_403320(&var_30)
sub_403320(&var_60)
int32_t var_8_32 = 0xffffffff
sub_403320(&var_48)
sub_403360(&var_48, &data_75d1b7)
int32_t var_8_33 = 0x1d
sub_403360(&var_60, &data_7658d0)
var_8_33.b = 0x1e
sub_409670(arg1 + 0x100, sub_403cd0(arg3, &var_30, &var_60, &var_48))
sub_403320(&var_30)
sub_403320(&var_60)
int32_t var_8_34 = 0xffffffff
sub_403320(&var_48)
sub_403360(&var_48, &data_75d1f2)
int32_t var_8_35 = 0x1f
sub_403360(&var_60, &data_765970)
var_8_35.b = 0x20
sub_409670(arg1 + 0x118, sub_403cd0(arg3, &var_30, &var_60, &var_48))
sub_403320(&var_30)
sub_403320(&var_60)
int32_t var_8_36 = 0xffffffff
sub_403320(&var_48)
sub_403360(&var_48, &data_75d1f3)
int32_t var_8_37 = 0x21
sub_403360(&var_60, &data_765988)
var_8_37.b = 0x22
sub_409670(arg1 + 0x130, sub_403cd0(arg3, &var_30, &var_60, &var_48))
sub_403320(&var_30)
sub_403320(&var_60)
int32_t var_8_38 = 0xffffffff
sub_403320(&var_48)
sub_403360(&var_48, &data_75d1df)
int32_t var_8_39 = 0x23
sub_403360(&var_60, &data_765940)
var_8_39.b = 0x24
char var_c0
sub_403cd0(arg3, &var_c0, &var_60, &var_48)
*(arg1 + 0x148) = sub_4fae90(arg4, var_c0)
sub_403320(&var_60)
int32_t var_8_40 = 0xffffffff
sub_403320(&var_48)
void var_90
sub_403360(&var_90, &data_75d1ef)
int32_t var_8_41 = 0x25
void var_78
sub_403360(&var_78, &data_76595c)
var_8_41.b = 0x26
sub_403cd0(arg3, &var_c0, &var_78, &var_90)
*(arg1 + 0x14c) = sub_4fae90(arg4)
sub_403320(&var_78)
sub_403320(&var_90)
*(arg1 + 0x150) = 1
char* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
