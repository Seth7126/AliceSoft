// 函数: sub_610600
// 地址: 0x610600
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cd576
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct graphengined3d11::CShaderManager::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_10 = arg1
*arg1 = &graphengined3d11::CShaderManager::`vftable'
int32_t var_4 = 9
sub_610e00(arg1)
var_4.b = 8
int32_t* ecx = arg1[0x31]
arg1[0x30] = &graphengined3d11::CConstantBuffer::`vftable'

if (ecx != 0)
    (*(*ecx + 8))(ecx)
    arg1[0x31] = 0

var_4.b = 7
int32_t* ecx_1 = arg1[0x2f]
arg1[0x2e] = &graphengined3d11::CConstantBuffer::`vftable'

if (ecx_1 != 0)
    (*(*ecx_1 + 8))(ecx_1)
    arg1[0x2f] = 0

var_4.b = 6
int32_t* ecx_2 = arg1[0x2d]
arg1[0x2c] = &graphengined3d11::CConstantBuffer::`vftable'

if (ecx_2 != 0)
    (*(*ecx_2 + 8))(ecx_2)
    arg1[0x2d] = 0

var_4.b = 5
int32_t* ecx_3 = arg1[0x2b]
arg1[0x2a] = &graphengined3d11::CConstantBuffer::`vftable'

if (ecx_3 != 0)
    (*(*ecx_3 + 8))(ecx_3)
    arg1[0x2b] = 0

var_4.b = 4
int32_t* ecx_4 = arg1[0x29]
arg1[0x28] = &graphengined3d11::CConstantBuffer::`vftable'

if (ecx_4 != 0)
    (*(*ecx_4 + 8))(ecx_4)
    arg1[0x29] = 0

var_4.b = 3
int32_t* ecx_5 = arg1[0x27]
arg1[0x26] = &graphengined3d11::CConstantBuffer::`vftable'

if (ecx_5 != 0)
    (*(*ecx_5 + 8))(ecx_5)
    arg1[0x27] = 0

int32_t** eax_9 = arg1[0x24]
sub_4200d0(&arg1[0x24], &var_10, *eax_9, eax_9)
j__free(arg1[0x24])
int32_t** eax_10 = arg1[0x22]
sub_4200d0(&arg1[0x22], &var_10, *eax_10, eax_10)
j__free(arg1[0x22])
arg1[0x14] = &graphengine::CShaderParam::`vftable'{for `IShaderParam'}
int32_t var_4_1 = 0xffffffff
int32_t result = sub_608040(&arg1[4])
fsbase->NtTib.ExceptionList = ExceptionList
return result
