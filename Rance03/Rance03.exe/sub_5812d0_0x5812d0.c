// 函数: sub_5812d0
// 地址: 0x5812d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b498b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CPolyMaterial::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_18 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CPolyMaterial::VTable** var_10_1 = arg1
*arg1 = &sealengine::CPolyMaterial::`vftable'
arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
sub_401ff0(&arg1[1], arg2, 0, 0xffffffff)
int32_t var_4 = 0
arg1[7].b = arg3
int32_t ecx_2 = sub_5827c0(&arg1[8], arg4)
arg1[0xb] = &sealengine::CGameTextureList::`vftable'
int32_t var_1c_1 = 8
__builtin_memset(&arg1[0xc], 0, 0x14)
void* eax_4
eax_4.b = sub_4294e0(arg2, "(sprite)", ecx_2) != 0xffffffff
arg1[0x11].b = eax_4.b
arg1[0x12] = 0
arg1[0x13] = 0
arg1[0x14] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
