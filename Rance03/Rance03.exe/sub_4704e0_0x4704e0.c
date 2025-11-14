// 函数: sub_4704e0
// 地址: 0x4704e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9756
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct kiwi::CSoundFileDebug::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct kiwi::CSoundFileDebug::VTable** var_10_1 = arg1
*arg1 = &kiwi::CSoundFileDebug::`vftable'
arg1[1] = 0
arg1[2] = 0
arg1[1] = sub_44b730()
int32_t var_4 = 0
arg1[3] = 0
arg1[4] = 0
arg1[3] = sub_458490()
var_4.b = 1
arg1[5] = 0
arg1[6] = 0
arg1[5] = sub_4717b0()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
