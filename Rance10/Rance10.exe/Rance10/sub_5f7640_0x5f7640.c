// 函数: sub_5f7640
// 地址: 0x5f7640
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72713e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_4 = (*(*arg1 + 8))(eax_2)
int32_t result = 0
int32_t ebx = 0xffffffff

while (true)
    int32_t eax_5 = (*(*arg1 + 8))()
    
    if (eax_5 s> 0)
        struct std::_Func_base<bool, int32_t>::std::_Func_impl<class <lambda_201f44e3f379d9b93f6517e6e0d99d6a>,class std::allocator<int32_t>,bool,int32_t>::VTable
            * var_3c
        struct std::_Func_base<bool, int32_t>::std::_Func_impl<class <lambda_201f44e3f379d9b93f6517e6e0d99d6a>,class std::allocator<int32_t>,bool,int32_t>::VTable
            ** eax_6 = sub_5f4440(eax_5, arg1, &var_3c, arg2)
        struct std::_Func_base<bool, int32_t>::std::_Func_impl<class <lambda_201f44e3f379d9b93f6517e6e0d99d6a>,class std::allocator<int32_t>,bool,int32_t>::VTable
            ** var_58_2 = eax_6
        int32_t var_8_1 = 0
        ebx = sub_5f62a0(eax_6, ebx + 1, arg1, eax_4)
        int32_t var_8_2 = 1
        int32_t* var_18
        
        if (var_18 != 0)
            (*(*var_18 + 0x10))(var_18 != &var_3c)
            var_18 = nullptr
        
        int32_t var_8_3 = 0xffffffff
    
    if (eax_5 s<= 0 || ebx s< 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
        return result
    
    result += 1
