// 函数: sub_554490
// 地址: 0x554490
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73aae6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_c4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_b0 = arg2
int32_t var_ac = arg3
void* var_a4
char* eax_6 = sub_4b6410(&var_a4, arg1 + 0x10)
int32_t var_8_1 = 0

if (*(eax_6 + 0x14) u>= 0x10)
    eax_6 = *eax_6

char* var_a8 = eax_6
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x7672c0, 0xd)
var_8_1.b = 1
var_8_1.b = 2
char var_44
sub_4abfc0(&var_b0, sub_409240(&var_a8, &var_2c, &var_44, &var_a8))
int32_t var_30

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44 = 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_8_2 = 0xffffffff
int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
int32_t var_90

if (var_90 u>= 0x10)
    sub_403160(var_a4, var_90 + 1, 1)

int32_t var_18_2 = 0xf
int32_t var_1c_2 = 0
var_2c = 0
sub_403490(&var_2c, 0x7672b0, 0xf)
int32_t var_8_3 = 3
var_8_3.b = 4
sub_4abfc0(&var_b0, sub_5558d0(arg1 + 0x28, &var_2c, &var_44, arg1 + 0x28))

if (var_30_1 u>= 0x10)
    sub_403160(var_44.d, var_30_1 + 1, 1)

int32_t var_30_2 = 0xf
int32_t var_34_1 = 0
var_44 = 0

if (var_18_2 u>= 0x10)
    sub_403160(var_2c.d, var_18_2 + 1, 1)

int32_t ecx_9 = 0xf
int32_t var_4c = 0
int32_t var_48 = 0xf
char var_5c = 0
int32_t var_8_4 = 5
int32_t* esi = *(arg1 + 0x2c)
int32_t edi = *(arg1 + 0x30)

if (esi != edi)
    do
        var_a8 = *esi
        int32_t var_18_3 = 0xf
        int32_t var_1c_3 = 0
        var_2c = 0
        sub_403490(&var_2c, "%d, ", 4)
        var_8_4.b = 6
        var_8_4.b = 7
        sub_4055a0(&var_5c, sub_409350(&var_a8, &var_2c, &var_44, &var_a8), 0, 0xffffffff)
        
        if (var_30_2 u>= 0x10)
            sub_403160(var_44.d, var_30_2 + 1, 1)
        
        var_8_4.b = 5
        var_30_2 = 0xf
        int32_t var_34_2 = 0
        var_44 = 0
        
        if (var_18_3 u>= 0x10)
            sub_403160(var_2c.d, var_18_3 + 1, 1)
        
        esi = &esi[1]
    while (esi != edi)
    
    ecx_9 = var_48

if (*(arg1 + 0x2c) != *(arg1 + 0x30))
    int32_t var_18_4 = 0xf
    char* eax_29 = &var_5c
    int32_t var_1c_4 = 0
    
    if (ecx_9 u>= 0x10)
        eax_29 = var_5c.d
    
    var_a8 = eax_29
    var_2c = 0
    sub_403490(&var_2c, 0x767298, 0xf)
    var_8_4.b = 8
    var_8_4.b = 9
    sub_4abfc0(&var_b0, sub_409240(&var_a8, &var_2c, &var_44, &var_a8))
    
    if (var_30_2 u>= 0x10)
        sub_403160(var_44.d, var_30_2 + 1, 1)
    
    var_8_4.b = 5
    var_30_2 = 0xf
    int32_t var_34_3 = 0
    var_44 = 0
    
    if (var_18_4 u>= 0x10)
        sub_403160(var_2c.d, var_18_4 + 1, 1)

int32_t var_18_5 = 0xf
int32_t var_1c_5 = 0
var_2c = 0
sub_403490(&var_2c, 0x76728c, 9)
var_8_4.b = 0xa
var_8_4.b = 0xb
sub_4abfc0(&var_b0, sub_409350(arg1 + 0x2b0, &var_2c, &var_44, arg1 + 0x2b0))

if (var_30_2 u>= 0x10)
    sub_403160(var_44.d, var_30_2 + 1, 1)

var_8_4.b = 5
int32_t var_30_3 = 0xf
int32_t var_34_4 = 0
var_44 = 0

if (var_18_5 u>= 0x10)
    sub_403160(var_2c.d, var_18_5 + 1, 1)

int32_t var_18_6 = 0xf
char* eax_42
eax_42.b = *(arg1 + 0x2b4) != 0
int32_t var_1c_6 = 0
var_a8 = eax_42
var_2c = 0
sub_403490(&var_2c, 0x76727c, 0xf)
var_8_4.b = 0xc
var_8_4.b = 0xd
sub_4abfc0(&var_b0, sub_409350(&var_a8, &var_2c, &var_44, &var_a8))

