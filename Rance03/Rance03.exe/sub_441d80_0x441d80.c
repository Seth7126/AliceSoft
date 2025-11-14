// 函数: sub_441d80
// 地址: 0x441d80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b68f6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct anteater::CAnteaterADVEngine::VTable** var_14 = arg1
*arg1 = &anteater::CAnteaterADVEngine::`vftable'
int32_t var_4 = 0
void* var_10 = &arg1[8]
arg1[8] = &anteater::CADVSceneKeeper::`vftable'
var_4.b = 1
sub_441860(&arg1[8])
sub_441ce0(&arg1[9])
arg1[1] = &anteater::CADVLogList::`vftable'
sub_43f340(&arg1[2])
j__free(arg1[2])

if ((arg2 & 1) != 0)
    j__free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
