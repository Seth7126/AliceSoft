// 函数: sub_55fc50
// 地址: 0x55fc50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73b8d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_9c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_80 = arg2
char* eax_4
eax_4.b = *(arg1 + 0xc4) != 0
int32_t var_7c = arg3
char* var_78 = eax_4
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x767890, 0x13)
int32_t var_8_1 = 0
var_8_1.b = 1
char var_44
sub_4abfc0(&var_80, sub_409350(&var_78, &var_2c, &var_44, &var_78))
int32_t var_30

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_8_2 = 0xffffffff
int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44 = 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
sub_403490(&var_2c, 0x7678a4, 0x19)
int32_t var_8_3 = 2
var_8_3.b = 3
sub_4abfc0(&var_80, sub_409350(arg1 + 0xcc, &var_2c, &var_44, arg1 + 0xcc))

if (var_30_1 u>= 0x10)
    sub_403160(var_44.d, var_30_1 + 1, 1)

int32_t var_8_4 = 0xffffffff
int32_t var_30_2 = 0xf
int32_t var_34_1 = 0
var_44 = 0

if (var_18_1 u>= 0x10)
    sub_403160(var_2c.d, var_18_1 + 1, 1)

int32_t var_18_2 = 0xf
int32_t var_1c_2 = 0
var_2c = 0
sub_403490(&var_2c, 0x7678c0, 0x11)
int32_t var_8_5 = 4
var_8_5.b = 5
sub_4abfc0(&var_80, sub_409350(arg1 + 0xd0, &var_2c, &var_44, arg1 + 0xd0))

if (var_30_2 u>= 0x10)
    sub_403160(var_44.d, var_30_2 + 1, 1)

int32_t var_8_6 = 0xffffffff
int32_t var_30_3 = 0xf
int32_t var_34_2 = 0
var_44 = 0

if (var_18_2 u>= 0x10)
    sub_403160(var_2c.d, var_18_2 + 1, 1)

var_78 = *(arg1 + 0xb0)
int32_t var_18_3 = 0xf
int32_t var_1c_3 = 0
var_2c = 0
sub_403490(&var_2c, 0x7678d4, 0x25)
int32_t var_8_7 = 6
var_8_7.b = 7
sub_4abfc0(&var_80, 
    sub_4b0f20(&var_78, &var_2c, &var_44, &var_78, *(arg1 + 0xb4), *(arg1 + 0xbc), *(arg1 + 0xc0)))

if (var_30_3 u>= 0x10)
    sub_403160(var_44.d, var_30_3 + 1, 1)

int32_t var_8_8 = 0xffffffff
int32_t var_30_4 = 0xf
int32_t var_34_3 = 0
var_44 = 0

if (var_18_3 u>= 0x10)
    sub_403160(var_2c.d, var_18_3 + 1, 1)

void* var_5c
char* eax_31 = sub_4b6410(&var_5c, arg1 + 0xd8)
int32_t var_8_9 = 8

if (*(eax_31 + 0x14) u>= 0x10)
    eax_31 = *eax_31

var_78 = eax_31
int32_t var_18_4 = 0xf
int32_t var_1c_4 = 0
var_2c = 0
sub_403490(&var_2c, 0x7678fc, 0xf)
var_8_9.b = 9
var_8_9.b = 0xa
sub_4abfc0(&var_80, sub_409240(&var_78, &var_2c, &var_44, &var_78))

if (var_30_4 u>= 0x10)
    sub_403160(var_44.d, var_30_4 + 1, 1)

int32_t var_30_5 = 0xf
int32_t var_34_4 = 0
var_44 = 0

if (var_18_4 u>= 0x10)
    sub_403160(var_2c.d, var_18_4 + 1, 1)

int32_t var_8_10 = 0xffffffff
int32_t var_18_5 = 0xf
int32_t var_1c_5 = 0
var_2c = 0
int32_t var_48

if (var_48 u>= 0x10)
    sub_403160(var_5c, var_48 + 1, 1)

int32_t var_18_6 = 0xf
char* eax_40
eax_40.b = *(arg1 + 0xf0) != 0
int32_t var_1c_6 = 0
var_78 = eax_40
var_2c = 0
sub_403490(&var_2c, 0x76790c, 0x11)
int32_t var_8_11 = 0xb
var_8_11.b = 0xc
sub_4abfc0(&var_80, sub_409350(&var_78, &var_2c, &var_44, &var_78))

if (var_30_5 u>= 0x10)
    sub_403160(var_44.d, var_30_5 + 1, 1)

int32_t var_8_12 = 0xffffffff
int32_t var_30_6 = 0xf
int32_t var_34_5 = 0
var_44 = 0

if (var_18_6 u>= 0x10)
    sub_403160(var_2c.d, var_18_6 + 1, 1)

int32_t var_18_7 = 0xf
char* eax_47
eax_47.b = *(arg1 + 0xf1) != 0
int32_t var_1c_7 = 0
var_78 = eax_47
var_2c = 0
sub_403490(&var_2c, 0x767920, 0x15)
int32_t var_8_13 = 0xd
var_8_13.b = 0xe
sub_4abfc0(&var_80, sub_409350(&var_78, &var_2c, &var_44, &var_78))

if (var_30_6 u>= 0x10)
    sub_403160(var_44.d, var_30_6 + 1, 1)

int32_t var_8_14 = 0xffffffff
int32_t var_30_7 = 0xf
int32_t var_34_6 = 0
var_44 = 0

if (var_18_7 u>= 0x10)
    sub_403160(var_2c.d, var_18_7 + 1, 1)

