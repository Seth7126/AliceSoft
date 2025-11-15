// 函数: sub_5f3600
// 地址: 0x5f3600
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f110
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::_Func_base<bool, int32_t, int32_t>::std::_Func_impl<class <lambda_85061ee4442d8424e6f0bbfa3b0986a6>,class std::allocator<int32_t>,bool,int32_t,int32_t>::VTable
    ** var_4c = arg3
int32_t var_50 = 0

switch ((**arg2)(eax_2) - 0xa)
    case 0, 0x52
        *arg3 = &std::_Func_impl<class <lambda_383da28124d2971496108791b733ea21>,class std::allocator<int32_t>,bool,int32_t,int32_t>::`vftable'{for `std::_Func_base<bool, int32_t, int32_t>'}
        arg3[1] = arg2
        arg3[2] = arg4
    case 1
        *arg3 = &std::_Func_impl<class <lambda_93de0ceddb6eca3f2ae721e16f10ab6c>,class std::allocator<int32_t>,bool,int32_t,int32_t>::`vftable'{for `std::_Func_base<bool, int32_t, int32_t>'}
        arg3[1] = arg2
        arg3[2] = arg4
    case 2
        *arg3 = &std::_Func_impl<class <lambda_0bdc6474ae22739b36312f5e92a57615>,class std::allocator<int32_t>,bool,int32_t,int32_t>::`vftable'{for `std::_Func_base<bool, int32_t, int32_t>'}
        arg3[1] = arg2
        arg3[2] = arg4
    case 3, 0xa, 0xb
        *arg3 = &std::_Func_impl<class <lambda_85061ee4442d8424e6f0bbfa3b0986a6>,class std::allocator<int32_t>,bool,int32_t,int32_t>::`vftable'{for `std::_Func_base<bool, int32_t, int32_t>'}
        arg3[1] = arg2
        arg3[2] = arg4
    case 8, 9, 0x29, 0x4f, 0x53
        *arg3 = &std::_Func_impl<class <lambda_5b91a4379676fc8edccf58e5005986d6>,class std::allocator<int32_t>,bool,int32_t,int32_t>::`vftable'{for `std::_Func_base<bool, int32_t, int32_t>'}
        arg3[1] = arg2
        arg3[2] = arg4
    case 0x25
        *arg3 = &std::_Func_impl<class <lambda_10340d4898c6aa077b52d26844a3c836>,class std::allocator<int32_t>,bool,int32_t,int32_t>::`vftable'{for `std::_Func_base<bool, int32_t, int32_t>'}
        arg3[1] = arg2
        arg3[2] = arg4
    default
        var_4c = (**arg2)()
        int32_t var_1c_1 = 0xf
        int32_t var_20_1 = 0
        char var_30 = 0
        sub_403490(&var_30, 0x76aa20, 0x20)
        int32_t var_8_1 = 0
        var_8_1.b = 1
        char var_48
        sub_6c52e0(sub_409350(&var_4c, &var_30, &var_48, &var_4c))
        int32_t var_34
        
        if (var_34 u>= 0x10)
            sub_403160(var_48.d, var_34 + 1, 1)
        
        int32_t var_34_1 = 0xf
        int32_t var_38_1 = 0
        var_48 = 0
        
        if (var_1c_1 u>= 0x10)
            sub_403160(var_30.d, var_1c_1 + 1, 1)
        
        *arg3 = &std::_Func_impl<class <lambda_bc01c792fdb810e1d6b3d67793d36793>,class std::allocator<int32_t>,bool,int32_t,int32_t>::`vftable'{for `std::_Func_base<bool, int32_t, int32_t>'}

arg3[9] = arg3
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg3
