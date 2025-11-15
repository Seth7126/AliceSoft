// 函数: sub_419be0
// 地址: 0x419be0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7287cd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_70 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_60 = 0
void var_44
void var_2c

switch (*arg1)
    case 0
        sub_403360(arg2, "void")
    case 2
        sub_403360(arg2, "int")
    case 3
        sub_403360(arg2, "float")
    case 4
        sub_403360(arg2, "string")
    case 5
        int32_t* eax_13
        int32_t ebx_7
        
        if (arg1[5] != 0)
            eax_13 = sub_4033b0(&var_44, &arg1[1])
            ebx_7 = 0x100
        else
            eax_13 = sub_403360(&var_2c, "struct")
            ebx_7 = 0x80
        
        sub_4054d0(arg2, eax_13)
        int32_t ebx_8 = ebx_7 | 1
        
        if ((ebx_8 & 0x100) != 0)
            ebx_8 &= 0xfffffeff
            sub_403320(&var_44)
        
        if (ebx_8.b s< 0)
            sub_403320(&var_2c)
    case 0xa
        sub_403360(arg2, "int")
    case 0xb
        sub_403360(arg2, "float")
    case 0xc
        sub_403360(arg2, "string")
    case 0xd
        int32_t* eax_5
        int32_t ebx_1
        
        if (arg1[5] != 0)
            eax_5 = sub_4033b0(&var_2c, &arg1[1])
            ebx_1 = 4
        else
            eax_5 = sub_403360(&var_44, "struct")
            ebx_1 = 2
        
        sub_4054d0(arg2, eax_5)
        int32_t ebx_2 = ebx_1 | 1
        
        if ((ebx_2.b & 4) != 0)
            ebx_2 &= 0xfffffffb
            sub_403320(&var_2c)
        
        if ((ebx_2.b & 2) != 0)
            sub_403320(&var_44)
    case 0x12
        sub_403360(arg2, "ref int")
    case 0x13
        sub_403360(arg2, "ref float")
    case 0x14
        sub_403360(arg2, "ref string")
    case 0x15
        int32_t* eax_19
        int32_t edi_5
        
        if (arg1[5] != 0)
            eax_19 = sub_4033b0(&var_44, &arg1[1])
            int32_t var_8_3 = 9
            edi_5 = 0x4000
        else
            eax_19 = sub_403360(&var_2c, "struct")
            int32_t var_8_2 = 8
            edi_5 = 0x2000
        
        int32_t var_60_1 = edi_5
        sub_41a330(eax_19.b, "ref ", arg2, eax_19)
        int32_t edi_6 = edi_5 | 1
        
        if ((edi_6 & 0x4000) != 0)
            edi_6 &= 0xffffbfff
            sub_403320(&var_44)
        
        if ((edi_6 & 0x2000) != 0)
            sub_403320(&var_2c)
    case 0x22
        sub_403360(arg2, "this")
    case 0x2f
        sub_403360(arg2, "bool")
    case 0x30
        sub_403360(arg2, "bool")
    case 0x33
        sub_403360(arg2, "ref bool")
    case 0x3f
        int32_t* eax_7
        int32_t ebx_3
        
        if (arg1[5] != 0)
            eax_7 = sub_4033b0(&var_44, &arg1[1])
            ebx_3 = 0x10
        else
            eax_7 = sub_403360(&var_2c, "delegate")
            ebx_3 = 8
        
        sub_4054d0(arg2, eax_7)
        int32_t ebx_4 = ebx_3 | 1
        
        if ((ebx_4.b & 0x10) != 0)
            ebx_4 &= 0xffffffef
            sub_403320(&var_44)
        
        if ((ebx_4.b & 8) != 0)
            sub_403320(&var_2c)
    case 0x40
        int32_t* eax_15
        int32_t edi_1
        
        if (arg1[5] != 0)
            eax_15 = sub_4033b0(&var_44, &arg1[1])
            edi_1 = 0x400
        else
            eax_15 = sub_403360(&var_2c, "delegate")
            edi_1 = 0x200
        
        sub_4054d0(arg2, eax_15)
        int32_t edi_2 = edi_1 | 1
        
        if ((edi_2 & 0x400) != 0)
            edi_2 &= 0xfffffbff
            sub_403320(&var_44)
        
        if ((edi_2 & 0x200) != 0)
            sub_403320(&var_2c)
    case 0x43
        int32_t* eax_21
        int32_t edi_7
        
        if (arg1[5] != 0)
            eax_21 = sub_4033b0(&var_44, &arg1[1])
            int32_t var_8_5 = 0xb
            edi_7 = 0x10000
        else
            eax_21 = sub_403360(&var_2c, "delegate")
            int32_t var_8_4 = 0xa
            edi_7 = 0x8000
        
        int32_t var_60_2 = edi_7
        sub_41a330(eax_21.b, "ref ", arg2, eax_21)
        int32_t edi_8 = edi_7 | 1
        
        if ((edi_8 & 0x10000) != 0)
            edi_8 &= 0xfffeffff
            sub_403320(&var_44)
        
        if ((edi_8 & 0x8000) != 0)
            sub_403320(&var_2c)
    case 0x4f
        arg1[7]
        int32_t* eax_8 = sub_419be0(&var_2c)
        int32_t var_8_1 = 2
        int32_t* eax_9 = sub_41a330(eax_8.b, "array<", &var_44, eax_8)
        var_8_1.b = 3
        sub_4176f0(eax_9.b, eax_9, arg2, U">")
        sub_403320(&var_44)
        sub_403320(&var_2c)
    case 0x50
        arg1[7]
        int32_t* eax_22 = sub_419be0(&var_2c)
        int32_t var_8_6 = 0xc
        char* eax_23 = sub_41a330(eax_22.b, "ref array<", &var_44, eax_22)
        var_8_6.b = 0xd
        sub_4176f0(eax_23.b, eax_23, arg2, U">")
        sub_403320(&var_44)
        sub_403320(&var_2c)
    case 0x52
        arg1[7]
        void var_5c
        int32_t* eax_28 = sub_419be0(&var_5c)
        int32_t var_8_11 = 0x12
        sub_4176f0(eax_28.b, eax_28, arg2, U"&")
        sub_403320(&var_5c)
    case 0x59
        int32_t* eax_25
        int32_t edi_9
        
        if (arg1[5] != 0)
            eax_25 = sub_4033b0(&var_44, &arg1[1])
            int32_t var_8_8 = 0xf
            edi_9 = 0x40000
        else
            eax_25 = sub_403360(&var_2c, "interface")
            int32_t var_8_7 = 0xe
            edi_9 = 0x20000
        
        int32_t var_60_3 = edi_9
        sub_41a330(eax_25.b, "ref ", arg2, eax_25)
        int32_t edi_10 = edi_9 | 1
        
        if ((edi_10 & 0x40000) != 0)
            edi_10 &= 0xfffbffff
            sub_403320(&var_44)
        
        if ((edi_10 & 0x20000) != 0)
            sub_403320(&var_2c)
    case 0x5b
        int32_t* eax_17
        int32_t edi_3
        
        if (arg1[5] != 0)
            eax_17 = sub_4033b0(&var_44, &arg1[1])
            edi_3 = 0x1000
        else
            eax_17 = sub_403360(&var_2c, "enum")
            edi_3 = 0x800
        
        sub_4054d0(arg2, eax_17)
        int32_t edi_4 = edi_3 | 1
        
        if ((edi_4 & 0x1000) != 0)
            edi_4 &= 0xffffefff
            sub_403320(&var_44)
        
        if ((edi_4 & 0x800) != 0)
            sub_403320(&var_2c)
    case 0x5c
        int32_t* eax_11
        int32_t ebx_5
        
        if (arg1[5] != 0)
            eax_11 = sub_4033b0(&var_44, &arg1[1])
            ebx_5 = 0x40
        else
            eax_11 = sub_403360(&var_2c, "enum")
            ebx_5 = 0x20
        
        sub_4054d0(arg2, eax_11)
        int32_t ebx_6 = ebx_5 | 1
        
        if ((ebx_6.b & 0x40) != 0)
            ebx_6 &= 0xffffffbf
            sub_403320(&var_44)
        
        if ((ebx_6.b & 0x20) != 0)
            sub_403320(&var_2c)
    case 0x5d
        int32_t* eax_27
        int32_t edi_11
        
        if (arg1[5] != 0)
            eax_27 = sub_4033b0(&var_44, &arg1[1])
            int32_t var_8_10 = 0x11
            edi_11 = 0x100000
        else
            eax_27 = sub_403360(&var_2c, "enum")
            int32_t var_8_9 = 0x10
            edi_11 = 0x80000
        
        int32_t var_60_4 = edi_11
        sub_41a330(eax_27.b, "ref ", arg2, eax_27)
        int32_t edi_12 = edi_11 | 1
        
        if ((edi_12 & 0x100000) != 0)
            edi_12 &= 0xffefffff
            sub_403320(&var_44)
        
        if ((edi_12 & 0x80000) != 0)
            sub_403320(&var_2c)
    default
        *(arg2 + 0x14) = 0xf
        *(arg2 + 0x10) = 0
        *arg2 = 0
        sub_403490(arg2, "???", 3)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
