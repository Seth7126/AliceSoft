// 函数: sub_461450
// 地址: 0x461450
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8b41
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IEXReader::exfile::CEXReader::VTable** var_14 = arg1
*arg1 = &exfile::CEXReader::`vftable'{for `IEXReader'}
arg1[1] = 1
arg1[2] = &exfile::CDefineDataFactory::`vftable'
arg1[8] = 0xf
arg1[7] = 0
struct exfile::CDefineDataFactory::VTable** var_10 = &arg1[2]
arg1[3].b = 0
int32_t var_4 = 0
arg1[9] = 0
arg1[0xa] = 0
arg1[9] = sub_42f580()
int32_t var_4_1 = 1
sub_4593d0(&arg1[0xb])
var_4_1.b = 2
sub_460690(&arg1[0x25])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
