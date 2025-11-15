// 函数: sub_49df60
// 地址: 0x49df60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730beb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = (***(arg1 + 0x2b8))(0x760e0c)

if (result != 0)
    void* var_8c
    sub_403360(&var_8c, (*(*result + 4))(eax_2))
    int32_t var_8_1 = 0
    void* var_5c
    char* eax_7 = sub_403360(&var_5c, (*(**(arg1 + 0x2b8) + 4))())
    var_8_1.b = 1
    char var_44
    int32_t* eax_8 = sub_4175e0(eax_7, &var_8c, &var_44, "\r\n\r\nVersion ")
    var_8_1.b = 2
    int32_t* var_2c
    sub_4177a0(eax_8, eax_8, &var_2c, eax_7)
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    var_8_1.b = 5
    int32_t var_48
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c, var_48 + 1, 1)
    
    int32_t* eax_13 = &var_2c
    int32_t var_48_1 = 0xf
    int32_t var_18
    
    if (var_18 u>= 0x10)
        eax_13 = var_2c
    
    int32_t var_4c_1 = 0
    var_5c.b = 0
    void* var_74
    sub_403360(&var_74, eax_13)
    var_8_1.b = 6
    sub_6c56d0(&var_74)
    int32_t var_60
    
    if (var_60 u>= 0x10)
        sub_403160(var_74, var_60 + 1, 1)
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    int32_t* result_1
    result = result_1
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c.b = 0
    
    if (result u>= 0x10)
        result = sub_403160(var_8c, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
