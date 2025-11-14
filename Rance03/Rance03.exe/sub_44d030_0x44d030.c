// 函数: sub_44d030
// 地址: 0x44d030
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b7107
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct chipmunk::CSactEngine::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct chipmunk::CSactEngine::VTable** var_10_1 = arg1
*arg1 = &chipmunk::CSactEngine::`vftable'
arg1[1] = &chipmunk::CFinalizer<class chipmunk::CSactEngine>::`vftable'{for `IInterface'}
__builtin_memset(&arg1[2], 0, 0x1c)
sub_5f2230(&arg1[9])
int32_t var_4 = 0
arg1[0x64] = &chipmunk::CTextSpriteProperty::`vftable'
arg1[0x65] = 0
arg1[0x66] = 0x10
arg1[0x67] = 0xffffffff
arg1[0x68] = 0
arg1[0x69] = 0
arg1[0x6a] = 0xff000000
sub_5eeb50(&arg1[0x6b])
var_4.b = 2
sub_44e430(&arg1[0xa2])
arg1[0xad] = 0
arg1[0xae] = 0
arg1[0xaf].b = 1
arg1[0xb0] = 0
arg1[0xb1] = &chipmunk::CDrawD3DPluginManager::`vftable'{for `IDrawD3DPluginManager'}
arg1[0xb2] = 1
arg1[0xb3] = 0
arg1[0xb4] = &chipmunk::CFPS::`vftable'
__builtin_memset(&arg1[0xb5], 0, 0x15)
arg1[0xbb] = 0
arg1[0xbc] = 0
arg1[0xbd].w = 0x100
arg1[0xbe] = 0
arg1[0xbf] = 0x100
arg1[0xc0] = 0
arg1[0xc1] = 0xa
arg1[0xc2] = 0
arg1[0xc3] = 0
arg1[0xc4] = 0
arg1[2] = arg1
arg1[0xb3] = arg1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
