// 函数: sub_5f6c20
// 地址: 0x5f6c20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734898
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = arg2

if (esi s>= 0)
    if (esi s> (*(*arg3 + 8))(eax_2))
        esi = (*(*arg3 + 8))()
else
    esi = 0

int32_t eax_9 = (*(*arg3 + 0x4c))(esi)
char* result

if (eax_9.b != 0)
    result = sub_5f6460(eax_9, esi, arg3, arg4)
else
    char* result_1 = 0xf
    int32_t var_20_1 = 0
    char var_30 = eax_9.b
    sub_403490(&var_30, 0x76a8a0, 0x1c)
    int32_t var_8_1 = 0
    sub_6c52e0(&var_30)
    result = result_1
    
    if (result u>= 0x10)
        result = sub_403160(var_30.d, &result[1], 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
