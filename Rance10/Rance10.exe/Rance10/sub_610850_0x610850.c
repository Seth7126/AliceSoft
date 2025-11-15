// 函数: sub_610850
// 地址: 0x610850
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730110
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = arg1[0x488]
int32_t var_4c = arg2
*eax_3 = arg2
int32_t var_5c = var_4c
arg1[0x488] += 4
void* result = sub_6228d0(&arg1[0x52], var_5c)
arg1[0x48a] = result

if (result != 0)
    *(result + 0x1c) += 1
    result.b = 1
else
    void* var_1c_1 = 0xf
    void* result_1 = result
    char var_30 = result.b
    sub_403490(&var_30, 0x76b4dc, 0x28)
    int32_t var_8_1 = 0
    var_8_1.b = 1
    char var_48
    sub_612320(arg1, sub_409350(&var_4c, &var_30, &var_48, &var_4c))
    int32_t var_34
    
    if (var_34 u>= 0x10)
        sub_403160(var_48.d, var_34 + 1, 1)
    
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48 = 0
    
    if (var_1c_1 u>= 0x10)
        sub_403160(var_30.d, var_1c_1 + 1, 1)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
