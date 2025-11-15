// 函数: sub_4698e0
// 地址: 0x4698e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72cd30
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_48 = arg1
int32_t eax_3 = *(arg2 + 0x34)
int32_t var_4c = 0

if (eax_3 == 0)
    sub_403360(arg1, 0x75ce0b)
else if (eax_3 == 4)
    sub_469b40(arg1, arg2)
else if (eax_3 == 6)
    sub_46a050(arg1, arg2)
else
    void* var_44
    char* eax_7 = sub_46a390(&var_44, arg2)
    int32_t var_8_1 = 0
    char var_2c
    char* eax_8 = sub_41a330(eax_7.b, " = ", &var_2c, eax_7)
    var_8_1.b = 1
    sub_4176f0(eax_8.b, eax_8, arg1, "\r\n")
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
