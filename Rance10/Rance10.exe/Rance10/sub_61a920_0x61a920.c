// 函数: sub_61a920
// 地址: 0x61a920
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
int32_t edx = *(arg1[0x7e] + (ecx << 2) - 4)
arg1[0x7f] = ecx - 1
int32_t eax_5 = arg1[0x7e]
int32_t var_60 = edx
int32_t eax_6 = *(eax_5 + ((ecx - 1) << 2) - 4)
int32_t var_68 = eax_6
arg1[0x7f] = ecx - 2
void* eax_8 = sub_622960(&arg1[0x52], edx)
char* result
char const* const var_84_1
void** var_80_2
char var_44
char var_2c

if (eax_8 != 0)
    void* eax_14 = sub_622960(&arg1[0x52], eax_6)
    
    if (eax_14 == 0)
        sub_403360(&var_44, 0x76d3cc)
        int32_t var_8_2 = 2
        var_80_2 = sub_409350(&var_68, &var_44, &var_2c, &var_68)
        var_8_2.b = 3
        var_84_1 = "DG_MINUSA"
        goto label_61a9d1
    
    if (sub_5ff5b0(eax_14, eax_8) != 0)
        result = sub_405d30(&arg1[0x7d], var_60)
    else
        void var_5c
        sub_403360(&var_5c, "SubPage")
        int32_t var_8_3 = 4
        sub_612230(arg1, "DG_MINUSA", &var_5c)
        result = sub_403320(&var_5c)
else
    char* result_1 = 0xf
    void* var_34_1 = eax_8
    var_44 = eax_8.b
    sub_403490(&var_44, 0x76d3fc, 0x20)
    void* var_8_1 = eax_8
    var_80_2 = sub_409350(&var_60, &var_44, &var_2c, &var_60)
    var_8_1.b = 1
    var_84_1 = "DG_MINUSA"
label_61a9d1:
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
