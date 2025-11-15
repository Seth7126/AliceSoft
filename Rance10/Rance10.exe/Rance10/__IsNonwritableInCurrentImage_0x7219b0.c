// 函数: __IsNonwritableInCurrentImage
// 地址: 0x7219b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xfffffffe
int32_t var_c = 0x7de840
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_c_1 = var_c ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_1c = &var_2c
int32_t var_8_1 = 0

if (__ValidateImageBase(&__dos_header) != 0)
    void* eax_5 = __FindPESection(&__dos_header, arg1 - &__dos_header)
    
    if (eax_5 != 0)
        int32_t var_8_2 = 0xfffffffe
        fsbase->NtTib.ExceptionList = ExceptionList
        return not.d(*(eax_5 + 0x24) u>> 0x1f) & 1

int32_t var_8_3 = 0xfffffffe
fsbase->NtTib.ExceptionList = ExceptionList
return 0
