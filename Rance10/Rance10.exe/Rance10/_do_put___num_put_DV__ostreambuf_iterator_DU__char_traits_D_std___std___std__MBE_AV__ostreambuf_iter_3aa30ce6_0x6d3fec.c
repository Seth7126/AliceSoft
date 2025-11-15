// 函数: ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MBE?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AAVios_base@2@D_N@Z
// 地址: 0x6d3fec
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x44
int32_t (* var_c)(void* arg1) = sub_74936a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_12 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_12
void* const var_68_7 = &data_6d3ff8
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if ((*(arg5 + 0x14) & 0x4000) != 0)
    int32_t var_8 = 0
    void var_50
    int32_t* eax_3 = sub_6d1105(std::ios_base::getloc(arg5, &var_50))
    std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
        &var_50)
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 0xf
    char var_2c = 0
    int32_t var_8_1 = 1
    void var_44
    void* var_68_3 = &var_44
    int32_t* eax_4
    
    if (arg7 == 0)
        eax_4 = sub_6e59c0(eax_3, var_68_3)
    else
        eax_4 = sub_6e3618(eax_3, var_68_3)
    
    sub_6d323e(&var_2c, eax_4)
    sub_4033f0(&var_44, 1, nullptr)
    int32_t temp1_1 = *(arg5 + 0x24)
    int32_t esi_2
    
    if (temp1_1 s>= 0 && (temp1_1 s> 0 || *(arg5 + 0x20) u> 0))
        esi_2 = *(arg5 + 0x20)
    
    int32_t esi_3
    
    if (temp1_1 s< 0 || (temp1_1 s<= 0 && *(arg5 + 0x20) u<= 0) || esi_2 u<= var_1c_1)
        esi_3 = 0
    else
        esi_3 = esi_2 - var_1c_1
    
    int32_t eax_8
    char* edx_1
    
    if ((*(arg5 + 0x14) & 0x1c0) == 0x40)
        eax_8 = arg4
        edx_1 = arg3
    else
        int32_t var_68_5 = esi_3
        int32_t var_6c_2 = arg6.d
        char** eax_7 = std::num_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Rep(
            arg1, &var_50, arg3.b, arg4)
        esi_3 = 0
        edx_1 = *eax_7
        arg3 = edx_1
        eax_8 = eax_7[1]
        arg4 = eax_8
    
    char* ecx_9 = var_2c.d
    
    if (var_18_1 u< 0x10)
        ecx_9 = &var_2c
    
    int32_t var_68_6 = var_1c_1
    char* var_6c_3 = ecx_9
    int32_t* eax_9 = std::num_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Put(
        arg1, &var_50, edx_1, eax_8)
    int32_t var_80_1 = esi_3
    int32_t var_84_1 = arg6.d
    char* ecx_11 = *eax_9
    arg3 = ecx_11
    int32_t eax_10 = eax_9[1]
    *(arg5 + 0x20) = 0
    *(arg5 + 0x24) = 0
    arg4 = eax_10
    std::num_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Rep(
        arg1, arg2, ecx_11.b, eax_10)
    sub_4033f0(&var_2c, 1, nullptr)
    result = arg2
else
    void* esi = *arg1
    *(esi + 0x24)
    j_sub_4033e0()
    (*(esi + 0x24))(arg2, arg3, arg4, arg5, arg6.d, zx.d(arg7))
    result = arg2

@__security_check_cookie@4(eax_12 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d414e
return result
