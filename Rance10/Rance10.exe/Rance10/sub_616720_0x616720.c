// 函数: sub_616720
// 地址: 0x616720
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_743e08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_7c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg1[0x7f]
int32_t ebx = *(arg1[0x7e] + (ecx << 2) - 4)
arg1[0x7f] = ecx - 1
int32_t eax_5 = arg1[0x7e]
int32_t var_60 = ebx
int32_t edx = *(eax_5 + ((ecx - 1) << 2) - 4)
int32_t var_64 = edx
arg1[0x7f] = ecx - 2
void* eax_7 = sub_6228d0(&arg1[0x52], edx)
char* result
char const* const var_84_1
void** var_80_2
char var_44
char var_2c

if (eax_7 != 0)
    int32_t eax_13 = sub_6228d0(&arg1[0x52], ebx)
    
    if (eax_13 == 0)
        sub_403360(&var_44, 0x76c760)
        int32_t var_8_2 = 2
        var_80_2 = sub_409350(&var_60, &var_44, &var_2c, &var_60)
        var_8_2.b = 3
        var_84_1 = "SR_ASSIGN"
        goto label_6167d3
    
    if ((*(*(eax_7 + 0x20) + 4))(eax_13 + 0x20) != 0)
        result = sub_405d30(&arg1[0x7d], var_60)
    else
        void var_5c
        sub_403360(&var_5c, 0x76c734)
        int32_t var_8_3 = 4
        sub_612230(arg1, "SR_ASSIGN", &var_5c)
        result = sub_403320(&var_5c)
else
    char* result_1 = 0xf
    void* var_34_1 = eax_7
    var_44 = eax_7.b
    sub_403490(&var_44, 0x76c790, 0x20)
    int32_t var_8_1 = 0
    var_80_2 = sub_409350(&var_64, &var_44, &var_2c, &var_64)
    var_8_1.b = 1
    var_84_1 = "SR_ASSIGN"
label_6167d3:
    sub_612230(arg1, var_84_1, var_80_2)
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    result = result_1
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    
    if (result u>= 0x10)
        result = sub_403160(var_44.d, &result[1], 1)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
