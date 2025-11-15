// 函数: sub_42bb80
// 地址: 0x42bb80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729e08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* edi = *(arg1 + 8)
int32_t var_4c = 0

if (*(arg1 + 0x10) u> edi)
    char edx = *edi
    
    if (edx u< 0x81)
        if (edx + 0x20 u> 0xf)
            goto label_42bbe3
        
        sub_42beb0(arg1, arg2)
    else if (edx u<= 0x9f || edx + 0x20 u<= 0xf)
        sub_42beb0(arg1, arg2)
    else
    label_42bbe3:
        
        if (edx == 0x22)
            sub_42bff0(arg1, arg2)
        else if (edx == 0x27)
            sub_42c1c0(arg1, arg2)
        else
            void var_30
            
            if (edx == 0x28)
                *(arg1 + 8) = &edi[1]
                sub_403360(&var_30, &(*U"'(.;),{}[]0-=%")[1])
                int32_t var_8_1 = 0
                sub_42b6d0(arg2, 6, &var_30)
                sub_403320(&var_30)
            else if (edx == 0x29)
                *(arg1 + 8) = &edi[1]
                sub_403360(&var_30, &(*U"'(.;),{}[]0-=%")[4])
                int32_t var_8_2 = 1
                sub_42b6d0(arg2, 7, &var_30)
                sub_403320(&var_30)
            else if (edx == 0x2c)
                *(arg1 + 8) = &edi[1]
                sub_403360(&var_30, &(*U"'(.;),{}[]0-=%")[5])
                int32_t var_8_3 = 2
                sub_42b6d0(arg2, 8, &var_30)
                sub_403320(&var_30)
            else if (edx == 0x2e)
                *(arg1 + 8) = &edi[1]
                sub_403360(&var_30, &(*U"'(.;),{}[]0-=%")[2])
                int32_t var_8_4 = 3
                sub_42b6d0(arg2, 9, &var_30)
                sub_403320(&var_30)
            else if (edx == 0x3b)
                *(arg1 + 8) = &edi[1]
                sub_403360(&var_30, &(*U"'(.;),{}[]0-=%")[3])
                int32_t var_8_5 = 4
                sub_42b6d0(arg2, 0xc, &var_30)
                sub_403320(&var_30)
            else if (edx == 0x5b)
                *(arg1 + 8) = &edi[1]
                sub_403360(&var_30, &(*U"'(.;),{}[]0-=%")[8])
                int32_t var_8_6 = 5
                sub_42b6d0(arg2, 0xd, &var_30)
                sub_403320(&var_30)
            else if (edx == 0x5d)
                *(arg1 + 8) = &edi[1]
                sub_403360(&var_30, &(*U"'(.;),{}[]0-=%")[9])
                int32_t var_8_7 = 6
                sub_42b6d0(arg2, 0xe, &var_30)
                sub_403320(&var_30)
            else if (edx == 0x7b)
                *(arg1 + 8) = &edi[1]
                sub_403360(&var_30, &(*U"'(.;),{}[]0-=%")[6])
                int32_t var_8_8 = 7
                sub_42b6d0(arg2, 0xf, &var_30)
                sub_403320(&var_30)
            else if (edx == 0x7d)
                *(arg1 + 8) = &edi[1]
                sub_403360(&var_30, &(*U"'(.;),{}[]0-=%")[7])
                int32_t var_8_9 = 8
                sub_42b6d0(arg2, 0x10, &var_30)
                sub_403320(&var_30)
            else if (edx == 0x2d)
                *(arg1 + 8) = &edi[1]
                sub_403360(&var_30, &(*U"'(.;),{}[]0-=%")[0xb])
                int32_t var_8_10 = 9
                sub_42b6d0(arg2, 0x12, &var_30)
                sub_403320(&var_30)
            else if (edx == 0x3d)
                *(arg1 + 8) = &edi[1]
                void var_48
                sub_403360(&var_48, &(*U"'(.;),{}[]0-=%")[0xc])
                int32_t var_8_11 = 0xa
                sub_42b6d0(arg2, 0x1c, &var_48)
                sub_403320(&var_48)
            else if (edx - 0x30 u> 9)
                sub_42beb0(arg1, arg2)
            else
                sub_42c390(arg1, arg2)
else
    sub_42c600(arg2)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
