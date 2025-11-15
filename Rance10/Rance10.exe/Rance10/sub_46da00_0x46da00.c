// 函数: sub_46da00
// 地址: 0x46da00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d4d9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct exfile::CDefineData::VTable** var_30 = arg1
struct exfile::CDefineData::VTable** var_34 = arg1
*arg1 = &exfile::CDefineData::`vftable'
sub_462db0(&arg1[1], arg2)
int32_t var_8_1 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x75ce46, nullptr)
var_8_1.b = 1
sub_462db0(&arg1[7], &var_2c)
var_8_1.b = 3

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t xmm0 = data_7fcc70
arg1[0xd] = 0
arg1[0xe].b = 0
__builtin_strncpy(&arg1[0xf], "eeee", 4)
arg1[0x10] = xmm0
arg1[0x16] = 0xf
arg1[0x15] = 0
bool cond:0 = arg1[0x16] u< 0x10
int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
void* eax_5

if (cond:0)
    eax_5 = &arg1[0x11]
else
    eax_5 = arg1[0x11]

*eax_5 = 0
sub_403590(&arg1[0x11], &data_7fcc58, 0, 0xffffffff)
var_8_1.b = 4
sub_45fa20(&arg1[0x17])
arg1[0x23] = &exfile::CDefineDataArray::`vftable'{for `IEXArrayReader'}
arg1[0x24] = 0
arg1[0x25] = 0
arg1[0x26] = 0
arg1[0x27] = 0
arg1[0x28] = arg3
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