int32_t var_18_8 = 0xf
int32_t var_1c_8 = 0
var_2c = 0
sub_403490(&var_2c, 0x767a00, 0xa)
int32_t var_8_15 = 0xf
var_8_15.b = 0x10
sub_4abfc0(&var_80, sub_6ca360(&var_44, &var_2c))

if (var_30_7 u>= 0x10)
    sub_403160(var_44.d, var_30_7 + 1, 1)

int32_t var_8_16 = 0xffffffff
int32_t var_30_8 = 0xf
int32_t var_34_7 = 0
var_44 = 0

if (var_18_8 u>= 0x10)
    sub_403160(var_2c.d, var_18_8 + 1, 1)

void* i = *(arg1 + 0x88)
char* ebx = nullptr

for (int32_t edi_1 = *(arg1 + 0x8c); i != edi_1; i += 0x1c)
    var_78 = ebx
    ebx = &ebx[1]
    int32_t var_18_9 = 0xf
    int32_t var_1c_9 = 0
    var_2c = 0
    sub_403490(&var_2c, 0x767a0c, 8)
    int32_t var_8_17 = 0x11
    var_8_17.b = 0x12
    sub_4abfc0(&var_80, sub_409350(&var_78, &var_2c, &var_44, &var_78))
    
    if (var_30_8 u>= 0x10)
        sub_403160(var_44.d, var_30_8 + 1, 1)
    
    int32_t var_8_18 = 0xffffffff
    int32_t var_30_9 = 0xf
    int32_t var_34_8 = 0
    var_44 = 0
    
    if (var_18_9 u>= 0x10)
        sub_403160(var_2c.d, var_18_9 + 1, 1)
    
    var_78 = *(i + 4)
    int32_t var_18_10 = 0xf
    int32_t var_1c_10 = 0
    var_2c = 0
    sub_403490(&var_2c, "*\t*\t", 0x11)
    int32_t var_8_19 = 0x13
    var_8_19.b = 0x14
    sub_4abfc0(&var_80, sub_409350(&var_78, &var_2c, &var_44, &var_78))
    
    if (var_30_9 u>= 0x10)
        sub_403160(var_44.d, var_30_9 + 1, 1)
    
    int32_t var_8_20 = 0xffffffff
    int32_t var_30_10 = 0xf
    int32_t var_34_9 = 0
    var_44 = 0
    
    if (var_18_10 u>= 0x10)
        sub_403160(var_2c.d, var_18_10 + 1, 1)
    
    var_78 = *(i + 8)
    int32_t var_18_11 = 0xf
    int32_t var_1c_11 = 0
    var_2c = 0
    sub_403490(&var_2c, "*\t*\t", 0xf)
    int32_t var_8_21 = 0x15
    var_8_21.b = 0x16
    sub_4abfc0(&var_80, sub_409350(&var_78, &var_2c, &var_44, &var_78))
    
    if (var_30_10 u>= 0x10)
        sub_403160(var_44.d, var_30_10 + 1, 1)
    
    int32_t var_8_22 = 0xffffffff
    int32_t var_30_11 = 0xf
    int32_t var_34_10 = 0
    var_44 = 0
    
    if (var_18_11 u>= 0x10)
        sub_403160(var_2c.d, var_18_11 + 1, 1)
    
    var_78 = *(i + 0x10)
    int32_t var_18_12 = 0xf
    int32_t var_1c_12 = 0
    var_2c = 0
    sub_403490(&var_2c, "*\t*\t", 0x15)
    int32_t var_8_23 = 0x17
    var_8_23.b = 0x18
    sub_4abfc0(&var_80, sub_422a40(&var_78, &var_2c, &var_44, &var_78, *(i + 0x14), *(i + 0x18)))
    
    if (var_30_11 u>= 0x10)
        sub_403160(var_44.d, var_30_11 + 1, 1)
    
    int32_t var_8_24 = 0xffffffff
    var_30_8 = 0xf
    int32_t var_34_11 = 0
    var_44 = 0
    
    if (var_18_12 u>= 0x10)
        sub_403160(var_2c.d, var_18_12 + 1, 1)

int32_t var_18_13 = 0xf
int32_t var_1c_13 = 0
var_2c = 0
sub_403490(&var_2c, 0x767a54, 0xc)
int32_t var_8_25 = 0x19
sub_4abfc0(&var_80, &var_2c)
int32_t var_8_26 = 0xffffffff
int32_t eax_86 = var_18_13

if (eax_86 u>= 0x10)
    eax_86 = sub_403160(var_2c.d, eax_86 + 1, 1)

int32_t var_8_27 = 0x1a
int32_t var_8_28 = 0xffffffff
ebx.b = sub_558ce0(arg1 + 8, sub_4175e0(eax_86, arg2, &var_5c, "*\t"), arg3) == 0

if (var_48 u>= 0x10)
    sub_403160(var_5c, var_48 + 1, 1)

int32_t result

if (ebx.b == 0)
    int32_t var_18_14 = 0xf
    int32_t var_1c_14 = 0
    var_2c = 0
    sub_403490(&var_2c, 0x767a68, 8)
    int32_t var_8_29 = 0x1b
    sub_4abfc0(&var_80, &var_2c)
    int32_t var_8_30 = 0xffffffff
    int32_t eax_91 = var_18_14
    
    if (eax_91 u>= 0x10)
        eax_91 = sub_403160(var_2c.d, eax_91 + 1, 1)
    
    int32_t var_8_31 = 0x1c
    void* var_74
    ebx.b = sub_558ce0(arg1 + 0x48, sub_4175e0(eax_91, arg2, &var_74, "*\t"), arg3) == 0
    int32_t var_60
    
    if (var_60 u>= 0x10)
        sub_403160(var_74, var_60 + 1, 1)
    
    result.b = ebx.b == 0
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
