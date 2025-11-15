// 函数: sub_6413e0
// 地址: 0x6413e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_746306
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct textsurface::CTextSurfaceManager::VTable** var_14 = arg1
*arg1 = &textsurface::CTextSurfaceManager::`vftable'
int32_t* var_18 = &arg1[1]
arg1[1] = 0
arg1[2] = 0
arg1[1] = sub_642aa0()
int32_t var_8_1 = 0
arg1[3] = 0
arg1[4] = 0x1000000
arg1[5] = 0x800000
sub_6401b0(&arg1[6])
var_8_1.b = 1
arg1[0x5c] = 0
void* var_18_1 = &arg1[0x5d]
arg1[0x5d] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** eax_4 = sub_6e810c(0x1c)
struct thread::CCriticalSection::CImpl::VTable** var_18_2 = eax_4
*eax_4 = &thread::CCriticalSection::CImpl::`vftable'
InitializeCriticalSection(&eax_4[1])
arg1[0x5e] = eax_4
arg1[0x5f] = 0
arg1[0x60] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
