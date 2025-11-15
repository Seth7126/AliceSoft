// 函数: ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MBE?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AAVios_base@2@AAHAAPAX@Z
// 地址: 0x6d376c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x40
int32_t (* var_c)(void* arg1) = sub_749dd2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_8 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_8
void* const var_64_4 = &data_6d3778
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_38 = 0
int32_t var_8 = 0
void var_48
void* var_64_1 = std::ios_base::getloc(arg4, &var_48)
void var_34
int32_t arg_8
int32_t arg_10
void* eax_2 = std::num_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::_Getifld(
    arg1, &var_34, &arg_8, &arg_10, 0x800)
int32_t var_8_1 = 0xffffffff
std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
    &var_48)
char* var_3c
int32_t eax_3 = __Stoulx(&var_34, &var_3c, eax_2, &var_38)

if (std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(&arg_8, &arg_10) != 0)
    *arg5 |= 1

if (var_3c == &var_34 || var_38 != 0)
    *arg5 |= 2
else
    *arg6 = eax_3

*arg2 = arg_8
arg2[1] = arg3
@__security_check_cookie@4(eax_8 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d3817
return arg2
