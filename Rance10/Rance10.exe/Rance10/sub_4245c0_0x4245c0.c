// 函数: sub_4245c0
// 地址: 0x4245c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729573
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_b0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg2
struct advengine::CToken::VTable* const var_9c
sub_42b770(&var_9c)
int32_t var_8_1 = 0
int32_t var_60 = 0xf
int32_t var_64 = 0
char var_74 = 0
var_8_1.b = 1
int32_t ebx

if (sub_428220(arg1 + 0x14, &var_9c, &var_74) == 0)
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    char var_5c = 0
    var_8_1.b = 2
    void* eax_4
    
    if (*(arg1 + 0x2c) u< 0x10)
        eax_4 = arg1 + 0x18
    else
        eax_4 = *(arg1 + 0x18)
    
    void* var_a0 = eax_4
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    char var_44 = 0
    sub_403490(&var_44, 0x75d638, 0x16)
    var_8_1.b = 3
    var_8_1.b = 4
    char var_2c
    sub_4055a0(&var_5c, sub_409240(&var_a0, &var_44, &var_2c, &var_a0), 0, 0xffffffff)
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    var_8_1.b = 2
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    
    if (var_30_1 u>= 0x10)
        sub_403160(var_44.d, var_30_1 + 1, 1)
    
    if (*(edi + 0x14) u>= 0x10)
        edi = *edi
    
    var_a0 = edi
    int32_t var_30_2 = 0xf
    int32_t var_34_2 = 0
    var_44 = 0
    sub_403490(&var_44, 0x75d67c, 0x1f)
    var_8_1.b = 5
    var_8_1.b = 6
    sub_4055a0(&var_5c, sub_409240(&var_a0, &var_44, &var_2c, &var_a0), 0, 0xffffffff)
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    var_8_1.b = 2
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0
    
    if (var_30_2 u>= 0x10)
        sub_403160(var_44.d, var_30_2 + 1, 1)
    
    void* eax_17 = &var_74
    
    if (var_60 u>= 0x10)
        eax_17 = var_74.d
    
    var_a0 = eax_17
    int32_t var_30_3 = 0xf
    int32_t var_34_3 = 0
    var_44 = 0
    sub_403490(&var_44, "----------\n%s\n----------\n", 0x19)
    var_8_1.b = 7
    var_8_1.b = 8
    sub_4055a0(&var_5c, sub_409240(&var_a0, &var_44, &var_2c, &var_a0), 0, 0xffffffff)
    
    if (var_18_2 u>= 0x10)
        sub_403160(var_2c.d, var_18_2 + 1, 1)
    
    var_8_1.b = 2
    int32_t var_18_3 = 0xf
    int32_t var_1c_3 = 0
    var_2c = 0
    
    if (var_30_3 u>= 0x10)
        sub_403160(var_44.d, var_30_3 + 1, 1)
    
    sub_407430(&var_5c, 0x75d6c4, 0x2c)
    char* eax_24 = &var_5c
    
    if (var_48_1 u>= 0x10)
        eax_24 = var_5c.d
    
    sub_403360(&var_2c, eax_24)
    var_8_1.b = 9
    sub_6c56d0(&var_2c)
    var_8_1.b = 2
    
    if (var_18_3 u>= 0x10)
        sub_403160(var_2c.d, var_18_3 + 1, 1)
    
    int32_t var_78
    int32_t var_b4_5 = var_78
    int32_t var_7c
    sub_424950(arg1 + 0x18, var_7c)
    ebx.b = 0
    
    if (var_48_1 u>= 0x10)
        sub_403160(var_5c.d, var_48_1 + 1, 1)
    
    int32_t var_48_2 = 0xf
    int32_t var_4c_2 = 0
    var_5c = 0
else
    ebx.b = 1

if (var_60 u>= 0x10)
    sub_403160(var_74.d, var_60 + 1, 1)

int32_t var_60_1 = 0xf
int32_t var_64_1 = 0
var_74 = 0
var_9c = &advengine::CToken::`vftable'
int32_t var_80
void* var_94

if (var_80 u>= 0x10)
    sub_403160(var_94, var_80 + 1, 1)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
