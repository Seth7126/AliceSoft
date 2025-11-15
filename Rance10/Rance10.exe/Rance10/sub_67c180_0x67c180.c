// 函数: sub_67c180
// 地址: 0x67c180
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74671b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct crayfish::CLogList::VTable** var_18 = arg1
*arg1 = &crayfish::CLogList::`vftable'
arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
int32_t var_8_1 = 0
arg1[4] = 0
void* eax_3 = sub_6e810c(0x1c)
void* var_14 = eax_3
var_14 = eax_3
*eax_3 = &crayfish::CLogLine::`vftable'
*(eax_3 + 0x18) = 0xf
*(eax_3 + 0x14) = 0
*(eax_3 + 4) = 0
sub_42ccf0(&arg1[1], &var_14)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
