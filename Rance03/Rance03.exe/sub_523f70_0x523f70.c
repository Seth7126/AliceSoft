// 函数: sub_523f70
// 地址: 0x523f70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c2f44
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct chipmunk::CSceneRendererD3D9::VTable** var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct chipmunk::CSceneRendererD3D9::VTable** var_10_1 = arg1
*arg1 = &chipmunk::CSceneRendererD3D9::`vftable'
int32_t var_4 = 2
sub_522820(&arg1[2])
sub_522820(&arg1[0x11])
int32_t* ecx_2 = arg1[0x20]

if (ecx_2 != 0)
    (*(*ecx_2 + 4))(eax_2)
    arg1[0x20] = 0

arg1[1].b = 0
arg1[0x21] = &chipmunk::CTextureFactory::`vftable'
var_4.b = 0
sub_522760(&arg1[0x11])
int32_t var_4_1 = 0xffffffff
int32_t result = sub_522760(&arg1[2])
fsbase->NtTib.ExceptionList = ExceptionList
return result
