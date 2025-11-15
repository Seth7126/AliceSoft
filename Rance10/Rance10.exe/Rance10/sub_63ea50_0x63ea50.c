// 函数: sub_63ea50
// 地址: 0x63ea50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7460a1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* i = arg3
struct textsurface::CExternalFontBySize::VTable** result = arg4
struct textsurface::CExternalFontBySize::VTable** result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i += 0x14)
    struct textsurface::CExternalFontBySize::VTable** result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        *result = &textsurface::CExternalFontBySize::`vftable'
        result[1] = *(i + 4)
        sub_63eb30(&result[2], i + 8)
    
    result = &result[5]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
