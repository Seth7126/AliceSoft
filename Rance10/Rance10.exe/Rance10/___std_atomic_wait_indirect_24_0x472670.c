// 函数: ___std_atomic_wait_indirect@24
// 地址: 0x472670
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72daf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_1c = nullptr
int32_t var_18 = 0
var_1c = sub_461920()
int32_t var_8_1 = 0
int32_t ebx
ebx.b = sub_4729b0(arg1, &var_1c)
sub_473810(arg1, &var_1c)
int32_t* ecx_2 = var_1c
void var_14
sub_473cd0(&var_1c, &var_14, *ecx_2, ecx_2)
sub_403160(var_1c, 1, 0x34)
int32_t result
result.b = ebx.b == 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
