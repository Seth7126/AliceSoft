// 函数: sub_4a2fa0
// 地址: 0x4a2fa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7311c6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char var_44
char* eax_3 = sub_4a3b30(arg1, &var_44)
int32_t var_8_1 = 0
int32_t* var_74
sub_4176f0(eax_3.b, eax_3, &var_74, "\Snapshot")
var_8_1.b = 2
int32_t var_30

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44 = 0
void var_c4
__time64(&var_c4)
void* var_e8_2 = &var_c4
void var_bc
void* var_ec_2 = &var_bc
sub_703d21()
int32_t var_a8
int32_t var_c8 = var_a8 + 0x76c
__time64(&var_c4)
void* var_e8_3 = &var_c4
int32_t var_98
int32_t* var_ec_3 = &var_98
sub_703d21()
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, "Snapshot_%04d", 0x2b)
var_8_1.b = 3
int32_t var_b0
int32_t var_ac
int32_t var_94
int32_t var_90
int32_t* var_5c
sub_4a3f80(&var_c8, &var_2c, &var_5c, &var_c8, var_ac + 1, var_b0, var_90, var_94, var_98)
var_8_1.b = 5

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
struct win32only::CSaveFileDlg::VTable* const var_d0 = &win32only::CSaveFileDlg::`vftable'
int32_t* eax_11 = sub_6e810c(0x764)
int32_t* var_c0 = eax_11
int32_t* param0 = sub_6ce620(eax_11)
int32_t* param0_1 = param0
var_8_1.b = 6
int32_t var_30_2 = 0xf
int32_t var_34_1 = 0
var_44 = 0
sub_403490(&var_44, "*.asd", 5)
var_8_1.b = 7
int32_t var_18_2 = 0xf
int32_t var_1c_2 = 0
var_2c = 0
sub_403490(&var_2c, 0x7613d4, 0x16)
sub_6ce4c0(param0, &var_2c, &var_44)

if (var_18_2 u>= 0x10)
    sub_403160(var_2c.d, var_18_2 + 1, 1)

var_8_1.b = 6
int32_t var_18_3 = 0xf
int32_t var_1c_3 = 0
var_2c = 0

if (var_30_2 u>= 0x10)
    sub_403160(var_44.d, var_30_2 + 1, 1)

param0[1] = (*(*(arg1 + 4) + 0x38))(eax_2)
int32_t* edx_2 = &var_74
int32_t var_18_4 = 0xf
int32_t var_60

if (var_60 u>= 0x10)
    edx_2 = var_74

int32_t var_1c_4 = 0
var_2c = 0
void* ecx_8

if (*edx_2 != 0)
    int32_t* ecx_9 = edx_2
    void* esi_2 = ecx_9 + 1
    int32_t eax_17
    
    do
        eax_17.b = *ecx_9
        ecx_9 += 1
    while (eax_17.b != 0)
    ecx_8 = ecx_9 - esi_2
else
    ecx_8 = nullptr

sub_403490(&var_2c, edx_2, ecx_8)
char* eax_18 = &var_2c

if (var_18_4 u>= 0x10)
    eax_18 = var_2c.d

_strcpy_s(&param0[0x96], 0x104, eax_18)
param0[0xb] = &param0[0x96]

if (var_18_4 u>= 0x10)
    sub_403160(var_2c.d, var_18_4 + 1, 1)

int32_t* edx_3 = &var_5c
int32_t var_18_5 = 0xf
int32_t var_48

if (var_48 u>= 0x10)
    edx_3 = var_5c

int32_t var_1c_5 = 0
var_2c = 0
void* ecx_11

if (*edx_3 != 0)
    int32_t* ecx_12 = edx_3
    void* esi_4 = ecx_12 + 1
    int32_t eax_19
    
    do
        eax_19.b = *ecx_12
        ecx_12 += 1
    while (eax_19.b != 0)
    ecx_11 = ecx_12 - esi_4
else
    ecx_11 = nullptr

sub_403490(&var_2c, edx_3, ecx_11)
char* eax_21 = &var_2c

if (var_18_5 u>= 0x10)
    eax_21 = var_2c.d

_strcpy_s(&param0[0x16], 0x200, eax_21)

if (var_18_5 u>= 0x10)
    sub_403160(var_2c.d, var_18_5 + 1, 1)

*(param0[0x1d8] + param0 + 0x35d) = 0
void* ebx

if (GetSaveFileNameA(param0) == 0 || param0 == 0xffffffa8)
    ebx.b = 0
else
    if (data_7fcbbc != 0)
        sub_63c7e0(5)
    
    void* var_8c
    sub_403360(&var_8c, &param0[0x16])
    var_8_1.b = 8
    char* eax_26 = sub_405130(&var_2c, &var_8c)
    var_8_1.b = 9
    
    if (data_7fcbbc != 0)
        sub_63c8b0(eax_26)
    
    if (var_18_5 u>= 0x10)
        sub_403160(var_2c.d, var_18_5 + 1, 1)
    
    int32_t var_18_6 = 0xf
    int32_t var_1c_6 = 0
    var_2c = 0
    int32_t var_78
    
    if (var_78 u>= 0x10)
        sub_403160(var_8c, var_78 + 1, 1)
    
    ebx.b = 1

int32_t var_e8_13 = 0x764
operator new(param0)

if (var_48 u>= 0x10)
    sub_403160(var_5c, var_48 + 1, 1)

int32_t var_48_1 = 0xf
int32_t var_4c = 0
var_5c.b = 0

if (var_60 u>= 0x10)
    sub_403160(var_74, var_60 + 1, 1)

int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
