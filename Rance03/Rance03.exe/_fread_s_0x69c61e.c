// 函数: _fread_s
// 地址: 0x69c61e
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp_2 = 0xc
int32_t var_8 = 0x747de8
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_69e8b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x747de8 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_3 = &data_69c62a
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
uint32_t result

if (arg3 == 0 || arg4 == 0)
    result = 0
else if (arg5 != 0)
    __lock_file(arg5)
    int32_t var_8_1 = 0
    uint32_t result_1 = __fread_nolock_s(arg1, arg2, arg3, arg4, arg5)
    uint32_t result_2 = result_1
    int32_t var_8_2 = 0xfffffffe
    $LN12(arg5)
    result = result_1
else
    if (arg2 != 0xffffffff)
        _memset(arg1, 0, arg2)
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_69c66c
return result
