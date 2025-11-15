// 函数: sub_5c9fa0
// 地址: 0x5c9fa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7403df
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CShader::VTable*** var_14 = arg1
int32_t var_18 = 0
struct sealengine::CShader::VTable** eax_3 = sub_6e810c(0xc)
struct sealengine::CShader::VTable** var_14_1 = eax_3
int32_t var_8_1 = 0
int32_t* ecx = *arg2
*eax_3 = &sealengine::CShader::`vftable'
eax_3[1] = ecx
eax_3[2].b = (*(*ecx + 0x94))(eax_2)
*arg1 = eax_3
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
