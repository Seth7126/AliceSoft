// 函数: sub_46f620
// 地址: 0x46f620
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d74e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class IEXReader>::exfile::CEXReader::VTable** var_30 = arg1
arg1[1] = &IEXTreeReader::`vftable'
arg1[2] = 1
*arg1 = &exfile::CEXReader::`vftable'{for `common::SuicideRefCounter<class IEXReader>'}
arg1[1] = &exfile::CEXReader::`vftable'{for `IEXTreeReader'}
arg1[3] = &exfile::CDefineDataFactory::`vftable'
void* var_30_1 = &arg1[3]
struct common::SuicideRefCounter<class IEXReader>::exfile::CEXReader::VTable** var_34 = arg1
void* var_30_2 = &arg1[4]
arg1[4] = 0
arg1[5] = 0
arg1[4] = sub_4321d0()
int32_t var_8_1 = 0
sub_463110(&arg1[6])
var_8_1.b = 1
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x75ce47, nullptr)
var_8_1.b = 2
void* var_30_3 = &arg1[0x20]
sub_46da00(&arg1[0x20], &var_2c, 0xffffffff)
arg1[0x20] = &exfile::CDefineData::`vftable'

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
