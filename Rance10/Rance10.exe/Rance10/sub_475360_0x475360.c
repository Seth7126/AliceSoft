// 函数: sub_475360
// 地址: 0x475360
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72df7f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct IEXTreeReader::exfile::CDefineDataTree::VTable** result_4 = sub_6e810c(0x38)
struct IEXTreeReader::exfile::CDefineDataTree::VTable** result_1 = result_4
int32_t var_8_1 = 0
struct IEXTreeReader::exfile::CDefineDataTree::VTable** result_5 = sub_474e90(result_4, arg2)
int32_t var_8_2 = 0xffffffff
result_1 = result_5
result_5[0xd] = arg1
sub_42ca30(arg1 + 0x20, &result_1)
void* var_4c
char* eax_3 = sub_462db0(&var_4c, arg2)
int32_t var_8_3 = 1
int32_t var_20 = 0xf
int32_t var_24 = 0
char var_34[0x10]
var_34[0] = 0
int32_t ecx_4 = sub_4056a0(&var_34, eax_3)
struct IEXTreeReader::exfile::CDefineDataTree::VTable** result = result_1
struct IEXTreeReader::exfile::CDefineDataTree::VTable** result_2 = result
var_8_3.b = 2
struct IEXTreeReader::exfile::CDefineDataTree::VTable** result_3 = result_1
char (* var_68)[0x10] = &var_34
void* var_54
sub_461c40(arg1 + 0x2c, &var_54, ecx_4)

if (var_20 u>= 0x10)
    sub_403160(var_34[0].d, var_20 + 1, 1)

int32_t var_20_1 = 0xf
int32_t var_24_1 = 0
var_34[0] = 0
int32_t var_38

if (var_38 u>= 0x10)
    sub_403160(var_4c, var_38 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
