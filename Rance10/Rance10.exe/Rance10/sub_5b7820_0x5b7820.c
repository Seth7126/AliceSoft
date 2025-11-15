// 函数: sub_5b7820
// 地址: 0x5b7820
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f503
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct common::NotifyRefCounter<class common::detail::EmptyClass>::sealengine::CResourceCacheObject<class sealengine::CPolyData>::VTable
    ** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::NotifyRefCounter<class common::detail::EmptyClass>::sealengine::CResourceCacheObject<class sealengine::CPolyData>::VTable
    ** var_14_1 = arg1
arg1[1] = 1
*arg1 = &sealengine::CResourceCacheObject<class sealengine::CPolyData>::`vftable'{for `common::NotifyRefCounter<class common::detail::EmptyClass>'}
arg1[7] = 0xf
arg1[6] = 0
char* eax_3

if (arg1[7] u< 0x10)
    eax_3 = &arg1[2]
else
    eax_3 = arg1[2]

*eax_3 = 0
sub_403590(&arg1[2], arg2, 0, 0xffffffff)
arg1[8] = arg4
int32_t var_8_1 = 0
*arg1 = &sealengine::CPolyData::`vftable'{for `sealengine::CResourceCacheObject<class sealengine::CPolyData>'}
arg1[9] = 0
arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xc] = 0x3f800000
arg1[0xd] = 0x3dcccccd
arg1[0xe] = 0
arg1[0xf] = 0
arg1[0x10] = 0
var_8_1.b = 1
arg1[0x11] = 0x100
arg2 = &arg1[0x12]
arg1[0x12] = nullptr
arg1[0x13] = 0
arg1[0x12] = sub_42e780()
arg1[0x14] = 0x3e8
__builtin_memset(&arg1[0x15], 0, 0x31)
arg1[0x26] = 0xf
arg1[0x25] = 0
arg1[0x27] = 0
arg1[0x28] = arg3
arg1[0x29] = 0
arg1[0x2a] = 0
arg1[0x2b] = 0
sub_580110(&arg1[0x2c])
arg1[0x38] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
