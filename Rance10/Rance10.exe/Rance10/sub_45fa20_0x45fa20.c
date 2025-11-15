// 函数: sub_45fa20
// 地址: 0x45fa20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72bf61
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct IEXTableReader::exfile::CDefineDataTable::VTable** var_14 = arg1
*arg1 = &exfile::CDefineDataTable::`vftable'{for `IEXTableReader'}
arg1[1] = &exfile::CFormatDataList::`vftable'
arg1[2] = 0
arg1[3] = 0
arg1[4] = 0
int32_t var_8_1 = 0
arg1[5] = 0
arg1[6] = 0
arg1[7] = 0
var_8_1.b = 1
void* var_18 = &arg1[8]
arg1[8] = 0
arg1[9] = 0
arg1[8] = sub_42e780()
var_8_1.b = 2
void* var_18_1 = &arg1[0xa]
arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xa] = sub_4321d0()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
