// 函数: ??$common_lseek@_J@@YA_JH_JH@Z
// 地址: 0x70b835
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x1c
int32_t var_8 = 0x7de4c0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x7de4c0 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_40 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_40
void* const var_44_2 = &data_70b841
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg1 != 0xfffffffe)
    int32_t ecx_2
    int32_t edx_1
    
    if (arg1 s>= 0 && arg1 u< data_7fc918)
        ecx_2 = arg1 s>> 6
        edx_1 = (arg1 & 0x3f) * 0x30
    
    if (arg1 s< 0 || arg1 u>= data_7fc918
            || (zx.d(*((&data_7fc718)[ecx_2] + edx_1 + 0x28)) & 1) == 0)
        *___doserrno() = 0
        *__errno() = 9
        __invalid_parameter_noinfo()
        result = 0xffffffff
    else
        int32_t edx_2 = ___acrt_lowio_lock_fh(arg1)
        result = 0xffffffff
        int32_t var_30_1 = 0xffffffff
        int32_t var_2c_1 = 0xffffffff
        int32_t var_8_1 = 0
        int32_t eax_8 = (&data_7fc718)[ecx_2]
        
        if ((*(eax_8 + edx_1 + 0x28) & 1) != 0)
            int32_t result_2
            int32_t edx_3
            result_2, edx_3 =
                common_lseek_nolock<int64_t>(eax_8, edx_2, edx_1, arg1, arg2, arg3, arg4)
            result = result_2
            int32_t result_1 = result
            int32_t var_2c_2 = edx_3
        else
            *__errno() = 9
            *___doserrno() = 0
        
        int32_t var_8_2 = 0xfffffffe
        $LN13(arg1)
else
    *___doserrno() = 0
    *__errno() = 9
    result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_70b939
return result
