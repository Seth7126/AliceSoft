// 函数: ??$common_getenv@D@@YAPADQBD@Z
// 地址: 0x70b632
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x10
int32_t var_8 = 0x7de480
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x7de480 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38_1 = &data_70b63e
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax
eax.b = arg1 != 0
void* eax_2
void invalid

if (eax != 0)
    eax_2 = _strnlen(invalid, arg1, 0x7fff)
void* result

if (eax == 0 || neg.d(sbb.d(eax_2, eax_2, eax_2 u< 0x7fff)) == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = nullptr
else
    int32_t var_20_1 = 0
    ___acrt_lock(0xb)
    int32_t var_8_1 = 0
    void* result_1 = common_getenv_nolock<char>(arg1)
    void* result_2 = result_1
    int32_t var_8_2 = 0xfffffffe
    $LN9()
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_70b6a5
return result
