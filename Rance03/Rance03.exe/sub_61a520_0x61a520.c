// 函数: sub_61a520
// 地址: 0x61a520
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cde26
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IVertexBuffer::graphengined3d11::CVertexBuffer::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IVertexBuffer::graphengined3d11::CVertexBuffer::VTable** var_10_1 = arg1
*arg1 = &graphengined3d11::CVertexBuffer::`vftable'{for `IVertexBuffer'}
int32_t var_4 = 1
arg1[8] = arg1[7]
int32_t* ecx = arg1[3]

if (ecx != 0)
    (*(*ecx + 8))(ecx)
    arg1[3] = 0

arg1[5] = arg1[4]
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xa] = 0
arg1[0xf].w = 0
int32_t eax_6 = arg1[7]

if (eax_6 != 0)
    j__free(eax_6)
    arg1[7] = 0
    arg1[8] = 0
    arg1[9] = 0

int32_t result = arg1[4]

if (result != 0)
    result = j__free(result)
    arg1[4] = 0
    arg1[5] = 0
    arg1[6] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
