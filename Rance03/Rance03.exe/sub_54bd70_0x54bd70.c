// 函数: sub_54bd70
// 地址: 0x54bd70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c4af6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CMotion::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CMotion::VTable** var_10_1 = arg1
*arg1 = &sealengine::CMotion::`vftable'
int32_t var_4 = 1
bool cond:0 = arg1[0xa] u< 0x10
arg1[9] = 0
char* result

if (cond:0)
    result = &arg1[5]
else
    result = arg1[5]

*result = 0
int32_t* ecx = arg1[4]

if (ecx != 0)
    result = sub_54c280(ecx)
    arg1[4] = 0

if (arg1[0xa] u>= 0x10)
    result = j__free(arg1[5])

arg1[0xa] = 0xf
arg1[9] = 0
arg1[5].b = 0
int32_t var_4_1 = 0xffffffff
int32_t* ecx_1 = arg1[3]
arg1[2] = &thread::CCriticalSection::`vftable'

if (ecx_1 != 0)
    result = (**ecx_1)(1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
