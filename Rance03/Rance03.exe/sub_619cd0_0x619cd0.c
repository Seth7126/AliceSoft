// 函数: sub_619cd0
// 地址: 0x619cd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cdc66
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct graphengined3d11::CTransformedSpriteShader::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct graphengined3d11::CTransformedSpriteShader::VTable** var_10_1 = arg1
*arg1 = &graphengined3d11::CTransformedSpriteShader::`vftable'
arg1[1] = 0
sub_607f80(&arg1[2])
int32_t var_4 = 0
arg1[0x10] = 0
arg1[0x11] = 0
arg1[0x10] = sub_4203c0()
var_4.b = 1
arg1[0x12] = 0
arg1[0x13] = 0
arg1[0x12] = sub_4203c0()
arg1[0x14] = &graphengined3d11::CConstantBuffer::`vftable'
arg1[0x15] = 0
arg1[0x16] = &graphengined3d11::CConstantBuffer::`vftable'
arg1[0x17] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
