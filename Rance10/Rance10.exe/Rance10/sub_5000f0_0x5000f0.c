// 函数: sub_5000f0
// 地址: 0x5000f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_84 = 0xffffffff
int32_t (* var_88)(void* arg1) = sub_736da8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_80
int32_t eax_2 = __security_cookie ^ &var_80
int32_t var_a8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_98 = arg2
int32_t var_94 = arg3
int32_t var_c = 0xf
int32_t var_10 = 0
char var_20 = 0
sub_403490(&var_20, 0x765bdc, 0x11)
int32_t var_84_1 = 0
var_84_1.b = 1
char var_38[0x10]
sub_4abfc0(&var_98, sub_417810(&arg1[0x13], &var_20, &var_38, &arg1[0x13], arg1[0x15]))
int32_t var_24

if (var_24 u>= 0x10)
    sub_403160(var_38[0].d, var_24 + 1, 1)

int32_t var_84_2 = 0xffffffff
int32_t var_24_1 = 0xf
int32_t var_28 = 0
var_38[0] = 0

if (var_c u>= 0x10)
    sub_403160(var_20.d, var_c + 1, 1)

int32_t var_c_1 = 0xf
int32_t var_10_1 = 0
var_20 = 0
sub_403490(&var_20, 0x765bcc, 0xd)
int32_t var_84_3 = 2
var_84_3.b = 3
sub_4abfc0(&var_98, sub_409350(&arg1[0x14], &var_20, &var_38, &arg1[0x14]))

if (var_24_1 u>= 0x10)
    sub_403160(var_38[0].d, var_24_1 + 1, 1)

int32_t var_84_4 = 0xffffffff
int32_t var_24_2 = 0xf
int32_t var_28_1 = 0
var_38[0] = 0

if (var_c_1 u>= 0x10)
    sub_403160(var_20.d, var_c_1 + 1, 1)

int32_t var_c_2 = 0xf
int32_t var_10_2 = 0
var_20 = 0
sub_403490(&var_20, 0x765c00, 0x13)
int32_t var_84_5 = 4
var_84_5.b = 5
sub_4abfc0(&var_98, sub_417810(&arg1[0x16], &var_20, &var_38, &arg1[0x16], arg1[0x17]))

if (var_24_2 u>= 0x10)
    sub_403160(var_38[0].d, var_24_2 + 1, 1)

int32_t var_84_6 = 0xffffffff
int32_t var_24_3 = 0xf
int32_t var_28_2 = 0
var_38[0] = 0

if (var_c_2 u>= 0x10)
    sub_403160(var_20.d, var_c_2 + 1, 1)

void* var_68
char* eax_24 = sub_4b6410(&var_68, &arg1[0x18])
int32_t var_84_7 = 6

if (*(eax_24 + 0x14) u>= 0x10)
    eax_24 = *eax_24

char* var_90 = eax_24
int32_t var_c_3 = 0xf
int32_t var_10_3 = 0
var_20 = 0
sub_403490(&var_20, 0x765bf0, 0xd)
var_84_7.b = 7
var_84_7.b = 8
sub_4abfc0(&var_98, sub_409240(&var_90, &var_20, &var_38, &var_90))

if (var_24_3 u>= 0x10)
    sub_403160(var_38[0].d, var_24_3 + 1, 1)

int32_t var_24_4 = 0xf
int32_t var_28_3 = 0
var_38[0] = 0

if (var_c_3 u>= 0x10)
    sub_403160(var_20.d, var_c_3 + 1, 1)

int32_t var_84_8 = 0xffffffff
int32_t var_c_4 = 0xf
int32_t var_10_4 = 0
var_20 = 0
int32_t var_54

if (var_54 u>= 0x10)
    sub_403160(var_68, var_54 + 1, 1)

int32_t var_c_5 = 0xf
int32_t var_10_5 = 0
var_20 = 0
sub_403490(&var_20, 0x765b88, 0x13)
int32_t var_84_9 = 9
var_84_9.b = 0xa
sub_4abfc0(&var_98, sub_409350(&arg1[0x1e], &var_20, &var_38, &arg1[0x1e]))

if (var_24_4 u>= 0x10)
    sub_403160(var_38[0].d, var_24_4 + 1, 1)

int32_t var_84_10 = 0xffffffff
int32_t var_24_5 = 0xf
int32_t var_28_4 = 0
var_38[0] = 0

if (var_c_5 u>= 0x10)
    sub_403160(var_20.d, var_c_5 + 1, 1)

