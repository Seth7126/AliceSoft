// 函数: sub_5ca3e0
// 地址: 0x5ca3e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73ac46
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void var_18
int32_t* eax_3 = std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >(
    &var_18, arg2)
int32_t edx = eax_3[1]
eax_3[1] = arg1[1]
arg1[1] = edx
int32_t ecx_2 = *eax_3
*eax_3 = *arg1
*arg1 = ecx_2
int32_t var_8_1 = 0
int32_t* var_14

if (var_14 != 0)
    bool cond:0_1 = var_14[1] != 1
    var_14[1]
    var_14[1] -= 1
    
    if (not(cond:0_1))
        (**var_14)(eax_2)
        int32_t ebx_1 = var_14[2]
        var_14[2] -= 1
        
        if (ebx_1 == 1)
            (*(*var_14 + 4))()

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
