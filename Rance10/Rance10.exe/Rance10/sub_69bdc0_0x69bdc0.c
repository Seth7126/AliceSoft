// 函数: sub_69bdc0
// 地址: 0x69bdc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7487f6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* var_20 = &arg1[5]
char var_1c = 0
int32_t eax_4 = __Mtx_lock(&arg1[5])

if (eax_4 != 0)
    std::_Throw_C_error(eax_4)

char var_1c_1 = 1
var_8_1.b = 1
void var_30
void arg_8
__ExceptionPtrCopy(&var_30, &arg_8)
sub_69bfa0(arg1, &var_20, arg2)
var_8_1.b = 2

if (var_1c_1 != 0)
    __Mtx_unlock(var_20)

int32_t var_8_2 = 0xffffffff
void* result = __ExceptionPtrDestroy(&arg_8)
fsbase->NtTib.ExceptionList = ExceptionList
return result