var_90 = arg1[0x20]
int32_t var_c_6 = 0xf
int32_t var_10_6 = 0
var_20 = 0
sub_403490(&var_20, 0x765b74, 0x13)
int32_t var_84_11 = 0xb
var_84_11.b = 0xc
sub_4abfc0(&var_98, sub_409350(&var_90, &var_20, &var_38, &var_90))

if (var_24_5 u>= 0x10)
    sub_403160(var_38[0].d, var_24_5 + 1, 1)

int32_t var_84_12 = 0xffffffff
int32_t var_24_6 = 0xf
int32_t var_28_5 = 0
var_38[0] = 0

if (var_c_6 u>= 0x10)
    sub_403160(var_20.d, var_c_6 + 1, 1)

var_90 = arg1[0x21]
int32_t var_c_7 = 0xf
int32_t var_10_7 = 0
var_20 = 0
sub_403490(&var_20, 0x765bb8, 0x13)
int32_t var_84_13 = 0xd
var_84_13.b = 0xe
sub_4abfc0(&var_98, sub_409350(&var_90, &var_20, &var_38, &var_90))

if (var_24_6 u>= 0x10)
    sub_403160(var_38[0].d, var_24_6 + 1, 1)

int32_t var_84_14 = 0xffffffff
int32_t var_24_7 = 0xf
int32_t var_28_6 = 0
var_38[0] = 0

if (var_c_7 u>= 0x10)
    sub_403160(var_20.d, var_c_7 + 1, 1)

var_90 = arg1[0x22]
int32_t var_c_8 = 0xf
int32_t var_10_8 = 0
var_20 = 0
sub_403490(&var_20, 0x765b9c, 0x19)
int32_t var_84_15 = 0xf
var_84_15.b = 0x10
sub_4abfc0(&var_98, sub_422a40(&var_90, &var_20, &var_38, &var_90, arg1[0x23], arg1[0x24]))

if (var_24_7 u>= 0x10)
    sub_403160(var_38[0].d, var_24_7 + 1, 1)

int32_t var_84_16 = 0xffffffff
int32_t var_24_8 = 0xf
int32_t var_28_7 = 0
var_38[0] = 0

if (var_c_8 u>= 0x10)
    sub_403160(var_20.d, var_c_8 + 1, 1)

var_90 = arg1[0x26]
int32_t var_c_9 = 0xf
int32_t var_10_9 = 0
var_20 = 0
sub_403490(&var_20, 0x765b28, 0x11)
int32_t var_84_17 = 0x11
var_84_17.b = 0x12
sub_4abfc0(&var_98, sub_417920(&var_90, &var_20, &var_38, &var_90))

if (var_24_8 u>= 0x10)
    sub_403160(var_38[0].d, var_24_8 + 1, 1)

int32_t var_84_18 = 0xffffffff
int32_t var_24_9 = 0xf
int32_t var_28_8 = 0
var_38[0] = 0

if (var_c_9 u>= 0x10)
    sub_403160(var_20.d, var_c_9 + 1, 1)

var_90 = arg1[0x27]
int32_t var_c_10 = 0xf
int32_t var_10_10 = 0
var_20 = 0
sub_403490(&var_20, 0x765b14, 0x13)
int32_t var_84_19 = 0x13
var_84_19.b = 0x14
sub_4abfc0(&var_98, sub_417920(&var_90, &var_20, &var_38, &var_90))

if (var_24_9 u>= 0x10)
    sub_403160(var_38[0].d, var_24_9 + 1, 1)

int32_t var_84_20 = 0xffffffff
int32_t var_24_10 = 0xf
int32_t var_28_9 = 0
var_38[0] = 0

if (var_c_10 u>= 0x10)
    sub_403160(var_20.d, var_c_10 + 1, 1)

var_90 = arg1[0x28]
int32_t var_c_11 = 0xf
int32_t var_10_11 = 0
var_20 = 0
sub_403490(&var_20, 0x765b54, 0x1f)
int32_t var_84_21 = 0x15
var_84_21.b = 0x16
sub_4abfc0(&var_98, sub_422a40(&var_90, &var_20, &var_38, &var_90, arg1[0x29], arg1[0x2a]))

if (var_24_10 u>= 0x10)
    sub_403160(var_38[0].d, var_24_10 + 1, 1)

int32_t var_84_22 = 0xffffffff
int32_t var_24_11 = 0xf
int32_t var_28_10 = 0
var_38[0] = 0

if (var_c_11 u>= 0x10)
    sub_403160(var_20.d, var_c_11 + 1, 1)

