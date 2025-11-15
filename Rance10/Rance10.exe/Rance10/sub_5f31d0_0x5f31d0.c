// 函数: sub_5f31d0
// 地址: 0x5f31d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727800
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::_Func_base<bool, int32_t, int32_t>::std::_Func_impl<class <lambda_03c9793e1a1f528142547c7509bfb13b>,class std::allocator<int32_t>,bool,int32_t,int32_t>::VTable
    ** var_48 = arg1
int32_t var_4c = 0

switch ((**arg2)(eax_2) - 0xa)
    case 0, 0x25, 0x52
        *arg1 = &std::_Func_impl<class <lambda_b5990c9e2b0ba75bad6068099bbfa3e6>,class std::allocator<int32_t>,bool,int32_t,int32_t>::`vftable'{for `std::_Func_base<bool, int32_t, int32_t>'}
        arg1[1] = arg2
    case 1
        *arg1 = &std::_Func_impl<class <lambda_1a6b7d45ee8f7e160513e013532fe162>,class std::allocator<int32_t>,bool,int32_t,int32_t>::`vftable'{for `std::_Func_base<bool, int32_t, int32_t>'}
        arg1[1] = arg2
    case 2
        *arg1 = &std::_Func_impl<class <lambda_03c9793e1a1f528142547c7509bfb13b>,class std::allocator<int32_t>,bool,int32_t,int32_t>::`vftable'{for `std::_Func_base<bool, int32_t, int32_t>'}
        arg1[1] = arg2
    default
        var_48 = (**arg2)()
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        sub_403490(&var_2c, 0x76aa44, 0x20)
        int32_t var_8_1 = 0
        var_8_1.b = 1
        char var_44
        sub_6c52e0(sub_409350(&var_48, &var_2c, &var_44, &var_48))
        int32_t var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44.d, var_30 + 1, 1)
        
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        var_44 = 0
        
        if (var_18_1 u>= 0x10)
            sub_403160(var_2c.d, var_18_1 + 1, 1)
        
        *arg1 = &std::_Func_impl<class <lambda_d3fc55223089e4cf077170d9e37c4547>,class std::allocator<int32_t>,bool,int32_t,int32_t>::`vftable'{for `std::_Func_base<bool, int32_t, int32_t>'}

arg1[9] = arg1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
