// 函数: sub_6df5a3
// 地址: 0x6df5a3
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x3c
int32_t (* var_c)(void* arg1) = sub_749d55
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_9 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_9
void* const var_60_4 = &data_6df5af
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_38 = 0
int32_t var_8 = 0
void var_4c
void* var_60_1 = std::ios_base::getloc(arg4, &var_4c)
char var_34
int32_t arg_8
int32_t arg_10
void* eax_3 = std::num_get<uint16_t,class std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::_Getifld(
    arg1, &var_34, &arg_8, &arg_10, *(arg4 + 0x14))
int32_t var_8_1 = 0xffffffff
std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
    &var_4c)
void var_33
void* edi_1 = &var_33

if (var_34 != 0x2d)
    edi_1 = &var_34

char* var_3c
int32_t esi_2 = __Stoulx(edi_1, &var_3c, eax_3, &var_38)

if (sub_6e320e(&arg_8, &arg_10) != 0)
    *arg5 |= 1

if (var_3c == edi_1 || var_38 != 0)
    *arg5 |= 2
else
    if (var_34 == 0x2d)
        esi_2 = neg.d(esi_2)
    
    *arg6 = esi_2

*arg2 = arg_8
arg2[1] = arg3
@__security_check_cookie@4(eax_9 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6df660
return arg2
