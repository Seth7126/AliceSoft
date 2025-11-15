// 函数: sub_471e60
// 地址: 0x471e60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d9fb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct exfile::CTokenList::VTable** var_14 = arg1
*arg1 = &exfile::CTokenList::`vftable'
arg1[6] = 0xf
arg1[5] = 0
int32_t* eax_3

if (arg1[6] u< 0x10)
    eax_3 = &arg1[1]
else
    eax_3 = arg1[1]

*eax_3 = 0
sub_403490(&arg1[1], 0x75ce77, nullptr)
int32_t var_8_1 = 0
void* var_18 = &arg1[7]
arg1[7] = 0
arg1[8] = 0
int32_t* eax_4 = sub_4742a0(nullptr, nullptr)
arg1[7] = eax_4
arg1[9] = *eax_4
arg1[0xa] = arg2
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
