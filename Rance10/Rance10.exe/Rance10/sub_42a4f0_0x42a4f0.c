// 函数: sub_42a4f0
// 地址: 0x42a4f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729cd8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_140 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_110 = arg3
int32_t var_118 = 0
sub_42ccf0(arg2 + 0x38, arg2 + 0x2c)
void* ecx_1 = *(arg2 + 0x2c)
void* var_120 = ecx_1

if (ecx_1 != *(arg2 + 0x34))
    *(arg2 + 0x2c) = ecx_1 + 0x28
else
    ecx_1 = arg2 + 4
    var_120 = ecx_1

char eax_6
char eax_7

if (*(ecx_1 + 4) == 1)
    eax_6 = sub_407560(ecx_1 + 8, 0x75d800)
    
    if (eax_6 == 0)
        eax_7 = sub_407560(ecx_1 + 8, 0x75d808)

char* result
char var_2c

if (*(ecx_1 + 4) != 1 || (eax_6 == 0 && eax_7 == 0))
    char* var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    sub_403490(&var_2c, 0x75cd52, nullptr)
    int32_t var_8_12 = 0
    sub_4055a0(arg4, &var_2c, 0, 0xffffffff)
    int32_t eax_38 = *(arg2 + 0x38)
    
    if (eax_38 != *(arg2 + 0x3c))
        *(arg2 + 0x2c) = *(eax_38 + ((*(arg2 + 0x3c) - eax_38) s>> 2 << 2) - 4)
        *(arg2 + 0x3c) -= 4
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, &var_18_1[1], 1)
    
    result.b = 0
