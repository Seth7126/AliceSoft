// 函数: sub_6e2cf4
// 地址: 0x6e2cf4
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x44
int32_t (* var_c)(void* arg1) = sub_749fc9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_11 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_11
void* const var_68_7 = &data_6e2d00
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t edx = zx.d(arg6)
int32_t result

if ((*(arg5 + 0x14) & 0x4000) != 0)
    int32_t var_8 = 0
    void var_4c
    int32_t* eax_2 = sub_6d7479(std::ios_base::getloc(arg5, &var_4c))
    std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
        &var_4c)
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 7
    int16_t var_2c = 0
    int32_t var_8_1 = 1
    void var_44
    void* var_68_3 = &var_44
    int32_t* eax_3
    
    if (arg7 == 0)
        eax_3 = sub_6e59c0(eax_2, var_68_3)
    else
        eax_3 = sub_6e3618(eax_2, var_68_3)
    
    sub_6df0b1(&var_2c, eax_3)
    sub_631740(&var_44, 1, nullptr)
    int32_t temp1_1 = *(arg5 + 0x24)
    int32_t esi_2
    
    if (temp1_1 s>= 0 && (temp1_1 s> 0 || *(arg5 + 0x20) u> 0))
        esi_2 = *(arg5 + 0x20)
    
    int32_t esi_3
    
    if (temp1_1 s< 0 || (temp1_1 s<= 0 && *(arg5 + 0x20) u<= 0) || esi_2 u<= var_1c_1)
        esi_3 = 0
    else
        esi_3 = esi_2 - var_1c_1
    
    int32_t eax_7
    int16_t* edx_1
    
    if ((*(arg5 + 0x14) & 0x1c0) == 0x40)
        eax_7 = arg4
        edx_1 = arg3
    else
        int32_t var_68_5 = esi_3
        uint32_t var_6c_2 = edx
        int32_t* eax_6 = std::num_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Rep(
            arg1, &var_4c, arg3, arg4)
        esi_3 = 0
        edx_1 = *eax_6
        arg3 = edx_1
        eax_7 = eax_6[1]
        arg4 = eax_7
    
    int16_t* ecx_9 = var_2c.d
    
    if (var_18_1 u< 8)
        ecx_9 = &var_2c
    
    int32_t var_68_6 = var_1c_1
    int16_t* var_6c_3 = ecx_9
    int32_t* eax_8 = std::num_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::_Put(
        arg1, &var_4c, edx_1, eax_7)
    int32_t var_80_1 = esi_3
    uint32_t var_84_1 = edx
    int16_t* ecx_11 = *eax_8
    arg3 = ecx_11
    int32_t eax_9 = eax_8[1]
    *(arg5 + 0x20) = 0
    *(arg5 + 0x24) = 0
    arg4 = eax_9
    std::num_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Rep(
        arg1, arg2, ecx_11, eax_9)
    sub_631740(&var_2c, 1, nullptr)
    result = arg2
else
    void* esi = *arg1
    *(esi + 0x24)
    j_sub_4033e0()
    (*(esi + 0x24))(arg2, arg3, arg4, arg5, edx, zx.d(arg7))
    result = arg2

@__security_check_cookie@4(eax_11 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6e2e57
return result
