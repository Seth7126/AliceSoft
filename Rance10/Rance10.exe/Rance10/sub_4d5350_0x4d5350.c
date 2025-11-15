// 函数: sub_4d5350
// 地址: 0x4d5350
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728076
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CFlatEngine::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
*arg1 = &partsengine::CFlatEngine::`vftable'
sub_4d5860(arg1)
int32_t* eax_3 = arg1[0x12]
int32_t* var_24 = eax_3
sub_4572d0(&arg1[0x12], &var_14, *eax_3)
sub_403160(arg1[0x12], 1, 0x2c)
arg1[0x10] = &thread::CCriticalSection::`vftable'
int32_t* ecx_1 = arg1[0x11]

if (ecx_1 != 0)
    (**ecx_1)(1)

sub_406310(&arg1[1])

if ((arg2 & 1) != 0)
    int32_t var_24_1 = 0x50
    operator new(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
