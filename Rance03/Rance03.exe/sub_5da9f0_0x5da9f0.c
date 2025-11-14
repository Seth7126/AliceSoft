// 函数: sub_5da9f0
// 地址: 0x5da9f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b498b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sys43vm::CResumeManager::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sys43vm::CResumeManager::VTable** var_10_1 = arg1
*arg1 = &sys43vm::CResumeManager::`vftable'
arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
sub_402110(&arg1[1], "<memory>", 8)
int32_t var_4 = 0
arg1[7] = 0
arg1[8] = 0
arg1[7] = sub_458490()
arg1[9] = arg2
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
