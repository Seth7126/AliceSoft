// 函数: sub_463270
// 地址: 0x463270
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72c230
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_84 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403590(&var_2c, arg3, 0, 0xffffffff)
int32_t var_8_1 = 0
sub_403490(arg1 + 4, 0x75cd93, nullptr)
sub_403490(arg1 + 0x1c, 0x75cda6, nullptr)
sub_403490(arg1 + 0x34, 0x75cd92, nullptr)
char* lpFileName = &var_2c

if (var_18 u>= 0x10)
    lpFileName = var_2c.d

uint32_t eax_4 = GetFileAttributesA(lpFileName)

if (eax_4 == 0xffffffff || (not.b((eax_4 u>> 4).b) & 1) == 0)
    goto label_463499

*(arg1 + 0x60) = 0
char* eax_6

if (*(arg1 + 0x64) u< 0x10)
    eax_6 = arg1 + 0x50
else
    eax_6 = *(arg1 + 0x50)

*eax_6 = 0
void* var_68 = nullptr
int32_t var_64_1 = 0
int32_t var_60_1 = 0
var_8_1.b = 1
void* var_44
int32_t var_30

if (sub_67edf0(&var_2c, &var_68) == 0)
    char* eax_8 = &var_2c
    
    if (var_18 u>= 0x10)
        eax_8 = var_2c.d
    
    char* var_74 = eax_8
    sub_403360(&var_44, 0x75e244)
    var_8_1.b = 2
    var_8_1.b = 3
    char var_5c
    sub_45eb40(arg1 + 0x50, sub_409240(&var_74, &var_44, &var_5c, &var_74))
    int32_t var_48
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c.d, var_48 + 1, 1)
    
    var_8_1.b = 1
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    var_5c = 0
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
    
    sub_45ee50(arg1 + 0x50)
    goto label_463465

bool cond:1_1 = *(arg1 + 0x64) u< 0x10
*(arg1 + 0x60) = 0
void* eax_15

if (cond:1_1)
    eax_15 = arg1 + 0x50
else
    eax_15 = *(arg1 + 0x50)

*eax_15 = 0
sub_403360(&var_44, 0x75e278)
var_8_1.b = 4
sub_45eb40(arg1 + 0x50, &var_44)

if (var_30 u>= 0x10)
    sub_403160(var_44, var_30 + 1, 1)

struct exfile::CEXBinaryAnalyser::VTable* const var_70 = &exfile::CEXBinaryAnalyser::`vftable'
void* var_6c_1 = arg1 + 0x50
int32_t var_88_4 = arg2
var_8_1.b = 5
int32_t ebx

if (sub_463fc0(&var_70, &var_68) != 0)
    var_70 = &exfile::CEXBinaryAnalyser::`vftable'
    var_8_1.b = 0
    sub_4059a0(&var_68)
label_463499:
    
    if (arg1 + 4 != &var_2c)
        sub_403590(arg1 + 4, &var_2c, 0, 0xffffffff)
    
    ebx.b = 1
else
    sub_45ee50(arg1 + 0x50)
    var_70 = &exfile::CEXBinaryAnalyser::`vftable'
label_463465:
    void* ecx_13 = var_68
    
    if (ecx_13 != 0)
        sub_403160(ecx_13, var_60_1 - ecx_13, 1)
    
    ebx.b = 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t* result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
