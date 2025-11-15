// 函数: sub_4c5500
// 地址: 0x4c5500
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73342b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CConstructionSurfaceMaker::VTable** var_14 = arg1
*arg1 = &partsengine::CConstructionSurfaceMaker::`vftable'
sub_406210(&arg1[1])
int32_t var_8_1 = 0
void* var_18 = &arg1[0xe]
arg1[0xe] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** eax_3 = sub_6e810c(0x1c)
struct thread::CCriticalSection::CImpl::VTable** var_18_1 = eax_3
*eax_3 = &thread::CCriticalSection::CImpl::`vftable'
InitializeCriticalSection(&eax_3[1])
arg1[0xf] = eax_3
arg1[0x10] = 0
arg1[0x11] = 0
arg1[0x12] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
