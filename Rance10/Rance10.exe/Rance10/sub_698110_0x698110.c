// 函数: sub_698110
// 地址: 0x698110
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72deb6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct Concurrency::details::_Task_impl_base::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &Concurrency::details::_Task_impl_base::`vftable'
arg1[1] = 0
arg1[2].w = 0
int32_t var_28 = 2
arg1[3] = 0
arg1[4] = 0
int32_t* var_30 = __Mtx_init_in_situ(&arg1[5], var_28)
arg1[0x11] = 0
arg1[0x13] = 0
void arg_8
std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >(
    &var_30, &arg_8)
int32_t var_28_1 = arg4
sub_697930(&arg1[0x14], var_30)
arg1[0x2f] = 0
arg1[0x30] = 0
arg1[0x31] = 0
arg1[0x2e] = 0
arg1[0x32] = arg1
arg1[0x33].w = 0
arg1[0x12] = arg2

if (arg2 != 2)
    *(arg2 + 4) += 1

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
