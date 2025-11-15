// 函数: sub_471f30
// 地址: 0x471f30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729300
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &exfile::CTokenList::`vftable'
sub_403490(&arg1[1], 0x75ce7e, nullptr)
sub_473920(&arg1[7])
arg1[9] = arg1[7]->vFunc_0
sub_473920(&arg1[7])
sub_403160(arg1[7], 1, 0x40)
int32_t eax_5 = arg1[6]

if (eax_5 u>= 0x10)
    eax_5 = sub_403160(arg1[1], eax_5 + 1, 1)

arg1[6] = 0xf
bool cond:0 = arg1[6] u< 0x10
arg1[5] = 0

if (cond:0)
    arg1[1].b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_5

char* eax_7 = arg1[1]
*eax_7 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_7
