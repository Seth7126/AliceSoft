// 函数: sub_542980
// 地址: 0x542980
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_738a28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_54 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_4f4e40(data_7fcba4 + 0x124, arg3)

if (eax_3 == 0)
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

struct textsurface::CTextSurfaceProperty::VTable* var_44
struct textsurface::CTextSurfaceProperty::VTable** eax_4 =
    sub_643850(&var_44, arg2, arg4, arg5, arg6, arg7, arg8, arg12, arg9, arg10, arg11)
int32_t var_8_1 = 0
void* edi_1 = *(eax_3 + 0x44)
sub_555e00(edi_1, 0x13, arg13)
sub_55f4d0(*(edi_1 + (arg13 << 2) + 0x7c), eax_4)
int32_t eax_5
eax_5.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_5
