// 函数: sub_5f4440
// 地址: 0x5f4440
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f110
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::_Func_base<bool, int32_t>::std::_Func_impl<class <lambda_201f44e3f379d9b93f6517e6e0d99d6a>,class std::allocator<int32_t>,bool,int32_t>::VTable
    ** var_4c = arg3
int32_t var_50 = 0

switch ((**arg2)(eax_2) - 0xa)
    case 0, 0x52
        *arg3 = &std::_Func_impl<class <lambda_666a5e7423ff755022da730c80913c3a>,class std::allocator<int32_t>,bool,int32_t>::`vftable'{for `std::_Func_base<bool, int32_t>'}
        arg3[1] = arg2
        arg3[2] = arg4
    case 1
        *arg3 = &std::_Func_impl<class <lambda_0865415ce8737ee9099a4b9c8d6a25c1>,class std::allocator<int32_t>,bool,int32_t>::`vftable'{for `std::_Func_base<bool, int32_t>'}
        arg3[1] = arg2
        arg3[2] = arg4
    case 2
        *arg3 = &std::_Func_impl<class <lambda_b031643ac718f0bb0d8443b35dfd51d7>,class std::allocator<int32_t>,bool,int32_t>::`vftable'{for `std::_Func_base<bool, int32_t>'}
        arg3[1] = arg2
        arg3[2] = arg4
    case 3, 0xa, 0xb
        *arg3 = &std::_Func_impl<class <lambda_201f44e3f379d9b93f6517e6e0d99d6a>,class std::allocator<int32_t>,bool,int32_t>::`vftable'{for `std::_Func_base<bool, int32_t>'}
        arg3[1] = arg2
        arg3[2] = arg4
    case 8, 9, 0x29, 0x4f, 0x53
        *arg3 = &std::_Func_impl<class <lambda_5a51a20be8cba62621b76cdcab4f44cc>,class std::allocator<int32_t>,bool,int32_t>::`vftable'{for `std::_Func_base<bool, int32_t>'}
        arg3[1] = arg2
        arg3[2] = arg4
    case 0x25
        *arg3 = &std::_Func_impl<class <lambda_b4d014e668746fcdce224c3a1e88b7a6>,class std::allocator<int32_t>,bool,int32_t>::`vftable'{for `std::_Func_base<bool, int32_t>'}
        arg3[1] = arg2
        arg3[2] = arg4
    default
        var_4c = (**arg2)()
        int32_t var_1c_1 = 0xf
        int32_t var_20_1 = 0
        char var_30 = 0
        sub_403490(&var_30, 0x76aa68, 0x1e)
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
        
        *arg3 = &std::_Func_impl<class <lambda_26ac1fb664d04179e4b1dbd10847d9dc>,class std::allocator<int32_t>,bool,int32_t>::`vftable'{for `std::_Func_base<bool, int32_t>'}

arg3[9] = arg3
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg3
