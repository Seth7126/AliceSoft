// 函数: sub_4e5770
// 地址: 0x4e5770
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c0606
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CActivityEngine::VTable** var_10 = arg1
int32_t __saved_esi
int32_t eax_2 = __security_cookie ^ &__saved_esi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CActivityEngine::VTable** var_10_1 = arg1
*arg1 = &partsengine::CActivityEngine::`vftable'
int32_t var_4 = 1
int32_t* ecx = arg1[0xd]

if (ecx != 0)
    result = (*(*ecx + 4))(eax_2)
    arg1[0xd] = 0

if (arg1[0xc] u>= 0x10)
    result = j__free(arg1[7])

arg1[0xc] = 0xf
arg1[0xb] = 0
arg1[7].b = 0

if (arg1[6] u>= 0x10)
    result = j__free(arg1[1])

arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
