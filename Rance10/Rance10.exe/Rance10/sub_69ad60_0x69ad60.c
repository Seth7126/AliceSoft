// 函数: sub_69ad60
// 地址: 0x69ad60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747ffe
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char var_14 = 0
int32_t* var_18 = &arg1[5]
int32_t result = __Mtx_lock(&arg1[5])

if (result != 0)
    result = std::_Throw_C_error(result)

char var_14_1 = 1
int32_t var_8_1 = 0

if (*(arg1 + 0x76) == 0)
    int32_t eax_4 = *arg1
    *(arg1 + 0x76) = 1
    result = (*(eax_4 + 0x10))(&var_18)

while (arg1[0x1c] == 0)
    result = __Cnd_wait(&arg1[0x11], var_18)
    
    if (result != 0)
        result = std::_Throw_C_error(result)

int32_t var_8_2 = 1

if (var_14_1 != 0)
    result = __Mtx_unlock(var_18)

fsbase->NtTib.ExceptionList = ExceptionList
return result