if (var_30_3 u>= 0x10)
    sub_403160(var_44.d, var_30_3 + 1, 1)

var_8_4.b = 5
int32_t var_30_4 = 0xf
int32_t var_34_5 = 0
var_44 = 0

if (var_18_6 u>= 0x10)
    sub_403160(var_2c.d, var_18_6 + 1, 1)

int32_t var_18_7 = 0xf
int32_t var_1c_7 = 0
var_2c = 0
sub_403490(&var_2c, 0x767270, 0xb)
var_8_4.b = 0xe
var_8_4.b = 0xf
sub_4abfc0(&var_b0, sub_409350(arg1 + 0x2b8, &var_2c, &var_44, arg1 + 0x2b8))

if (var_30_4 u>= 0x10)
    sub_403160(var_44.d, var_30_4 + 1, 1)

var_8_4.b = 5
int32_t var_30_5 = 0xf
int32_t var_34_6 = 0
var_44 = 0

if (var_18_7 u>= 0x10)
    sub_403160(var_2c.d, var_18_7 + 1, 1)

var_a8 = *(arg1 + 0x27c)
int32_t var_18_8 = 0xf
int32_t var_1c_8 = 0
var_2c = 0
sub_403490(&var_2c, 0x767400, 0x13)
var_8_4.b = 0x10
var_8_4.b = 0x11
sub_4abfc0(&var_b0, sub_409350(&var_a8, &var_2c, &var_44, &var_a8))

if (var_30_5 u>= 0x10)
    sub_403160(var_44.d, var_30_5 + 1, 1)

var_8_4.b = 5
int32_t var_30_6 = 0xf
int32_t var_34_7 = 0
var_44 = 0

if (var_18_8 u>= 0x10)
    sub_403160(var_2c.d, var_18_8 + 1, 1)

var_a8 = *(arg1 + 0x280)
int32_t var_18_9 = 0xf
int32_t var_1c_9 = 0
var_2c = 0
sub_403490(&var_2c, 0x7673ec, 0x13)
var_8_4.b = 0x12
var_8_4.b = 0x13
sub_4abfc0(&var_b0, sub_409350(&var_a8, &var_2c, &var_44, &var_a8))

if (var_30_6 u>= 0x10)
    sub_403160(var_44.d, var_30_6 + 1, 1)

var_8_4.b = 5
int32_t var_30_7 = 0xf
int32_t var_34_8 = 0
var_44 = 0

if (var_18_9 u>= 0x10)
    sub_403160(var_2c.d, var_18_9 + 1, 1)

var_a8 = *(arg1 + 0x284)
int32_t var_18_10 = 0xf
int32_t var_1c_10 = 0
var_2c = 0
sub_403490(&var_2c, 0x7673d0, 0x19)
var_8_4.b = 0x14
var_8_4.b = 0x15
sub_4abfc0(&var_b0, 
    sub_422a40(&var_a8, &var_2c, &var_44, &var_a8, *(arg1 + 0x288), *(arg1 + 0x28c)))

if (var_30_7 u>= 0x10)
    sub_403160(var_44.d, var_30_7 + 1, 1)

var_8_4.b = 5
int32_t var_30_8 = 0xf
int32_t var_34_9 = 0
var_44 = 0

if (var_18_10 u>= 0x10)
    sub_403160(var_2c.d, var_18_10 + 1, 1)

var_a8 = *(arg1 + 0x294)
int32_t var_18_11 = 0xf
int32_t var_1c_11 = 0
var_2c = 0
sub_403490(&var_2c, 0x7673bc, 0x11)
var_8_4.b = 0x16
var_8_4.b = 0x17
sub_4abfc0(&var_b0, sub_417920(&var_a8, &var_2c, &var_44, &var_a8))

if (var_30_8 u>= 0x10)
    sub_403160(var_44.d, var_30_8 + 1, 1)

var_8_4.b = 5
int32_t var_30_9 = 0xf
int32_t var_34_10 = 0
var_44 = 0

if (var_18_11 u>= 0x10)
    sub_403160(var_2c.d, var_18_11 + 1, 1)

var_a8 = *(arg1 + 0x298)
int32_t var_18_12 = 0xf
int32_t var_1c_12 = 0
var_2c = 0
sub_403490(&var_2c, 0x7673a8, 0x13)
var_8_4.b = 0x18
var_8_4.b = 0x19
sub_4abfc0(&var_b0, sub_417920(&var_a8, &var_2c, &var_44, &var_a8))

