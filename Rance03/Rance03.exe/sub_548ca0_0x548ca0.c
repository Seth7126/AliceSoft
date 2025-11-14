// 函数: sub_548ca0
// 地址: 0x548ca0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b7bab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CDrawInstance::sealengine::CMesh::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CDrawInstance::sealengine::CMesh::VTable** var_10_1 = arg1
*arg1 = &sealengine::CMesh::`vftable'{for `sealengine::CDrawInstance'}
arg1[1] = 0
arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
int32_t var_4 = 0
arg1[8].w = 0
*(arg1 + 0x22) = 0
sub_539220(&arg1[9])
arg1[0x16] = 0x100
arg1[0x17].b = 0
__builtin_memset(&arg1[0x18], 0, 0x11)
arg1[0x1d] = &sealengine::CClipBox::`vftable'
__builtin_memcpy(&arg1[0x1e], 
    "\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\x7f\xff\xff\x7f\xff\x"
"00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
    0x28)
__builtin_memset(&arg1[0x28], 0, 0x1f)
__builtin_memset(&arg1[0x30], 0, 0x25)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
