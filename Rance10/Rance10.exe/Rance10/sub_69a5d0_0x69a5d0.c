// 函数: sub_69a5d0
// 地址: 0x69a5d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728076
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct Concurrency::details::_Task_impl_base::Concurrency::details::_Task_impl<uint8_t>::VTable** 
    var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = arg1[0x13]
*arg1 = &Concurrency::details::_Task_impl<uint8_t>::`vftable'{for `Concurrency::details::_Task_impl_base'}

if (eax_3 != 0)
    int32_t var_24_1 = eax_3
    sub_697590(arg1[0x12])
    int32_t* ecx_1 = arg1[0x13]
    int32_t eax_4 = ecx_1[1]
    ecx_1[1] -= 1
    
    if (eax_4 == 1)
        (*(*ecx_1 + 4))(eax_2)
    
    arg1[0x13] = 0

int32_t var_8_1 = 0
int32_t* ecx_2 = arg1[0x3f]

if (ecx_2 != 0)
    eax_3.b = ecx_2 != &arg1[0x36]
    (*(*ecx_2 + 0x10))(zx.d(eax_3.b))
    arg1[0x3f] = 0

int32_t result = sub_698220(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