int32_t var_c_12 = 0xf
int32_t var_10_12 = 0
var_20 = 0
sub_403490(&var_20, 0x765b3c, 0x15)
int32_t var_84_23 = 0x17
var_84_23.b = 0x18
sub_4abfc0(&var_98, sub_409350(&arg1[0x2f], &var_20, &var_38, &arg1[0x2f]))

if (var_24_11 u>= 0x10)
    sub_403160(var_38[0].d, var_24_11 + 1, 1)

int32_t var_84_24 = 0xffffffff
int32_t var_24_12 = 0xf
int32_t var_28_11 = 0
var_38[0] = 0

if (var_c_12 u>= 0x10)
    sub_403160(var_20.d, var_c_12 + 1, 1)

int32_t var_c_13 = 0xf
int32_t var_10_13 = 0
var_20 = 0
sub_403490(&var_20, 0x765afc, 0xd)
int32_t var_84_25 = 0x19
var_84_25.b = 0x1a
sub_4abfc0(&var_98, sub_409350(&arg1[0x30], &var_20, &var_38, &arg1[0x30]))

if (var_24_12 u>= 0x10)
    sub_403160(var_38[0].d, var_24_12 + 1, 1)

int32_t var_24_13 = 0xf
int32_t var_28_12 = 0
var_38[0] = 0

if (var_c_13 u>= 0x10)
    sub_403160(var_20.d, var_c_13 + 1, 1)

int32_t var_c_14 = 0xf
int32_t var_10_14 = 0
var_20 = 0
int32_t var_84_26 = 0x1b
int32_t i = 0
int32_t eax_91
int32_t edx_13
edx_13:eax_91 = muls.dp.d(0x2aaaaaab, arg1[0x2d] - arg1[0x2c])
int32_t edx_14 = edx_13 s>> 2

if ((edx_14 u>> 0x1f) + edx_14 s> 0)
    int32_t ebx_1 = 0
    char var_50[0x10]
    int32_t var_3c
    int32_t edx_19
    
    do
        int32_t eax_94
        int32_t edx_15
        edx_15:eax_94 = muls.dp.d(0x2aaaaaab, arg1[0x2d] - arg1[0x2c])
        int32_t edx_16 = edx_15 s>> 2
        void** eax_99
        
        if ((edx_16 u>> 0x1f) + edx_16 s<= i || i s< 0)
            eax_99 = arg1
        else
            eax_99 = arg1[0x2c] + ebx_1
        
        char* eax_100 = sub_4b6410(&var_68, eax_99)
        var_84_26.b = 0x1c
        char* eax_101 = sub_41a330(eax_100.b, U""", &var_50, eax_100)
        var_84_26.b = 0x1d
        var_84_26.b = 0x1e
        sub_4055a0(&var_20, sub_4176f0(eax_101.b, eax_101, &var_38, "", "), 0, 0xffffffff)
        
        if (var_24_13 u>= 0x10)
            sub_403160(var_38[0].d, var_24_13 + 1, 1)
        
        var_24_13 = 0xf
        int32_t var_28_13 = 0
        var_38[0] = 0
        
        if (var_3c u>= 0x10)
            sub_403160(var_50[0].d, var_3c + 1, 1)
        
        var_84_26.b = 0x1b
        var_3c = 0xf
        int32_t var_40_1 = 0
        var_50[0] = 0
        
        if (var_54 u>= 0x10)
            sub_403160(var_68, var_54 + 1, 1)
        
        i += 1
        int32_t eax_109
        int32_t edx_18
        edx_18:eax_109 = muls.dp.d(0x2aaaaaab, arg1[0x2d] - arg1[0x2c])
        ebx_1 += 0x18
        edx_19 = edx_18 s>> 2
    while (i s< (edx_19 u>> 0x1f) + edx_19)
    
    if (var_10_14 != 0)
        int32_t* eax_114 = sub_419600(&var_20, 0x765cc0, &var_80, &var_20)
        var_84_26.b = 0x1f
        var_84_26.b = 0x20
        sub_4abfc0(&var_98, sub_4176f0(eax_114.b, eax_114, &var_50, U"]""))
        
        if (var_3c u>= 0x10)
            sub_403160(var_50[0].d, var_3c + 1, 1)
        
        int32_t var_3c_1 = 0xf
        int32_t var_40_2 = 0
        var_50[0] = 0
        int32_t var_6c
        
        if (var_6c u>= 0x10)
            sub_403160(var_80, var_6c + 1, 1)
    
    if (var_c_14 u>= 0x10)
        sub_403160(var_20.d, var_c_14 + 1, 1)

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_80)
return result
