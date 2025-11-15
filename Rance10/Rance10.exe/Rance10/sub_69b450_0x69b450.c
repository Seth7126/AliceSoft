// 函数: sub_69b450
// 地址: 0x69b450
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72deb6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct Concurrency::details::_Task_impl_base::Concurrency::details::_Task_impl<uint8_t>::VTable** 
    var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void var_30
void arg_8
std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >(
    &var_30, &arg_8)
int32_t var_28 = arg4
sub_698110(arg1, arg2)
*arg1 = &Concurrency::details::_Task_impl<uint8_t>::`vftable'{for `Concurrency::details::_Task_impl_base'}
arg1[0x3f] = 0
int32_t var_8_1 = 0

if (arg3 != 0)
    bool cond:0_1 = arg3[1] != 1
    arg3[1]
    arg3[1] -= 1
    
    if (not(cond:0_1))
        (**arg3)(eax_2)
        int32_t ebx_1 = arg3[2]
        arg3[2] -= 1
        
        if (ebx_1 == 1)
            (*(*arg3 + 4))()

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
