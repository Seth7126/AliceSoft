// 函数: sub_5815f0
// 地址: 0x5815f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c7126
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_a0
int32_t eax_2 = __security_cookie ^ &var_a0
int32_t __saved_edi
int32_t var_b4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_28
sub_581e30(arg1, &var_28, 1)
int32_t var_4 = 0
char var_58
sub_581e30(arg1, &var_58, 6)
int32_t var_8c = 0xf
int32_t var_90 = 0
var_a0 = 0
var_4.b = 2
char var_70
int32_t var_5c
int32_t var_40
int32_t var_2c
int32_t var_18

if (var_18 != 0)
    char* eax_5 = sub_4028a0(&var_40, arg2)
    var_4.b = 3
    char* eax_6 = sub_410ad0(eax_5, eax_5, &var_70, &var_28)
    
    if (&var_a0 != eax_6)
        if (var_8c u>= 0x10)
            j__free(var_a0.d)
        
        var_8c = 0xf
        int32_t var_90_1 = 0
        var_a0 = 0
        sub_4030b0(&var_a0, eax_6)
    
    if (var_5c u>= 0x10)
        j__free(var_70.d)
    
    var_5c = 0xf
    int32_t var_60_1 = 0
    var_70 = 0
    
    if (var_2c u>= 0x10)
        j__free(var_40)

int32_t var_74 = 0xf
int32_t var_78 = 0
char var_88 = 0
var_4.b = 4
int32_t var_48

if (var_48 != 0)
    char* eax_7 = sub_4028a0(&var_40, arg2)
    var_4.b = 5
    char* eax_8 = sub_410ad0(eax_7, eax_7, &var_70, &var_58)
    
    if (&var_88 != eax_8)
        if (var_74 u>= 0x10)
            j__free(var_88.d)
        
        var_74 = 0xf
        int32_t var_78_1 = 0
        var_88 = 0
        sub_4030b0(&var_88, eax_8)
    
    if (var_5c u>= 0x10)
        j__free(var_70.d)
    
    var_4.b = 4
    int32_t var_5c_1 = 0xf
    int32_t var_60_2 = 0
    var_70 = 0
    
    if (var_2c u>= 0x10)
        j__free(var_40)

void** ebx
ebx.b = sub_53af00(arg1 + 0x2c, &var_a0, &var_88, arg3) != 0

if (var_74 u>= 0x10)
    j__free(var_88.d)

int32_t var_74_1 = 0xf
int32_t var_78_2 = 0
var_88 = 0

if (var_8c u>= 0x10)
    j__free(var_a0.d)

int32_t var_8c_1 = 0xf
int32_t var_90_2 = 0
var_a0 = 0
int32_t var_44

if (var_44 u>= 0x10)
    j__free(var_58.d)

int32_t var_44_1 = 0xf
int32_t var_48_1 = 0
var_58 = 0
int32_t var_14

if (var_14 u>= 0x10)
    j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_a0)
return ebx.b
