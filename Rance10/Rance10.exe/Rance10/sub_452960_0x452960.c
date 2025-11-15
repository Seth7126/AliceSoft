// 函数: sub_452960
// 地址: 0x452960
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b3eb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct commonsystemdata::CCommonSystemData::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct commonsystemdata::CCommonSystemData::VTable** var_14_1 = arg1
*arg1 = &commonsystemdata::CCommonSystemData::`vftable'
arg1[1] = arg2
arg1[7] = 0xf
arg1[6] = 0
int32_t* eax_4

if (arg1[7] u< 0x10)
    eax_4 = &arg1[2]
else
    eax_4 = arg1[2]

*eax_4 = 0
sub_403490(&arg1[2], "CommonSystemData.sav", 0x14)
int32_t var_8_1 = 0
arg2 = &arg1[8]
arg1[8] = 0
arg1[9] = 0
arg1[8] = sub_453b70()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
