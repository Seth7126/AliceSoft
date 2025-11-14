// 函数: sub_619da0
// 地址: 0x619da0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cdcc7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct graphengined3d11::CTransformedSpriteShader::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_10 = arg1
*arg1 = &graphengined3d11::CTransformedSpriteShader::`vftable'
int32_t var_4 = 4
sub_6187a0(arg1)
var_4.b = 3
int32_t* ecx = arg1[0x17]
arg1[0x16] = &graphengined3d11::CConstantBuffer::`vftable'

if (ecx != 0)
    (*(*ecx + 8))(ecx)
    arg1[0x17] = 0

var_4.b = 2
int32_t* ecx_1 = arg1[0x15]
arg1[0x14] = &graphengined3d11::CConstantBuffer::`vftable'

if (ecx_1 != 0)
    (*(*ecx_1 + 8))(ecx_1)
    arg1[0x15] = 0

int32_t** eax_5 = arg1[0x12]
sub_4200d0(&arg1[0x12], &var_10, *eax_5, eax_5)
j__free(arg1[0x12])
int32_t** eax_6 = arg1[0x10]
sub_4200d0(&arg1[0x10], &var_10, *eax_6, eax_6)
j__free(arg1[0x10])
int32_t var_4_1 = 0xffffffff
int32_t result = sub_608040(&arg1[2])
fsbase->NtTib.ExceptionList = ExceptionList
return result
