// 函数: sub_525100
// 地址: 0x525100
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c3191
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CAARLoader::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_10 = arg1
*arg1 = &sealengine::CAARLoader::`vftable'
int32_t var_4 = 2
sub_5255b0(arg1)
int32_t** eax_3 = arg1[0xa]
sub_5260a0(&arg1[0xa], &var_10, *eax_3, eax_3)
int32_t result = j__free(arg1[0xa])

if (arg1[9] u>= 0x10)
    result = j__free(arg1[4])

arg1[9] = 0xf
arg1[8] = 0
arg1[4].b = 0
int32_t var_4_1 = 0xffffffff
int32_t* ecx_1 = arg1[2]
arg1[1] = &thread::CCriticalSection::`vftable'

if (ecx_1 != 0)
    result = (**ecx_1)(1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
