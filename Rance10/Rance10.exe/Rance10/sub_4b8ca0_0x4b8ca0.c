// 函数: sub_4b8ca0
// 地址: 0x4b8ca0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_9c = 0xffffffff
int32_t (* var_a0)(void* arg1) = sub_7325d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_98
int32_t eax_2 = __security_cookie ^ &var_98
int32_t var_c0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
bool cond:0 = arg1[5] u< 0x10
void** var_b4 = arg2
int32_t var_b0 = arg3
int32_t* eax_5

if (cond:0)
    eax_5 = arg1
else
    eax_5 = *arg1

int32_t* var_a8 = eax_5
int32_t var_6c = 0xf
int32_t var_70 = 0
char var_80 = 0
sub_403490(&var_80, 0x761e18, 0x1d)
int32_t var_9c_1 = 0
var_9c_1.b = 1
char var_38[0x10]
sub_4abfc0(&var_b4, sub_409240(&var_a8, &var_80, &var_38, &var_a8))
int32_t var_24

if (var_24 u>= 0x10)
    sub_403160(var_38[0].d, var_24 + 1, 1)

int32_t var_9c_2 = 0xffffffff
int32_t var_24_1 = 0xf
int32_t var_28 = 0
var_38[0] = 0

if (var_6c u>= 0x10)
    sub_403160(var_80.d, var_6c + 1, 1)

if (arg1[7] != 0)
    int32_t var_54_1 = 0xf
    int32_t var_58_1 = 0
    char var_68 = 0
    int32_t var_9c_3 = 2
    int32_t** esi_1 = arg1[6]
    int32_t* eax_11 = *esi_1
    var_a8 = eax_11
    char var_50
    int32_t var_3c
    char var_20
    char* eax_31
    
    if (eax_11 == esi_1)
        eax_31 = &var_68
    else
        do
            int32_t var_84_1 = 0xf
            int32_t var_88_1 = 0
            var_98 = 0
            sub_403590(&var_98, &eax_11[4], 0, 0xffffffff)
            var_9c_3.b = 3
            int32_t var_6c_1 = 0xf
            int32_t var_70_1 = 0
            var_80 = 0
            sub_403590(&var_80, &eax_11[0xa], 0, 0xffffffff)
            var_9c_3.b = 4
            char* eax_13 = sub_4b6410(&var_50, &var_98)
            var_9c_3.b = 5
            char* eax_14 = sub_41a330(eax_13.b, U""", &var_20, eax_13)
            var_9c_3.b = 6
            var_9c_3.b = 7
            sub_4055a0(&var_68, sub_4176f0(eax_14.b, eax_14, &var_38, "", "), 0, 0xffffffff)
            
            if (var_24_1 u>= 0x10)
                sub_403160(var_38[0].d, var_24_1 + 1, 1)
            
            int32_t var_24_2 = 0xf
            int32_t var_28_1 = 0
            var_38[0] = 0
            int32_t var_c
            
            if (var_c u>= 0x10)
                sub_403160(var_20.d, var_c + 1, 1)
            
            var_9c_3.b = 4
            int32_t var_c_1 = 0xf
            int32_t var_10_1 = 0
            var_20 = 0
            
            if (var_3c u>= 0x10)
                sub_403160(var_50.d, var_3c + 1, 1)
            
            char* eax_22 = sub_4b6410(&var_50, &var_80)
            var_9c_3.b = 8
            char* eax_23 = sub_41a330(eax_22.b, U""", &var_20, eax_22)
            var_9c_3.b = 9
            var_9c_3.b = 0xa
            sub_4055a0(&var_68, sub_4176f0(eax_23.b, eax_23, &var_38, "", "), 0, 0xffffffff)
            
            if (var_24_2 u>= 0x10)
                sub_403160(var_38[0].d, var_24_2 + 1, 1)
            
            var_24_1 = 0xf
            int32_t var_28_2 = 0
            var_38[0] = 0
            
            if (var_c_1 u>= 0x10)
                sub_403160(var_20.d, var_c_1 + 1, 1)
            
            var_c = 0xf
            int32_t var_10_2 = 0
            var_20 = 0
            
            if (var_3c u>= 0x10)
                sub_403160(var_50.d, var_3c + 1, 1)
            
            var_9c_3.b = 2
            sub_408940(&var_98)
            sub_429080(&var_a8)
            eax_11 = var_a8
        while (eax_11 != esi_1)
        
        eax_31 = var_68.d
        
        if (var_54_1 u< 0x10)
            eax_31 = &var_68
    
    char* var_ac = eax_31
    int32_t var_c_2 = 0xf
    int32_t var_10_3 = 0
    var_20 = 0
    sub_403490(&var_20, 0x761dec, 0xd)
    var_9c_3.b = 0xb
    var_9c_3.b = 0xc
    sub_4abfc0(&var_b4, sub_409240(&var_ac, &var_20, &var_50, &var_ac))
    
    if (var_3c u>= 0x10)
        sub_403160(var_50.d, var_3c + 1, 1)
    
    int32_t var_3c_1 = 0xf
    int32_t var_40_1 = 0
    var_50 = 0
    
    if (var_c_2 u>= 0x10)
        sub_403160(var_20.d, var_c_2 + 1, 1)
    
    if (var_54_1 u>= 0x10)
        sub_403160(var_68.d, var_54_1 + 1, 1)

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_98)
return result
