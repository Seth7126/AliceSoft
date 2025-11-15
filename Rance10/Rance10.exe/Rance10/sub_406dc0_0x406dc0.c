// 函数: sub_406dc0
// 地址: 0x406dc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727057
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpanalysis::CBreakPoint::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpanalysis::CBreakPoint::VTable** var_14_1 = arg1
*arg1 = &dpanalysis::CBreakPoint::`vftable'
arg1[1] = arg2
arg1[7] = 0xf
arg1[6] = 0
char* eax_4

if (arg1[7] u< 0x10)
    eax_4 = &arg1[2]
else
    eax_4 = arg1[2]

*eax_4 = 0
sub_403590(&arg1[2], arg3, 0, 0xffffffff)
int32_t var_8_1 = 0
arg1[8] = arg4
arg1[9] = arg5
void* eax_7 = &arg1[0xc]
arg1[0xa].b = 1
arg1[0xb] = 0
*(eax_7 + 0x14) = 0xf
*(eax_7 + 0x10) = 0

if (*(eax_7 + 0x14) u>= 0x10)
    eax_7 = *eax_7

*eax_7 = 0
void* eax_8 = &arg1[0x12]
*(eax_8 + 0x14) = 0xf
*(eax_8 + 0x10) = 0

if (*(eax_8 + 0x14) u>= 0x10)
    eax_8 = *eax_8

*eax_8 = 0
arg1[0x18] = &dpanalysis::CTokenAnalyser::`vftable'
arg1[0x19] = 0
void* eax_9 = &arg1[0x1b]
arg1[0x1a].b = 0
*(eax_9 + 0x14) = 0xf
*(eax_9 + 0x10) = 0

if (*(eax_9 + 0x14) u>= 0x10)
    eax_9 = *eax_9

*eax_9 = 0
var_8_1.b = 4
sub_407000(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
