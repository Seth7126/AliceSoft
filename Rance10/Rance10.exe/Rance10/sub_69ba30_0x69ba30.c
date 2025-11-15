// 函数: sub_69ba30
// 地址: 0x69ba30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728076
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &std::_Func_impl<class <lambda_5e5ab22ea98f4361dbf159481d01f54d>, class std::allocator<int>, void>::`vftable'{for `std::_Func_base<void>'}
int32_t var_8_1 = 0
int32_t* esi = arg1[3]

if (esi != 0)
    bool cond:1_1 = esi[1] != 1
    result = esi[1]
    esi[1] -= 1
    
    if (not(cond:1_1))
        result = (**esi)(eax_2)
        int32_t ebx_1 = esi[2]
        esi[2] -= 1
        
        if (ebx_1 == 1)
            result = (*(*esi + 4))()

*arg1 = &std::_Func_base<void>::`vftable'

if (arg2 != 0)
    result = sub_403160(arg1, 1, 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
