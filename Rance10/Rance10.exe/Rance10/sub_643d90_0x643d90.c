// 函数: sub_643d90
// 地址: 0x643d90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_746522
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx_1 = data_7fcbc8

if (ecx_1 != 0)
    (**ecx_1)(1)
    data_7fcbc8 = 0

int32_t* ecx_2 = data_7fcbc4

if (ecx_2 != 0)
    (**ecx_2)(1)
    data_7fcbc4 = 0

struct textsurface::CTextSurfaceManager::VTable** eax_5 = sub_6e810c(0x184)
struct textsurface::CTextSurfaceManager::VTable** var_14_1 = eax_5
int32_t var_8_1 = 0
int32_t var_8_2 = 0xffffffff
data_7fcbc4 = sub_6413e0(eax_5)
struct textsurface::CDashTextSurfaceCreater::VTable** eax_7 = sub_6e810c(0xe0)
struct textsurface::CDashTextSurfaceCreater::VTable** var_14_2 = eax_7
data_7fcbc8 = sub_63dcb0(eax_7)
struct textsurface::CDashTextSurfaceCreater::VTable** result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
