// 函数: sub_63a120
// 地址: 0x63a120
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_745cb0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_8c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_8_1 = 0
var_8_1.b = 1
var_8_1.b = 0
struct sys43vm::CGlobalLoader::VTable* var_7c
int32_t ebx
ebx.b = sub_604990(sub_604800(&var_7c, data_7fcbb8 + 0x28), arg3, arg2, &var_2c)
sub_6048b0(&var_7c)

if (ebx.b != 0)
    char* edx = &var_2c
    
    if (var_18 u>= 0x10)
        edx = var_2c.d
    
    (*(*arg4 + 4))(edx)
    ebx.b = 1

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
