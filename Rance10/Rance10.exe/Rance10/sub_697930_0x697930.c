// 函数: sub_697930
// 地址: 0x697930
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729896
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
j_Concurrency::details::create_stl_critical_section(arg1)
__Mtx_init_in_situ(&arg1[0xa], 2)
void arg_4
std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >(
    &arg1[0x16], &arg_4)
arg1[0x18] = arg3
arg1[0x19] = 0
int32_t var_8_1 = 0

if (arg2 != 0)
    bool cond:0_1 = arg2[1] != 1
    arg2[1]
    arg2[1] -= 1
    
    if (not(cond:0_1))
        (**arg2)(eax_2)
        int32_t ebx_1 = arg2[2]
        arg2[2] -= 1
        
        if (ebx_1 == 1)
            (*(*arg2 + 4))()

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
