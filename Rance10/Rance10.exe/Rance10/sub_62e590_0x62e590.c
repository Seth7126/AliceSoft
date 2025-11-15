// 函数: sub_62e590
// 地址: 0x62e590
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_84 = 0xffffffff
int32_t (* var_88)(void* arg1) = sub_745256
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_80
int32_t eax_2 = __security_cookie ^ &var_80
int32_t ebx
int32_t var_e0 = ebx
int32_t esi
int32_t var_e4 = esi
int32_t edi
int32_t var_e8 = edi
int32_t var_ec = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_90 = &var_ec
int32_t var_84_1 = 0
int32_t* var_a0 = arg4
char* edx = (**arg3)(var_ec)
int32_t* var_c = 0xf
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

char* var_1c = edx
sub_403490(&var_20, var_1c, ecx)
var_84_1.b = 1
int32_t* var_38
sub_62d2d0(&var_38, &var_20)

if (var_c u>= 0x10)
    int32_t var_18_1 = 1
    var_1c = var_c + 1
    var_20.d = var_20.d
    sub_403160(var_20, var_1c, var_18_1)

int32_t var_d8 = 0
char var_d4 = 0
int96_t var_d0 = (zx.o(0)).12
int32_t var_c0 = 0
char var_bc = 0
int32_t var_b8 = 0
int32_t var_b4 = 0
char var_b0 = 0
int32_t var_ac = 0
int32_t var_a8 = 0
char var_a4 = 0
var_84_1.b = 4
int32_t var_50
int16_t* eax_7
int32_t ecx_5
eax_7, ecx_5 = sub_62d2d0(&var_50, arg4)
int32_t var_18_2 = ecx_5
var_1c = eax_7
var_84_1.b = 5
int32_t* eax_8 = sub_6322f0(&var_1c, var_1c)
var_84_1.b = 6
int32_t* ecx_7 = &var_38
int32_t* edi_2 = &var_38
int32_t* edx_3 = var_38
int32_t var_24

if (var_24 u>= 8)
    ecx_7 = edx_3

if (var_24 u>= 8)
    edi_2 = edx_3

var_1c = nullptr
int32_t var_28
void* eax_10 = ecx_7 + (var_28 << 1)
int32_t* ecx_8 = &var_38

if (var_24 u>= 8)
    ecx_8 = edx_3

var_20.d = eax_10
int16_t* var_24_1 = ecx_8
char eax_11 = sub_632460(eax_10, eax_8, &var_d8, var_24_1, var_20, var_1c, edi_2)
char* ecx_10 = var_1c
bool var_91 = eax_11 == 0

if (ecx_10 != 0)
    bool cond:3_1 = *(ecx_10 + 0x20) != 1
    *(ecx_10 + 0x20)
    *(ecx_10 + 0x20) -= 1
    
    if (not(cond:3_1))
        sub_62d070(var_1c, 0)

var_1c = nullptr
var_84_1.b = 7

if (var_c != 0)
    int32_t* eax_14 = (*(*var_c + 8))()
    
    if (eax_14 != 0)
        (**eax_14)(1)

var_84_1.b = 4
void* var_3c

if (var_3c u>= 8)
    int32_t var_18_5 = 2
    var_1c = var_3c + 1
    var_20.d = var_50
    sub_403160(var_20, var_1c, var_18_5)

int16_t* result

if (var_91 == 0)
    int32_t edi_3 = var_d0:4.d
    int32_t* i = var_d0.d
    (*(*arg2 + 0x40))((edi_3 - i) s/ 0xc)
    char* ebx_2 = nullptr
    
    for (; i != edi_3; i = &i[3])
        char* var_98_1 = ebx_2
        ebx_2 = &ebx_2[1]
        var_84_1.b = 8
        char* ecx_25 = sub_62d3e0(&var_20, sub_630cd0(i, &var_50))
        var_84_1.b = 9
        
        if (*(ecx_25 + 0x14) u>= 0x10)
            ecx_25 = *ecx_25
        
        var_1c = var_98_1
        (*(*arg2 + 0x34))(var_1c, ecx_25)
        
        if (var_c u>= 0x10)
            int32_t var_18_11 = 1
            var_1c = var_c + 1
            var_20.d = var_20.d
            sub_403160(var_20, var_1c, var_18_11)
        
        var_84_1.b = 4
        var_c = 0xf
        var_10 = 0
        var_20 = 0
        
        if (var_3c u>= 8)
            int32_t var_18_12 = 2
            var_1c = var_3c + 1
            var_20.d = var_50
            sub_403160(var_20, var_1c, var_18_12)
    
    int32_t esi_4 = var_d0.d
    
    if (esi_4 != 0)
        int32_t var_18_13 = 0xc
        var_1c = (var_d0:8.d - esi_4) s/ 0xc
        var_20.d = esi_4
        sub_403160(var_20, var_1c, var_18_13)
    
    if (var_24_1 u>= 8)
        int32_t var_18_14 = 2
        var_1c = var_24_1 + 1
        var_20.d = var_38
        sub_403160(var_20, var_1c, var_18_14)
    
    result.b = 1
else
    (*(*arg2 + 0x48))()
    int32_t esi_3 = var_d0.d
    
    if (esi_3 != 0)
        int32_t var_18_6 = 0xc
        var_1c = (var_d0:8.d - esi_3) s/ 0xc
        var_20.d = esi_3
        sub_403160(var_20, var_1c, var_18_6)
    
    if (var_24_1 u>= 8)
        int32_t var_18_7 = 2
        var_1c = var_24_1 + 1
        var_20.d = var_38
        sub_403160(var_20, var_1c, var_18_7)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_80)
return result
