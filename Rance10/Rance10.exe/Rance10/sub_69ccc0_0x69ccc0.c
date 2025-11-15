// 函数: sub_69ccc0
// 地址: 0x69ccc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74879c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
arg1[1]
*arg1 = &Concurrency::details::_PPLTaskHandle<uint8_t,struct Concurrency::task<void,class <lambda_41d2005c7cb10ad02a9dd11342294f61>,struct Concurrency::details::_TypeSelectorNoAsync,uint8_t>::_InitialTaskHandle<void,class <lambda_41d2005c7cb10ad02a9dd11342294f61>,struct Concurrency::details::_TypeSelectorNoAsync>,struct Concurrency::details::_TaskProcHandle>::`vftable'{for `Concurrency::details::_TaskProcHandle'}
var_8_1.b = 1
int32_t* edi = arg1[2]

if (edi != 0)
    bool cond:0_1 = edi[1] != 1
    result = edi[1]
    edi[1] -= 1
    
    if (not(cond:0_1))
        result = (**edi)(eax_2)
        int32_t ebx_1 = edi[2]
        edi[2] -= 1
        
        if (ebx_1 == 1)
            result = (*(*edi + 4))()

*arg1 = &Concurrency::details::_TaskProcHandle::`vftable'
fsbase->NtTib.ExceptionList = ExceptionList
return result
