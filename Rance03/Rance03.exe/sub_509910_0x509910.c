// 函数: sub_509910
// 地址: 0x509910
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c1721
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CSprite::partsengine::CLoopCGSprite::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CSprite::partsengine::CLoopCGSprite::VTable** var_10_1 = arg1
*arg1 = &partsengine::CLoopCGSprite::`vftable'{for `partsengine::CSprite'}
int32_t var_4 = 2

for (int32_t* i = arg1[2]; i != arg1[3]; i = &i[1])
    int32_t* ecx = *i
    
    if (ecx != 0)
        (**ecx)(1)

arg1[3] = arg1[2]
arg1[0x11] = &partsengine::CRect::`vftable'

if (arg1[0xa] u>= 0x10)
    j__free(arg1[5])

arg1[0xa] = 0xf
arg1[9] = 0
arg1[5].b = 0
int32_t result = arg1[2]

if (result != 0)
    result = j__free(result)
    arg1[2] = 0
    arg1[3] = 0
    arg1[4] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
