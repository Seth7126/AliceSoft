// 函数: sub_60ea10
// 地址: 0x60ea10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b7afb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IInterface::graphengined3d11::CPixelShader::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IInterface::graphengined3d11::CPixelShader::VTable** var_10_1 = arg1
*arg1 = &graphengined3d11::CPixelShader::`vftable'{for `IInterface'}
int32_t var_4 = 0
int32_t* ecx = arg1[3]

if (ecx != 0)
    (*(*ecx + 8))(ecx)
    arg1[3] = 0

int32_t eax_4 = arg1[4]
arg1[5] = eax_4

if (eax_4 != 0)
    j__free(eax_4)
    arg1[4] = 0
    arg1[5] = 0
    arg1[6] = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
