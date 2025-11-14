// 函数: sub_460ab0
// 地址: 0x460ab0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8a06
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct exfile::CDefineDataFactory::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_10 = arg1
*arg1 = &exfile::CDefineDataFactory::`vftable'
int32_t var_4 = 1
sub_460b40(arg1)
int32_t** eax_3 = arg1[7]
sub_417e10(&arg1[7], &var_10, *eax_3, eax_3)
int32_t result = j__free(arg1[7])

if (arg1[6] u>= 0x10)
    result = j__free(arg1[1])

arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
