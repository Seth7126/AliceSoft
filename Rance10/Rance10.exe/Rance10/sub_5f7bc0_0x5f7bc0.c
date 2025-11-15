// 函数: sub_5f7bc0
// 地址: 0x5f7bc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74207c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_68 = arg1
int32_t var_6c = 0

if ((*(*arg2 + 8))(eax_2) s> 1)
    struct std::_Func_base<bool, int32_t, int32_t>::std::_Func_impl<class <lambda_03c9793e1a1f528142547c7509bfb13b>,class std::allocator<int32_t>,bool,int32_t,int32_t>::VTable
        * var_64
    sub_5f31d0(&var_64, arg2)
    int32_t var_8_1 = 0
    struct std::_Func_base<bool, int32_t, int32_t>::std::_Func_impl<class <lambda_03c9793e1a1f528142547c7509bfb13b>,class std::allocator<int32_t>,bool,int32_t,int32_t>::VTable
        ** var_38_1 = &var_64
    struct std::_Func_base<bool, int32_t, int32_t>::std::_Func_impl<class <lambda_9f03875bc712154bbc91b94a8466f1d4>,class std::allocator<int32_t>,bool,int32_t,int32_t>::VTable
        * const var_3c = &std::_Func_impl<class <lambda_9f03875bc712154bbc91b94a8466f1d4>,class std::allocator<int32_t>,bool,int32_t,int32_t>::`vftable'{for `std::_Func_base<bool, int32_t, int32_t>'}
    struct std::_Func_base<bool, int32_t, int32_t>::std::_Func_impl<class <lambda_9f03875bc712154bbc91b94a8466f1d4>,class std::allocator<int32_t>,bool,int32_t,int32_t>::VTable
        * const* var_18_1 = &var_3c
    var_8_1.b = 1
    sub_5f6070(arg2, &var_3c)
    var_8_1.b = 2
    
    if (var_18_1 != 0)
        (*var_18_1)->__offset(0x10).d(var_18_1 != &var_3c)
        int32_t var_18_2 = 0
    
    int32_t var_8_2 = 3
    int32_t* var_40
    
    if (var_40 != 0)
        (*(*var_40 + 0x10))(var_40 != &var_64)
        int32_t var_40_1 = 0
    
    int32_t var_8_3 = 0xffffffff

int32_t eax_10 = (*(*arg2 + 0x28))()
void* ecx_6 = data_7fcbb0
*arg1 = 0xffffffff
arg1[2] = eax_10
arg1[4] = 0

if (ecx_6 != 0)
    char eax_11
    
    if (eax_10 != 0xffffffff)
        eax_11 = sub_621d30(ecx_6, eax_10)
    
    if (eax_10 == 0xffffffff || eax_11 != 0)
        *arg1 = 0x50

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
