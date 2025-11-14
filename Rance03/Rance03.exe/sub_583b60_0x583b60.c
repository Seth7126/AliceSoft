// 函数: sub_583b60
// 地址: 0x583b60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c748c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CDrawInstance::sealengine::CPolyObject::VTable** var_14 = arg1
*arg1 = &sealengine::CPolyObject::`vftable'{for `sealengine::CDrawInstance'}
int32_t var_4 = 2
sub_583d40(arg1)
var_4.b = 1
sub_549a50(&arg1[9])
arg1[6] = &sealengine::CMaterialList::`vftable'
void* var_10 = &arg1[6]
var_4.b = 3
sub_51faa0(&arg1[6])
int32_t** eax_3 = arg1[7]
sub_4200d0(&arg1[7], &var_10, *eax_3, eax_3)
int32_t result = j__free(arg1[7])
int32_t var_4_1 = 0xffffffff
int32_t* ecx_3 = arg1[3]
arg1[2] = &thread::CCriticalSection::`vftable'

if (ecx_3 != 0)
    result = (**ecx_3)(1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
