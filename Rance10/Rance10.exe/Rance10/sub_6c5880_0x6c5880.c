// 函数: sub_6c5880
// 地址: 0x6c5880
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_748d35
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct ISys40Ini2::startup::CIniFile::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct ISys40Ini2::startup::CIniFile::VTable** var_14_1 = arg1
void** eax_3 = &arg1[6]
*arg1 = &startup::CIniFile::`vftable'{for `ISys40Ini2'}
arg1[1] = 1
arg1[2] = 0x500
arg1[3] = 0x2d0
arg1[4] = 0
arg1[5] = 0
eax_3[5] = 0xf
eax_3[4] = 0

if (eax_3[5] u>= 0x10)
    eax_3 = *eax_3

*eax_3 = nullptr
void* eax_4 = &arg1[0xc]
int32_t var_8_1 = 0
*(eax_4 + 0x14) = 0xf
*(eax_4 + 0x10) = 0

if (*(eax_4 + 0x14) u>= 0x10)
    eax_4 = *eax_4

*eax_4 = 0
var_8_1.b = 1
arg1[0x17] = 0xf
arg1[0x16] = 0
void* eax_5

if (arg1[0x17] u< 0x10)
    eax_5 = &arg1[0x12]
else
    eax_5 = arg1[0x12]

*eax_5 = 0
sub_403490(&arg1[0x12], "code.ain", 8)
var_8_1.b = 2
arg1[0x1d] = 0xf
arg1[0x1c] = 0
void* eax_6

if (arg1[0x1d] u< 0x10)
    eax_6 = &arg1[0x18]
else
    eax_6 = arg1[0x18]

*eax_6 = 0
sub_403490(&arg1[0x18], "Sys40Mutex", 0xa)
var_8_1.b = 3
arg1[0x23] = 0xf
arg1[0x22] = 0
void* eax_7

if (arg1[0x23] u< 0x10)
    eax_7 = &arg1[0x1e]
else
    eax_7 = arg1[0x1e]

*eax_7 = 0
sub_403490(&arg1[0x1e], "DLL", 3)
arg1[0x24] = 0
arg1[0x25] = 0
arg1[0x26] = 0
var_8_1.b = 5
arg1[0x2c] = 0xf
arg1[0x2b] = 0
arg1[0x27].b = 0
sub_403490(&arg1[0x27], "SaveData", 8)
arg1[0x2d].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
