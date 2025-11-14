// 函数: sub_523ed0
// 地址: 0x523ed0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c2efb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct chipmunk::CSceneRendererD3D9::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct chipmunk::CSceneRendererD3D9::VTable** var_10_1 = arg1
*arg1 = &chipmunk::CSceneRendererD3D9::`vftable'
arg1[1].b = 0
sub_5226c0(&arg1[2], &arg1[0x21])
int32_t var_4 = 0
sub_5226c0(&arg1[0x11], &arg1[0x21])
arg1[0x20] = 0
arg1[0x21] = &chipmunk::CTextureFactory::`vftable'
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