if (var_30_9 u>= 0x10)
    sub_403160(var_44.d, var_30_9 + 1, 1)

var_8_4.b = 5
int32_t var_30_10 = 0xf
int32_t var_34_11 = 0
var_44 = 0

if (var_18_12 u>= 0x10)
    sub_403160(var_2c.d, var_18_12 + 1, 1)

var_a8 = *(arg1 + 0x29c)
int32_t var_18_13 = 0xf
int32_t var_1c_13 = 0
var_2c = 0
sub_403490(&var_2c, 0x767388, 0x1f)
var_8_4.b = 0x1a
var_8_4.b = 0x1b
sub_4abfc0(&var_b0, 
    sub_422a40(&var_a8, &var_2c, &var_44, &var_a8, *(arg1 + 0x2a0), *(arg1 + 0x2a4)))

if (var_30_10 u>= 0x10)
    sub_403160(var_44.d, var_30_10 + 1, 1)

var_8_4.b = 5
int32_t var_30_11 = 0xf
int32_t var_34_12 = 0
var_44 = 0

if (var_18_13 u>= 0x10)
    sub_403160(var_2c.d, var_18_13 + 1, 1)

int32_t var_18_14 = 0xf
char* eax_95
eax_95.b = *(arg1 + 0x2ac) != 0
int32_t var_1c_14 = 0
var_a8 = eax_95
var_2c = 0
sub_403490(&var_2c, 0x76737c, 9)
var_8_4.b = 0x1c
var_8_4.b = 0x1d
sub_4abfc0(&var_b0, sub_409350(&var_a8, &var_2c, &var_44, &var_a8))

if (var_30_11 u>= 0x10)
    sub_403160(var_44.d, var_30_11 + 1, 1)

var_8_4.b = 5
int32_t var_30_12 = 0xf
int32_t var_34_13 = 0
var_44 = 0

if (var_18_14 u>= 0x10)
    sub_403160(var_2c.d, var_18_14 + 1, 1)

int32_t var_18_15 = 0xf
int32_t var_1c_15 = 0
var_2c = 0
sub_403490(&var_2c, 0x767370, 9)
var_8_4.b = 0x1e
var_8_4.b = 0x1f
sub_4abfc0(&var_b0, sub_409350(arg1 + 0x2bc, &var_2c, &var_44, arg1 + 0x2bc))

if (var_30_12 u>= 0x10)
    sub_403160(var_44.d, var_30_12 + 1, 1)

var_8_4.b = 5
int32_t var_30_13 = 0xf
int32_t var_34_14 = 0
var_44 = 0

if (var_18_15 u>= 0x10)
    sub_403160(var_2c.d, var_18_15 + 1, 1)

int32_t var_18_16 = 0xf
char* eax_108
eax_108.b = *(arg1 + 0x2c0) != 0
int32_t var_1c_16 = 0
var_a8 = eax_108
var_2c = 0
sub_403490(&var_2c, 0x76735c, 0x13)
var_8_4.b = 0x20
var_8_4.b = 0x21
sub_4abfc0(&var_b0, sub_409350(&var_a8, &var_2c, &var_44, &var_a8))

if (var_30_13 u>= 0x10)
    sub_403160(var_44.d, var_30_13 + 1, 1)

var_8_4.b = 5
int32_t var_30_14 = 0xf
int32_t var_34_15 = 0
var_44 = 0

if (var_18_16 u>= 0x10)
    sub_403160(var_2c.d, var_18_16 + 1, 1)

int32_t var_b4 = *(arg1 + 0x2e0)
int32_t var_60 = 0xf
int32_t var_64 = 0
char var_74 = 0
sub_403490(&var_74, 0x767334, 0x25)
var_8_4.b = 0x22
var_8_4.b = 0x23
char var_8c
sub_4abfc0(&var_b0, 
    sub_4b0f20(&var_b4, &var_74, &var_8c, &var_b4, *(arg1 + 0x2e4), *(arg1 + 0x2ec), 
        *(arg1 + 0x2f0)))
int32_t var_78

if (var_78 u>= 0x10)
    sub_403160(var_8c.d, var_78 + 1, 1)

int32_t var_78_1 = 0xf
int32_t var_7c = 0
var_8c = 0

if (var_60 u>= 0x10)
    sub_403160(var_74.d, var_60 + 1, 1)

if (var_48 u>= 0x10)
    sub_403160(var_5c.d, var_48 + 1, 1)

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
