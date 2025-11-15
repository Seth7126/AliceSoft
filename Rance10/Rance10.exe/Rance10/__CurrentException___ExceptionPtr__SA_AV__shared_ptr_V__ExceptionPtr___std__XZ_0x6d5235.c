// 函数: ?_CurrentException@__ExceptionPtr@@SA?AV?$shared_ptr@V__ExceptionPtr@@@std@@XZ
// 地址: 0x6d5235
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0xc
int32_t (* var_c)(void* arg1) = sub_7494f5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
int32_t* var_14 = &var_2c
void* const var_30_1 = &data_6d5241
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = 0
int32_t var_8 = 0
int32_t* result

if (*sub_6fff3a() == 0)
label_6d52c6:
    result = arg1
    *result = 0
    result[1] = 0
else
    if (*sub_6fff43() != 0)
        goto label_6d52c6
    
    if (**sub_6fff3a() == 0xe0434f4d)
        goto label_6d52c6
    
    if (**sub_6fff3a() == 0xe0434352)
        goto label_6d52c6
    
    char var_15 = 1
    std::make_shared<class __ExceptionPtr,struct EHExceptionRecord*&,bool>(arg1, sub_6fff3a(), 
        &var_15)
    result = arg1

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d52d3
return result
