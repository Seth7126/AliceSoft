// 函数: sub_5f8330
// 地址: 0x5f8330
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72786e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_4 = (*(*arg1 + 8))(eax_2)
void* result

if (eax_4 s> 0)
    int32_t var_8_1 = 0
    struct std::_Func_base<int32_t, int32_t>::std::_Func_impl<class <lambda_9e09a82fada1029fc7995a7644ecb61c>,class std::allocator<int32_t>,int32_t,int32_t>::VTable
        * var_3c
    void* result_1 = sub_5f6360(arg1, sub_5f51b0(eax_4, arg1, &var_3c, arg2))
    int32_t var_8_2 = 1
    int32_t* var_18
    
    if (var_18 != 0)
        (*(*var_18 + 0x10))(var_18 != &var_3c)
    
    result = result_1
else
    result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
