// 函数: sub_589c00
// 地址: 0x589c00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73d962
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CDrawInstance::sealengine::CBillboard::VTable*** var_14 = arg1
int32_t var_18 = 0
struct sealengine::CDrawInstance::sealengine::CBillboard::VTable** eax_3 = sub_6e810c(0x80)
struct sealengine::CDrawInstance::sealengine::CBillboard::VTable** var_14_1 = eax_3
int32_t var_8_1 = 0
*arg1 = sub_568c40(eax_3, *arg2)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
