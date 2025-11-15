// 函数: ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MBE?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AAVios_base@2@AAHAA_N@Z
// 地址: 0x6d3984
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x74
int32_t (* var_c)(void* arg1) = sub_749305
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_16 = __security_cookie ^ &__saved_ebp
int32_t var_94 = eax_16
void* const var_98_8 = &data_6d3990
int32_t var_8_6 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = 0xffffffff
int32_t arg_8
int32_t arg_10

if ((*(arg4 + 0x14) & 0x4000) == 0)
    int32_t var_68 = 0
    int32_t var_8_4 = 4
    void var_84
    void* var_9c_1 = std::ios_base::getloc(arg4, &var_84)
    char* var_78
    void var_34
    int32_t eax_10 = __Stoulx(&var_34, &var_78, 
        std::num_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::_Getifld(
            arg1, &var_34, &arg_8, &arg_10, *(arg4 + 0x14)), 
        &var_68)
    int32_t var_8_5 = 0xffffffff
    std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
        &var_84)
    
    if (var_78 != &var_34 && var_68 == 0 && eax_10 u<= 1)
        esi = eax_10
else
    int32_t var_8 = 0
    void var_70
    int32_t* eax_2 = sub_6d1105(std::ios_base::getloc(arg4, &var_70))
    int32_t var_8_1 = 0xffffffff
    std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
        &var_70)
    int32_t var_38_1 = 0xf
    int32_t var_3c_1 = 0
    char var_4c = 0
    sub_4e2870(&var_4c, 1, 0)
    int32_t var_8_2 = 1
    void var_64
    void** eax_3
    int32_t* esi_2
    eax_3, esi_2 = sub_6e59c0(eax_2, &var_64)
    var_8_2.b = 2
    sub_4055a0(&var_4c, eax_3, 0, 0xffffffff)
    var_8_2.b = 1
    sub_4033f0(&var_64, 1, nullptr)
    sub_405500(&var_4c, 1, 0)
    var_8_2.b = 3
    sub_4055a0(&var_4c, sub_6e3618(esi_2, &var_64), 0, 0xffffffff)
    var_8_2.b = 1
    sub_4033f0(&var_64, 1, nullptr)
    char* eax_5 = var_4c.d
    
    if (var_38_1 u< 0x10)
        eax_5 = &var_4c
    
    int32_t var_8_3 = 0xffffffff
    esi =
        std::_Getloctxt<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >(
        &arg_8, &arg_10, 2, eax_5)
    sub_4033f0(&var_4c, 1, nullptr)

if (std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(&arg_8, &arg_10) != 0)
    *arg5 |= 1

if (esi s>= 0)
    *arg6 = esi != 0
else
    *arg5 |= 2

*arg2 = arg_8
arg2[1] = arg3
@__security_check_cookie@4(eax_16 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d3b37
return arg2
