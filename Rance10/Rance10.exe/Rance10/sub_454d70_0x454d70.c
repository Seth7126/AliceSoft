// 函数: sub_454d70
// 地址: 0x454d70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729300
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IDebugFile::debugfile::CDebugFile::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &debugfile::CDebugFile::`vftable'{for `IDebugFile'}
arg1[1] = &debugfile::CDebugFile::`vftable'{for `IDebugMode'}
sub_454e80(arg1)
int32_t* eax_3 = arg1[0x13]
int32_t* var_24 = eax_3
sub_456ff0(&arg1[0x13], &var_14, *eax_3)
sub_403160(arg1[0x13], 1, 0x2c)
int32_t* eax_4 = arg1[0x11]
int32_t* var_24_1 = eax_4
sub_44dda0(&arg1[0x11], &var_14, *eax_4)
sub_403160(arg1[0x11], 1, 0x40)
int32_t** eax_5 = arg1[0xf]
sub_431c90(&arg1[0xf], &var_14, *eax_5, eax_5)
sub_403160(arg1[0xf], 1, 0x2c)
int32_t* eax_6 = arg1[0xd]
int32_t* var_24_3 = eax_6
sub_456ff0(&arg1[0xd], &var_14, *eax_6)
sub_403160(arg1[0xd], 1, 0x2c)
sub_456c10(&arg1[0xa])
sub_456d10(&arg1[7])
int32_t* eax_7 = arg1[5]
int32_t* var_24_4 = eax_7
sub_4572d0(&arg1[5], &var_14, *eax_7)
sub_403160(arg1[5], 1, 0x2c)
int32_t result = sub_456f00(&arg1[2])
fsbase->NtTib.ExceptionList = ExceptionList
return result
