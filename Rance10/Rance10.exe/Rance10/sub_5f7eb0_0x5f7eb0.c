// 函数: sub_5f7eb0
// 地址: 0x5f7eb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72786e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_4 = (*(*arg1 + 8))(eax_2)
struct std::_Func_base<bool, int32_t>::std::_Func_impl<class <lambda_333c76c3cf5579c0c3f0f6b56f2d2e29>,class std::allocator<int32_t>,bool,int32_t>::VTable
    * var_3c
struct std::_Func_base<bool, int32_t>::std::_Func_impl<class <lambda_333c76c3cf5579c0c3f0f6b56f2d2e29>,class std::allocator<int32_t>,bool,int32_t>::VTable
    ** eax_5 = sub_5f3f60(eax_4, arg1, &var_3c, arg2)
struct std::_Func_base<bool, int32_t>::std::_Func_impl<class <lambda_333c76c3cf5579c0c3f0f6b56f2d2e29>,class std::allocator<int32_t>,bool,int32_t>::VTable
    ** var_50_1 = eax_5
int32_t var_8_1 = 0
int32_t result = sub_5f62a0(eax_5, 0, arg1, eax_4)
int32_t var_8_2 = 1
int32_t* var_18

if (var_18 != 0)
    (*(*var_18 + 0x10))(var_18 != &var_3c)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
