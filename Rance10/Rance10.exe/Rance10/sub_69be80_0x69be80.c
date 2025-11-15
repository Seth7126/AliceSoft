// 函数: sub_69be80
// 地址: 0x69be80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74882e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char var_14 = 0
int32_t* var_18 = &arg1[5]
int32_t eax_4 = __Mtx_lock(&arg1[5])

if (eax_4 != 0)
    std::_Throw_C_error(eax_4)

char var_14_1 = 1
int32_t var_8_1 = 0

if (*(arg1 + 0x75) != 0)
    sub_69b040()
    int32_t* var_1c = &data_7fd53c
    int32_t var_20 = 3
    std::_Throw_future_error(&var_20)
    noreturn

char* eax_5
eax_5.b = *arg2
arg1[2].b = eax_5.b
int32_t result = (*(*arg1 + 0x14))(&var_18, 0)
int32_t var_8_2 = 1

if (var_14_1 != 0)
    result = __Mtx_unlock(var_18)

fsbase->NtTib.ExceptionList = ExceptionList
return result
