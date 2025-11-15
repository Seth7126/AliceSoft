// 函数: sub_62f450
// 地址: 0x62f450
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_cc = 0xffffffff
int32_t (* var_d0)(void* arg1) = sub_7454a4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_c8
int32_t eax_2 = __security_cookie ^ &var_c8
int32_t ebx
int32_t var_10c = ebx
int32_t esi
int32_t var_110 = esi
int32_t edi
int32_t var_114 = edi
int32_t var_118 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_d8 = &var_118
char* var_ec = arg3
int32_t var_cc_1 = 0
char* var_dc = arg3
int32_t* var_e8 = arg2
int32_t* var_e4 = arg4
int32_t var_f0 = 0
char* edx = (**arg2)(var_118)
int32_t var_c = 0xf
int32_t var_10 = 0
char var_20 = 0
void* ecx_1

if (*edx != 0)
    char* ecx_2 = edx
    char* eax_4
    
    do
        eax_4.b = *ecx_2
        ecx_2 = &ecx_2[1]
    while (eax_4.b != 0)
    ecx_1 = ecx_2 - &ecx_2[1]
else
    ecx_1 = nullptr

sub_403490(&var_20, edx, ecx_1)
var_cc_1.b = 1
int16_t var_68
int16_t* eax_5 = sub_62d2d0(&var_68, arg5)
var_cc_1.b = 2
int16_t var_50
int16_t* eax_6
int32_t ecx_6
eax_6, ecx_6 = sub_62d2d0(&var_50, arg4)
int32_t var_18_1 = ecx_6
var_cc_1.b = 3
int32_t* var_108
int32_t* eax_7 = sub_6322f0(&var_108, eax_6)
var_cc_1.b = 4
int16_t var_38
int16_t* eax_8
int32_t ecx_9
eax_8, ecx_9 = sub_62d2d0(&var_38, &var_20)
int32_t var_18_2 = ecx_9
var_20.d = eax_7
var_cc_1.b = 5
int32_t var_80
sub_6323b0(eax_8, eax_8, &var_80, var_20, eax_5)
int32_t var_24

if (var_24 u>= 8)
    var_20.d = var_38.d
    sub_403160(var_20, var_24 + 1, 2)

int32_t var_24_1 = 7
int32_t var_28 = 0
var_38 = 0
int32_t* ecx_11 = var_108

if (ecx_11 != 0)
    bool cond:0_1 = ecx_11[8] != 1
    ecx_11[8]
    ecx_11[8] -= 1
    
    if (not(cond:0_1))
        sub_62d070(var_108, 0)

var_108 = nullptr
var_cc_1.b = 9
int32_t* var_f8

if (var_f8 != 0)
    int32_t* eax_13 = (*(*var_f8 + 8))()
    
    if (eax_13 != 0)
        (**eax_13)(1)

int32_t var_3c

if (var_3c u>= 8)
    var_20.d = var_50.d
    sub_403160(var_20, var_3c + 1, 2)

int32_t var_3c_1 = 7
int32_t var_40 = 0
var_50 = 0
int32_t var_54

if (var_54 u>= 8)
    var_20.d = var_68.d
    sub_403160(var_20, var_54 + 1, 2)

int32_t var_54_1 = 7
int32_t var_58 = 0
var_68 = 0
var_cc_1.b = 0xc

if (var_c u>= 0x10)
    var_20.d = var_20.d
    sub_403160(var_20, var_c + 1, 1)

int32_t var_c_1 = 0xf
int32_t var_10_1 = 0
var_20 = 0
sub_62d3e0(arg3, &var_80)
int32_t var_6c

if (var_6c u>= 8)
    var_20.d = var_80
    sub_403160(var_20, var_6c + 1, 2)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_c8)
return arg3
