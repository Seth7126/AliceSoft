// 函数: sub_6d381a
// 地址: 0x6d381a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x3c
int32_t (* var_c)(void* arg1) = sub_749d55
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_10 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_10
void* const var_60_3 = &data_6d3826
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_38 = 0
int32_t var_8 = 0
void var_4c
void* var_64 = std::ios_base::getloc(arg4, &var_4c)
void var_34
int32_t arg_8
int32_t arg_10
void* eax_3
int32_t edx
eax_3, edx = std::num_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::_Getifld(
    arg1, &var_34, &arg_8, &arg_10, *(arg4 + 0x14))
int32_t var_3c
int32_t eax_5
int32_t edx_1
eax_5, edx_1 = __Stollx(&var_34, edx, &data_6d2841, &var_34, &var_3c, eax_3, &var_38)
int32_t var_8_1 = 0xffffffff
std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
    &var_4c)

if (std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(&arg_8, &arg_10) != 0)
    *arg5 |= 1

if (var_3c == &var_34 || var_38 != 0)
    *arg5 |= 2
else
    *arg6 = eax_5
    arg6[1] = edx_1

*arg2 = arg_8
arg2[1] = arg3
@__security_check_cookie@4(eax_10 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d38cc
return arg2
