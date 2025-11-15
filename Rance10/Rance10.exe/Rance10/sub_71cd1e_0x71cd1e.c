// 函数: sub_71cd1e
// 地址: 0x71cd1e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x7de820
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x7de820 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_1 = &data_71cd2a
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
void* eax = sub_714cce()
void* result

if ((*(eax + 0x350) & data_7e180c) != 0)
    result = *(eax + 0x4c)

if ((*(eax + 0x350) & data_7e180c) == 0 || result == 0)
    ___acrt_lock(4)
    int32_t var_8_1 = 0
    result = __updatetlocinfoEx_nolock(eax + 0x4c, data_7fcacc)
    void* result_1 = result
    int32_t var_8_2 = 0xfffffffe
    sub_71cd84()
    
    if (result == 0)
        _abort()
        noreturn

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_71cd94
return result
