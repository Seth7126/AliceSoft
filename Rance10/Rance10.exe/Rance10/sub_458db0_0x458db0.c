// 函数: sub_458db0
// 地址: 0x458db0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72ba06
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IDebugFileStruct::debugfile::CStruct::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct IDebugFileStruct::debugfile::CStruct::VTable** var_14_1 = arg1
*arg1 = &debugfile::CStruct::`vftable'{for `IDebugFileStruct'}
arg1[6] = 0xf
arg1[5] = 0
char* eax_3

if (arg1[6] u< 0x10)
    eax_3 = &arg1[1]
else
    eax_3 = arg1[1]

*eax_3 = 0
sub_403590(&arg1[1], arg2 + 4, 0, 0xffffffff)
int32_t var_8_1 = 0
arg1[0xc] = 0xf
arg1[0xb] = 0
void* eax_4

if (arg1[0xc] u< 0x10)
    eax_4 = &arg1[7]
else
    eax_4 = arg1[7]

*eax_4 = 0
sub_403590(&arg1[7], arg2 + 0x1c, 0, 0xffffffff)
var_8_1.b = 1
arg1[0xd] = *(arg2 + 0x34)
sub_459490(&arg1[0xe], arg2 + 0x38)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
