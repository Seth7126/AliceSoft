// 函数: sub_50c040
// 地址: 0x50c040
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b498b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CMotionSound::VTable** var_10 = arg1
int32_t __saved_esi
int32_t eax_2 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CMotionSound::VTable** var_10_1 = arg1
*arg1 = &partsengine::CMotionSound::`vftable'
int32_t var_4 = 0
int32_t* ecx = arg1[8]

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[8] = 0

if (arg1[6] u>= 0x10)
    j__free(arg1[1])

arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
