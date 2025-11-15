// 函数: sub_68b3b0
// 地址: 0x68b3b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747324
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_68 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct graphengined3d11::CShaderManager::VTable** var_4c = arg1
int32_t ebx = 0
struct graphengined3d11::CShaderManager::VTable** var_50 = arg1
int32_t var_4c_1 = 0
arg1[1] = arg2
*arg1 = &graphengined3d11::CShaderManager::`vftable'
arg1[2] = arg3
sub_681b40(&arg1[4])
int32_t var_8_1 = 0
arg1[0x12] = 0
arg1[0x13] = 0
sub_683180(&arg1[0x14])
var_8_1.b = 1
void* var_4c_2 = &arg1[0x22]
arg1[0x22] = 0
arg1[0x23] = 0
arg1[0x22] = sub_42e780()
var_8_1.b = 2
void* var_4c_3 = &arg1[0x24]
arg1[0x24] = 0
arg1[0x25] = 0
arg1[0x24] = sub_42e780()
int32_t (__fastcall* var_6c)(struct graphengined3d11::CConstantBuffer::VTable** arg1) = sub_684ac0
var_8_1.b = 3
void* var_4c_4 = &arg1[0x26]
`eh vector constructor iterator'(&arg1[0x26], 0x14, 4, sub_684a70)
arg1[0x3a] = &graphengined3d11::CConstantBuffer::`vftable'
arg1[0x3b] = 0
arg1[0x3c] = 0
arg1[0x3d] = 0
arg1[0x3e] = 0
arg1[0x3f] = &graphengined3d11::CConstantBuffer::`vftable'
arg1[0x40] = 0
arg1[0x41] = 0
arg1[0x42] = 0
arg1[0x43] = 0
arg1[0x44] = &graphengined3d11::CConstantBuffer::`vftable'
arg1[0x45] = 0
arg1[0x46] = 0
arg1[0x47] = 0
arg1[0x48] = 0
arg1[0x49] = &graphengined3d11::CConstantBuffer::`vftable'
arg1[0x4a] = 0
arg1[0x4b] = 0
arg1[0x4c] = 0
arg1[0x4d] = 0
arg1[0x4e] = &graphengined3d11::CConstantBuffer::`vftable'
arg1[0x4f] = 0
arg1[0x50] = 0
arg1[0x51] = 0
arg1[0x52] = 0
arg1[0x53] = &graphengined3d11::CConstantBuffer::`vftable'
arg1[0x54] = 0
arg1[0x55] = 0
arg1[0x56] = 0
arg1[0x57] = 0
arg1[0x58] = &graphengined3d11::CConstantBuffer::`vftable'
arg1[0x59] = 0
arg1[0x5a] = 0
arg1[0x5b] = 0
arg1[0x5c] = 0
var_8_1.b = 0xb
struct filesystem::CFilePath::VTable* var_48
char var_2c
int32_t var_18
char eax_12

if (arg4 == 0)
    eax_12 = 0
else
    var_18 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    sub_403490(&var_2c, "ShaderCompiler.dll", 0x12)
    struct win32only::CGetDLL::VTable* const var_58_1 = &win32only::CGetDLL::`vftable'
    int32_t var_8_2 = 0xd
    char* lpModuleName = &var_2c
    ebx = 3
    int32_t var_4c_5 = 3
    
    if (var_18 u>= 0x10)
        lpModuleName = var_2c.d
    
    HMODULE eax_8 = GetModuleHandleA(lpModuleName)
    HMODULE var_54_1 = eax_8
    
    if (eax_8 == 0)
        eax_12 = 0
    else
        void* lpFileName = &sub_68b7e0(&var_48)[1]
        ebx = 7
        
        if (*(lpFileName + 0x14) u>= 0x10)
            lpFileName = *lpFileName
        
        uint32_t eax_10 = GetFileAttributesA(lpFileName)
        
        if (eax_10 == 0xffffffff || ((eax_10 u>> 4).b & 1) == 0)
            eax_12 = 0
        else
            eax_12 = 1

arg1[3].b = eax_12

if ((ebx.b & 4) != 0)
    ebx &= 0xfffffffb
    var_48 = &filesystem::CFilePath::`vftable'
    int32_t var_30
    char var_44
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    char var_44_1 = 0

if ((ebx.b & 2) != 0)
    ebx &= 0xfffffffd

if ((ebx.b & 1) != 0 && var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
