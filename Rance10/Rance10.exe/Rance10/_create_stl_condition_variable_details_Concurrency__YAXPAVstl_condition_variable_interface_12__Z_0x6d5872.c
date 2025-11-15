// 函数: ?create_stl_condition_variable@details@Concurrency@@YAXPAVstl_condition_variable_interface@12@@Z
// 地址: 0x6d5872
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 4
int32_t (* var_c)(void* arg1) = sub_7495b4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28 = &data_6d587e
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = data_7fbd10

if (result s< 0)
label_6d5897:
    struct Concurrency::details::stl_condition_variable_interface::Concurrency::details::stl_condition_variable_concrt::VTable
        ** ecx_1 = arg1
    struct Concurrency::details::stl_condition_variable_interface::Concurrency::details::stl_condition_variable_concrt::VTable
        ** var_14_1 = ecx_1
    int32_t var_8 = 0
    
    if (ecx_1 != 0)
        *ecx_1 = &Concurrency::details::stl_condition_variable_concrt::`vftable'{for `Concurrency::details::stl_condition_variable_interface'}
        result = sub_6e961a(&ecx_1[1])
else
    uint32_t __security_cookie_1 = __security_cookie
    
    if (result s> 1)
        if (result == 2)
            goto label_6d58d5
        
        goto label_6d5897
    
    result = data_7fbecc ^ __security_cookie_1
    
    if (result == 0)
    label_6d58d5:
        result = data_7fbeb4 ^ __security_cookie_1
        
        if (result == 0)
            goto label_6d5897
        
        if (arg1 != 0)
            result = sub_6d57af(arg1)
    else if (arg1 != 0)
        result = sub_6d57c6(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d58b8
return result
