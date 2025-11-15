// 函数: sub_5565c0
// 地址: 0x5565c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73ae08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_7c = arg3
char* eax_4
eax_4.b = *(arg1 + 0x70) != 0
void** var_80 = arg2
char* var_78 = eax_4
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x76755c, 0x11)
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
sub_403490(&var_2c, 0x767550, 8)
int32_t var_8_3 = 2
sub_4abfc0(&var_80, &var_2c)
int32_t var_8_4 = 0xffffffff

if (var_18_1 u>= 0x10)
    sub_403160(var_2c.d, var_18_1 + 1, 1)

void* var_5c
char* eax_15 = sub_4be2e0(&var_5c, (*(**(arg1 + 0x80) + 8))(eax_2))
int32_t var_8_5 = 3

if (*(eax_15 + 0x14) u>= 0x10)
    eax_15 = *eax_15

var_78 = eax_15
int32_t var_18_2 = 0xf
int32_t var_1c_2 = 0
var_2c = 0
sub_403490(&var_2c, 0x767538, 0x15)
var_8_5.b = 4
var_8_5.b = 5
sub_4abfc0(&var_80, sub_409240(&var_78, &var_2c, &var_44, &var_78))

if (var_30_1 u>= 0x10)
    sub_403160(var_44.d, var_30_1 + 1, 1)

int32_t var_30_2 = 0xf
int32_t var_34_1 = 0
var_44 = 0

if (var_18_2 u>= 0x10)
    sub_403160(var_2c.d, var_18_2 + 1, 1)

int32_t var_8_6 = 0xffffffff
int32_t var_48
int32_t eax_22 = var_48
int32_t var_18_3 = 0xf
int32_t var_1c_3 = 0
var_2c = 0

if (eax_22 u>= 0x10)
    eax_22 = sub_403160(var_5c, eax_22 + 1, 1)

int32_t var_8_7 = 6
int32_t var_8_8 = 0xffffffff
void** ebx
ebx.b = (*(**(arg1 + 0x80) + 0x48))(sub_4175e0(eax_22, arg2, &var_5c, "*\t"), arg3) == 0

if (var_48 u>= 0x10)
    sub_403160(var_5c, var_48 + 1, 1)

int32_t result

if (ebx.b == 0)
    int32_t var_18_4 = 0xf
    int32_t var_1c_4 = 0
    var_2c = 0
    sub_403490(&var_2c, 0x767520, 0x10)
    int32_t var_8_9 = 7
    sub_4abfc0(&var_80, &var_2c)
    int32_t var_8_10 = 0xffffffff
    
    if (var_18_4 u>= 0x10)
        sub_403160(var_2c.d, var_18_4 + 1, 1)
    
    char* eax_33 = sub_4be2e0(&var_5c, (*(**(arg1 + 0x84) + 8))())
    int32_t var_8_11 = 8
    
    if (*(eax_33 + 0x14) u>= 0x10)
        eax_33 = *eax_33
    
    var_78 = eax_33
    int32_t var_18_5 = 0xf
    int32_t var_1c_5 = 0
    var_2c = 0
    sub_403490(&var_2c, 0x767508, 0x15)
    var_8_11.b = 9
    var_8_11.b = 0xa
    sub_4abfc0(&var_80, sub_409240(&var_78, &var_2c, &var_44, &var_78))
    
    if (var_30_2 u>= 0x10)
        sub_403160(var_44.d, var_30_2 + 1, 1)
    
    int32_t var_30_3 = 0xf
    int32_t var_34_2 = 0
    var_44 = 0
    
    if (var_18_5 u>= 0x10)
        sub_403160(var_2c.d, var_18_5 + 1, 1)
    
    int32_t var_8_12 = 0xffffffff
    int32_t eax_40 = var_48
    int32_t var_18_6 = 0xf
    int32_t var_1c_6 = 0
    var_2c = 0
    
    if (eax_40 u>= 0x10)
        eax_40 = sub_403160(var_5c, eax_40 + 1, 1)
    
    int32_t var_8_13 = 0xb
    int32_t var_8_14 = 0xffffffff
    ebx.b = (*(**(arg1 + 0x84) + 0x48))(sub_4175e0(eax_40, arg2, &var_5c, "*\t"), arg3) == 0
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c, var_48 + 1, 1)
    
    if (ebx.b != 0)
        result.b = 0
    else
        sub_403360(&var_44, 0x7674f4)
        int32_t var_8_15 = 0xc
        sub_4abfc0(&var_80, &var_44)
        int32_t var_8_16 = 0xffffffff
        
        if (var_30_3 u>= 0x10)
            sub_403160(var_44.d, var_30_3 + 1, 1)
        
        char* eax_51 = sub_4be2e0(&var_5c, (*(**(arg1 + 0x88) + 8))())
        int32_t var_8_17 = 0xd
        
        if (*(eax_51 + 0x14) u>= 0x10)
            eax_51 = *eax_51
        
        var_78 = eax_51
        sub_403360(&var_2c, 0x7674dc)
        var_8_17.b = 0xe
        var_8_17.b = 0xf
        sub_4abfc0(&var_80, sub_409240(&var_78, &var_2c, &var_44, &var_78))
        
        if (var_30_3 u>= 0x10)
            sub_403160(var_44.d, var_30_3 + 1, 1)
        
        int32_t var_30_4 = 0xf
        int32_t var_34_3 = 0
        var_44 = 0
        
        if (var_18_6 u>= 0x10)
            sub_403160(var_2c.d, var_18_6 + 1, 1)
        
        int32_t var_8_18 = 0xffffffff
        int32_t eax_58 = var_48
        int32_t var_18_7 = 0xf
        int32_t var_1c_7 = 0
        var_2c = 0
        
        if (eax_58 u>= 0x10)
            eax_58 = sub_403160(var_5c, eax_58 + 1, 1)
        
        int32_t var_8_19 = 0x10
        void* var_74
        ebx.b = (*(**(arg1 + 0x88) + 0x48))(sub_4175e0(eax_58, arg2, &var_74, "*\t"), arg3) == 0
        int32_t var_60
        
        if (var_60 u>= 0x10)
            sub_403160(var_74, var_60 + 1, 1)
        
        result.b = ebx.b == 0
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
