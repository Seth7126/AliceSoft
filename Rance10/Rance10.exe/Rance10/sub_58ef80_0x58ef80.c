// 函数: sub_58ef80
// 地址: 0x58ef80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73dc1f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CDrawInstance::sealengine::CMesh::VTable*** var_14 = arg3
int32_t var_18 = 0
struct sealengine::CDrawInstance::sealengine::CMesh::VTable** eax_3 = sub_6e810c(0x78)
struct sealengine::CDrawInstance::sealengine::CMesh::VTable** var_14_1 = eax_3
int32_t var_8_1 = 0
int32_t var_2c = *arg8
*arg3 = sub_58d090(eax_3, *arg2, *arg4, *arg5, arg7.b, zx.d(*arg6), *arg7)
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
