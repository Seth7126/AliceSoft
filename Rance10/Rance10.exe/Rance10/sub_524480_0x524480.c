// 函数: sub_524480
// 地址: 0x524480
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73955b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CActivityEngine::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CActivityEngine::VTable** var_14_1 = arg1
*arg1 = &partsengine::CActivityEngine::`vftable'
arg1[6] = 0xf
arg1[5] = 0
int32_t* eax_3

if (arg1[6] u< 0x10)
    eax_3 = &arg1[1]
else
    eax_3 = arg1[1]

*eax_3 = 0
sub_403490(&arg1[1], "Pact.afa", 8)
int32_t var_8_1 = 0
arg1[0xc] = 0xf
arg1[0xb] = 0
arg1[7].b = 0
sub_403490(&arg1[7], ".pact", 5)
arg1[0xd] = 0
arg1[0xe].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
