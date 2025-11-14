// 函数: sub_58c600
// 地址: 0x58c600
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c7b97
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CRenderer::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CRenderer::VTable** var_10_1 = arg1
*arg1 = &sealengine::CRenderer::`vftable'
int32_t var_4 = 1
int32_t* ecx = arg1[0x45]

if (ecx != 0)
    (**ecx)(1)
    arg1[0x45] = 0

arg1[0x42] = &sealengine::CRenderConfig::`vftable'
void* var_10_2 = &arg1[1]
arg1[1] = &sealengine::CRenderParam::`vftable'{for `IRenderParam'}
int32_t var_4_1 = 2
int32_t* ecx_1 = arg1[0x3e]

if (ecx_1 != 0)
    sub_53a360(ecx_1)
    arg1[0x3e] = 0

int32_t var_4_2 = 0xffffffff
int32_t result = sub_58cec0(&arg1[0x28])
fsbase->NtTib.ExceptionList = ExceptionList
return result
