// 函数: sub_5fe030
// 地址: 0x5fe030
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b3eb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sys43vm::CCallFuncCount::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct sys43vm::CCallFuncCount::VTable** var_14_1 = arg1
*arg1 = &sys43vm::CCallFuncCount::`vftable'
arg1[7] = 0xf
arg1[6] = 0
char* eax_3

if (arg1[7] u< 0x10)
    eax_3 = &arg1[2]
else
    eax_3 = arg1[2]

*eax_3 = 0
sub_403590(&arg1[2], arg2 + 8, 0, 0xffffffff)
int32_t var_8_1 = 0
arg1[8] = *(arg2 + 0x20)
sub_5fe210(&arg1[9], arg2 + 0x24)
arg1[0xc] = *(arg2 + 0x30)
arg1[0xd] = *(arg2 + 0x34)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
