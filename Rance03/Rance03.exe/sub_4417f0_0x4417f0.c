// 函数: sub_4417f0
// 地址: 0x4417f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b688b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct anteater::CADVSceneKeeper::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct anteater::CADVSceneKeeper::VTable** var_10_1 = arg1
*arg1 = &anteater::CADVSceneKeeper::`vftable'
int32_t var_4 = 0
sub_441860(arg1)
sub_441ce0(&arg1[1])

if ((arg2 & 1) != 0)
    j__free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
