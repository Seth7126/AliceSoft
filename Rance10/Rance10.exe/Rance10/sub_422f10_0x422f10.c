// 函数: sub_422f10
// 地址: 0x422f10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7291cb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpvariable::CRefPageInfo::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpvariable::CRefPageInfo::VTable** var_14_1 = arg1
*arg1 = &dpvariable::CRefPageInfo::`vftable'
arg1[1] = *(arg2 + 4)
arg1[2] = *(arg2 + 8)
arg1[3] = *(arg2 + 0xc)
arg1[9] = 0xf
arg1[8] = 0
char* eax_6

if (arg1[9] u< 0x10)
    eax_6 = &arg1[4]
else
    eax_6 = arg1[4]

*eax_6 = 0
sub_403590(&arg1[4], arg2 + 0x10, 0, 0xffffffff)
int32_t var_8_1 = 0
arg1[0xf] = 0xf
arg1[0xe] = 0
arg1[0xa].b = 0
sub_403590(&arg1[0xa], arg2 + 0x28, 0, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
