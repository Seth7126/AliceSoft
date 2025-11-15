// 函数: sub_6339c0
// 地址: 0x6339c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7458de
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_18 = arg1
int32_t* var_14 = arg1 + 4
var_14 = nullptr
*(arg1 + 4) = 0
*(arg1 + 8) = 0
*(arg1 + 0xc) = 0
sub_422540(arg1 + 4, 0, &var_14)
*(arg1 + 0x10) = 0
*(arg1 + 0x14) = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x1c) = 0
int32_t var_8_1 = 0
var_14 = arg1 + 0x20
var_14 = arg1 + 0x24
var_14 = nullptr
*(arg1 + 0x24) = 0
*(arg1 + 0x28) = 0
*(arg1 + 0x2c) = 0
sub_422540(arg1 + 0x24, 0, &var_14)
*(arg1 + 0x30) = 0
*(arg1 + 0x34) = 0
*(arg1 + 0x38) = 0
*(arg1 + 0x3c) = 0
*(arg1 + 0x40) = 0
*(arg1 + 0x44) = 0
*(arg1 + 0x48) = 0
var_8_1.b = 2
*(arg1 + 0x50) = arg3
*(arg1 + 0x54) = arg2
*(arg1 + 0x5c) = arg7
*(arg1 + 0x58) = arg5
*(arg1 + 0x60) = arg8
*(arg1 + 0x64) = 0
*(arg1 + 0x68) = arg6
char eax_7

if ((*(arg5 + 8) & 8) == 0 || (arg8.b & 0x10) != 0)
    eax_7 = 0
else
    eax_7 = 1

*(arg1 + 0x6c) = eax_7
*(arg1 + 0x70) = arg4
sub_632b30(arg1 + 0x40, *(arg5 + 0x18))
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
