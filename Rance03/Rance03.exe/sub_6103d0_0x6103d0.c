// 函数: sub_6103d0
// 地址: 0x6103d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cd4c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
int32_t __saved_esi
int32_t var_68 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = 0
struct graphengined3d11::CShaderManager::VTable** var_4c = arg1
int32_t var_58 = 0
arg1[1] = arg2
*arg1 = &graphengined3d11::CShaderManager::`vftable'
arg1[2] = arg3
sub_607f80(&arg1[4])
int32_t var_4 = 0
arg1[0x12] = 0
arg1[0x13] = 0
sub_608f00(&arg1[0x14])
var_4.b = 1
arg1[0x22] = 0
arg1[0x23] = 0
arg1[0x22] = sub_4203c0()
var_4.b = 2
arg1[0x24] = 0
arg1[0x25] = 0
arg1[0x24] = sub_4203c0()
arg1[0x26] = &graphengined3d11::CConstantBuffer::`vftable'
arg1[0x27] = 0
arg1[0x28] = &graphengined3d11::CConstantBuffer::`vftable'
arg1[0x29] = 0
arg1[0x2a] = &graphengined3d11::CConstantBuffer::`vftable'
arg1[0x2b] = 0
arg1[0x2c] = &graphengined3d11::CConstantBuffer::`vftable'
arg1[0x2d] = 0
arg1[0x2e] = &graphengined3d11::CConstantBuffer::`vftable'
arg1[0x2f] = 0
arg1[0x30] = &graphengined3d11::CConstantBuffer::`vftable'
arg1[0x31] = 0
var_4.b = 9
char var_48
int32_t var_34
struct filesystem::CFilePath::VTable* var_30
char eax_12

if (arg4 == 0)
    eax_12 = 0
else
    var_34 = 0xf
    int32_t var_38_1 = 0
    var_48 = 0
    sub_402110(&var_48, "ShaderCompiler.dll", 0x12)
    struct graphengine::CGetDLL::VTable* const var_54_1 = &graphengine::CGetDLL::`vftable'
    int32_t var_4_1 = 0xb
    char* lpModuleName = &var_48
    ebx = 3
    int32_t var_58_1 = 3
    
    if (var_34 u>= 0x10)
        lpModuleName = var_48.d
    
    HMODULE eax_9 = GetModuleHandleA(lpModuleName)
    HMODULE var_50_1 = eax_9
    
    if (eax_9 == 0)
        eax_12 = 0
    else
        ebx = 7
        
        if (sub_605570(&sub_6107b0(&var_30)[1]) == 0)
            eax_12 = 0
        else
            eax_12 = 1

arg1[3].b = eax_12

if ((ebx.b & 4) != 0)
    ebx &= 0xfffffffb
    var_30 = &filesystem::CFilePath::`vftable'
    int32_t var_18
    char var_2c
    
    if (var_18 u>= 0x10)
        j__free(var_2c.d)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c_1 = 0

if ((ebx.b & 2) != 0)
    ebx &= 0xfffffffd

if ((ebx.b & 1) != 0 && var_34 u>= 0x10)
    j__free(var_48.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_5c)
return arg1
