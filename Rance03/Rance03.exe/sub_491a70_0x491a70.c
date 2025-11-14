// 函数: sub_491a70
// 地址: 0x491a70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bb3d1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CSprite::partsengine::CFlatSprite::VTable** var_10 = arg1
int32_t __saved_esi
int32_t eax_2 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CSprite::partsengine::CFlatSprite::VTable** var_10_1 = arg1
*arg1 = &partsengine::CFlatSprite::`vftable'{for `partsengine::CSprite'}
int32_t var_4 = 2
arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xd] = 0
int32_t* ecx = arg1[0x1c]

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[0x1c] = 0

var_4.b = 1
int32_t result = sub_492f50(&arg1[0xe])
arg1[9] = &partsengine::CRect::`vftable'

if (arg1[7] u>= 0x10)
    result = j__free(arg1[2])

arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
