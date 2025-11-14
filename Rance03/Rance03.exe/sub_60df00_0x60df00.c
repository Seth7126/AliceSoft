// 函数: sub_60df00
// 地址: 0x60df00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b7afb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IIndexBuffer::graphengined3d11::CIndexBuffer::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IIndexBuffer::graphengined3d11::CIndexBuffer::VTable** var_10_1 = arg1
*arg1 = &graphengined3d11::CIndexBuffer::`vftable'{for `IIndexBuffer'}
int32_t var_4 = 0
arg1[5] = arg1[4]
int32_t* ecx = arg1[3]

if (ecx != 0)
    (*(*ecx + 8))(ecx)
    arg1[3] = 0

arg1[7] = 0
arg1[8].w = 0
int32_t result = arg1[4]

if (result != 0)
    result = j__free(result)
    arg1[4] = 0
    arg1[5] = 0
    arg1[6] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
