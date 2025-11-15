// 函数: sub_590020
// 地址: 0x590020
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73dd25
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct common::NotifyRefCounter<class common::detail::EmptyClass>::sealengine::CResourceCacheObject<class sealengine::CMotionData>::VTable
    ** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::NotifyRefCounter<class common::detail::EmptyClass>::sealengine::CResourceCacheObject<class sealengine::CMotionData>::VTable
    ** var_14_1 = arg1
arg1[1] = 1
*arg1 = &sealengine::CResourceCacheObject<class sealengine::CMotionData>::`vftable'{for `common::NotifyRefCounter<class common::detail::EmptyClass>'}
arg1[7] = 0xf
arg1[6] = 0
char* eax_3

if (arg1[7] u< 0x10)
    eax_3 = &arg1[2]
else
    eax_3 = arg1[2]

*eax_3 = 0
sub_403590(&arg1[2], arg2, 0, 0xffffffff)
arg1[8] = arg3
int32_t var_8_1 = 0
*arg1 = &sealengine::CMotionData::`vftable'{for `sealengine::CResourceCacheObject<class sealengine::CMotionData>'}
__builtin_memset(&arg1[9], 0, 0x34)
var_8_1.b = 4
arg2 = &arg1[0x16]
arg1[0x16] = 0
arg1[0x17] = 0
arg1[0x16] = sub_461920()
var_8_1.b = 5
arg2 = &arg1[0x18]
arg1[0x18] = 0
arg1[0x19] = 0
arg1[0x18] = sub_461920()
var_8_1.b = 6
arg2 = &arg1[0x1a]
arg1[0x1a] = 0
arg1[0x1b] = 0
arg1[0x1a] = sub_461920()
var_8_1.b = 7
arg2 = &arg1[0x1c]
arg1[0x1c] = 0
arg1[0x1d] = 0
arg1[0x1c] = sub_461920()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
