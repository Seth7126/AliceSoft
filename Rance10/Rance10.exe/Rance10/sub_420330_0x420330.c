// 函数: sub_420330
// 地址: 0x420330
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728ed8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_80 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_48
void var_30
void* ecx

switch (arg1)
    case 0
        sub_403450("void")
    case 0xa
        sub_403450("int")
    case 0xb
        sub_403450("float")
    case 0xc
        sub_403450("string")
    case 0xd
        sub_409670(arg3, sub_4201d0(ecx, &var_30, arg2))
        sub_403320(&var_30)
    case 0x12
        sub_403450("ref int")
    case 0x13
        sub_403450("ref float")
    case 0x14
        sub_403450("ref string")
    case 0x15
        char* eax_6 = sub_4201d0(ecx, &var_48, arg2)
        int32_t var_8_1 = 0
        sub_409670(arg3, sub_41a330(eax_6.b, "ref ", &var_30, eax_6))
        sub_403320(&var_30)
        sub_403320(&var_48)
    case 0x2f
        sub_403450("bool")
    case 0x33
        sub_403450("ref bool")
    case 0x3f
        sub_403450("delegate")
    case 0x43
        sub_403450("ref delegate")
    case 0x4f
        sub_409670(arg3, sub_41fce0(ecx, &var_30, arg2, 0))
        sub_403320(&var_30)
    case 0x50
        char* eax_8 = sub_41fce0(ecx, &var_30, arg2, 0)
        int32_t var_8_2 = 1
        sub_409670(arg3, sub_41a330(eax_8.b, "ref ", &var_48, eax_8))
        sub_403320(&var_48)
        sub_403320(&var_30)
    case 0x52
        sub_403450("<address>")
    case 0x59
        void var_78
        char* eax_10 = sub_4201d0(ecx, &var_78, arg2)
        int32_t var_8_3 = 2
        void var_60
        sub_409670(arg3, sub_41a330(eax_10.b, "ref ", &var_60, eax_10))
        sub_403320(&var_60)
        sub_403320(&var_78)
    case 0x5c
        sub_403450("enum")
    case 0x5d
        sub_403450("ref enum")
    default
        sub_403490(arg3, "???", 3)

int32_t* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
