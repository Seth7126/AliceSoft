// 函数: sub_5438d0
// 地址: 0x5438d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_738a28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_54 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = sub_4f4e40(data_7fcba4 + 0x124, arg3)

if (result != 0)
    struct textsurface::CTextSurfaceProperty::VTable* var_44
    struct textsurface::CTextSurfaceProperty::VTable** eax_3 =
        sub_643850(&var_44, arg2, arg4, arg5, arg6, arg7, arg8, arg12, arg9, arg10, arg11)
    int32_t var_8_1 = 0
    void* edi_1 = *(result + 0x44)
    sub_555e00(edi_1, 0x16, arg13)
    result = sub_5534b0(*(edi_1 + (arg13 << 2) + 0x7c), eax_3)

fsbase->NtTib.ExceptionList = ExceptionList
return result