else
    void* edx_1 = *(arg2 + 0x2c)
    int32_t ecx_4 = *(arg2 + 0x34)
    
    if (edx_1 != ecx_4)
        *(arg2 + 0x2c) = edx_1 + 0x28
    else
        edx_1 = arg2 + 4
    
    if (*(edx_1 + 4) == 6)
        void* edx_2 = *(arg2 + 0x2c)
        void* var_10c_1 = edx_2
        
        if (edx_2 != ecx_4)
            *(arg2 + 0x2c) = edx_2 + 0x28
        else
            edx_2 = arg2 + 4
            var_10c_1 = edx_2
        
        if (*(edx_2 + 4) != 1)
            sub_403360(&var_2c, 0x75d80c)
            int32_t var_8_2 = 2
            goto label_42a5d6
        
        void* edx_3 = *(arg2 + 0x2c)
        
        if (edx_3 != ecx_4)
            *(arg2 + 0x2c) = edx_3 + 0x28
        else
            edx_3 = arg2 + 4
        
        if (*(edx_3 + 4) != 6)
            sub_403360(&var_2c, 0x75d880)
            int32_t var_8_3 = 3
            goto label_42a5d6
        
        void* edx_4 = *(arg2 + 0x2c)
        void* var_114_1 = edx_4
        
        if (edx_4 != ecx_4)
            *(arg2 + 0x2c) = edx_4 + 0x28
        else
            edx_4 = arg2 + 4
            var_114_1 = edx_4
        
        if (*(edx_4 + 4) != 4)
            int32_t eax_14 = *(arg2 + 0x2c)
            
            if (eax_14 != *(arg2 + 0x30))
                *(arg2 + 0x2c) = eax_14 - 0x28
        
        void* edx_5 = *(arg2 + 0x2c)
        
        if (edx_5 != ecx_4)
            *(arg2 + 0x2c) = edx_5 + 0x28
        else
            edx_5 = arg2 + 4
        
        if (*(edx_5 + 4) != 7)
            sub_403360(&var_2c, 0x75d854)
            int32_t var_8_4 = 4
            goto label_42a5d6
        
        if (*(sub_42ccb0(arg2) + 4) != 0x1c)
            sub_403360(&var_2c, 0x75d8c8)
            int32_t var_8_5 = 5
            goto label_42a5d6
        
        if (*(sub_42ccb0(arg2) + 4) != 0x1c)
            sub_403360(&var_2c, 0x75d8ac)
            int32_t var_8_6 = 6
            goto label_42a5d6
        
        void* eax_19 = sub_42ccb0(arg2)
        
        if (*(eax_19 + 4) != 2)
            sub_403360(&var_2c, 0x75d908)
            int32_t var_8_7 = 7
            goto label_42a5d6
        
        if (*(sub_42ccb0(arg2) + 4) != 7)
            sub_403360(&var_2c, 0x75d8e4)
            int32_t var_8_8 = 8
            goto label_42a5d6
        
        int32_t* var_10c_2 = var_10c_1 + 8
        void var_5c
        char* eax_23
        int32_t ebx_1
        
        if (*(var_114_1 + 4) != 4)
            eax_23 = sub_403360(&var_2c, 0x75cd53)
            int32_t var_8_10 = 0xa
            ebx_1 = 2
        else
            eax_23 = sub_4033b0(&var_5c, var_114_1 + 8)
            int32_t var_8_9 = 9
            ebx_1 = 1
        
        int32_t var_118_1 = ebx_1
        void var_44
        char* eax_24 = sub_4033b0(&var_44, eax_23)
        int32_t var_8_11 = 0xb
        
        if ((ebx_1.b & 2) != 0)
            ebx_1 &= 0xfffffffd
            eax_24 = sub_403320(&var_2c)
        
        var_8_11.b = 0xd
        
        if ((ebx_1.b & 1) != 0)
            eax_24 = sub_403320(&var_5c)
        
        void var_104
        int32_t* eax_25 = sub_4175e0(eax_24, ecx_1 + 8, &var_104, " (")
        var_8_11.b = 0xe
        void var_ec
        char* eax_26 = sub_417750(eax_25, eax_25, &var_ec, var_10c_2)
        var_8_11.b = 0xf
        void var_d4
        char* eax_27 = sub_4176f0(eax_26.b, eax_26, &var_d4, U"(")
        var_8_11.b = 0x10
        void var_bc
        char* eax_28 = sub_417750(eax_27, eax_27, &var_bc, &var_44)
        var_8_11.b = 0x11
        void var_a4
        char* eax_29 = sub_4176f0(eax_28.b, eax_28, &var_a4, ") == ")
        var_8_11.b = 0x12
        void var_8c
        char* eax_30 = sub_417750(eax_29, eax_29, &var_8c, eax_19 + 8)
        var_8_11.b = 0x13
        var_8_11.b = 0x14
        void var_130
        void var_74
        sub_425bb0(arg1 + 8, sub_425e30(&var_130, sub_4176f0(eax_30.b, eax_30, &var_74, U")(")))
        sub_4043e0(&var_130)
        sub_403320(&var_74)
        sub_403320(&var_8c)
        sub_403320(&var_a4)
        sub_403320(&var_bc)
        sub_403320(&var_d4)
        sub_403320(&var_ec)
        var_8_11.b = 0xd
        sub_403320(&var_104)
        *(arg1 + 0x14) = *(var_120 + 0x20)
        *(arg1 + 0x18) = *(var_120 + 0x24)
        sub_425bb0(arg1 + 0x1c, sub_425e30(&var_130, var_10c_2))
        sub_4043e0(&var_130)
        sub_425bb0(arg1 + 0x28, sub_425e30(&var_130, &var_44))
        sub_4043e0(&var_130)
        sub_6ca340(eax_19 + 8)
        *(arg1 + 0x38) = sub_407560(ecx_1 + 8, 0x75d948)
        *(arg2 + 0x3c) -= 4
        sub_403320(&var_44)
        result.b = 1
    else
        sub_403360(&var_2c, 0x75d834)
        int32_t var_8_1 = 1
    label_42a5d6:
        sub_4055a0(arg4, &var_2c, 0, 0xffffffff)
        int32_t eax_9 = *(arg2 + 0x38)
        
        if (eax_9 != *(arg2 + 0x3c))
            *(arg2 + 0x2c) = *(eax_9 + ((*(arg2 + 0x3c) - eax_9) s>> 2 << 2) - 4)
            *(arg2 + 0x3c) -= 4
        
        sub_403320(&var_2c)
        result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
