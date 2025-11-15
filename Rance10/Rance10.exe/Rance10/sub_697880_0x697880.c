// 函数: sub_697880
// 地址: 0x697880
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747ffe
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = &arg1[0xa]
int32_t eax_3 = __Mtx_lock(&arg1[0xa])

if (eax_3 != 0)
    std::_Throw_C_error(eax_3)

char var_14 = 1
int32_t var_8_1 = 0

while (arg1[0x19] s< 2)
    int32_t eax_4 = __Cnd_wait(arg1, &arg1[0xa])
    
    if (eax_4 != 0)
        std::_Throw_C_error(eax_4)

int32_t var_8_2 = 1
int32_t result = __Mtx_unlock(&arg1[0xa])
fsbase->NtTib.ExceptionList = ExceptionList
return result
