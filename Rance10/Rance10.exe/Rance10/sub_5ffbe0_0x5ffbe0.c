// 函数: sub_5ffbe0
// 地址: 0x5ffbe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_742520
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_60 = 0
void var_44
void var_2c
int32_t* eax_5

switch (*(arg1 + 4) - 0xa)
    case 0
        sub_403360(arg2, "int")
    case 1
        sub_403360(arg2, "float")
    case 2
        sub_403360(arg2, "string")
    case 3
        sub_5fff10(arg1, arg2, arg3)
    case 8
        sub_403360(arg2, "ref int")
    case 9
        sub_403360(arg2, "ref float")
    case 0xa
        sub_403360(arg2, "ref string")
    case 0xb
        eax_5 = sub_5fff10(arg1, &var_2c, arg3)
        int32_t var_8_1 = 0
        sub_41a330(eax_5.b, "ref ", arg2, eax_5)
        sub_403320(&var_2c)
    case 0x25
        sub_403360(arg2, "bool")
    case 0x29
        sub_403360(arg2, "ref bool")
    case 0x35
        sub_5fffa0(arg1, arg2, arg3)
    case 0x39
        eax_5 = sub_5fffa0(arg1, &var_2c, arg3)
        int32_t var_8_2 = 1
        sub_41a330(eax_5.b, "ref ", arg2, eax_5)
        sub_403320(&var_2c)
    case 0x45
        sub_6000a0(arg1 + 0xc, 0)
        int32_t* eax_7 = sub_5ffbe0(&var_44, arg3)
        int32_t var_8_3 = 2
        char* eax_8 = sub_41a330(eax_7.b, "array<", &var_2c, eax_7)
        var_8_3.b = 3
        sub_4176f0(eax_8.b, eax_8, arg2, U">")
        sub_403320(&var_2c)
        sub_403320(&var_44)
    case 0x46
        sub_6000a0(arg1 + 0xc, 0)
        int32_t* eax_10 = sub_5ffbe0(&var_2c, arg3)
        int32_t var_8_4 = 4
        char* eax_11 = sub_41a330(eax_10.b, "ref array<", &var_44, eax_10)
        var_8_4.b = 5
        sub_4176f0(eax_11.b, eax_11, arg2, U">")
        sub_403320(&var_44)
        sub_403320(&var_2c)
    case 0x4f
        char* eax_12 = sub_5fff10(arg1, &var_44, arg3)
        int32_t var_8_5 = 6
        sub_41a330(eax_12.b, "ref ", arg2, eax_12)
        sub_403320(&var_44)
    case 0x52
        sub_600020(arg1, arg2, arg3)
    case 0x53
        void var_5c
        char* eax_13 = sub_600020(arg1, &var_5c, arg3)
        int32_t var_8_6 = 7
        sub_41a330(eax_13.b, "ref ", arg2, eax_13)
        sub_403320(&var_5c)
    default
        *(arg2 + 0x14) = 0xf
        *(arg2 + 0x10) = 0
        *arg2 = 0
        sub_403490(arg2, "unknown_type", 0xc)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
