// 函数: sub_505790
// 地址: 0x505790
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c1461
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CLLSprite::VTable** var_10 = arg1
int32_t __saved_esi
int32_t eax_2 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CLLSprite::VTable** var_10_1 = arg1
*arg1 = &partsengine::CLLSprite::`vftable'
int32_t var_4 = 2
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_505830(arg1)
var_4.b = 1
int32_t* ecx = arg1[6]
arg1[5] = &partsengine::CGraph::`vftable'

if (ecx != 0)
    result = (*(*ecx + 4))(eax_2)
    arg1[6] = 0

var_4.b = 0
int32_t* ecx_1 = arg1[4]
arg1[3] = &partsengine::CSurfaceFactory::`vftable'

if (ecx_1 != 0)
    result = (*(*ecx_1 + 4))(eax_2)
    arg1[4] = 0

arg1[2] = &partsengine::CSpriteEngineWrapper::`vftable'
fsbase->NtTib.ExceptionList = ExceptionList
return result
