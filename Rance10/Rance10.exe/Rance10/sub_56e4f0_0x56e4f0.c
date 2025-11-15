// 函数: sub_56e4f0
// 地址: 0x56e4f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c5f6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct common::NotifyRefCounter<class common::detail::EmptyClass>::sealengine::CResourceCacheObject<class sealengine::CConstMeshList>::VTable
    ** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::NotifyRefCounter<class common::detail::EmptyClass>::sealengine::CResourceCacheObject<class sealengine::CConstMeshList>::VTable
    ** var_14_1 = arg1
arg1[1] = 1
*arg1 = &sealengine::CResourceCacheObject<class sealengine::CConstMeshList>::`vftable'{for `common::NotifyRefCounter<class common::detail::EmptyClass>'}
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
*arg1 = &sealengine::CConstMeshList::`vftable'{for `sealengine::CResourceCacheObject<class sealengine::CConstMeshList>'}
arg2 = &arg1[9]
arg1[9] = 0
arg1[0xa] = 0
arg1[9] = sub_42e780()
__builtin_memset(&arg1[0xb], 0, 0x18)
arg2 = &arg1[0xe]
var_8_1.b = 3
arg3 = &arg1[0x11]
arg1[0x11] = 0
arg1[0x12] = 0
arg1[0x11] = sub_56fef0()
__builtin_memset(&arg1[0x13], 0, 0x12)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
