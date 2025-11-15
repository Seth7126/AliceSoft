// 函数: sub_5f5d20
// 地址: 0x5f5d20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_4 = (*(**arg1 + 0x10))(arg2)
int32_t* eax_5 = (*(**arg1 + 0x10))(arg3)
int32_t result

if (eax_4 == 0 || eax_5 == 0)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, 0x797e58, 0x1c)
    int32_t var_8_1 = 0
    sub_6c52e0(&var_2c)
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    result.b = 0
else
    float xmm0_1 = *eax_4
    float temp1_1 = *eax_5
    xmm0_1 - temp1_1
    eax_5:1.b = (xmm0_1 == temp1_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, temp1_1) ? 1 : 0) << 2
        | (xmm0_1 < temp1_1 ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    result = p_2 ? 0 : 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
