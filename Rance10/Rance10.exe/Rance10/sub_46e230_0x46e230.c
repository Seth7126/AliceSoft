// 函数: sub_46e230
// 地址: 0x46e230
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72bf61
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct IEXTableReader::exfile::CDefineDataTable::VTable** var_14 = arg1
void* esi = arg2
*arg1 = &exfile::CDefineDataTable::`vftable'{for `IEXTableReader'}
struct exfile::CFormatDataList::VTable** var_18 = &arg1[1]
arg1[1] = &exfile::CFormatDataList::`vftable'
sub_4275f0(&arg1[2], esi + 8)
int32_t var_8_1 = 0
sub_4275f0(&arg1[5], esi + 0x14)
var_8_1.b = 1
arg2 = &arg1[8]
void* var_28_2 = &arg1[8]
sub_46e450(&arg1[8], esi + 0x20)
var_8_1.b = 2
void* var_28_3 = &arg1[0xa]
arg2 = &arg1[0xa]
sub_46e3c0(&arg1[0xa], esi + 0x28)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
