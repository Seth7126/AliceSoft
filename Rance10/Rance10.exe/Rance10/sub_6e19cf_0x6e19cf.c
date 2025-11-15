// 函数: sub_6e19cf
// 地址: 0x6e19cf
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0xc
int32_t (* var_c)(void* arg1) = sub_749e95
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
void* const var_30_3 = &data_6e19db
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8 = 0
void var_1c
struct std::ctype_base::std::ctype<wchar_t>::VTable* eax_1 =
    sub_633850(std::ios_base::getloc(arg4, &var_1c))
int32_t var_8_1 = 0xffffffff
std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
    &var_1c)
int32_t var_14 = 0
struct std::ctype_base::std::ctype<wchar_t>::VTable* var_30_2 = eax_1
int32_t arg_8
void arg_10
int32_t eax_2 = sub_6db59d(arg1, &arg_8, &arg_10, 0, 0x270f, &var_14)
*arg5 |= eax_2

if ((eax_2.b & 2) == 0)
    int32_t ecx_3 = var_14
    
    if (ecx_3 s< 0x45)
        ecx_3 += 0x64
    else if (ecx_3 s>= 0x64)
        ecx_3 -= 0x76c
    
    *(arg6 + 0x14) = ecx_3

*arg2 = arg_8
arg2[1] = arg3
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6e1a5d
return arg2
