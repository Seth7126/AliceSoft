// 函数: sub_5917f0
// 地址: 0x5917f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c83e6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct ISurface::sealengine::CResourceSurface::VTable** var_10 = arg1
int32_t __saved_esi
int32_t eax_2 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct ISurface::sealengine::CResourceSurface::VTable** var_10_1 = arg1
*arg1 = &sealengine::CResourceSurface::`vftable'{for `ISurface'}
sub_5f4370(&arg1[1])
int32_t var_4 = 0
arg1[5] = arg2
arg1[0xb] = 0xf
arg1[0xa] = 0
arg1[6].b = 0
sub_401ff0(&arg1[6], arg3, 0, 0xffffffff)
var_4.b = 1
int32_t* ecx_2 = arg1[5]
arg1[0xc] = arg4

if (ecx_2 != 0)
    (**ecx_2)(eax_2)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
