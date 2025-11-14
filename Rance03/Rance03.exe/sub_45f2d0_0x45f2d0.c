// 函数: sub_45f2d0
// 地址: 0x45f2d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_21 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b88f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_esi
int32_t var_50 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
char* edx = *(arg1 + 4)
var_48 = 0

if (*(arg1 + 0xc) u> edx)
    char eax_5 = *edx
    
    if ((eax_5 u>= 0x81 && eax_5 u<= 0x9f) || (eax_5 u>= 0xe0 && eax_5 u<= 0xef))
        sub_45f6f0(arg1, arg2)
    else if (eax_5 == 0x22)
        sub_45fa70(arg1, arg2)
    else
        void var_44
        
        if (eax_5 == 0x28)
            *(arg1 + 4) = &edx[1]
            int32_t var_54_2 = sub_401f60(&var_44, &(*U";[),(-*>+}<]{^=~@&|/%")[4])
            int32_t var_4 = 0
            sub_466170(arg2, &var_44, 5)
            sub_401fb0(&var_44)
        else if (eax_5 == 0x29)
            *(arg1 + 4) = &edx[1]
            int32_t var_54_3 = sub_401f60(&var_44, &(*U";[),(-*>+}<]{^=~@&|/%")[2])
            int32_t var_4_1 = 1
            sub_466170(arg2, &var_44, 6)
            sub_401fb0(&var_44)
        else if (eax_5 == 0x2c)
            *(arg1 + 4) = &edx[1]
            int32_t var_54_4 = sub_401f60(&var_44, &(*U";[),(-*>+}<]{^=~@&|/%")[3])
            int32_t var_4_2 = 2
            sub_466170(arg2, &var_44, 4)
            sub_401fb0(&var_44)
        else if (eax_5 == 0x3b)
            *(arg1 + 4) = &edx[1]
            int32_t var_54_5 = sub_401f60(&var_44, U";[),(-*>+}<]{^=~@&|/%")
            int32_t var_4_3 = 3
            sub_466170(arg2, &var_44, 3)
            sub_401fb0(&var_44)
        else if (eax_5 == 0x5b)
            *(arg1 + 4) = &edx[1]
            int32_t var_54_6 = sub_401f60(&var_44, &(*U";[),(-*>+}<]{^=~@&|/%")[1])
            int32_t var_4_4 = 4
            sub_466170(arg2, &var_44, 9)
            sub_401fb0(&var_44)
        else if (eax_5 == 0x5d)
            *(arg1 + 4) = &edx[1]
            int32_t var_54_7 = sub_401f60(&var_44, &(*U";[),(-*>+}<]{^=~@&|/%")[0xb])
            int32_t var_4_5 = 5
            sub_466170(arg2, &var_44, 0xa)
            sub_401fb0(&var_44)
        else if (eax_5 == 0x7b)
            *(arg1 + 4) = &edx[1]
            int32_t var_54_8 = sub_401f60(&var_44, &(*U";[),(-*>+}<]{^=~@&|/%")[0xc])
            int32_t var_4_6 = 6
            sub_466170(arg2, &var_44, 7)
            sub_401fb0(&var_44)
        else if (eax_5 == 0x7d)
            *(arg1 + 4) = &edx[1]
            int32_t var_54_9 = sub_401f60(&var_44, &(*U";[),(-*>+}<]{^=~@&|/%")[9])
            int32_t var_4_7 = 7
            sub_466170(arg2, &var_44, 8)
            sub_401fb0(&var_44)
        else if (eax_5 == 0x3c)
            *(arg1 + 4) = &edx[1]
            int32_t var_54_10 = sub_401f60(&var_44, &(*U";[),(-*>+}<]{^=~@&|/%")[0xa])
            int32_t var_4_8 = 8
            sub_466170(arg2, &var_44, 0x13)
            sub_401fb0(&var_44)
        else if (eax_5 == 0x3e)
            *(arg1 + 4) = &edx[1]
            int32_t var_54_11 = sub_401f60(&var_44, &(*U";[),(-*>+}<]{^=~@&|/%")[7])
            int32_t var_4_9 = 9
            sub_466170(arg2, &var_44, 0x14)
            sub_401fb0(&var_44)
        else if (eax_5 == 0x2b)
            *(arg1 + 4) = &edx[1]
            int32_t var_54_12 = sub_401f60(&var_44, &(*U";[),(-*>+}<]{^=~@&|/%")[8])
            int32_t var_4_10 = 0xa
            sub_466170(arg2, &var_44, 0xe)
            sub_401fb0(&var_44)
        else if (eax_5 == 0x2d)
            *(arg1 + 4) = &edx[1]
            int32_t var_54_13 = sub_401f60(&var_44, &(*U";[),(-*>+}<]{^=~@&|/%")[5])
            int32_t var_4_11 = 0xb
            sub_466170(arg2, &var_44, 0xf)
            sub_401fb0(&var_44)
        else if (eax_5 == 0x2a)
            *(arg1 + 4) = &edx[1]
            int32_t var_54_14 = sub_401f60(&var_44, &(*U";[),(-*>+}<]{^=~@&|/%")[6])
            int32_t var_4_12 = 0xc
            sub_466170(arg2, &var_44, 0xc)
            sub_401fb0(&var_44)
        else if (eax_5 == 0x2f)
            *(arg1 + 4) = &edx[1]
            int32_t var_54_15 = sub_401f60(&var_44, &(*U";[),(-*>+}<]{^=~@&|/%")[0x13])
            int32_t var_4_13 = 0xd
            sub_466170(arg2, &var_44, 0xd)
            sub_401fb0(&var_44)
        else if (eax_5 == 0x25)
            *(arg1 + 4) = &edx[1]
            int32_t var_54_16 = sub_401f60(&var_44, &(*U";[),(-*>+}<]{^=~@&|/%")[0x14])
            int32_t var_4_14 = 0xe
            sub_466170(arg2, &var_44, 0x18)
            sub_401fb0(&var_44)
        else if (eax_5 == 0x26)
            *(arg1 + 4) = &edx[1]
            int32_t var_54_17 = sub_401f60(&var_44, &(*U";[),(-*>+}<]{^=~@&|/%")[0x11])
            int32_t var_4_15 = 0xf
            sub_466170(arg2, &var_44, 0x19)
            sub_401fb0(&var_44)
        else if (eax_5 == 0x7c)
            *(arg1 + 4) = &edx[1]
            int32_t var_54_18 = sub_401f60(&var_44, &(*U";[),(-*>+}<]{^=~@&|/%")[0x12])
            int32_t var_4_16 = 0x10
            sub_466170(arg2, &var_44, 0x1a)
            sub_401fb0(&var_44)
        else if (eax_5 == 0x7e)
            *(arg1 + 4) = &edx[1]
            int32_t var_54_19 = sub_401f60(&var_44, &(*U";[),(-*>+}<]{^=~@&|/%")[0xf])
            int32_t var_4_17 = 0x11
            sub_466170(arg2, &var_44, 0x1c)
            sub_401fb0(&var_44)
        else if (eax_5 == 0x40)
            *(arg1 + 4) = &edx[1]
            int32_t var_54_20 = sub_401f60(&var_44, &(*U";[),(-*>+}<]{^=~@&|/%")[0x10])
            int32_t var_4_18 = 0x12
            sub_466170(arg2, &var_44, 0x1d)
            sub_401fb0(&var_44)
        else if (eax_5 == 0x5e)
            *(arg1 + 4) = &edx[1]
            int32_t var_54_21 = sub_401f60(&var_44, &(*U";[),(-*>+}<]{^=~@&|/%")[0xd])
            int32_t var_4_19 = 0x13
            sub_466170(arg2, &var_44, 0x1b)
            sub_401fb0(&var_44)
        else if (eax_5 == 0x3d)
            *(arg1 + 4) = &edx[1]
            void var_2c
            int32_t var_54_22 = sub_401f60(&var_2c, &(*U";[),(-*>+}<]{^=~@&|/%")[0xe])
            int32_t var_4_20 = 0x14
            sub_466170(arg2, &var_2c, 0xb)
            sub_401fb0(&var_2c)
        else if (eax_5 - 0x30 u> 9)
            sub_45f6f0(arg1, arg2)
        else
            sub_45fc60(arg1, arg2)
else
    sub_45fe90(arg2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return arg2
