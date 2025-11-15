// 函数: sub_642b60
// 地址: 0x642b60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74643b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct textsurface::CTextSurfaceCacheProperty::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct textsurface::CTextSurfaceCacheProperty::VTable** var_14_1 = arg1
*arg1 = &textsurface::CTextSurfaceCacheProperty::`vftable'
arg1[1] = &textsurface::CTextSurfaceProperty::`vftable'
arg1[2] = *(arg2 + 8)
arg1[3] = *(arg2 + 0xc)
*(arg1 + 0x10) = *(arg2 + 0x10)
arg1[8] = *(arg2 + 0x20)
arg1[9] = *(arg2 + 0x24)
*(arg1 + 0x28) = *(arg2 + 0x28)
int32_t var_8_1 = 0
arg1[0x13] = 0xf
arg1[0x12] = 0
arg1[0xe].b = 0
sub_403590(&arg1[0xe], arg2 + 0x38, 0, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
