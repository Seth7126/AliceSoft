// 函数: sub_6922c0
// 地址: 0x6922c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747ad6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct graphengined3d11::CSpriteShader::VTable** var_14 = arg1
*arg1 = &graphengined3d11::CSpriteShader::`vftable'
arg1[1] = 0
sub_681b40(&arg1[2])
int32_t var_8_1 = 0
void* var_18 = &arg1[0x10]
arg1[0x10] = 0
arg1[0x11] = 0
arg1[0x10] = sub_42e780()
var_8_1.b = 1
void* var_18_1 = &arg1[0x12]
arg1[0x12] = 0
arg1[0x13] = 0
arg1[0x12] = sub_42e780()
arg1[0x14] = &graphengined3d11::CConstantBuffer::`vftable'
arg1[0x15] = 0
arg1[0x16] = 0
arg1[0x17] = 0
arg1[0x18] = 0
arg1[0x19] = &graphengined3d11::CConstantBuffer::`vftable'
arg1[0x1a] = 0
arg1[0x1b] = 0
arg1[0x1c] = 0
arg1[0x1d] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
