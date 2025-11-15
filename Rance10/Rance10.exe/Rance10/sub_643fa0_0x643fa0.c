// 函数: sub_643fa0
// 地址: 0x643fa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_746588
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_64 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct textsurface::CTextSurfaceProperty::VTable* var_54
sub_6437f0(&var_54)
int32_t ecx_1 = 0xff
int32_t edx = arg6
int32_t var_8_1 = 0
int32_t var_50 = arg4
int32_t var_4c = arg5

if (edx != zx.d(edx.b))
    int32_t eax_6 = 0xff
    
    if (edx s< 0)
        eax_6 = 0
    
    edx = eax_6

int32_t edx_1 = arg7

if (edx_1 != zx.d(edx_1.b))
    int32_t eax_8 = 0xff
    
    if (edx_1 s< 0)
        eax_8 = 0
    
    edx_1 = eax_8

int32_t var_1c = edx_1
int32_t edx_2 = arg8

if (edx_2 != zx.d(edx_2.b))
    int32_t eax_10 = 0xff
    
    if (edx_2 s< 0)
        eax_10 = 0
    
    edx_2 = eax_10

int32_t var_18 = edx_2
int32_t edx_3 = arg11
int32_t var_14 = 0xff
int128_t var_48 = edx.o
int32_t var_38 = arg9
int32_t var_34 = arg10

if (edx_3 != zx.d(edx_3.b))
    int32_t eax_12 = 0xff
    
    if (edx_3 s< 0)
        eax_12 = 0
    
    edx_3 = eax_12

int32_t edx_4 = arg12

if (edx_4 != zx.d(edx_4.b))
    int32_t eax_14 = 0xff
    
    if (edx_4 s< 0)
        eax_14 = 0
    
    edx_4 = eax_14

int32_t var_1c_1 = edx_4
int32_t edx_5 = arg13

if (edx_5 != zx.d(edx_5.b))
    if (edx_5 s< 0)
        ecx_1 = 0
    
    edx_5 = ecx_1

int32_t var_18_1 = edx_5
int32_t var_14_1 = 0xff
int128_t var_30 = edx_3.o
int32_t result = sub_641fe0(&var_54, arg3, arg2)
fsbase->NtTib.ExceptionList = ExceptionList
return result
