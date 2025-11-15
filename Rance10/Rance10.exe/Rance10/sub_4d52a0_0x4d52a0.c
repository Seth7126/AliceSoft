// 函数: sub_4d52a0
// 地址: 0x4d52a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734086
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CFlatEngine::VTable** var_14 = arg1
*arg1 = &partsengine::CFlatEngine::`vftable'
sub_406210(&arg1[1])
int32_t var_8_1 = 0
arg1[0xe] = 0
arg1[0xf].b = 0
void* var_18 = &arg1[0x10]
arg1[0x10] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** eax_3 = sub_6e810c(0x1c)
struct thread::CCriticalSection::CImpl::VTable** var_18_1 = eax_3
*eax_3 = &thread::CCriticalSection::CImpl::`vftable'
InitializeCriticalSection(&eax_3[1])
arg1[0x11] = eax_3
var_8_1.b = 1
void* var_18_2 = &arg1[0x12]
arg1[0x12] = 0
arg1[0x13] = 0
arg1[0x12] = sub_4321d0()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
