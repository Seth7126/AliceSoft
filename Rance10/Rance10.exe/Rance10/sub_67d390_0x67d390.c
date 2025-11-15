// 函数: sub_67d390
// 地址: 0x67d390
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_746843
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_ec = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_d0
__time64(&var_d0)
void* var_f4 = &var_d0
void var_a4
void* var_f8 = &var_a4
sub_703d21()
int32_t var_90
int32_t var_d4 = var_90 + 0x76c
__time64(&var_d0)
void* var_100 = &var_d0
int32_t var_80
int32_t* var_104 = &var_80
sub_703d21()
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, "Log%04d", 0x25)
int32_t var_8_1 = 0
int32_t var_98
int32_t var_94
int32_t var_7c
int32_t var_78
int32_t* var_5c
sub_4a3f80(&var_d4, &var_2c, &var_5c, &var_d4, var_94 + 1, var_98, var_78, var_7c, var_80)
var_8_1.b = 2

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
struct win32only::CSaveFileDlg::VTable* const var_dc = &win32only::CSaveFileDlg::`vftable'
int32_t* eax_9 = sub_6e810c(0x764)
int32_t* var_cc = eax_9
int32_t* param0 = sub_6ce620(eax_9)
int32_t* param0_1 = param0
var_8_1.b = 3
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_403490(&var_44, "*.txt", 5)
var_8_1.b = 4
int32_t var_18_2 = 0xf
int32_t var_1c_2 = 0
var_2c = 0
sub_403490(&var_2c, 0x76ee2c, 0x10)
sub_6ce4c0(param0, &var_2c, &var_44)

if (var_18_2 u>= 0x10)
    sub_403160(var_2c.d, var_18_2 + 1, 1)

var_8_1.b = 3
int32_t var_18_3 = 0xf
int32_t var_1c_3 = 0
var_2c = 0

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34_1 = 0
var_44 = 0
sub_403490(&var_44, "*.*", 3)
var_8_1.b = 5
int32_t var_18_4 = 0xf
int32_t var_1c_4 = 0
var_2c = 0
sub_403490(&var_2c, 0x76ee58, 0x12)
sub_6ce4c0(param0, &var_2c, &var_44)

if (var_18_4 u>= 0x10)
    sub_403160(var_2c.d, var_18_4 + 1, 1)

var_8_1.b = 3
int32_t var_18_5 = 0xf
int32_t var_1c_5 = 0
var_2c = 0

if (var_30_1 u>= 0x10)
    sub_403160(var_44.d, var_30_1 + 1, 1)

void** edx_1 = arg1 + 0xb8
param0[1] = arg2

if (edx_1[5] u>= 0x10)
    edx_1 = *edx_1

int32_t var_18_6 = 0xf
int32_t var_1c_6 = 0
var_2c = 0
void* ecx_9

if (*edx_1 != 0)
    char* ecx_10 = edx_1
    HWND eax_18
    
    do
        eax_18.b = *ecx_10
        ecx_10 = &ecx_10[1]
    while (eax_18.b != 0)
    ecx_9 = ecx_10 - &ecx_10[1]
else
    ecx_9 = nullptr

sub_403490(&var_2c, edx_1, ecx_9)
char* eax_19 = &var_2c

if (var_18_6 u>= 0x10)
    eax_19 = var_2c.d

_strcpy_s(&param0[0x96], 0x104, eax_19)
param0[0xb] = &param0[0x96]

if (var_18_6 u>= 0x10)
    sub_403160(var_2c.d, var_18_6 + 1, 1)

int32_t* edx_2 = &var_5c
int32_t var_18_7 = 0xf
int32_t result_1

if (result_1 u>= 0x10)
    edx_2 = var_5c

int32_t var_1c_7 = 0
var_2c = 0
void* ecx_12

if (*edx_2 != 0)
    int32_t* ecx_13 = edx_2
    void* esi_4 = ecx_13 + 1
    int32_t eax_20
    
    do
        eax_20.b = *ecx_13
        ecx_13 += 1
    while (eax_20.b != 0)
    ecx_12 = ecx_13 - esi_4
else
    ecx_12 = nullptr

sub_403490(&var_2c, edx_2, ecx_12)
char* eax_22 = &var_2c

if (var_18_7 u>= 0x10)
    eax_22 = var_2c.d

_strcpy_s(&param0[0x16], 0x200, eax_22)

if (var_18_7 u>= 0x10)
    sub_403160(var_2c.d, var_18_7 + 1, 1)

*(param0[0x1d8] + param0 + 0x35d) = 0
BOOL eax_26 = GetSaveFileNameA(param0)
BOOL var_c4

if (eax_26 != 0)
    var_c4 = &param0[0x16]
    
    if (param0 != 0xffffffa8 && *(arg1 + 0x98) != 0)
        sub_403360(&var_44, &param0[0x16])
        var_8_1.b = 6
        char eax_27 = sub_67c610(*(arg1 + 0x98), &var_44)
        var_8_1.b = 3
        
        if (var_30_1 u>= 0x10)
            sub_403160(var_44.d, var_30_1 + 1, 1)
        
        char* ecx_19 = &var_44
        char* ecx_21
        
        if (eax_27 == 0)
            sub_403360(ecx_19, 0x76ee84)
            var_8_1.b = 8
            void var_bc
            PSTR lpText_1 = sub_409240(&var_c4, &var_44, &var_bc, &var_c4)
            PSTR lpCaption_1 = arg1 + 0xa0
            
            if (*(lpCaption_1 + 0x14) u>= 0x10)
                lpCaption_1 = *lpCaption_1
            
            if (*(lpText_1 + 0x14) u>= 0x10)
                lpText_1 = *lpText_1
            
            MessageBoxA(arg2, lpText_1, lpCaption_1, MB_OK)
            ecx_21 = &var_bc
        else
            sub_403360(ecx_19, 0x76ee40)
            var_8_1.b = 7
            char* lpText = sub_409240(&var_c4, &var_44, &var_2c, &var_c4)
            PSTR lpCaption = arg1 + 0xa0
            
            if (*(lpCaption + 0x14) u>= 0x10)
                lpCaption = *lpCaption
            
            if (*(lpText + 0x14) u>= 0x10)
                lpText = *lpText
            
            MessageBoxA(arg2, lpText, lpCaption, MB_OK)
            ecx_21 = &var_2c
        
        sub_403320(ecx_21)
        sub_403320(&var_44)
else
    var_c4 = eax_26
int32_t var_f0_13 = 0x764
operator new(param0)
int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_5c, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
