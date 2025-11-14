// 函数: sub_44ea50
// 地址: 0x44ea50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b730e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct chipmunk::CSprite::VTable** var_10 = arg1
int32_t __saved_esi
int32_t eax_2 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct chipmunk::CSprite::VTable** var_10_1 = arg1
*arg1 = &chipmunk::CSprite::`vftable'
int32_t var_4 = 0
int32_t* ecx = arg1[0x37]

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[0x37] = 0

int32_t* ecx_1 = arg1[0x36]

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    arg1[0x36] = 0

arg1[0x31] = &chipmunk::CRect::`vftable'

if ((arg2 & 1) != 0)
    j__free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
