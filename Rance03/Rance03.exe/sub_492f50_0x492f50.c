// 函数: sub_492f50
// 地址: 0x492f50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bb561
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CFlatProxyData::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_10 = arg1
*arg1 = &partsengine::CFlatProxyData::`vftable'
int32_t var_4 = 2
sub_493690(arg1)
sub_4932b0(arg1)
int32_t** eax_3 = arg1[0xa]
sub_417e10(&arg1[0xa], &var_10, *eax_3, eax_3)
j__free(arg1[0xa])
int32_t** eax_4 = arg1[8]
sub_417e10(&arg1[8], &var_10, *eax_4, eax_4)
int32_t result = j__free(arg1[8])

if (arg1[6] u>= 0x10)
    result = j__free(arg1[1])

arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
