// 函数: sub_681b40
// 地址: 0x681b40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_746cf6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct graphengine::CShaderArchive::VTable** var_14 = arg1
void** eax_3 = &arg1[2]
*arg1 = &graphengine::CShaderArchive::`vftable'
arg1[1] = 0
eax_3[5] = 0xf
eax_3[4] = 0

if (eax_3[5] u>= 0x10)
    eax_3 = *eax_3

*eax_3 = nullptr
int32_t var_8_1 = 0
arg1[8] = 0
arg1[9] = 0
arg1[0xa] = 0
var_8_1.b = 1
void* var_18 = &arg1[0xb]
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xb] = sub_56fef0()
arg1[0xd] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
