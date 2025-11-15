// 函数: sub_632eb0
// 地址: 0x632eb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_745868
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_70 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_74 = arg1
void var_64
sub_6344b0(&var_64, &arg1[1], arg2, arg3)
int32_t var_8_1 = 0
void* result = sub_634580(&var_64)
void* result_1 = result

if (result_1 != 0)
    *(result_1 + 0x20) += 1

void* ecx_2 = *arg1

if (ecx_2 != 0)
    bool cond:0_1 = *(ecx_2 + 0x20) != 1
    result = *(ecx_2 + 0x20)
    *(ecx_2 + 0x20) -= 1
    
    if (not(cond:0_1))
        result = sub_62d070(*arg1, 0)

*arg1 = result_1
void* var_50
int32_t var_48

if (var_50 != 0)
    result = sub_403160(var_50, (var_48 - var_50) s>> 2, 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
