// 函数: sub_62e370
// 地址: 0x62e370
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_9c = 0xffffffff
int32_t (* var_a0)(void* arg1) = sub_7451ce
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_98
int32_t eax_2 = __security_cookie ^ &var_98
int32_t ebx
int32_t var_cc = ebx
int32_t esi
int32_t var_d0 = esi
int32_t edi
int32_t var_d4 = edi
int32_t var_d8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_a8 = &var_d8
int32_t var_9c_1 = 0
int32_t* var_b0 = arg2
char* edx = (**arg1)(var_d8)
int32_t var_c = 0xf
int32_t var_10 = 0
char var_20 = 0
void* ecx

if (*edx != 0)
    char* ecx_1 = edx
    char* eax_4
    
    do
        eax_4.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_4.b != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

sub_403490(&var_20, edx, ecx)
var_9c_1.b = 1
int16_t var_50
int16_t* eax_5
int32_t ecx_4
eax_5, ecx_4 = sub_62d2d0(&var_50, arg2)
int32_t var_18_1 = ecx_4
var_9c_1.b = 2
int32_t* var_c8
int32_t* eax_6 = sub_6322f0(&var_c8, eax_5)
var_9c_1.b = 3
int16_t var_38
int16_t* eax_7 = sub_62d2d0(&var_38, &var_20)
var_9c_1.b = 4
int16_t* ecx_7

if (*(eax_7 + 0x14) u< 8)
    ecx_7 = eax_7
else
    ecx_7 = *eax_7

int32_t eax_8 = *(eax_7 + 0x10)
var_20.d = eax_6
int32_t* var_24 = nullptr
ebx.b = sub_632f50(eax_8, &ecx_7[eax_8], ecx_7, var_24, var_20, 0x10, ecx_7)

if (var_24 u>= 8)
    var_20.d = var_38.d
    sub_403160(var_20, var_24 + 1, 2)

int32_t* ecx_10 = var_c8
int32_t var_24_1 = 7
int32_t var_28 = 0
var_38 = 0

if (ecx_10 != 0)
    bool cond:0_1 = ecx_10[8] != 1
    ecx_10[8]
    ecx_10[8] -= 1
    
    if (not(cond:0_1))
        sub_62d070(var_c8, 0)

var_c8 = nullptr
var_9c_1.b = 5
int32_t* var_b8

if (var_b8 != 0)
    int32_t* eax_12 = (*(*var_b8 + 8))()
    
    if (eax_12 != 0)
        (**eax_12)(1)

int32_t var_3c

if (var_3c u>= 8)
    var_20.d = var_50.d
    sub_403160(var_20, var_3c + 1, 2)

int32_t var_3c_1 = 7
var_50 = 0
int32_t var_40 = 0

if (var_c u>= 0x10)
    var_20.d = var_20.d
    sub_403160(var_20, var_c + 1, 1)

int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_98)
return result
