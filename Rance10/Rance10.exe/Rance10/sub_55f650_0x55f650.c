// 函数: sub_55f650
// 地址: 0x55f650
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73b798
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_60 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_50 = *(arg1 + 0x10)
int32_t eax_4 = *(arg1 + 0x14)
int128_t var_48 = *(arg1 + 0x18)
struct textsurface::CTextSurfaceProperty::VTable* const var_54 =
    &textsurface::CTextSurfaceProperty::`vftable'
int32_t var_38 = *(arg1 + 0x28)
int32_t var_4c = eax_4
int32_t var_34 = *(arg1 + 0x2c)
int32_t ecx = arg2
int32_t edx = 0xff
int32_t var_8_1 = 0

if (ecx != zx.d(ecx.b))
    int32_t eax_6 = 0xff
    
    if (ecx s< 0)
        eax_6 = 0
    
    ecx = eax_6

int32_t ecx_1 = arg3

if (ecx_1 != zx.d(ecx_1.b))
    int32_t eax_8 = 0xff
    
    if (ecx_1 s< 0)
        eax_8 = 0
    
    ecx_1 = eax_8

int32_t var_1c = ecx_1
int32_t ecx_2 = arg4

if (ecx_2 != zx.d(ecx_2.b))
    if (ecx_2 s< 0)
        edx = 0
    
    ecx_2 = edx

int32_t var_18 = ecx_2
int32_t var_14 = 0xff
int128_t var_30 = ecx.o
int32_t result = sub_55f4d0(arg1, &var_54)
fsbase->NtTib.ExceptionList = ExceptionList
return result
