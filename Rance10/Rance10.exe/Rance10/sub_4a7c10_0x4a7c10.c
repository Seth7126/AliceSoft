// 函数: sub_4a7c10
// 地址: 0x4a7c10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73154c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct msgskip::CMsgSkip::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct msgskip::CMsgSkip::VTable** var_14_1 = arg1
*arg1 = &msgskip::CMsgSkip::`vftable'
arg1[1] = arg2
arg1[2].b = 0
arg1[3] = 0
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
int32_t var_8_1 = 0
arg1[0xc] = 0xf
arg1[0xb] = 0
void* eax_4

if (arg1[0xc] u< 0x10)
    eax_4 = &arg1[7]
else
    eax_4 = arg1[7]

*eax_4 = 0
sub_403490(&arg1[7], "MsgSkip.msk", 0xb)
void* eax_5 = &arg1[0xd]
*(eax_5 + 0x14) = 0xf
*(eax_5 + 0x10) = 0

if (*(eax_5 + 0x14) u>= 0x10)
    eax_5 = *eax_5

*eax_5 = 0
void* eax_6 = &arg1[0x13]
*(eax_6 + 0x14) = 0xf
*(eax_6 + 0x10) = 0

if (*(eax_6 + 0x14) u>= 0x10)
    eax_6 = *eax_6

*eax_6 = 0
var_8_1.b = 3
arg2 = &arg1[0x19]
arg1[0x19] = 0
arg1[0x1a] = 0
arg1[0x19] = sub_4a8f20()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
