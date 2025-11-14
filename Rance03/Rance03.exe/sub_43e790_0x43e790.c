// 函数: sub_43e790
// 地址: 0x43e790
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b65e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct anteater::CADVLogList::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &anteater::CADVLogList::`vftable'
int32_t* var_10_1 = &arg1[1]
arg1[1] = 0
arg1[2] = 0
int32_t* eax_3
int32_t ecx
eax_3, ecx = sub_43f3b0(nullptr, nullptr)
arg1[1] = eax_3
int32_t var_20 = ecx
int32_t var_4 = 0
sub_43f250(&arg1[1])
arg1[3] = 0x3e8
arg1[4] = 0xffffff9d
arg1[5].b = 1
arg1[6] = 0xffffff9d
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
