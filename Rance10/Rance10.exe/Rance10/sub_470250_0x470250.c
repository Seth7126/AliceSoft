// 函数: sub_470250
// 地址: 0x470250
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727dd8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = arg4

if (arg2 != 0)
    void* var_5c
    sub_403360(&var_5c, result)
    int32_t var_8_1 = 0
    char var_2c
    sub_403360(&var_2c, arg3)
    var_8_1.b = 1
    void* eax_3 = sub_46eb40(arg1 + 8, &var_2c)
    
    if (eax_3 == 0)
        eax_3 = arg1 + 0x7c
    
    char var_44
    char* ecx_4 = sub_46dfd0(eax_3, &var_44, &var_5c)
    var_8_1.b = 2
    
    if (*(ecx_4 + 0x14) u>= 0x10)
        ecx_4 = *ecx_4
    
    (*(*arg2 + 4))(ecx_4)
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    char* result_1
    result = result_1
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    
    if (result u>= 0x10)
        result = sub_403160(var_5c, &result[1], 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
