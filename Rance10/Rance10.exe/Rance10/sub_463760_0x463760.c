// 函数: sub_463760
// 地址: 0x463760
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72c349
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_98 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_80 = 0
*(arg1 + 0x4c) = arg4
int32_t var_4c = 0xf
int32_t var_50 = 0
char var_60 = 0
sub_403590(&var_60, arg3, 0, 0xffffffff)
int32_t var_8_1 = 0
sub_403490(arg1 + 4, 0x75cd93, nullptr)
sub_403490(arg1 + 0x1c, 0x75cda6, nullptr)
sub_403490(arg1 + 0x34, 0x75cd92, nullptr)
void* var_48
int32_t* eax_5 = sub_404d80(&var_48, &var_60)
var_8_1.b = 1
char* var_7c = 1
int32_t var_80_1 = 1
char eax_6 = sub_407560(eax_5, "txtex")
char var_30
char eax_8

if (eax_6 == 0)
    int32_t* eax_7 = sub_404d80(&var_30, &var_60)
    var_7c = 3
    eax_8 = sub_407560(eax_7, 0x75e358)

int32_t ebx

if (eax_6 != 0 || eax_8 != 0)
    ebx.b = 0
else
    ebx.b = 1

if ((var_7c.b & 2) != 0)
    int32_t var_1c
    
    if (var_1c u>= 0x10)
        sub_403160(var_30.d, var_1c + 1, 1)
    
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    var_30 = 0

int32_t var_8_2 = 0
int32_t* var_34

if (var_34 u>= 0x10)
    sub_403160(var_48, var_34 + 1, 1)

if (ebx.b != 0)
    ebx.b = 1
else
    bool cond:0_1 = *(arg1 + 0x64) u< 0x10
    int32_t* esi_1 = arg1 + 0x50
    esi_1[4] = 0
    char* eax_12
    
    if (cond:0_1)
        eax_12 = esi_1
    else
        eax_12 = *esi_1
    
    *eax_12 = 0
    int32_t var_1c_2 = 0xf
    int32_t var_20_2 = 0
    var_30 = 0
    sub_403490(&var_30, 0x75e35c, 0x26)
    var_8_2.b = 2
    char* eax_13 = sub_6ca360(&var_48, &var_30)
    var_8_2.b = 3
    var_8_2.b = 4
    void* var_78
    sub_4055a0(esi_1, sub_4175e0(eax_13, eax_13, &var_78, U"\n"), 0, 0xffffffff)
    int32_t var_64
    
    if (var_64 u>= 0x10)
        sub_403160(var_78, var_64 + 1, 1)
    
    if (var_34 u>= 0x10)
        sub_403160(var_48, var_34 + 1, 1)
    
    var_8_2.b = 0
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48.b = 0
    
    if (var_1c_2 u>= 0x10)
        sub_403160(var_30.d, var_1c_2 + 1, 1)
    
    int32_t var_1c_3 = 0xf
    int32_t var_20_3 = 0
    var_30 = 0
    var_8_2.b = 5
    var_8_2.b = 6
    sub_4055a0(esi_1, sub_4175e0(sub_403490(&var_30, 0x75cda7, nullptr), &var_30, &var_78, \n"), 0, 
        0xffffffff)
    
    if (var_64 u>= 0x10)
        sub_403160(var_78, var_64 + 1, 1)
    
    var_8_2.b = 0
    
    if (var_1c_3 u>= 0x10)
        sub_403160(var_30.d, var_1c_3 + 1, 1)
    
    char* eax_27 = &var_60
    
    if (var_4c u>= 0x10)
        eax_27 = var_60.d
    
    var_7c = eax_27
    int32_t var_1c_4 = 0xf
    int32_t var_20_4 = 0
    var_30 = 0
    sub_403490(&var_30, 0x75e2e0, 4)
    var_8_2.b = 7
    char* eax_29 = sub_409240(&var_7c, &var_30, &var_48, &var_7c)
    var_8_2.b = 8
    var_8_2.b = 9
    sub_4055a0(esi_1, sub_4175e0(eax_29, eax_29, &var_78, U"\n"), 0, 0xffffffff)
    
    if (var_64 u>= 0x10)
        sub_403160(var_78, var_64 + 1, 1)
    
    if (var_34_1 u>= 0x10)
        sub_403160(var_48, var_34_1 + 1, 1)
    
    int32_t var_34_2 = 0xf
    int32_t var_38_2 = 0
    var_48.b = 0
    
    if (var_1c_4 u>= 0x10)
        sub_403160(var_30.d, var_1c_4 + 1, 1)
    
    struct exfile::CEXTextAnalyser::VTable* const var_84 = &exfile::CEXTextAnalyser::`vftable'
    int32_t* var_80_2 = esi_1
    var_8_2.b = 0xa
    
    if (sub_4679d0(&var_84, &var_60, arg2, *(arg1 + 0x4c)) != 0)
        if (arg1 + 0x34 != &var_60)
            sub_403590(arg1 + 0x34, &var_60, 0, 0xffffffff)
        
        bool cond:2_1 = esi_1[5] u< 0x10
        esi_1[4] = 0
        
        if (not(cond:2_1))
            esi_1 = *esi_1
        
        *esi_1 = 0
        ebx.b = 1
    else
        sub_45ee50(esi_1)
        ebx.b = 0

if (var_4c u>= 0x10)
    sub_403160(var_60.d, var_4c + 1, 1)

int32_t* result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
