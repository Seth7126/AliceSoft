// 函数: sub_4a33e0
// 地址: 0x4a33e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731220
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char var_44
char* eax_3 = sub_4a3b30(arg1, &var_44)
int32_t var_8_1 = 0
int32_t* var_5c
sub_4176f0(eax_3.b, eax_3, &var_5c, "\Snapshot")
var_8_1.b = 2
int32_t var_30

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44 = 0
struct win32only::COpenFileDlg::VTable* const var_80 = &win32only::COpenFileDlg::`vftable'
int32_t* eax_6 = sub_6e810c(0x764)
int32_t* var_78 = eax_6
int32_t* param0 = sub_6ce420(eax_6)
int32_t* param0_1 = param0
var_8_1.b = 3
int32_t var_30_2 = 0xf
int32_t var_34_1 = 0
var_44 = 0
sub_403490(&var_44, "*.asd", 5)
var_8_1.b = 4
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x761370, 0x16)
sub_6ce4c0(param0, &var_2c, &var_44)

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

var_8_1.b = 3
int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0

if (var_30_2 u>= 0x10)
    sub_403160(var_44.d, var_30_2 + 1, 1)

param0[1] = (*(*(arg1 + 4) + 0x38))(eax_2)
int32_t* edx_1 = &var_5c
int32_t var_18_2 = 0xf
int32_t var_48

if (var_48 u>= 0x10)
    edx_1 = var_5c

int32_t var_1c_2 = 0
var_2c = 0
void* ecx_6

if (*edx_1 != 0)
    int32_t* ecx_7 = edx_1
    void* esi_1 = ecx_7 + 1
    int32_t eax_12
    
    do
        eax_12.b = *ecx_7
        ecx_7 += 1
    while (eax_12.b != 0)
    ecx_6 = ecx_7 - esi_1
else
    ecx_6 = nullptr

sub_403490(&var_2c, edx_1, ecx_6)
char* eax_13 = &var_2c

if (var_18_2 u>= 0x10)
    eax_13 = var_2c.d

_strcpy_s(&param0[0x96], 0x104, eax_13)
param0[0xb] = &param0[0x96]

if (var_18_2 u>= 0x10)
    sub_403160(var_2c.d, var_18_2 + 1, 1)

*(param0[0x1d8] + param0 + 0x35d) = 0
int32_t ebx

if (GetOpenFileNameA(param0) == 0 || param0 == 0xffffffa8)
    ebx.b = 0
else
    if (data_7fcbbc != 0)
        sub_63c7e0(6)
    
    void* var_74
    sub_403360(&var_74, &param0[0x16])
    var_8_1.b = 5
    char* eax_18 = sub_405130(&var_2c, &var_74)
    var_8_1.b = 6
    
    if (data_7fcbbc != 0)
        sub_63c8b0(eax_18)
    
    if (var_18_2 u>= 0x10)
        sub_403160(var_2c.d, var_18_2 + 1, 1)
    
    int32_t var_18_3 = 0xf
    int32_t var_1c_3 = 0
    var_2c = 0
    int32_t var_60
    
    if (var_60 u>= 0x10)
        sub_403160(var_74, var_60 + 1, 1)
    
    ebx.b = 1

int32_t var_98_7 = 0x764
operator new(param0)

if (var_48 u>= 0x10)
    sub_403160(var_5c, var_48 + 1, 1)

int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
