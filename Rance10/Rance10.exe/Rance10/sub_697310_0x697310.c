// 函数: sub_697310
// 地址: 0x697310
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72bf8c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t eax_3 = GetCurrentThreadId()
var_14 = 0
sub_696ff0(&arg1[2], &var_14, eax_3, 5, 5)

if (var_14 == 0)
    (*(*arg1 + 8))(eax_2)
    var_14 = eax_3
    sub_696ff0(&arg1[2], &var_14, 3, 5, 5)
    
    if (var_14 == 2)
        int32_t eax_5 = __Mtx_lock(&arg1[0xd])
        
        if (eax_5 != 0)
            std::_Throw_C_error(eax_5)
        
        arg1[0x19].b = 1
        int32_t var_8_1 = 0
        __Mtx_unlock(&arg1[0xd])
        int32_t var_8_2 = 1
        __Cnd_broadcast(&arg1[3])
        int32_t var_8_3 = 0xffffffff

int32_t eax_7 = arg1[1]
arg1[1] -= 1
int32_t result = eax_7 - 1

if (eax_7 == 1)
    result = (*(*arg1 + 4))(eax_2)

fsbase->NtTib.ExceptionList = ExceptionList
return result
