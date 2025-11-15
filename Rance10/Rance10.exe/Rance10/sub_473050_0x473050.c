// 函数: sub_473050
// 地址: 0x473050
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72dc7b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_d0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_bc

if (arg3[5] u< 0x10)
    var_bc = arg3
else
    var_bc = *arg3

int32_t eax_4 = 6

if (arg3[4] u< 6)
    eax_4 = arg3[4]

int32_t eax_5 = sub_406ac0(eax_4, "string", var_bc, eax_4)
int32_t eax_6

if (eax_5 == 0)
    eax_6 = arg3[4]

int32_t result
void* var_30

if (eax_5 != 0 || eax_6 u< 6 || eax_6 u> 6)
    void var_68
    int32_t var_1c
    
    if (*arg4 != arg4[1])
        int32_t var_d4_10 = sub_403360(&var_30, &(*U"+()1)")[1])
        int32_t var_8_7 = 7
        var_8_7.b = 8
        sub_473c10(arg2, sub_471d90(&var_68, &var_30, 6))
        sub_408940(&var_68)
        int32_t var_8_8 = 0xffffffff
        
        if (var_1c u>= 0x10)
            sub_403160(var_30, var_1c + 1, 1)
        
        int32_t var_d4_12 = 0
        sub_4746e0(arg2, arg2[1], *arg4, arg4[1])
        int32_t var_d4_13 = sub_403360(&var_30, U"+()1)")
        int32_t var_8_9 = 9
        var_8_9.b = 0xa
        sub_473c10(arg2, sub_471d90(&var_68, &var_30, 0xf))
        sub_408940(&var_68)
        int32_t var_8_10 = 0xffffffff
        
        if (var_1c u>= 0x10)
            sub_403160(var_30, var_1c + 1, 1)
        
        int32_t var_d4_15 = sub_403360(&var_30, &(*U"+()1)")[3])
        int32_t var_8_11 = 0xb
        var_8_11.b = 0xc
        sub_473c10(arg2, sub_471d90(&var_68, &var_30, 0x11))
        sub_408940(&var_68)
        int32_t var_8_12 = 0xffffffff
        
        if (var_1c u>= 0x10)
            sub_403160(var_30, var_1c + 1, 1)
        
        void* var_80
        int32_t var_d4_17 = sub_403360(&var_80, &(*U"+()1)")[2])
        int32_t var_8_13 = 0xd
        var_8_13.b = 0xe
        void var_b8
        sub_473c10(arg2, sub_471d90(&var_b8, &var_80, 7))
        sub_408940(&var_b8)
        int32_t var_6c
        
        if (var_6c u>= 0x10)
            int32_t var_d4_19 = 1
            sub_403160(var_80, var_6c + 1, 1)
    else
        if (sub_407560(arg3, "#define") == 0)
            sub_467620(arg2, arg3)
        
        int32_t var_d4_3 = sub_403360(&var_30, U"(")
        int32_t var_8_2 = 1
        var_8_2.b = 2
        sub_473c10(arg2, sub_471d90(&var_68, &var_30, 6))
        sub_408940(&var_68)
        int32_t var_8_3 = 0xffffffff
        
        if (var_1c u>= 0x10)
            sub_403160(var_30, var_1c + 1, 1)
        
        int32_t var_d4_5 = sub_403360(&var_30, U"0")
        int32_t var_8_4 = 3
        var_8_4.b = 4
        sub_473c10(arg2, sub_471d90(&var_68, &var_30, 0x11))
        sub_408940(&var_68)
        int32_t var_8_5 = 0xffffffff
        
        if (var_1c u>= 0x10)
            sub_403160(var_30, var_1c + 1, 1)
        
        int32_t var_d4_7 = sub_403360(&var_30, U")0")
        int32_t var_8_6 = 5
        var_8_6.b = 6
        sub_473c10(arg2, sub_471d90(&var_68, &var_30, 7))
        sub_408940(&var_68)
        
        if (var_1c u>= 0x10)
            int32_t var_d4_9 = 1
            sub_403160(var_30, var_1c + 1, 1)
    result.b = 1
else
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    var_30.b = 0
    sub_403490(&var_30, "const string", 0x2e)
    int32_t var_8_1 = 0
    void* eax_7
    
    if (*(arg1 + 0x20) != 0)
        eax_7 = *(arg1 + 0x24)
    
    void* eax_8
    
    if (*(arg1 + 0x20) == 0 || eax_7 == *(arg1 + 0x1c))
        eax_8 = nullptr
    else
        eax_8 = eax_7 + 8
    
    sub_45ebd0(*(arg1 + 0x28), &var_30, eax_8)
    
    if (var_1c_1 u>= 0x10)
        sub_403160(var_30, var_1c_1 + 1, 1)
    
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
