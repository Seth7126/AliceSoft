// 函数: sub_415e60
// 地址: 0x415e60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7281d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_64 = 0

if (*(arg1 + 0x78) != 0)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    int32_t var_8_1 = 0
    void var_5c
    void var_44
    char* eax_7
    
    switch (*(arg1 + 4) - 0x12)
        case 0, 1, 0x21, 0x40, 0x4b
            sub_403360(&var_44, "Pointer(%d, %d) -> ")
            var_8_1.b = 1
            eax_7 = sub_417810(arg1 + 0x44, &var_44, &var_5c, arg1 + 0x44, *(arg1 + 0x48))
        label_415f38:
            sub_409670(&var_2c, eax_7)
            sub_403320(&var_5c)
            var_8_1.b = 0
            sub_403320(&var_44)
        case 2, 3, 0x31, 0x3e, 0x47
            sub_403360(&var_44, "Pointer(%d) -> ")
            var_8_1.b = 2
            eax_7 = sub_409350(arg1 + 0x44, &var_44, &var_5c, arg1 + 0x44)
            goto label_415f38
    
    uint32_t eax_10 = *(arg1 + 4) - 2
    
    if (eax_10 u> 0x5b)
    label_416180:
        sub_4175e0(eax_10, &var_2c, arg2, U"?")
        
        if (var_18_1 u>= 0x10)
            sub_403160(var_2c.d, var_18_1 + 1, 1)
    else
        eax_10 = zx.d(lookup_table_416240[eax_10])
        char* eax_12
        int32_t* eax_18
        
        switch (eax_10)
            case 0
                sub_403360(&var_44, "%d")
                var_8_1.b = 3
                eax_12 = sub_409350(arg1 + 0x4c, &var_44, &var_5c, arg1 + 0x4c)
                var_8_1.b = 4
            label_415f9b:
                sub_407820(eax_12, &var_2c, arg2, eax_12)
                goto label_415fa6
            case 1
                sub_403360(&var_44, "%f")
                var_8_1.b = 5
                eax_12 = sub_417920(arg1 + 0x50, &var_44, &var_5c, arg1 + 0x50)
                var_8_1.b = 6
                goto label_415f9b
            case 2
                int32_t* eax_15 = sub_4175e0(eax_10, &var_2c, &var_44, U""")
                var_8_1.b = 7
                char* eax_16 = sub_417750(eax_15, eax_15, &var_5c, arg1 + 0x54)
                var_8_1.b = 8
                sub_4176f0(eax_16.b, eax_16, arg2, U"""")
            label_415fa6:
                sub_403320(&var_5c)
                sub_403320(&var_44)
                sub_403320(&var_2c)
            case 3
                if (arg4 s> arg3)
                    sub_4175e0(eax_10, &var_2c, arg2, "{...}")
                    sub_403320(&var_2c)
                else
                    eax_18 = sub_4162a0(eax_10, arg1 + 0x6c, &var_5c, arg3, arg4)
                    var_8_1.b = 0xb
                label_416092:
                    sub_407820(eax_18, &var_2c, arg2, eax_18)
                    sub_403320(&var_5c)
                    sub_403320(&var_2c)
            case 4
                char const* const eax_13 = "true"
                
                if (*(arg1 + 0x4c) == 0)
                    eax_13 = "false"
                
                sub_4175e0(eax_13, &var_2c, arg2, eax_13)
                sub_403320(&var_2c)
            case 5
                if (*(arg1 + 0x4c) s>= 0)
                    var_8_1.b = 0xd
                    eax_12 = sub_409350(sub_403360(&var_44, "[%d]"), &var_44, &var_5c, arg1 + 0x4c)
                    var_8_1.b = 0xe
                    goto label_415f9b
                
                sub_4175e0(eax_10, &var_2c, arg2, "[]")
                sub_403320(&var_2c)
            case 6
                if (arg4 s<= arg3)
                    eax_18 = sub_416650(eax_10, arg1 + 0x6c, &var_5c, arg3, arg4)
                    var_8_1.b = 0xc
                    goto label_416092
                
                sub_4175e0(eax_10, &var_2c, arg2, "{...}")
                sub_403320(&var_2c)
            case 7
                *(arg1 + 0x6c)
                int32_t* eax_21 = sub_415e60(&var_5c, arg3, arg4 + 1)
                var_8_1.b = 0xf
                sub_407820(eax_21, &var_2c, arg2, eax_21)
                sub_403320(&var_5c)
                sub_403320(&var_2c)
            case 8
                sub_403360(&var_44, "%d")
                var_8_1.b = 9
                eax_12 = sub_409350(arg1 + 0x4c, &var_44, &var_5c, arg1 + 0x4c)
                var_8_1.b = 0xa
                goto label_415f9b
            case 9
                goto label_416180
else
    sub_403360(arg2, U"?")

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
