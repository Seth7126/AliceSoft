// 函数: sub_469620
// 地址: 0x469620
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72ccf7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_104 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_f0 = arg1
int32_t var_f4 = 0
int32_t eax_4

if (*(arg2 + 0x38) != 0)
    eax_4 = *(arg2 + 0x34)

if (*(arg2 + 0x38) != 0 && (eax_4 == 6 || eax_4 == 4))
    void* var_d4
    char* eax_5 = sub_4698e0(&var_d4, arg2)
    int32_t var_8_1 = 0
    var_8_1.b = 1
    char var_74
    char var_5c[0x10]
    char* eax_7 = sub_46a560(&var_5c, sub_46de30(arg2, &var_74))
    var_8_1.b = 2
    char var_44
    char* eax_8 = sub_41a330(eax_7.b, U"@", &var_44, eax_7)
    var_8_1.b = 3
    char var_2c[0x10]
    char* eax_9 = sub_4177a0(eax_8, eax_8, &var_2c, eax_5)
    var_8_1.b = 4
    sub_4176f0(eax_9.b, eax_9, arg1, "\r\n")
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c[0].d, var_18 + 1, 1)
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c[0] = 0
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    int32_t var_48
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c[0].d, var_48 + 1, 1)
    
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    var_5c[0] = 0
    int32_t var_60
    
    if (var_60 u>= 0x10)
        sub_403160(var_74.d, var_60 + 1, 1)
    
    int32_t var_60_1 = 0xf
    int32_t var_64_1 = 0
    var_74 = 0
    int32_t var_c0
    
    if (var_c0 u>= 0x10)
        int32_t var_108_3 = 1
        sub_403160(var_d4, var_c0 + 1, 1)
else
    void* var_ec
    char* eax_18 = sub_4698e0(&var_ec, arg2)
    int32_t var_8_2 = 5
    var_8_2.b = 6
    char var_bc
    char var_a4[0x10]
    void* eax_20 = sub_46a560(&var_a4, sub_46de30(arg2, &var_bc))
    var_8_2.b = 7
    char var_8c[0x10]
    char* eax_21 = sub_4177a0(eax_20, eax_20, &var_8c, eax_18)
    var_8_2.b = 8
    sub_4176f0(eax_21.b, eax_21, arg1, "\r\n")
    int32_t var_78
    
    if (var_78 u>= 0x10)
        sub_403160(var_8c[0].d, var_78 + 1, 1)
    
    int32_t var_78_1 = 0xf
    int32_t var_7c_1 = 0
    var_8c[0] = 0
    int32_t var_90
    
    if (var_90 u>= 0x10)
        sub_403160(var_a4[0].d, var_90 + 1, 1)
    
    int32_t var_90_1 = 0xf
    int32_t var_94_1 = 0
    var_a4[0] = 0
    int32_t var_a8
    
    if (var_a8 u>= 0x10)
        sub_403160(var_bc.d, var_a8 + 1, 1)
    
    int32_t var_a8_1 = 0xf
    int32_t var_ac_1 = 0
    var_bc = 0
    int32_t var_d8
    
    if (var_d8 u>= 0x10)
        int32_t var_108_6 = 1
        sub_403160(var_ec, var_d8 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
