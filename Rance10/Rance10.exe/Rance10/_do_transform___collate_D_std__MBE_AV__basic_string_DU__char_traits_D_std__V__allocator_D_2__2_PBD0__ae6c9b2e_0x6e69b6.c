// 函数: ?do_transform@?$collate@D@std@@MBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PBD0@Z
// 地址: 0x6e69b6
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 4
int32_t (* var_c)(void* arg1) = sub_74a3df
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28_1 = &data_6e69c2
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0
arg2[5] = 0xf
bool cond:0 = arg2[5] u< 0x10
arg2[4] = 0
char* eax

if (cond:0)
    eax = arg2
else
    eax = *arg2

*eax = 0
int32_t var_8 = 0
int32_t var_14_1 = 1
void* i = arg4 - arg3

if (arg4 != arg3)
    do
        std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::resize(
            arg2, i, 0)
        int32_t* eax_2
        
        if (arg2[5] u< 0x10)
            eax_2 = arg2
        else
            eax_2 = *arg2
        
        int32_t* ecx_1
        
        if (arg2[5] u< 0x10)
            ecx_1 = arg2
        else
            ecx_1 = *arg2
        
        i = __Strxfrm(ecx_1, eax_2 + arg2[4], arg3, arg4, arg1 + 8)
        
        if (i u<= arg2[4])
            break
    while (i != 0)

std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::resize(arg2, i, 
    0)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6e6a47
return arg2
