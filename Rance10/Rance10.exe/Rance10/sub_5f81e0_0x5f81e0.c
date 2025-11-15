// 函数: sub_5f81e0
// 地址: 0x5f81e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72786e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_4 = (*(*arg3 + 8))(eax_2)
int32_t result

if (eax_4 s> 0)
    struct std::_Func_base<bool, int32_t>::std::_Func_impl<class <lambda_201f44e3f379d9b93f6517e6e0d99d6a>,class std::allocator<int32_t>,bool,int32_t>::VTable
        * var_3c
    struct std::_Func_base<bool, int32_t>::std::_Func_impl<class <lambda_201f44e3f379d9b93f6517e6e0d99d6a>,class std::allocator<int32_t>,bool,int32_t>::VTable
        ** eax_5 = sub_5f4440(eax_4, arg3, &var_3c, arg5)
    struct std::_Func_base<bool, int32_t>::std::_Func_impl<class <lambda_201f44e3f379d9b93f6517e6e0d99d6a>,class std::allocator<int32_t>,bool,int32_t>::VTable
        ** var_50_2 = eax_5
    int32_t var_8_1 = 0
    int32_t result_1 = sub_5f6300(eax_5, arg2, arg3, arg4)
    int32_t var_8_2 = 1
    int32_t* var_18
    
    if (var_18 != 0)
        (*(*var_18 + 0x10))(var_18 != &var_3c)
    
    result = result_1
else
    result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
