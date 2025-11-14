// 函数: sub_6096a0
// 地址: 0x6096a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cceb6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct graphengine::CTextureManager::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_10 = arg1
*arg1 = &graphengine::CTextureManager::`vftable'
int32_t var_4 = 1
sub_609730(arg1)
int32_t** eax_3 = arg1[4]
sub_4200d0(&arg1[4], &var_10, *eax_3, eax_3)
j__free(arg1[4])
int32_t* eax_4 = arg1[1]
sub_4200d0(&arg1[1], &var_10, *eax_4, eax_4)
int32_t result = j__free(arg1[1])
fsbase->NtTib.ExceptionList = ExceptionList
return result
