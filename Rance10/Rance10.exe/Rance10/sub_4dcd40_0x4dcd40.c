// 函数: sub_4dcd40
// 地址: 0x4dcd40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729300
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CFlatProxyData::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CFlatProxyData::`vftable'
sub_4dd450(arg1)
sub_4dd0c0(arg1)
int32_t* eax_3 = arg1[4]
int32_t* var_24 = eax_3
sub_46f4b0(&arg1[4], &var_14, *eax_3)
sub_403160(arg1[4], 1, 0x2c)
int32_t* eax_4 = arg1[2]
int32_t* var_24_1 = eax_4
sub_46f4b0(&arg1[2], &var_14, *eax_4)
int32_t result = sub_403160(arg1[2], 1, 0x2c)
fsbase->NtTib.ExceptionList = ExceptionList
return result
