// 函数: sub_5f7410
// 地址: 0x5f7410
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72713e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_4 = (*(*arg1 + 8))(eax_2)
int32_t i = sub_5f8130(eax_4, 0, arg1, eax_4, arg2)
int32_t result

if (i s>= 0)
    do
        (*(*arg1 + 0x50))(i)
        result = (*(*arg1 + 8))()
        
        if (result s<= 0)
            break
        
        struct std::_Func_base<bool, int32_t>::std::_Func_impl<class <lambda_201f44e3f379d9b93f6517e6e0d99d6a>,class std::allocator<int32_t>,bool,int32_t>::VTable
            * var_3c
        struct std::_Func_base<bool, int32_t>::std::_Func_impl<class <lambda_201f44e3f379d9b93f6517e6e0d99d6a>,class std::allocator<int32_t>,bool,int32_t>::VTable
            ** eax_7 = sub_5f4440(result, arg1, &var_3c, arg2)
        struct std::_Func_base<bool, int32_t>::std::_Func_impl<class <lambda_201f44e3f379d9b93f6517e6e0d99d6a>,class std::allocator<int32_t>,bool,int32_t>::VTable
            ** var_58_3 = eax_7
        int32_t var_8_1 = 0
        i = sub_5f62a0(eax_7, i, arg1, eax_4)
        int32_t var_8_2 = 1
        int32_t* var_18
        
        if (var_18 != 0)
            (*(*var_18 + 0x10))(var_18 != &var_3c)
            var_18 = nullptr
        
        int32_t var_8_3 = 0xffffffff
    while (i s>= 0)
    
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
