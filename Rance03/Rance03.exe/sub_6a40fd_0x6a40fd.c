// 函数: sub_6a40fd
// 地址: 0x6a40fd
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp_1 = 0x10
int32_t var_8 = 0x747fa0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_69e8b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x747fa0 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38_2 = &data_6a4109
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
void* result

if (arg1 == 0xfffffffe)
    *___doserrno() = 0
    *__errno() = 9
    result = 0xffffffff
else if (arg1 s< 0 || arg1 u>= data_75de9c)
    *___doserrno() = 0
label_6a41d8:
    *__errno() = 9
    __invalid_parameter_noinfo()
    result = 0xffffffff
else
    int32_t ebx_2 = arg1 s>> 5
    int32_t edi_3 = (arg1 & 0x1f) << 6
    
    if ((sx.d(*((&data_75ca40)[ebx_2] + edi_3 + 4)) & 1) == 0)
        *___doserrno() = 0
        goto label_6a41d8
    
    ___lock_fhandle(arg1)
    int32_t var_8_1 = 0
    void* result_1
    
    if ((*((&data_75ca40)[ebx_2] + edi_3 + 4) & 1) == 0)
        *__errno() = 9
        *___doserrno() = 0
        result_1 = 0xffffffff
    else
        result_1 = sub_6a41ec(arg1, arg1, arg2, arg3)
    
    void* result_2 = result_1
    int32_t var_8_2 = 0xfffffffe
    sub_6a41c4(arg1)
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6a41eb
return result
