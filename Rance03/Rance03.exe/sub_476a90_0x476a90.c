// 函数: sub_476a90
// 地址: 0x476a90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9eb1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct kiwi::CSoundFileList::VTable** var_14 = arg1
*arg1 = &kiwi::CSoundFileList::`vftable'
arg1[1] = &kiwi::CSoundFileAFA::`vftable'
arg1[2] = 0
struct kiwi::CSoundFileAFA::VTable** var_10 = &arg1[1]
arg1[3] = 0
arg1[4] = 0
arg1[3] = sub_458490()
int32_t var_4 = 0
arg1[5] = 0
arg1[6] = 0
arg1[5] = sub_4717b0()
int32_t var_4_1 = 1
sub_4704e0(&arg1[7])
var_4_1.b = 2
sub_4704e0(&arg1[0xe])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
