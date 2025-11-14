// 函数: sub_620a50
// 地址: 0x620a50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b562b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct ISurface::surfacefactory::CSurface::VTable** eax_3 = sub_69adc6(0x38)
struct ISurface::surfacefactory::CSurface::VTable** var_10_1 = eax_3
int32_t var_4 = 0
struct ISurface::surfacefactory::CSurface::VTable** result

if (eax_3 == 0)
    result = nullptr
else
    result = sub_620500(eax_3)

int32_t var_4_1 = 0xffffffff

if (sub_620780(result, arg1, arg2, arg3) != 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

if (result != 0)
    (*result)->vFunc_11(1)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
