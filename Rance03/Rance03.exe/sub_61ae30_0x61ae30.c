// 函数: sub_61ae30
// 地址: 0x61ae30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cdf01
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IInterface::graphengined3d11::CVertexShader::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IInterface::graphengined3d11::CVertexShader::VTable** var_10_1 = arg1
*arg1 = &graphengined3d11::CVertexShader::`vftable'{for `IInterface'}
int32_t var_4 = 2
arg1[0xa] = arg1[9]
int32_t* ecx = arg1[8]

if (ecx != 0)
    (*(*ecx + 8))(ecx)
    arg1[8] = 0

int32_t* ecx_1 = arg1[3]

if (ecx_1 != 0)
    (*(*ecx_1 + 8))(ecx_1)
    arg1[3] = 0

arg1[5] = arg1[4]
int32_t eax_7 = arg1[9]

if (eax_7 != 0)
    j__free(eax_7)
    arg1[9] = 0
    arg1[0xa] = 0
    arg1[0xb] = 0

var_4.b = 0
int32_t* ecx_2 = arg1[8]
arg1[7] = &graphengined3d11::CInputLayout::`vftable'

if (ecx_2 != 0)
    (*(*ecx_2 + 8))(ecx_2)
    arg1[8] = 0

int32_t result = arg1[4]

if (result != 0)
    result = j__free(result)
    arg1[4] = 0
    arg1[5] = 0
    arg1[6] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
