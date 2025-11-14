// 函数: sub_4211a0
// 地址: 0x4211a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_5 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4a46
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_a4
int32_t eax_2 = __security_cookie ^ &var_a4
int32_t __saved_edi
int32_t var_b4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_a4 = 0

switch (arg2)
    case 0
        sub_401f60(arg3, "void")
    case 2
        sub_401f60(arg3, "int")
    case 3
        sub_401f60(arg3, "float")
    case 4
        sub_401f60(arg3, "string")
    case 5, 0xd, 0x1b, 0x3f
        sub_402620(arg3, arg4)
    case 0xa
        sub_401f60(arg3, "int")
    case 0xb
        sub_401f60(arg3, "float")
    case 0xc
        sub_401f60(arg3, "string")
    case 0xe
        void var_40
        char* eax_6 = sub_421630(&var_40, arg5)
        int32_t var_4 = 0
        sub_421670(eax_6.b, "array@int", arg3, eax_6)
        sub_401fb0(&var_40)
    case 0xf
        void var_a0
        char* eax_8 = sub_421630(&var_a0, arg5)
        int32_t var_4_2 = 2
        sub_421670(eax_8.b, "array@float", arg3, eax_8)
        sub_401fb0(&var_a0)
    case 0x10
        void var_88
        char* eax_9 = sub_421630(&var_88, arg5)
        int32_t var_4_3 = 3
        sub_421670(eax_9.b, "array@string", arg3, eax_9)
        sub_401fb0(&var_88)
    case 0x11
        void var_28
        char* eax_10 = sub_421630(&var_28, arg5)
        int32_t var_4_4 = 4
        void var_58
        int32_t* eax_11 = sub_4216c0(eax_10, "array@", &var_58, arg4)
        var_4_4.b = 5
        sub_410a20(eax_11, eax_11, arg3, eax_10)
        sub_401fb0(&var_58)
        sub_401fb0(&var_28)
    case 0x12
        sub_401f60(arg3, "ref int")
    case 0x13
        sub_401f60(arg3, "ref float")
    case 0x14
        sub_401f60(arg3, "ref string")
    case 0x15
        sub_4216c0(arg2, "ref ", arg3, arg4)
    case 0x16
        sub_401f60(arg3, "ref array@int")
    case 0x17
        sub_401f60(arg3, "ref array@float")
    case 0x18
        sub_401f60(arg3, "ref array@string")
    case 0x19
        sub_4216c0(arg2, "ref array@", arg3, arg4)
    case 0x1a
        sub_401f60(arg3, "IMainSystem")
    case 0x1e
        sub_4216c0(arg2, "array@", arg3, arg4)
    case 0x1f
        sub_4216c0(arg2, "ref ", arg3, arg4)
    case 0x20
        sub_4216c0(arg2, "ref array@", arg3, arg4)
    case 0x22
        sub_401f60(arg3, "this")
    case 0x2f
        sub_401f60(arg3, "bool")
    case 0x30
        sub_401f60(arg3, "bool")
    case 0x32
        void var_70
        char* eax_7 = sub_421630(&var_70, arg5)
        int32_t var_4_1 = 1
        sub_421670(eax_7.b, "array@bool", arg3, eax_7)
        sub_401fb0(&var_70)
    case 0x33
        sub_401f60(arg3, "ref bool")
    case 0x34
        sub_401f60(arg3, "ref array@bool")
    case 0x42
        sub_4216c0(arg2, "array@", arg3, arg4)
    case 0x43
        sub_4216c0(arg2, "ref ", arg3, arg4)
    case 0x44
        sub_4216c0(arg2, "ref array@", arg3, arg4)
    default
        *(arg3 + 0x14) = 0xf
        *(arg3 + 0x10) = 0
        *arg3 = 0
        sub_402110(arg3, 0x6da96c, 3)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_a4)
return arg3
