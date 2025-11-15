// 函数: sub_459d50
// 地址: 0x459d50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72bb80
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_88 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_7c = 0
void var_48
void var_30

switch (*(arg1 + 4))
    case 0
        sub_403360(arg2, "void")
    case 2
        sub_403360(arg2, "int")
    case 3
        sub_403360(arg2, "float")
    case 4
        sub_403360(arg2, "string")
    case 5, 0xd, 0x3f, 0x40
        sub_4033b0(arg2, arg1 + 8)
    case 0xa
        sub_403360(arg2, "int")
    case 0xb
        sub_403360(arg2, "float")
    case 0xc
        sub_403360(arg2, "string")
    case 0x12
        sub_403360(arg2, "ref int")
    case 0x13
        sub_403360(arg2, "ref float")
    case 0x14
        sub_403360(arg2, "ref string")
    case 0x15
        sub_419600(arg1 + 8, "ref ", arg2, arg1 + 8)
    case 0x22
        sub_403360(arg2, "this")
    case 0x2f
        sub_403360(arg2, "bool")
    case 0x30
        sub_403360(arg2, "bool")
    case 0x33
        sub_403360(arg2, "ref bool")
    case 0x43
        sub_419600(arg1 + 8, "ref ", arg2, arg1 + 8)
    case 0x4e
        *(arg1 + 0x20)
        int32_t* eax_7 = sub_459d50(&var_30)
        int32_t var_8_2 = 2
        int32_t* eax_8 = sub_41a330(eax_7.b, "array<", &var_48, eax_7)
        var_8_2.b = 3
        sub_4176f0(eax_8.b, eax_8, arg2, U">")
        sub_403320(&var_48)
        sub_403320(&var_30)
    case 0x4f
        *(arg1 + 0x20)
        int32_t* eax_5 = sub_459d50(&var_48)
        int32_t var_8_1 = 0
        char* eax_6 = sub_41a330(eax_5.b, "array<", &var_30, eax_5)
        var_8_1.b = 1
        sub_4176f0(eax_6.b, eax_6, arg2, U">")
        sub_403320(&var_30)
        sub_403320(&var_48)
    case 0x50
        *(arg1 + 0x20)
        void var_78
        int32_t* eax_11 = sub_459d50(&var_78)
        int32_t var_8_3 = 4
        void var_60
        int32_t* eax_12 = sub_41a330(eax_11.b, "ref array<", &var_60, eax_11)
        var_8_3.b = 5
        sub_4176f0(eax_12.b, eax_12, arg2, U">")
        sub_403320(&var_60)
        sub_403320(&var_78)
    case 0x59
        sub_419600(arg1 + 8, "ref ", arg2, arg1 + 8)
    default
        *(arg2 + 0x14) = 0xf
        *(arg2 + 0x10) = 0
        *arg2 = 0
        sub_403490(arg2, "???", 3)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
