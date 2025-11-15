// 函数: sub_69ac20
// 地址: 0x69ac20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7485de
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char var_14 = 0
int32_t* var_18 = &arg1[5]
int32_t eax_4 = __Mtx_lock(&arg1[5])

if (eax_4 != 0)
    std::_Throw_C_error(eax_4)

char var_14_1 = 1
int32_t var_8_1 = 0

if (arg2 != 0 && arg1[0x1b].b != 0)
    sub_69b040()
    int32_t* var_1c = &data_7fd53c
    int32_t var_20
    int32_t* var_34_2 = &var_20
    var_20 = 2
    std::_Throw_future_error(var_34_2)
    noreturn

int32_t* var_38

if (Microsoft::WRL::operator!=<struct IRestrictedErrorInfo>(&arg1[3]) != 0)
    std::_Rethrow_future_exception(__ExceptionPtrCopy(&var_38, &arg1[3]))
    noreturn

arg1[0x1b].b = 1

if (*(arg1 + 0x76) == 0)
    int32_t eax_6 = *arg1
    int32_t** var_34_4 = &var_18
    *(arg1 + 0x76) = 1
    (*(eax_6 + 0x10))(var_34_4)

while (arg1[0x1c] == 0)
    int32_t* var_34_5 = var_18
    var_38 = &arg1[0x11]
    int32_t eax_7 = __Cnd_wait(var_38, var_34_5)
    
    if (eax_7 != 0)
        std::_Throw_C_error(eax_7)

if (Microsoft::WRL::operator!=<struct IRestrictedErrorInfo>(&arg1[3]) != 0)
    std::_Rethrow_future_exception(__ExceptionPtrCopy(&var_38, &arg1[3]))
    noreturn

int32_t var_8_2 = 1

if (var_14_1 != 0)
    __Mtx_unlock(var_18)

fsbase->NtTib.ExceptionList = ExceptionList
return &arg1[2]
