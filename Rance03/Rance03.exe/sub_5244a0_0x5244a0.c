// 函数: sub_5244a0
// 地址: 0x5244a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c2fc1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::C2DDetection::VTable** var_14 = arg1
*arg1 = &sealengine::C2DDetection::`vftable'
int32_t var_4 = 2
sub_524550(arg1)
int32_t** eax_3 = arg1[5]
void var_10
sub_4200d0(&arg1[5], &var_10, *eax_3, eax_3)
int32_t result = j__free(arg1[5])
var_4.b = 0
int32_t* ecx_1 = arg1[4]
arg1[3] = &thread::CCriticalSection::`vftable'

if (ecx_1 != 0)
    result = (**ecx_1)(1)

int32_t var_4_1 = 0xffffffff
int32_t* ecx_2 = arg1[2]
arg1[1] = &thread::CCriticalSection::`vftable'

if (ecx_2 != 0)
    result = (**ecx_2)(1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
