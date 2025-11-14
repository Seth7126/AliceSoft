// 函数: sub_58c7e0
// 地址: 0x58c7e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c7bce
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IRenderParam::sealengine::CRenderParam::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IRenderParam::sealengine::CRenderParam::VTable** var_10_1 = arg1
*arg1 = &sealengine::CRenderParam::`vftable'{for `IRenderParam'}
arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
EnumC13Lines::EnumC13Lines(&arg1[4])
EnumC13Lines::EnumC13Lines(&arg1[0x16])
arg1[0x27] = 0
arg1[0x28] = 0
arg1[0x29] = 0
int32_t var_4 = 0
arg1[0x37] = 0
arg1[0x38] = 0
arg1[0x39] = 0
arg1[0x3a] = 0x3f800000
arg1[0x3d] = 0
arg1[0x3e].b = 0
arg1[0x3f] = 0x3f000000
arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
arg1[0x14] = 0
arg1[0x15] = 0
sub_47b3d0(&arg1[4])
sub_47b3d0(&arg1[0x16])
void* var_24 = &arg1[0x16]
sub_58cd30(&arg1[0x27])
arg1[0x2a] = 0
arg1[0x26] = 1
arg1[0x2b] = 0
arg1[0x2c] = 0
arg1[0x2d] = 1
arg1[0x2e] = 1
arg1[0x2f] = 1
__builtin_memset(&arg1[0x30], 0, 0x11)
arg1[0x35] = 0x3ca3d70a
__builtin_memset(&arg1[0x36], 0, 0x1c)
arg1[0x40] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
