// 函数: sub_69b0e0
// 地址: 0x69b0e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_748669
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t var_1c = 0
struct std::_Ref_count_base::std::_Ref_count_obj<struct Concurrency::details::_Task_impl<uint8_t> >::VTable
    ** eax_3 = sub_6e810c(0x110)
struct std::_Ref_count_base::std::_Ref_count_obj<struct Concurrency::details::_Task_impl<uint8_t> >::VTable
    ** var_20 = eax_3
void* eax_4 = &eax_3[4]
eax_3[1] = 1
eax_3[2] = 1
*eax_3 = &std::_Ref_count_obj<struct Concurrency::details::_Task_impl<uint8_t> >::`vftable'{for `std::_Ref_count_base'}

if (eax_4 != 0)
    void var_3c
    std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >(
        &var_3c, arg4)
    int32_t var_34_1 = arg4[2]
    sub_69b450(&eax_3[4], *arg2)
    eax_4 = &eax_3[4]

*arg3 = eax_4
arg3[1] = eax_3
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
