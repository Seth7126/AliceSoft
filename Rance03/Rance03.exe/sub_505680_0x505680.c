// 函数: sub_505680
// 地址: 0x505680
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
arg1[1] = 0
arg1[2] = &partsengine::CSpriteEngineWrapper::`vftable'
int32_t var_4 = 0
arg1[3] = &partsengine::CSurfaceFactory::`vftable'
arg1[4] = 0
arg1[5] = &partsengine::CGraph::`vftable'
arg1[6] = 0
var_4.b = 2
int32_t* ecx = arg1[6]

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[6] = 0

int32_t ecx_1 = 0

if (sub_43aa00(0x6e2330, 0x6dcf50) != 0)
    ecx_1 = data_75d4dc

arg1[6] = ecx_1
int32_t* ecx_2 = arg1[4]

if (ecx_2 != 0)
    (*(*ecx_2 + 4))(eax_2)
    arg1[4] = 0

int32_t* ecx_3 = data_75d538

if (ecx_3 == 0)
    arg1[4] = ecx_3
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1

(**ecx_3)(eax_2)
arg1[4] = data_75d538
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
