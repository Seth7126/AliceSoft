// 函数: sub_61a760
// 地址: 0x61a760
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_743c40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_7c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg1[0x7f]
int32_t eax_4 = *(arg1[0x7e] + (ecx << 2) - 4)
arg1[0x7f] = ecx - 1
int32_t eax_7 = *(arg1[0x7e] + ((ecx - 1) << 2) - 4)
arg1[0x7f] = ecx - 2
int32_t eax_9 = sub_621320(&arg1[0x52])
int32_t var_60 = eax_9
char* result
char var_2c

if (eax_9 s>= 0)
    void* eax_11 = sub_622960(&arg1[0x52], eax_9)
    
    if (eax_11 != 0)
        if ((*(*(eax_11 + 0x20) + 4))(eax_7, eax_4) != 0)
            result = sub_405d30(&arg1[0x7d], var_60)
        else
            void var_5c
            sub_403360(&var_5c, "SetMethod")
            int32_t var_8_3 = 3
            sub_612230(arg1, "DG_NEW_FROM_METHOD", &var_5c)
            result = sub_403320(&var_5c)
    else
        void* var_44
        sub_403360(&var_44, 0x76d2ec)
        int32_t var_8_2 = 1
        var_8_2.b = 2
        sub_612230(arg1, "DG_NEW_FROM_METHOD", sub_409350(&var_60, &var_44, &var_2c, &var_60))
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
        
        char* result_1
        result = result_1
        int32_t var_18_1 = 0xf
        int32_t var_1c_2 = 0
        var_2c = 0
        
        if (result u>= 0x10)
            result = sub_403160(var_44, &result[1], 1)
else
    char* result_2 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    sub_403490(&var_2c, 0x76d324, 0x28)
    int32_t var_8_1 = 0
    sub_612230(arg1, "DG_NEW_FROM_METHOD", &var_2c)
    result = result_2
    
    if (result u>= 0x10)
        result = sub_403160(var_2c.d, &result[1], 1)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
