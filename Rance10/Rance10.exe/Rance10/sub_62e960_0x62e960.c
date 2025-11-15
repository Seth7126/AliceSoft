// 函数: sub_62e960
// 地址: 0x62e960
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_84 = 0xffffffff
int32_t (* var_88)(void* arg1) = sub_7452e9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_80
int32_t eax_2 = __security_cookie ^ &var_80
int32_t ebx
int32_t var_144 = ebx
int32_t esi
int32_t var_148 = esi
int32_t edi
int32_t var_14c = edi
int32_t var_150 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_90 = &var_150
int32_t* var_98 = arg4
int32_t var_84_1 = 0
int16_t var_38
int16_t* eax_3
int32_t ecx_1
eax_3, ecx_1 = sub_62d2d0(&var_38, arg4)
int32_t var_154 = ecx_1
var_84_1.b = 1
int32_t* var_ac
sub_6322f0(&var_ac, eax_3)
var_84_1.b = 3
int32_t var_24

if (var_24 u>= 8)
    sub_403160(var_38.d, var_24 + 1, 2)

int32_t var_24_1 = 7
var_38 = 0
int32_t var_28 = 0
char* edx_1 = (**arg3)()
int32_t var_c = 0xf
int32_t var_10 = 0
char var_20 = 0
void* ecx_4

if (*edx_1 != 0)
    char* ecx_5 = edx_1
    char* eax_7
    
    do
        eax_7.b = *ecx_5
        ecx_5 = &ecx_5[1]
    while (eax_7.b != 0)
    ecx_4 = ecx_5 - &ecx_5[1]
else
    ecx_4 = nullptr

sub_403490(&var_20, edx_1, ecx_4)
var_84_1.b = 4
int32_t* var_50
sub_62d2d0(&var_50, &var_20)

if (var_c u>= 0x10)
    var_20.d = var_20.d
    sub_403160(var_20, var_c + 1, 1)

int32_t* ecx_8 = &var_50
int32_t var_3c

if (var_3c u>= 8)
    ecx_8 = var_50

int32_t var_ec = 0
int32_t* ecx_9 = &var_50

if (var_3c u>= 8)
    ecx_9 = var_50

int32_t* var_f8 = ecx_9
void var_e8
void* ecx_10 = &var_e8
int32_t* var_f0 = &var_ac
sub_630bf0(ecx_10)
var_84_1.b = 7
int32_t* eax_12 = var_f8
int32_t var_40
var_20.d = ecx_8 + (var_40 << 1)
int16_t* var_24_2 = eax_12
int32_t* ecx_11 = var_f0

if (sub_632460(eax_12, var_f0, ecx_10, var_24_2, var_20, var_ec, eax_12) == 0)
    ecx_11 = nullptr

int32_t* var_f0_1 = ecx_11
int32_t var_140 = 0
int32_t var_13c = 0
int32_t var_138 = 0
void var_130
sub_630bf0(&var_130)
var_84_1.b = 9
(*(*arg2 + 0x48))()
int32_t esi_3 = 0
int32_t eax_16

while (true)
    bool cond:3_1 = sub_631640(&var_f8, &var_140) != 0
    eax_16 = *arg2
    
    if (cond:3_1)
        break
    
    int32_t var_18_5 = (*(eax_16 + 0x4c))(esi_3)
    ebx = esi_3
    esi_3 += 1
    var_84_1.b = 0xa
    char* ecx_19 = sub_62d3e0(&var_38, sub_630b60(&var_e8, &var_20))
    var_84_1.b = 0xb
    
    if (*(ecx_19 + 0x14) u>= 0x10)
        ecx_19 = *ecx_19
    
    (*(*arg2 + 0x34))(ebx, ecx_19)
    
    if (var_24_2 u>= 0x10)
        var_20.d = var_38.d
        sub_403160(var_20, var_24_2 + 1, 1)
    
    var_84_1.b = 9
    var_24_2 = 0xf
    int32_t var_28_1 = 0
    var_38.b = 0
    
    if (var_c u>= 8)
        var_20.d = var_20.d
        sub_403160(var_20, var_c + 1, 2)
    
    sub_630af0(&var_f8)

ebx.b = (*(eax_16 + 8))() s> 0
int32_t var_128

if (var_128 != 0)
    var_20.d = var_128
    int32_t var_120
    sub_403160(var_20, (var_120 - var_128) s/ 0xc, 0xc)

int32_t var_e0

if (var_e0 != 0)
    var_20.d = var_e0
    int32_t var_d8
    sub_403160(var_20, (var_d8 - var_e0) s/ 0xc, 0xc)

if (var_3c u>= 8)
    var_20.d = var_50
    sub_403160(var_20, var_3c + 1, 2)

int32_t* ecx_26 = var_ac
int32_t var_3c_1 = 7
int32_t var_40_1 = 0
var_50.w = 0

if (ecx_26 != 0)
    bool cond:2_1 = ecx_26[8] != 1
    ecx_26[8]
    ecx_26[8] -= 1
    
    if (not(cond:2_1))
        sub_62d070(var_ac, 0)

var_ac = nullptr
var_84_1.b = 0xc
int32_t* var_9c
int32_t* result

if (var_9c != 0)
    result = (*(*var_9c + 8))()
    
    if (result != 0)
        (**result)(1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_80)
return result
