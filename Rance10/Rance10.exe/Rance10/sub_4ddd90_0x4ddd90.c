// 函数: sub_4ddd90
// 地址: 0x4ddd90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_9c = 0xffffffff
int32_t (* var_a0)(void* arg1) = sub_734980
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_98
int32_t eax_2 = __security_cookie ^ &var_98
int32_t var_cc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_bc = ebx
void** var_b8 = arg2
int32_t var_b4 = arg3
int32_t var_c = 0xf
int32_t var_10 = 0
char var_20 = 0
sub_403490(&var_20, 0x7647ac, 0x10)
int32_t var_9c_1 = 0
sub_4abfc0(&var_b8, &var_20)
int32_t var_9c_2 = 0xffffffff

if (var_c u>= 0x10)
    sub_403160(var_20.d, var_c + 1, 1)

int32_t* esi = *(ebx + 8)
int32_t ecx_2 = 0
void* eax_7 = *esi
void* var_a8 = eax_7
int32_t var_b0
int32_t var_ac
char var_68
int32_t var_54
char var_50
int32_t var_3c
char var_38
int32_t var_24

if (eax_7 != esi)
    do
        var_ac = ecx_2
        int32_t var_c_1 = 0xf
        var_b0 = ecx_2 + 1
        int32_t var_10_1 = 0
        var_20 = 0
        sub_403490(&var_20, 0x764750, 0x17)
        int32_t var_9c_3 = 1
        char* ebx_1 = sub_4b6410(&var_68, *(eax_7 + 0x28))
        var_9c_3.b = 2
        char* eax_9 = sub_4b6410(&var_50, eax_7 + 0x10)
        var_9c_3.b = 3
        
        if (*(ebx_1 + 0x14) u>= 0x10)
            ebx_1 = *ebx_1
        
        if (*(eax_9 + 0x14) u>= 0x10)
            eax_9 = *eax_9
        
        var_9c_3.b = 4
        sub_4abfc0(&var_b8, sub_45ef70(&var_ac, &var_20, &var_38, &var_ac, eax_9, ebx_1))
        
        if (var_24 u>= 0x10)
            sub_403160(var_38.d, var_24 + 1, 1)
        
        var_24 = 0xf
        int32_t var_28_1 = 0
        var_38 = 0
        
        if (var_3c u>= 0x10)
            sub_403160(var_50.d, var_3c + 1, 1)
        
        var_3c = 0xf
        int32_t var_40_1 = 0
        var_50 = 0
        
        if (var_54 u>= 0x10)
            sub_403160(var_68.d, var_54 + 1, 1)
        
        int32_t var_9c_4 = 0xffffffff
        var_54 = 0xf
        int32_t var_58_1 = 0
        var_68 = 0
        
        if (var_c_1 u>= 0x10)
            sub_403160(var_20.d, var_c_1 + 1, 1)
        
        sub_429080(&var_a8)
        eax_7 = var_a8
        ecx_2 = var_b0
    while (eax_7 != esi)
    
    ebx = var_bc

int32_t var_c_2 = 0xf
int32_t var_10_2 = 0
var_20 = 0
sub_403490(&var_20, 0x764768, 0x14)
int32_t var_9c_5 = 5
sub_4abfc0(&var_b8, &var_20)
int32_t var_9c_6 = 0xffffffff

if (var_c_2 u>= 0x10)
    sub_403160(var_20.d, var_c_2 + 1, 1)

void** esi_1 = *(ebx + 0x10)
int32_t ecx_10 = 0
void* eax_22 = *esi_1
var_a8 = eax_22

if (eax_22 != esi_1)
    do
        var_b0 = ecx_10
        int32_t var_c_3 = 0xf
        var_ac = ecx_10 + 1
        int32_t var_10_3 = 0
        var_20 = 0
        sub_403490(&var_20, 0x764780, 0x17)
        int32_t var_9c_7 = 6
        char* ebx_2 = sub_4b6410(&var_38, *(eax_22 + 0x28))
        var_9c_7.b = 7
        char* eax_24 = sub_4b6410(&var_50, eax_22 + 0x10)
        var_9c_7.b = 8
        
        if (*(ebx_2 + 0x14) u>= 0x10)
            ebx_2 = *ebx_2
        
        if (*(eax_24 + 0x14) u>= 0x10)
            eax_24 = *eax_24
        
        var_9c_7.b = 9
        sub_4abfc0(&var_b8, sub_45ef70(&var_b0, &var_20, &var_68, &var_b0, eax_24, ebx_2))
        
        if (var_54 u>= 0x10)
            sub_403160(var_68.d, var_54 + 1, 1)
        
        var_54 = 0xf
        int32_t var_58_2 = 0
        var_68 = 0
        
        if (var_3c u>= 0x10)
            sub_403160(var_50.d, var_3c + 1, 1)
        
        var_3c = 0xf
        int32_t var_40_2 = 0
        var_50 = 0
        
        if (var_24 u>= 0x10)
            sub_403160(var_38.d, var_24 + 1, 1)
        
        int32_t var_9c_8 = 0xffffffff
        var_24 = 0xf
        int32_t var_28_2 = 0
        var_38 = 0
        
        if (var_c_3 u>= 0x10)
            sub_403160(var_20.d, var_c_3 + 1, 1)
        
        sub_429080(&var_a8)
        eax_22 = var_a8
        ecx_10 = var_ac
    while (eax_22 != esi_1)
    
    ebx = var_bc

int32_t result_1 = 0xf
int32_t var_70 = 0
char var_80 = 0
sub_403490(&var_80, "FPS = %f", 8)
int32_t var_9c_9 = 0xa
var_9c_9.b = 0xb
sub_4abfc0(&var_b8, sub_417920(ebx + 0x18, &var_80, &var_98, ebx + 0x18))
int32_t var_84

if (var_84 u>= 0x10)
    sub_403160(var_98.d, var_84 + 1, 1)

int32_t result = result_1
int32_t var_84_1 = 0xf
int32_t var_88 = 0
var_98 = 0

if (result u>= 0x10)
    result = sub_403160(var_80.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_98)
return result
