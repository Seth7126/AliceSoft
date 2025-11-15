// 函数: sub_517ac0
// 地址: 0x517ac0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_738a58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_54 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = *(arg1 + 0x44)
sub_555e00(edi, 0x13, arg2)
void* ecx_1 = *(edi + (arg2 << 2) + 0x7c)
struct textsurface::CTextSurfaceProperty::VTable* const var_48 =
    &textsurface::CTextSurfaceProperty::`vftable'
int32_t var_44 = *(ecx_1 + 0x10)
int128_t var_3c = *(ecx_1 + 0x18)
int32_t var_40 = *(ecx_1 + 0x14)
int32_t var_28 = *(ecx_1 + 0x2c)
int128_t var_24 = *(ecx_1 + 0x30)
int32_t var_8_1 = 0
int32_t xmm1
int32_t var_2c = xmm1
sub_55f4d0(ecx_1, &var_48)
int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
