// 函数: sub_438c00
// 地址: 0x438c00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_10 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6000
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_esi
int32_t var_50 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
char* edx = *(arg1 + 8)
var_48 = 0

if (*(arg1 + 0x10) u> edx)
    char eax_5 = *edx
    
    if ((eax_5 u>= 0x81 && eax_5 u<= 0x9f) || (eax_5 u>= 0xe0 && eax_5 u<= 0xef))
        sub_438f10(arg1, arg2)
    else if (eax_5 == 0x22)
        sub_439050(arg1, arg2)
    else if (eax_5 == 0x27)
        sub_439220(arg1, arg2)
    else
        void var_44
        
        if (eax_5 == 0x28)
            *(arg1 + 8) = &edx[1]
            sub_401f60(&var_44, &(*U"''(.;),{}[]-0")[2])
            int32_t var_4 = 0
            sub_4387b0(arg2, 6, &var_44)
            sub_401fb0(&var_44)
        else if (eax_5 == 0x29)
            *(arg1 + 8) = &edx[1]
            sub_401f60(&var_44, &(*U"''(.;),{}[]-0")[5])
            int32_t var_4_1 = 1
            sub_4387b0(arg2, 7, &var_44)
            sub_401fb0(&var_44)
        else if (eax_5 == 0x2c)
            *(arg1 + 8) = &edx[1]
            sub_401f60(&var_44, &(*U"''(.;),{}[]-0")[6])
            int32_t var_4_2 = 2
            sub_4387b0(arg2, 8, &var_44)
            sub_401fb0(&var_44)
        else if (eax_5 == 0x2e)
            *(arg1 + 8) = &edx[1]
            sub_401f60(&var_44, &(*U"''(.;),{}[]-0")[3])
            int32_t var_4_3 = 3
            sub_4387b0(arg2, 9, &var_44)
            sub_401fb0(&var_44)
        else if (eax_5 == 0x3b)
            *(arg1 + 8) = &edx[1]
            sub_401f60(&var_44, &(*U"''(.;),{}[]-0")[4])
            int32_t var_4_4 = 4
            sub_4387b0(arg2, 0xc, &var_44)
            sub_401fb0(&var_44)
        else if (eax_5 == 0x5b)
            *(arg1 + 8) = &edx[1]
            sub_401f60(&var_44, &(*U"''(.;),{}[]-0")[9])
            int32_t var_4_5 = 5
            sub_4387b0(arg2, 0xd, &var_44)
            sub_401fb0(&var_44)
        else if (eax_5 == 0x5d)
            *(arg1 + 8) = &edx[1]
            sub_401f60(&var_44, &(*U"''(.;),{}[]-0")[0xa])
            int32_t var_4_6 = 6
            sub_4387b0(arg2, 0xe, &var_44)
            sub_401fb0(&var_44)
        else if (eax_5 == 0x7b)
            *(arg1 + 8) = &edx[1]
            sub_401f60(&var_44, &(*U"''(.;),{}[]-0")[7])
            int32_t var_4_7 = 7
            sub_4387b0(arg2, 0xf, &var_44)
            sub_401fb0(&var_44)
        else if (eax_5 == 0x7d)
            *(arg1 + 8) = &edx[1]
            sub_401f60(&var_44, &(*U"''(.;),{}[]-0")[8])
            int32_t var_4_8 = 8
            sub_4387b0(arg2, 0x10, &var_44)
            sub_401fb0(&var_44)
        else if (eax_5 == 0x2d)
            *(arg1 + 8) = &edx[1]
            void var_2c
            sub_401f60(&var_2c, &(*U"''(.;),{}[]-0")[0xb])
            int32_t var_4_9 = 9
            sub_4387b0(arg2, 0x12, &var_2c)
            sub_401fb0(&var_2c)
        else if (eax_5 - 0x30 u> 9)
            sub_438f10(arg1, arg2)
        else
            sub_4393f0(arg1, arg2)
else
    sub_439640(arg2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return arg2
