// 函数: sub_46e150
// 地址: 0x46e150
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d5be
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct IEXArrayReader::exfile::CDefineDataArray::VTable* const var_20 =
    &exfile::CDefineDataArray::`vftable'{for `IEXArrayReader'}
void* var_1c
sub_4275f0(&var_1c, arg1 + 4)
int32_t var_8_1 = 0
sub_4274a0(arg1 + 4, arg2 + 4)
sub_4274a0(arg2 + 4, &var_1c)
int32_t var_8_2 = 1
var_20 = &exfile::CDefineDataArray::`vftable'{for `IEXArrayReader'}
int32_t result = sub_45f640(&var_20)
void* ecx_4 = var_1c
int32_t var_14

if (ecx_4 != 0)
    result = sub_403160(ecx_4, (var_14 - ecx_4) s>> 2, 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
