// 函数: sub_46f7e0
// 地址: 0x46f7e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9666
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct kiwi::CMultiChannelSet::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_10 = arg1
*arg1 = &kiwi::CMultiChannelSet::`vftable'
int32_t var_4 = 1
sub_46f870(arg1)
int32_t** eax_3 = arg1[6]
sub_4200d0(&arg1[6], &var_10, *eax_3, eax_3)
j__free(arg1[6])
int32_t* eax_4 = arg1[4]
sub_417e10(&arg1[4], &var_10, *eax_4, eax_4)
int32_t result = j__free(arg1[4])
fsbase->NtTib.ExceptionList = ExceptionList
return result
