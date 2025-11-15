// 函数: sub_6e16c8
// 地址: 0x6e16c8
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0xc
int32_t (* var_c)(void* arg1) = sub_749e95
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
void* const var_30_5 = &data_6e16d4
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8 = 0
void var_1c
int32_t* eax_1 = sub_6d6aa9(std::ios_base::getloc(arg4, &var_1c))
int32_t var_8_1 = 0xffffffff
std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
    &var_1c)
int32_t* var_30_2 = eax_1
int32_t arg_8
int32_t arg_e
int32_t eax_2 = sub_6db59d(arg1, &arg_8, &arg_e:2, 0, 0x17, &arg6[2])
int32_t temp1 = *arg5 | eax_2
*arg5 = temp1
char eax_4

if (temp1 == 0)
    if (arg3 == 0)
        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(&arg_8)
    
    int32_t var_34_1 = arg_e
    int32_t esi_1 = *(*eax_1 + 0x38)
    j_sub_4033e0()
    eax_4 = esi_1(var_34_1, 0)

if (temp1 != 0 || eax_4 != 0x3a)
    *arg5 |= 2
else
    std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(&arg_8)
    int32_t* var_30_3 = eax_1
    int32_t eax_7 = sub_6db59d(arg1, &arg_8, &arg_e:2, 0, 0x3b, &arg6[1])
    *arg5 |= eax_7

if (*arg5 != 0)
    *arg5 |= 2
else
    if (arg3 == 0)
        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(&arg_8)
    
    int32_t var_34_3 = arg_e
    int32_t esi_2 = *(*eax_1 + 0x38)
    j_sub_4033e0()
    
    if (esi_2(var_34_3, 0) != 0x3a)
        *arg5 |= 2
    else
        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(&arg_8)
        int32_t* var_30_4 = eax_1
        int32_t eax_10 = sub_6db59d(arg1, &arg_8, &arg_e:2, 0, 0x3b, arg6)
        *arg5 |= eax_10

*arg2 = arg_8
arg2[1] = arg3.d
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6e17e0
return arg2
